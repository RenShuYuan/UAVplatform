#include "uavposdataprocessing.h"
#include "uavmain.h"
#include "uavcore.h"
#include "uavprj.h"
#include "uavinquiredemvalue.h"

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
#include <QString>
#include <QColor>
#include <QStringList>

#include "proj_api.h"

uavPosDataProcessing::uavPosDataProcessing(QObject *parent)
	: QObject(parent)
{
	this->parent = parent;
}

uavPosDataProcessing::~uavPosDataProcessing()
{

}

void uavPosDataProcessing::setFieldsList( QList< QStringList >& list )
{
	if (list.isEmpty())
	{
		UavMain::instance()->messageBar()->pushMessage( "读取曝光点文件内容", 
			"读取字段失败, 运行已终止!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("读取曝光点文件内容 : \t读取字段失败, 运行已终止...");
		return;
	}
	mFieldsList = list;
}

void uavPosDataProcessing::autoPosFormat()
{
	QList<int> indexList;

	indexList << mSettings.value("/Uav/pos/fieldsList/cmb1", -1).toInt()
			  << mSettings.value("/Uav/pos/fieldsList/cmb2", -1).toInt()
			  << mSettings.value("/Uav/pos/fieldsList/cmb3", -1).toInt()
			  << mSettings.value("/Uav/pos/fieldsList/cmb4", -1).toInt()
			  << mSettings.value("/Uav/pos/fieldsList/cmb5", -1).toInt()
			  << mSettings.value("/Uav/pos/fieldsList/cmb6", -1).toInt()
			  << mSettings.value("/Uav/pos/fieldsList/cmb7", -1).toInt()
			  << mSettings.value("/Uav/pos/fieldsList/cmb8", -1).toInt();

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

	QgsMessageLog::logMessage("曝光点文件格式重构 : \t完成.");
}

bool uavPosDataProcessing::autoPosTransform()
{	
	// 创建目标投影
	if (!createTargetCrs())
	{
		return false;
	}

	// 创建转换关系
	QgsCoordinateTransform ct(mSourceCrs, mTargetCrs);
	if (!ct.isInitialised())
	{
		UavMain::instance()->messageBar()->pushMessage( "曝光点坐标转换", 
			"创建坐标转换关系失败, 运行已终止!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("曝光点坐标转换 : \t创建坐标转换关系失败, 运行已终止.");
		return false;
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
	QgsMessageLog::logMessage("曝光点坐标转换 : \t完成.");
	return true;
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
			QgsMessageLog::logMessage(QString("曝光点中央经度计算 : \t||--> 第%1行横坐标不可识别, 已跳过该行内容.").arg(i));
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
	layerProperties.append(QString( "field=id:integer&field=相片编号:string(50)"				// 添加字段
													"&field=曝光点坐标:string(30)"
													"&field=Omega:string(10)"
													"&field=Phi:string(10)"
													"&field=Kappa:string(10)"
													"&field=地面分辨率:string(10)&"));
	layerProperties.append(QString( "index=yes&" ));										// 创建索引
	layerProperties.append(QString( "memoryid=%1" ).arg( QUuid::createUuid().toString() ));	// 临时编码

	QString sketchMapName;
	sketchMapName = mSettings.value("/Uav/pos/lePosFile", "").toString();
	sketchMapName = QFileInfo(sketchMapName).baseName();
	if (sketchMapName.isEmpty())
		sketchMapName = "航飞略图";

	QgsVectorLayer* newLayer = new QgsVectorLayer( 
		layerProperties, sketchMapName, QString( "memory" ) );
	
	if (!newLayer->isValid())
	{
		UavMain::instance()->messageBar()->pushMessage( "创建航飞略图", 
			"创建略图失败, 运行已终止, 注意检查plugins文件夹!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("创建航飞略图 : \t创建略图失败, 程序已终止, 注意检查plugins文件夹。"));
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

	// 计算相片地面分辨率
	uavInquireDemValue dem(this);
	QList< QgsPoint > pointFirst;
	QList< qreal > elevations;

	foreach(QStringList list, mFieldsList)
	{
		// 取出字段内容
		QgsPoint point;
		point.setX(list.at(1).toDouble());
		point.setY(list.at(2).toDouble());
		pointFirst.append(point);
	}

	bool isbl = false;
	if ( uavInquireDemValue::eOK == dem.inquireElevations(pointFirst, elevations, &srs) )
	{
		isbl = true;
		if (mFieldsList.size() == elevations.size())
			isbl = true;
		else 
			isbl = false;
	}

	int index = 0;
	while (index != mFieldsList.size())
	{
		qreal elevation = 0.0;
		QStringList list = mFieldsList.at(index);
		if (isbl)
			elevation = elevations.at(index);
		else
			elevation = -9999;
		double resolution = calculateResolution(list.at(3).toDouble(), elevation);
		list.append(QString::number(resolution, 'f', 2));
		mFieldsList[index] = list;
		++index;
	}

	// 创建面要素
	int icount = 0;
	QgsFeatureList featureList;
	foreach(QStringList list, mFieldsList)
	{
		// 取出字段内容
		double x = list.at(1).toDouble();
		double y = list.at(2).toDouble();
		double resolution = list.at(list.size()-1).toDouble();
		double mRotate = list.at(6).toDouble();

		if (resolution == 0.0)
		{
			QgsMessageLog::logMessage(QString("\t\t||-->相片:%1 高程异常，地面分辨率计算为0，已跳过该张相片.").arg(list.at(0)));
			continue;
		}

		// 创建面要素, 并根据Omega选择角度
		QgsPolygon polygon = rectangle( QgsPoint(x, y), resolution );
		QgsGeometry* mGeometry = QgsGeometry::fromPolygon(polygon);
		mGeometry->rotate( mRotate, QgsPoint(x, y) );

		// 设置几何要素与属性
		QgsFeature MyFeature;
		MyFeature.setGeometry( mGeometry );
		MyFeature.setAttributes(QgsAttributes() << QVariant(++icount)
												<< QVariant(list.first())
												<< QVariant(QString(list.at(1)+","+list.at(2)))
												<< QVariant(list.at(4))
												<< QVariant(list.at(5))
												<< QVariant(list.at(6))
												<< QVariant(list.at(list.size()-1)));
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

	QgsMessageLog::logMessage(QString("创建航飞略图 : \t完成. 创建了%1张相片略图.").arg(newLayer->featureCount()));
	UavMain::instance()->mapCanvas()->freeze( false );
	UavMain::instance()->refreshMapCanvas();
	return newLayer;
}

bool uavPosDataProcessing::createTargetCrs()
{
	// 获得当前曝光点的参照坐标系
	QString myDefaultCrs = mSettings.value( "/Uav/pos/options/projectDefaultCrs", GEO_EPSG_CRS_AUTHID ).toString();
	mSourceCrs.createFromOgcWmsCrs( myDefaultCrs );

	// 验证源参照坐标系
	if (!mSourceCrs.isValid())
	{
		UavMain::instance()->messageBar()->pushMessage( "曝光点坐标转换", 
			"项目没有指定正确的参照坐标系, 运行已终止!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("曝光点坐标转换 : \t项目没有指定正确的参照坐标系, 运行已终止!");
		return false;
	}

	// 检查输入的是否是4种常用的地理坐标系
	if ( !( (mSourceCrs.authid() == "EPSG:4326") ||		// WGS84
		(mSourceCrs.authid() == "EPSG:4490") ) )		// CGCS2000
	{
		UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
			"项目指定了错误的参照坐标系, 目前仅支持WGS84、CGCS2000, 运行已终止!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("创建参照坐标系 : \t项目指定了错误的参照坐标系, 目前仅支持WGS84、CGCS2000, 运行已终止!");
		return false;
	}

	// 获得曝光点文件中的中央经线
	int cm = getCentralMeridian();

	// 检查经度是否在正常范围内
	if ( !((cm>74 && cm<136) || (cm>24 && cm<46) || (cm>12 && cm<24)) )
	{
		UavMain::instance()->messageBar()->pushMessage( "带号自动计算", 
			"曝光点文件中的经度并不在中国范围内, 运行已终止!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("带号自动计算 : \t曝光点文件中的经度 %1 并不在中国范围内, 运行已终止!").arg(cm));
		return false;
	}

	// 创建WKT格式投影坐标系
	QString wkt;
	QString strDescription;
	if (mSourceCrs.authid() == "EPSG:4326")
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
		UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
			QString("曝光点中央经线计算为%1, 创建投影参考坐标系失败, 运行已终止!").arg(cm), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t曝光点中央经线计算为%1, 创建投影参考坐标系失败, 运行已终止!").arg(cm));
		return false;
	}
	
	QgsMessageLog::logMessage(QString("创建参照坐标系 : \t曝光点中央经线计算为%1, 创建投影参考坐标系\"%2\"成功.").arg(cm).arg(mTargetCrs.description()));

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
			UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
				QString("向数据库中写入 %1 参考坐标系失败, 运行已终止!").arg(strDescription), 
				QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
			QgsMessageLog::logMessage(QString("创建参照坐标系 : \t向数据库中写入 %1 参考坐标系失败, 运行已终止!").arg(strDescription));
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

QgsPolygon uavPosDataProcessing::rectangle( const QgsPoint& point, const double& resolution )
{
	int weight = mSettings.value("/Uav/pos/options/leWidth", 0).toInt();
	int height = mSettings.value("/Uav/pos/options/leHeight", 0).toInt();
	double midx = (weight*resolution) / 2;
	double midy = (height*resolution) / 2;

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

	QString databaseFileName = QDir::currentPath() + "/Resources/srs.db";
	if ( !QFileInfo( databaseFileName ).exists() )
	{
		UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
			QString("没有找到srs.db, 运行已终止!"), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t没有找到srs.db, 运行已终止!"));
		return false;
	}

	// 检查数据库是否可用
	myResult = sqlite3_open_v2(databaseFileName.toUtf8().data(), &myDatabase, SQLITE_OPEN_READONLY, nullptr);
	if ( myResult )
	{
		QString errInfo = QString( "不能打开数据库: %1" ).arg( sqlite3_errmsg( myDatabase ) );
		UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
			QString("%1, 运行已终止!").arg(errInfo), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t%1, 运行已终止!").arg(errInfo));
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
		UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
			QString("查询系统数据库, 检索所需的投影信息失败, 运行已终止!"), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t查询系统数据库, 检索所需的投影信息失败, 运行已终止!"));
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
	QString databaseFileName = QDir::currentPath() + "/Resources/qgis.db";
	if ( !QFileInfo( databaseFileName ).exists() )
	{
		UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
			"没有找到qgis.db, 运行已终止!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t没有找到qgis.db, 运行已终止!"));
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
		UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
			QString("%1, 运行已终止!").arg(errInfo), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t%1, 运行已终止!").arg(errInfo));
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
		UavMain::instance()->messageBar()->pushMessage( "创建参照坐标系", 
			QString("查询系统数据库, 检索所需的投影信息失败, 运行已终止!"), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("创建参照坐标系 : \t查询系统数据库, 检索所需的投影信息失败, 运行已终止!"));
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

double uavPosDataProcessing::calculateResolution( const double &absoluteHeight, const double &groundHeight )
{
	double resolution = 0.0;
	double elevation = 0.0;
	double pixelSize = 0.0;
	double focal = 0.0;

	QString tmp;
	if (groundHeight == -9999)
		elevation = mSettings.value("/Uav/pos/options/leAverageEle", 0.0).toDouble();
	else
		elevation = groundHeight;

	pixelSize = mSettings.value("/Uav/pos/options/lePixelSize", 0.0).toDouble();
	focal = mSettings.value("/Uav/pos/options/leFocal", 0.0).toDouble();
	resolution = (absoluteHeight-elevation)*pixelSize/1000/focal;

	return resolution;
}

bool uavPosDataProcessing::posExport()
{
	if (mFieldsList.isEmpty())
	{
		UavMain::instance()->messageBar()->pushMessage( "导出曝光点文件", 
			"内存数组被破坏，未正确导出，请联系开发人员解决.", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("导出曝光点文件 : \t内存数组被破坏，未正确导出，请联系开发人员解决."));
		return false;
	}

	QString path = mSettings.value("/Uav/pos/lePosFile", "").toString();
	path.insert(path.size()-4, "out");
	QFile file(path);
	if (!file.open(QFile::WriteOnly | QFile::Text | QFile::Truncate))   //只写、文本、重写
	{
		UavMain::instance()->messageBar()->pushMessage( "导出曝光点文件", 
			QString("创建%1曝光点文件失败.").arg(QDir::toNativeSeparators(path)), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("导出曝光点文件 : \t创建%1曝光点文件失败.").arg(QDir::toNativeSeparators(path)));
		return false;
	}

	QTextStream out(&file);
	foreach (QStringList strList, mFieldsList)
	{
		QString strLine;
		for (int i=0; i<(strList.size()-2); ++i)
		{
			QString str = strList.at(i);
			strLine.append(str + ' ');
		}
		out << strLine + '\n';
	}

	file.close();
	UavMain::instance()->messageBar()->pushMessage( "导出曝光点文件", 
		QString("导出%1曝光点文件成功.").arg(QDir::toNativeSeparators(path)), 
		QgsMessageBar::SUCCESS, UavMain::instance()->messageTimeout() );
	QgsMessageLog::logMessage(QString("导出曝光点文件 : \t导出%1曝光点文件成功.").arg(QDir::toNativeSeparators(path)));
	return true;
}

const QStringList uavPosDataProcessing::checkPosSettings()
{
	QStringList errList;
	double tmpDouble = 0.0;
	int tmpInt = 0;
	
	tmpDouble = mSettings.value("/Uav/pos/options/leFocal", 0.0).toDouble();
	if (!tmpDouble)
		errList.append("相机焦距");
	tmpDouble = mSettings.value("/Uav/pos/options/lePixelSize", 0.0).toDouble();
	if (!tmpDouble)
		errList.append("相机大小");
	tmpInt = mSettings.value("/Uav/pos/options/leHeight", 0.0).toInt();
	if (!tmpInt)
		errList.append("相幅大小(长)");
	tmpInt = mSettings.value("/Uav/pos/options/leWidth", 0.0).toInt();
	if (!tmpInt)
		errList.append("相幅大小(宽)");

	return errList;
}
