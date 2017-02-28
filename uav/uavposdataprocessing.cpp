#include "uavposdataprocessing.h"
#include "uavmain.h"
#include "uavcore.h"
#include "uavprj.h"
#include "uavinquiredemvalue.h"

#include "app/delimitedtext/qgsdelimitedtextfile.h"
#include "app/delimitedtext/qgsdelimitedtextprovider.h"
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

QRegExp uavPosDataProcessing::WktPrefixRegexp( "^\\s*(?:\\d+\\s+|SRID\\=\\d+\\;)", Qt::CaseInsensitive );
QRegExp uavPosDataProcessing::CrdDmsRegexp( "^\\s*(?:([-+nsew])\\s*)?(\\d{1,3})(?:[^0-9.]+([0-5]?\\d))?[^0-9.]+([0-5]?\\d(?:\\.\\d+)?)[^0-9.]*([-+nsew])?\\s*$", Qt::CaseInsensitive );

uavPosDataProcessing::uavPosDataProcessing(QObject *parent)
	: QObject(parent)
	, mFile( nullptr )
	, mXyDms( false )
	, mMaxInvalidLines(50)
	, mNExtraInvalidLines(0)
{
	this->parent = parent;
}

uavPosDataProcessing::~uavPosDataProcessing()
{
	if ( mFile )
	{
		delete mFile;
		mFile = nullptr;
	}
}

