#include "uavposdataprocessing.h"
#include "uavmain.h"
#include "uavcore.h"
#include "uavprj.h"

#include "qgssinglesymbolrendererv2.h"
#include "qgscategorizedsymbolrendererv2.h"
#include "qgscoordinatereferencesystem.h"
#include "qgsvectordataprovider.h"
#include "qgscoordinatetransform.h"
#include "qgsmessagelog.h"
#include "qgslayertreeview.h"
#include "qgsmaplayerregistry.h"
#include "qgsvectorlayer.h"
#include "qgsmapcanvas.h"
#include "qgsfeature.h"
#include "qgscrscache.h"
#include "sqlite3.h"

#include <QUuid>
#include <QList>
#include <QMap>
#include <QVariant>
#include <QSettings>
#include <QString>
#include <QColor>
#include <QStringList>

#include "proj_api.h"

uavPosDataProcessing::uavPosDataProcessing(QObject *parent)
	: QObject(parent)
{
	this->parent = parent;

	// 获得当前项目的参照坐标系
	mSourceCrs = UavMain::instance()->mapCanvas()->mapSettings().destinationCrs();

}

uavPosDataProcessing::~uavPosDataProcessing()
{

}

void uavPosDataProcessing::oneButtonOrganizePosFiles()
{
	QSettings mSettings;
	QgsMessageLog::logMessage("曝光文件一键处理 : \t开始...");

	if (mSettings.value("/Uav/pos/chkFormat", true).toBool())	// 格式整理
	{
		autoPosFormat();
	}
	if (mSettings.value("/Uav/pos/chkTransform", true).toBool()) // 坐标转换
	{
		autoPosTransform();
	}
	if (mSettings.value("/Uav/pos/chkSketchMap", true).toBool()) // 创建略图
	{
		autoSketchMap();
	}
}

void uavPosDataProcessing::setFieldsList( QList< QStringList >& list )
{
	if (list.isEmpty())
	{
		QgsMessageLog::logMessage("读取曝光点文件内容 : \t读取字段失败, 程序已终止...");
		return;
	}
	mFieldsList = list;
}

void uavPosDataProcessing::autoPosFormat()
{
	QSettings mSettings;
	QList<int> indexList;

	indexList << mSettings.value("/Uav/pos/fieldsList/cmb1", -1).toInt()
		<< mSettings.value("/Uav/pos/fieldsList/cmb2", -1).toInt()
		<< mSettings.value("/Uav/pos/fieldsList/cmb3", -1).toInt()
		<< mSettings.value("/Uav/pos/fieldsList/cmb4", -1).toInt()
		<< mSettings.value("/Uav/pos/fieldsList/cmb5", -1).toInt()
		<< mSettings.value("/Uav/pos/fieldsList/cmb6", -1).toInt()
		<< mSettings.value("/Uav/pos/fieldsList/cmb7", -1).toInt()
		<< mSettings.value("/Uav/pos/fieldsList/cmb8", -1).toInt()
		<< mSettings.value("/Uav/pos/fieldsList/cmb9", -1).toInt();

	// 按设置顺序重新排列字段
	for (int i=0; i<mFieldsList.size(); ++i)
	{
		QStringList newOutLineFields;
		QStringList outLineFields = mFieldsList.at(i);
		foreach (int j, indexList)
		{
			if (j != -1)
			{
				if (j)
					newOutLineFields.append(outLineFields.at(j-1));
				else
					newOutLineFields.append(QString::null);
			}
		}
		mFieldsList[i] = newOutLineFields;
	}

	QgsMessageLog::logMessage("曝光点文件格式重构 : \tOK...");
}

void uavPosDataProcessing::autoPosTransform()
{	
	// 验证参照坐标系
	if (!mSourceCrs.isValid())
	{
		QgsMessageLog::logMessage("曝光点坐标转换 : \t项目没有指定正确的参照坐标系, 程序已终止...");
		return;
	}

	// 创建目标投影
	if (!createTargetCrs())
	{
		return;
	}

	// 创建转换关系
	QgsCoordinateTransform ct(mSourceCrs, mTargetCrs);
	if (!ct.isInitialised())
	{
		QgsMessageLog::logMessage("曝光点坐标转换 : \t创建坐标转换关系失败, 程序已终止...");
		return;
	}

	// 开始转换
	for (int i=0; i<mFieldsList.size(); ++i)
	{
		QStringList list = mFieldsList.at(i);
		QgsPoint p = ct.transform(list.at(1).toDouble(), list.at(2).toDouble());
		list[1] = QString::number(p.x(), 'f');
		list[2] = QString::number(p.y(), 'f');
		mFieldsList[i] = list;
	}
	QgsMessageLog::logMessage("曝光点坐标转换 : \tOK...");
}