void uavPosDataProcessing::readFieldsList( QString& strUrl )
{
	QUrl url = QUrl::fromEncoded( strUrl.toAscii() );
	mFile = new QgsDelimitedTextFile();
	mFile->setFromUrl( url );

	if ( ! mFile->isValid() )
	{
			UavMain::instance()->messageBar()->pushMessage( "读取曝光点文件内容", 
				"读取字段失败, 运行已终止!", 
				QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
			QgsMessageLog::logMessage("读取曝光点文件内容 : \t读取字段失败, 运行已终止...");
			return;
	}

	mFieldsList.clear();
	QString mNoFieldName, mXFieldName, mYFieldName, mZFieldName,
			mOmegaFieldName, mPhiFieldName, mKappaFieldName, mPphotoMarkFieldName;
	if ( url.hasQueryItem( "noField" ) )
	{
		mFieldsList["noField"] = QStringList();
		mNoFieldName = url.queryItemValue( "noField" );
	}
	if ( url.hasQueryItem( "xField" ) )
	{
		mFieldsList["xField"] = QStringList();
		mXFieldName = url.queryItemValue( "xField" );
	}
	if ( url.hasQueryItem( "yField" ) )
	{
		mFieldsList["yField"] = QStringList();
		mYFieldName = url.queryItemValue( "yField" );
	}
	if ( url.hasQueryItem( "zField" ) )
	{
		mFieldsList["zField"] = QStringList();
		mZFieldName = url.queryItemValue( "zField" );
	}
	if ( url.hasQueryItem( "omegaField" ) )
	{
		mFieldsList["omegaField"] = QStringList();
		mOmegaFieldName = url.queryItemValue( "omegaField" );
	}
	if ( url.hasQueryItem( "phiField" ) )
	{
		mFieldsList["phiField"] = QStringList();
		mPhiFieldName = url.queryItemValue( "phiField" );
	}
	if ( url.hasQueryItem( "kappaField" ) )
	{
		mFieldsList["kappaField"] = QStringList();
		mKappaFieldName = url.queryItemValue( "kappaField" );
	}
	if ( url.hasQueryItem( "photoMarkField" ) )
	{
		mFieldsList["photoMarkField"] = QStringList();
		mPphotoMarkFieldName = url.queryItemValue( "photoMarkField" );
	}

	if (mFieldsList.isEmpty())
	{
		UavMain::instance()->messageBar()->pushMessage( "读取曝光点文件内容", 
			"读取字段失败, 曝光点文件字段解析失败, 运行已终止!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("读取曝光点文件内容 : \t读取字段失败, 曝光点文件字段解析失败, 运行已终止...");
		return;
	}

	if ( url.hasQueryItem( "xyDms" ) )
	{
		mXyDms = ! url.queryItemValue( "xyDms" ).toLower().startsWith( 'n' );
	}

	QStringList parts;
	long nEmptyRecords = 0;

	int maxField = 0;
	QgsDelimitedTextFile::Status status = mFile->nextRecord( parts );
	if ( status == QgsDelimitedTextFile::RecordOk )
	{
		maxField = parts.size();
	}
	mFile->reset();

	while ( true )
	{
		QgsDelimitedTextFile::Status status = mFile->nextRecord( parts );
		if ( status == QgsDelimitedTextFile::RecordEOF ) break;
		if ( status != QgsDelimitedTextFile::RecordOk )
		{
			recordInvalidLine( "\t**-->第%1行记录格式无效" );
			continue;
		}
		if (parts.size() != maxField)
		{
			recordInvalidLine( "\t**-->第%1行记录缺少字段" );
			continue;
		}
		// 跳过空记录
		if ( recordIsEmpty( parts ) )
		{
			continue;
		}

		// 获得字段内容
		bool isbl = true;
		bool isXField = false;
		bool isYField = false;
		QMap<QString, QString> tmp;
		QMap< QString, QStringList >::iterator it = mFieldsList.begin();
		while (it != mFieldsList.end())
		{
			int mFieldIndex = 0;
			if (it.key() == "noField") mFieldIndex = mFile->fieldIndex( mNoFieldName );
			else if (it.key() == "xField")
			{
				isXField = true;
				mFieldIndex = mFile->fieldIndex( mXFieldName );
			}
			else if (it.key() == "yField")
			{
				isYField = true;
				mFieldIndex = mFile->fieldIndex( mYFieldName );
			}
			else if (it.key() == "zField") mFieldIndex = mFile->fieldIndex( mZFieldName );
			else if (it.key() == "omegaField") mFieldIndex = mFile->fieldIndex( mOmegaFieldName );
			else if (it.key() == "phiField") mFieldIndex = mFile->fieldIndex( mPhiFieldName );
			else if (it.key() == "kappaField") mFieldIndex = mFile->fieldIndex( mKappaFieldName );
			else if (it.key() == "photoMarkField") mFieldIndex = mFile->fieldIndex( mPphotoMarkFieldName );
			
			QString field = mFieldIndex < parts.size() ? parts[mFieldIndex] : QString();
			
			if ( (it.key() == "xField") || (it.key() == "yField") )
			{
				bool ok = dFromDms( field, mXyDms );
				if (!ok)
				{
					isbl = false;
					recordInvalidLine( "\t**-->第%1行记录的x或y字段是无效的地理坐标格式" );
				}
			}

			tmp[it.key()] = field;
			++it;
		}
		if (!isXField || !isYField)
		{
			isbl = false;
			recordInvalidLine( "\t**-->第%1行记录缺少x或y坐标" );
		}

		it = mFieldsList.begin();
		while (it != mFieldsList.end())
		{
			QMap<QString, QString>::iterator itSub = tmp.find(it.key());
			if ( itSub == tmp.end() )
			{
				isbl = false;
				recordInvalidLine( "\t**-->第%1行记录缺少" + it.key() + "字段" );
			}
			++it;
		}

		if (isbl)
		{
			QMap<QString, QString>::iterator it = tmp.begin();
			while (it != tmp.end())
			{
				QMap< QString, QStringList >::iterator itSub = mFieldsList.find(it.key());
				if (itSub != mFieldsList.end())
				{
					QStringList *list = &(itSub.value());
					list->append(it.value());
				}
				++it;
			}
		}
	}
	reportErrors(QStringList()<<"曝光点文件处理");
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
	QMap< QString, QStringList >::iterator it_x = mFieldsList.find("xField");
	QMap< QString, QStringList >::iterator it_y = mFieldsList.find("yField");
	QStringList xList = it_x.value();
	QStringList yList = it_y.value();
	if (xList.size() != yList.size())
	{
		UavMain::instance()->messageBar()->pushMessage( "曝光点坐标转换", 
			"横坐标与纵坐标数量不一致，无法进行下一步转换, 运行已终止!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("曝光点坐标转换 : \t横坐标与纵坐标数量不一致，无法进行下一步转换, 运行已终止.");
		return false;
	}

	for (int i=0; i<xList.size(); ++i)
	{
		QgsPoint p = ct.transform(xList.at(i).toDouble(), yList.at(i).toDouble());
		xList[i] = QString::number(p.x(), 'f');
		yList[i] = QString::number(p.y(), 'f');
	}
	mFieldsList["xField"] = xList;
	mFieldsList["yField"] = yList;

	QgsMessageLog::logMessage("曝光点坐标转换 : \t完成.");
	return true;
}

int uavPosDataProcessing::getCentralMeridian()
{
	QMap< QString, int > cmMap;

	QMap< QString, QStringList >::iterator it_x = mFieldsList.find("xField");
	QStringList* xList = &(it_x.value());

	for (int i=0; i<xList->size(); ++i)
	{
		bool isok = false;
		QString str_x = xList->at(i);
		double x = str_x.toDouble(&isok);
		if (!isok)
		{
			QgsMessageLog::logMessage(QString("曝光点中央经度计算 : \t||--> 第%1行横坐标不可识别, 请注意检查该行内容.").arg(i));
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

	QMap< QString, QStringList >::iterator it_n = mFieldsList.find("noField");
	QMap< QString, QStringList >::iterator it_x = mFieldsList.find("xField");
	QMap< QString, QStringList >::iterator it_y = mFieldsList.find("yField");
	QMap< QString, QStringList >::iterator it_z = mFieldsList.find("zField");
	QMap< QString, QStringList >::iterator it_o = mFieldsList.find("omegaField");
	QMap< QString, QStringList >::iterator it_p = mFieldsList.find("phiField");
	QMap< QString, QStringList >::iterator it_k = mFieldsList.find("kappaField");
	QStringList* nList = &(it_n.value());
	QStringList* xList = &(it_x.value());
	QStringList* yList = &(it_y.value());
	QStringList* zList = &(it_z.value());
	QStringList* oList = &(it_o.value());
	QStringList* pList = &(it_p.value());
	QStringList* kList = &(it_k.value());

	// 计算相片地面分辨率
	uavInquireDemValue dem(this);
	QList< QgsPoint > pointFirst;
	QList< qreal > elevations;
	QStringList resolutionList;
	bool isbl = false;

	for(int i = 0; i < xList->size(); ++i)
	{
		// 取出字段内容
		QgsPoint point;
		point.setX(xList->at(i).toDouble());
		point.setY(yList->at(i).toDouble());
		pointFirst.append(point);
	}

	// 计算曝光点坐标对应的DEM高程
	if ( uavInquireDemValue::eOK == dem.inquireElevations(pointFirst, elevations, &srs) )
	{
		isbl = true;
		if (xList->size() == elevations.size())
			isbl = true;
		else 
			isbl = false;
	}

	// 利用DEM高程计算地面分辨率
	for (int i = 0; i < zList->size(); ++i)
	{
		qreal elevation = 0.0;
		if (isbl)
			elevation = elevations.at(i);
		else
			elevation = -9999;
		double resolution = calculateResolution(zList->at(i).toDouble(), elevation);
		resolutionList.append(QString::number(resolution, 'f', 2));
	}

	// 创建面要素
	int icount = 0;
	QgsFeatureList featureList;
	for (int i = 0; i < xList->size(); ++i)
	{
		// 取出字段内容
		double resolution = resolutionList.at(i).toDouble();
		double mRotate = kList->at(i).toDouble();

		if (resolution == 0.0)
		{
			QgsMessageLog::logMessage(QString("\t\t||-->相片:%1 高程异常，地面分辨率计算为0，已跳过该张相片.").arg(nList->at(i)));
			continue;
		}

		// 创建面要素, 并根据Omega选择角度
		QgsPolygon polygon = rectangle( pointFirst.at(i), resolution );
		QgsGeometry* mGeometry = QgsGeometry::fromPolygon(polygon);
		mGeometry->rotate( mRotate, pointFirst.at(i) );

		// 设置几何要素与属性
		QgsFeature MyFeature;
		MyFeature.setGeometry( mGeometry );
		MyFeature.setAttributes(QgsAttributes() << QVariant(++icount)
												<< QVariant(nList->at(i))
												<< QVariant(QString(xList->at(i)+","+yList->at(i)))
												<< QVariant(oList->at(i))
												<< QVariant(pList->at(i))
												<< QVariant(kList->at(i))
												<< QVariant(resolutionList.at(i)));
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
	double cm = getCentralMeridian();

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

QStringList* uavPosDataProcessing::noList()
{
	QMap< QString, QStringList >::iterator it_no = mFieldsList.find("noField");
	if (it_no != mFieldsList.end())
		return &(it_no.value());
	else
		return nullptr;
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
			"内存结构被破坏，未正确导出，请联系开发人员解决.", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("导出曝光点文件 : \t内存结构被破坏，未正确导出，请联系开发人员解决."));
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

	QMap< QString, QStringList >::iterator it_no = mFieldsList.find("noField");
	QMap< QString, QStringList >::iterator it_x = mFieldsList.find("xField");
	QMap< QString, QStringList >::iterator it_y = mFieldsList.find("yField");
	QMap< QString, QStringList >::iterator it_z = mFieldsList.find("zField");
	QMap< QString, QStringList >::iterator it_omega = mFieldsList.find("omegaField");
	QMap< QString, QStringList >::iterator it_phi = mFieldsList.find("phiField");
	QMap< QString, QStringList >::iterator it_kappa = mFieldsList.find("kappaField");
	QMap< QString, QStringList >::iterator it_photoMark = mFieldsList.find("photoMarkField");

	QList< QStringList* > outList;
	if (it_no != mFieldsList.end()) outList << &(it_no.value());
	if (it_x != mFieldsList.end()) outList << &(it_x.value());
	if (it_y != mFieldsList.end()) outList << &(it_y.value());
	if (it_z != mFieldsList.end()) outList << &(it_z.value());
	if (it_omega != mFieldsList.end()) outList << &(it_omega.value());
	if (it_phi != mFieldsList.end()) outList << &(it_phi.value());
	if (it_kappa != mFieldsList.end()) outList << &(it_kappa.value());
	if (it_photoMark != mFieldsList.end()) outList << &(it_photoMark.value());

	int maxCount = 0;
	foreach (QStringList* list, outList)
	{
		maxCount = list->size() > maxCount ? list->size() : maxCount;
	}

	for (int i=0; i<maxCount; ++i)
	{
		QString strLine;
		foreach (QStringList* list, outList)
		{
			QString str = list->at(i);
			strLine.append(str + '\t');
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

void uavPosDataProcessing::recordInvalidLine( const QString& message )
{
	if ( mInvalidLines.size() < mMaxInvalidLines )
	{
		mInvalidLines.append( message.arg( mFile->recordId() ) );
	}
	else
	{
		mNExtraInvalidLines++;
	}
}

bool uavPosDataProcessing::recordIsEmpty( QStringList &record )
{
	foreach ( const QString& s, record )
	{
		if ( ! s.isEmpty() ) return false;
	}
	return true;
}

bool uavPosDataProcessing::dFromDms( QString &sDms, bool xyDms )
{
	bool Ok;
	double xy = 0;
	
	if ( xyDms )
	{
		xy = this->dmsStringToDouble( sDms, &Ok );

		if (Ok)
		{
			sDms = QString::number(xy, 'f', 9);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		xy = sDms.toDouble(&Ok);
		if (Ok)
			return true;
	}

	return false;
}

double uavPosDataProcessing::dmsStringToDouble( const QString &sX, bool *xOk )
{
	static QString negative( "swSW-" );
	QRegExp re( CrdDmsRegexp );
	double x = 0.0;

	*xOk = re.indexIn( sX ) == 0;
	if ( ! *xOk ) return 0.0;
	QString dms1 = re.capturedTexts().at( 2 );
	QString dms2 = re.capturedTexts().at( 3 );
	QString dms3 = re.capturedTexts().at( 4 );
	x = dms3.toDouble( xOk );
	// Allow for Degrees/minutes format as well as DMS
	if ( ! dms2.isEmpty() )
	{
		x = dms2.toInt( xOk ) + x / 60.0;
	}
	x = dms1.toInt( xOk ) + x / 60.0;
	QString sign1 = re.capturedTexts().at( 1 );
	QString sign2 = re.capturedTexts().at( 5 );

	if ( sign1.isEmpty() )
	{
		if ( ! sign2.isEmpty() && negative.contains( sign2 ) ) x = -x;
	}
	else if ( sign2.isEmpty() )
	{
		if ( ! sign1.isEmpty() && negative.contains( sign1 ) ) x = -x;
	}
	else
	{
		*xOk = false;
	}
	return x;
}

void uavPosDataProcessing::clearInvalidLines()
{
	mInvalidLines.clear();
	mNExtraInvalidLines = 0;
}

void uavPosDataProcessing::reportErrors( const QStringList& messages /*= QStringList()*/, bool showDialog /*= false */ )
{
	if ( !mInvalidLines.isEmpty() && !messages.isEmpty() )
	{
		QString tag( "曝光点处理" );
		QgsMessageLog::logMessage( QString("错误文件 %1").arg( mFile->fileName() ), tag );
		foreach ( const QString& message, messages )
		{
			QgsMessageLog::logMessage( message, tag );
		}
		if ( ! mInvalidLines.isEmpty() )
		{
			QgsMessageLog::logMessage( "由于错误，以下行未加载到略图中:", tag );
			for ( int i = 0; i < mInvalidLines.size(); ++i )
				QgsMessageLog::logMessage( mInvalidLines.at( i ), tag );
			if ( mNExtraInvalidLines > 0 )
				QgsMessageLog::logMessage( QString( "文件中还有%1个其他错误" ).arg( mNExtraInvalidLines ), tag );
		}

		// We no longer need these lines.
		clearInvalidLines();
	}
}

void uavPosDataProcessing::deletePosRecord( const QString No )
{
	if (No.isEmpty())
	{
		return;
	}

	if (mFieldsList.isEmpty())
	{
		UavMain::instance()->messageBar()->pushMessage( "导出曝光点文件", 
			"内存结构被破坏，未正确导出，请联系开发人员解决.", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("导出曝光点文件 : \t内存结构被破坏，未正确导出，请联系开发人员解决."));
		return;
	}


}