int uavPosDataProcessing::getCentralMeridian()
{
	QMap< QString, int > cmMap;

	for (int i=0; i<mFieldsList.size(); ++i)
	{
		bool isok = false;
		QStringList list = mFieldsList.at(i);
		QString str_x = list.at(1);
		double x = str_x.toDouble(&isok);
		if (!isok)
		{
			QgsMessageLog::logMessage(QString("曝光点中央经度计算 : \t--> 第%1行横坐标不可识别, 已删除该行内容.").arg(i));
			mFieldsList.removeAt(i);
		}

		// 计算中央经线
		int cm = uavPrj::getCentralmeridian3(x);

		// 统计相同中央经线出现次数
		if (cmMap.contains(QString::number(cm)))
		{
			int count = cmMap[QString::number(cm)];
			cmMap[QString::number(cm)] = count + 1;
		}
		else
		{
			cmMap[QString::number(cm)] = 1;
		}
	}

	// 返回出现次数最多的中央经线
	QMap< QString, int >::iterator it = cmMap.begin();
	QString strCm;
	int count=0;
	while (it!=cmMap.end())
	{
		if (it.value() > count)
		{
			strCm = it.key();
		}
		++it;
	}

	return strCm.toInt();
}

QgsVectorLayer* uavPosDataProcessing::autoSketchMap()
{
	UavMain::instance()->mapCanvas()->freeze();

	emit startProcess();

	QString layerProperties = "Polygon?";													// 几何类型
	layerProperties.append(QString( "field=id:integer&field=name:string(50)&" ));			// 添加字段
	layerProperties.append(QString( "index=yes&" ));										// 创建索引
	layerProperties.append(QString( "memoryid=%1" ).arg( QUuid::createUuid().toString() ));	// 临时编码

	QgsVectorLayer* newLayer = new QgsVectorLayer( 
		layerProperties, QString( "航飞略图" ), QString( "memory" ) );
	
	if (!newLayer->isValid())
	{
		QgsMessageLog::logMessage(QString("创建航飞略图 : \t创建略图失败, 程序已终止..."));
		return nullptr;
	}

	// 设置图层参照坐标系
	QgsCoordinateReferenceSystem srs( mTargetCrs.srsid(), QgsCoordinateReferenceSystem::InternalCrsId );
	newLayer->setCrs(srs);

	// 将地图画布设置为与图层同样的参照坐标系
	UavMain::instance()->mapCanvas()->setDestinationCrs(srs);

	// 添加到地图
	QgsMapLayerRegistry::instance()->addMapLayer(newLayer);

	QgsVectorDataProvider* dateProvider = newLayer->dataProvider();

	// 创建面要素
	int icount = 0;
	QgsFeatureList featureList;
	QSettings mSettings;
	foreach(QStringList list, mFieldsList)
	{
		// 取出字段内容
		double x = list.at(1).toDouble();
		double y = list.at(2).toDouble();
		double h = list.at(7).toDouble();
		double mRotate = list.at(4).toDouble();

		// 创建面要素, 并根据Omega选择角度
		QgsPolygon polygon = rectangle( QgsPoint(x, y), h );
		QgsGeometry* mGeometry = QgsGeometry::fromPolygon(polygon);
		mGeometry->rotate( mRotate, QgsPoint(x, y) );

		// 设置几何要素与属性
		QgsFeature MyFeature;
		MyFeature.setGeometry( mGeometry );
		MyFeature.setAttributes(QgsAttributes() << QVariant(++icount) << QVariant(list.first()));
		featureList.append(MyFeature);
	}

	// 开始编辑
	newLayer->startEditing();

	// 添加要素集到图层中
	dateProvider->addFeatures(featureList);

	// 保存
	newLayer->commitChanges();

	// 更新范围
	newLayer->updateExtents();

	// 初始化符号
	// 获得缺省的符号
	QgsSymbolV2* newSymbolV2 = QgsSymbolV2::defaultSymbol(newLayer->geometryType());
	// 设置透明度与颜色
	newSymbolV2->setAlpha(0.5);
	newSymbolV2->setColor(Qt::gray);
	QgsSingleSymbolRendererV2* singleRenderer = new QgsSingleSymbolRendererV2(newSymbolV2);
	newLayer->setRendererV2(singleRenderer);

	emit stopProcess();

	QgsMessageLog::logMessage(QString("创建航飞略图 : \tOK...\n\t\t创建了%1张相片略图.").arg(newLayer->featureCount()));
	UavMain::instance()->mapCanvas()->freeze( false );
	UavMain::instance()->refreshMapCanvas();
	return newLayer;
}

bool uavPosDataProcessing::createTargetCrs()
{
	// 检查输入的是否是4中常用的地理坐标系
	if ( !( (mSourceCrs.authid() == "EPSG:4214") ||	// 北京54
		(mSourceCrs.authid() == "EPSG:4610") ||		// 西安80
		(mSourceCrs.authid() == "EPSG:4326") ||		// WGS84
		(mSourceCrs.authid() == "EPSG:4490") ) )	// CGCS2000
	{
		QgsMessageLog::logMessage("创建参照坐标系 : \t项目指定的不是正确的常用（北京54、西安80、WGS84、CGCS2000）参照坐标系之一, 程序已终止...");
		return false;
	}

	// 获得曝光点文件中的中央经线
	int cm = getCentralMeridian();

	// 检查精度是否在正常范围内
	if ( !((cm>74 && cm<136) || (cm>24 && cm<46) || (cm>12 && cm<24)) )
	{
		QgsMessageLog::logMessage("创建参照坐标系 : \t曝光点文件中的经度并不在中国范围内, 程序已终止...");
		return false;
	}

	// 创建WKT格式投影坐标系
	QString wkt;
	QString strDescription;
	if (mSourceCrs.authid() == "EPSG:4214")
	{
		wkt = uavPrj::createProj4Beijing1954Gcs(cm);

		//不加带号
		if (cm>74 && cm<136)
			strDescription = QString("Beijing 1954 / Gauss-Kruger CM %1E").arg(cm);
		//加带号
		if (cm>12 && cm<46)
			strDescription = QString("Beijing 1954 / Gauss-Kruger zone %1").arg(cm);
	}
	else if (mSourceCrs.authid() == "EPSG:4610")
	{
		wkt = uavPrj::createProj4Xian1980Gcs(cm);

		//不加带号
		if (cm>74 && cm<136)
			strDescription = QString("Xian 1980 / Gauss-Kruger CM %1E").arg(cm);
		//加带号
		if (cm>12 && cm<46)
			strDescription = QString("Xian 1980 / Gauss-Kruger zone %1").arg(cm);
	}
	else if (mSourceCrs.authid() == "EPSG:4326")
	{
		wkt = uavPrj::createProj4Wgs84Gcs(cm);

		//不加带号
		if (cm>74 && cm<136)
			strDescription = QString("WGS 84 / Gauss-Kruger CM %1E").arg(cm);
		//加带号
		if (cm>12 && cm<46)
			strDescription = QString("WGS 84 / Gauss-Kruger zone %1").arg(cm);
	}
	else if (mSourceCrs.authid() == "EPSG:4490")
	{
		wkt = uavPrj::createProj4Cgcs2000Gcs(cm);

		//不加带号
		if (cm>74 && cm<136)
			strDescription = QString("CGCS2000 / Gauss-Kruger CM %1E").arg(cm);
		//加带号
		if (cm>12 && cm<46)
			strDescription = QString("CGCS2000 / Gauss-Kruger zone %1").arg(cm);
	}

	mTargetCrs.createFromProj4(wkt);
	
	if ( !mTargetCrs.isValid() )
	{
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t曝光点中央经线计算为%1, 创建投影参考坐标系失败, 程序已终止...").arg(cm));
		return false;
	}
	
	QgsMessageLog::logMessage(QString("创建参照坐标系 : \t曝光点中央经线计算为%1, 创建投影参考坐标系成功.").arg(cm));

	// 填充参照坐标系名称列表
	if (descriptionList.isEmpty())
	{
		if (!descriptionForDb(descriptionList))
			return false;
	}
	if (descriptionUserList.isEmpty())
	{
		if (!descriptionForUserDb(descriptionUserList))
			return false;
	}
	
	// 如果数据库中没有这个参照坐标系，则写入
	if (descriptionList.contains(strDescription) || descriptionUserList.contains(strDescription))
		return true;
	else
	{
		long return_id = mTargetCrs.saveAsUserCRS( strDescription );
		if (!(return_id == -1))
		{
			descriptionUserList.clear();
			if (!descriptionForUserDb(descriptionUserList))
				return false;
		}
		else
		{
			QgsMessageLog::logMessage(QString("创建参照坐标系 : \t向数据库中写入 %1 参考坐标系失败, 程序已终止...").arg(strDescription));
			return false;
		}
	}

	return true;
}

QgsCoordinateReferenceSystem& uavPosDataProcessing::sourceCrs()
{
	return mSourceCrs;
}

QgsCoordinateReferenceSystem& uavPosDataProcessing::targetCrs()
{
	return mTargetCrs;
}

QgsPolygon uavPosDataProcessing::rectangle( const QgsPoint& point, const double& h )
{
	// 地面分辨率
	double gsd = 0.2;

	// 
	double midx = (3840*gsd) / 2;
	double midy = (5760*gsd) / 2;

	QgsPolyline polyline;
	QgsPolygon polyon;
	polyline << QgsPoint( point.x()-midx, point.y()+midy )
		     << QgsPoint( point.x()+midx, point.y()+midy )
		     << QgsPoint( point.x()+midx, point.y()-midy )
		     << QgsPoint( point.x()-midx, point.y()-midy );
	polyon << polyline;

	return polyon;
}

bool uavPosDataProcessing::descriptionForDb( QStringList &list )
{
	sqlite3      *myDatabase;
	const char   *myTail;
	sqlite3_stmt *myPreparedStatement;
	int           myResult;

	QString databaseFileName = QgsApplication::srsDbFilePath();
	if ( !QFileInfo( databaseFileName ).exists() )
	{
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t没有找到srs.db, 程序已终止..."));
		return false;
	}

	// 检查数据库是否可用
	myResult = sqlite3_open_v2(databaseFileName.toUtf8().data(), &myDatabase, SQLITE_OPEN_READONLY, nullptr);
	if ( myResult )
	{
		QString errInfo = QString( "不能打开数据库: %1" ).arg( sqlite3_errmsg( myDatabase ) );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t%1, 程序已终止...").arg(errInfo));
		return false;
	}

	// 设置查询检索列表所需的投影信息
	QString mySql = "select description, srs_id, upper(auth_name||':'||auth_id), is_geo, name, parameters, deprecated from vw_srs where 1 order by name,description";
	myResult = sqlite3_prepare( myDatabase, mySql.toUtf8(), mySql.toUtf8().length(), &myPreparedStatement, &myTail );

	if ( myResult == SQLITE_OK )
	{
		while ( sqlite3_step( myPreparedStatement ) == SQLITE_ROW )
		{
			QString strDescription = ( const char * )sqlite3_column_text( myPreparedStatement, 0 );
			
			list.append(strDescription);
		}
	}
	else
	{
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t查询系统数据库, 检索所需的投影信息失败, 程序已终止..."));
		sqlite3_finalize( myPreparedStatement );
		sqlite3_close( myDatabase );
		return false;
	}

	sqlite3_finalize( myPreparedStatement );
	sqlite3_close( myDatabase );
	return true;
}

bool uavPosDataProcessing::descriptionForUserDb( QStringList &list )
{
	QString databaseFileName = QgsApplication::qgisUserDbFilePath();
	if ( !QFileInfo( databaseFileName ).exists() )
	{
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t没有找到qgis.db, 程序已终止..."));
		return false;
	}

	sqlite3      *database;
	const char   *tail;
	sqlite3_stmt *stmt;
	// 检查数据库是否可用
	int result = sqlite3_open_v2( databaseFileName.toUtf8().constData(), &database, SQLITE_OPEN_READONLY, nullptr );
	if ( result )
	{
		QString errInfo = QString( "不能打开数据库: %1" ).arg( sqlite3_errmsg( database ) );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t%1, 程序已终止...").arg(errInfo));
		return false;
	}

	// 设置查询以检索来填充列表所需的投影信息
	QString sql = QString( "select description, srs_id from vw_srs where 1" );

	result = sqlite3_prepare( database, sql.toUtf8(), sql.toUtf8().length(), &stmt, &tail );

	if ( result == SQLITE_OK )
	{
		while ( sqlite3_step( stmt ) == SQLITE_ROW )
		{
			QString strDescription = ( const char * )sqlite3_column_text( stmt, 0 );
			list.append(strDescription);
		}
	}
	else
	{
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t查询系统数据库, 检索所需的投影信息失败, 程序已终止..."));
		sqlite3_finalize( stmt );
		sqlite3_close( database );
		return false;
	}

	sqlite3_finalize( stmt );
	sqlite3_close( database );
	return true;
}

bool uavPosDataProcessing::isValid()
{
	return !mFieldsList.isEmpty();
}

QList< QStringList >* uavPosDataProcessing::fieldsList()
{
	return &mFieldsList;
}
