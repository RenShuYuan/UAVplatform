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
			UavMain::instance()->messageBar()->pushMessage( "��ȡ�ع���ļ�����", 
				"��ȡ�ֶ�ʧ��, ��������ֹ!", 
				QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
			QgsMessageLog::logMessage("��ȡ�ع���ļ����� : \t��ȡ�ֶ�ʧ��, ��������ֹ...");
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
		UavMain::instance()->messageBar()->pushMessage( "��ȡ�ع���ļ�����", 
			"��ȡ�ֶ�ʧ��, �ع���ļ��ֶν���ʧ��, ��������ֹ!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("��ȡ�ع���ļ����� : \t��ȡ�ֶ�ʧ��, �ع���ļ��ֶν���ʧ��, ��������ֹ...");
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
			recordInvalidLine( "\t**-->��%1�м�¼��ʽ��Ч" );
			continue;
		}
		if (parts.size() != maxField)
		{
			recordInvalidLine( "\t**-->��%1�м�¼ȱ���ֶ�" );
			continue;
		}
		// �����ռ�¼
		if ( recordIsEmpty( parts ) )
		{
			continue;
		}

		// ����ֶ�����
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
					recordInvalidLine( "\t**-->��%1�м�¼��x��y�ֶ�����Ч�ĵ��������ʽ" );
				}
			}

			tmp[it.key()] = field;
			++it;
		}
		if (!isXField || !isYField)
		{
			isbl = false;
			recordInvalidLine( "\t**-->��%1�м�¼ȱ��x��y����" );
		}

		it = mFieldsList.begin();
		while (it != mFieldsList.end())
		{
			QMap<QString, QString>::iterator itSub = tmp.find(it.key());
			if ( itSub == tmp.end() )
			{
				isbl = false;
				recordInvalidLine( "\t**-->��%1�м�¼ȱ��" + it.key() + "�ֶ�" );
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
	reportErrors(QStringList()<<"�ع���ļ�����");
}

bool uavPosDataProcessing::autoPosTransform()
{	
	// ����Ŀ��ͶӰ
	if (!createTargetCrs())
	{
		return false;
	}

	// ����ת����ϵ
	QgsCoordinateTransform ct(mSourceCrs, mTargetCrs);
	if (!ct.isInitialised())
	{
		UavMain::instance()->messageBar()->pushMessage( "�ع������ת��", 
			"��������ת����ϵʧ��, ��������ֹ!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("�ع������ת�� : \t��������ת����ϵʧ��, ��������ֹ.");
		return false;
	}

	// ��ʼת��
	QMap< QString, QStringList >::iterator it_x = mFieldsList.find("xField");
	QMap< QString, QStringList >::iterator it_y = mFieldsList.find("yField");
	QStringList xList = it_x.value();
	QStringList yList = it_y.value();
	if (xList.size() != yList.size())
	{
		UavMain::instance()->messageBar()->pushMessage( "�ع������ת��", 
			"��������������������һ�£��޷�������һ��ת��, ��������ֹ!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("�ع������ת�� : \t��������������������һ�£��޷�������һ��ת��, ��������ֹ.");
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

	QgsMessageLog::logMessage("�ع������ת�� : \t���.");
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
			QgsMessageLog::logMessage(QString("�ع�����뾭�ȼ��� : \t||--> ��%1�к����겻��ʶ��, ��ע�����������.").arg(i));
		}

		// �������뾭��
		int cm = uavPrj::getCentralmeridian3(x);

		// ͳ����ͬ���뾭�߳��ִ���
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

	// ���س��ִ����������뾭��
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

	QString layerProperties = "Polygon?";													// ��������
	layerProperties.append(QString( "field=id:integer&field=��Ƭ���:string(50)"				// ����ֶ�
													"&field=�ع������:string(30)"
													"&field=Omega:string(10)"
													"&field=Phi:string(10)"
													"&field=Kappa:string(10)"
													"&field=����ֱ���:string(10)&"));
	layerProperties.append(QString( "index=yes&" ));										// ��������
	layerProperties.append(QString( "memoryid=%1" ).arg( QUuid::createUuid().toString() ));	// ��ʱ����

	QString sketchMapName;
	sketchMapName = mSettings.value("/Uav/pos/lePosFile", "").toString();
	sketchMapName = QFileInfo(sketchMapName).baseName();
	if (sketchMapName.isEmpty())
		sketchMapName = "������ͼ";

	QgsVectorLayer* newLayer = new QgsVectorLayer( 
		layerProperties, sketchMapName, QString( "memory" ) );
	
	if (!newLayer->isValid())
	{
		UavMain::instance()->messageBar()->pushMessage( "����������ͼ", 
			"������ͼʧ��, ��������ֹ, ע����plugins�ļ���!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("����������ͼ : \t������ͼʧ��, ��������ֹ, ע����plugins�ļ��С�"));
		return nullptr;
	}

	// ����ͼ���������ϵ
	QgsCoordinateReferenceSystem srs( mTargetCrs.srsid(), QgsCoordinateReferenceSystem::InternalCrsId );
	newLayer->setCrs(srs);

	// ����ͼ��������Ϊ��ͼ��ͬ���Ĳ�������ϵ
	UavMain::instance()->mapCanvas()->setDestinationCrs(srs);

	// ��ӵ���ͼ
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

	// ������Ƭ����ֱ���
	uavInquireDemValue dem(this);
	QList< QgsPoint > pointFirst;
	QList< qreal > elevations;
	QStringList resolutionList;
	bool isbl = false;

	for(int i = 0; i < xList->size(); ++i)
	{
		// ȡ���ֶ�����
		QgsPoint point;
		point.setX(xList->at(i).toDouble());
		point.setY(yList->at(i).toDouble());
		pointFirst.append(point);
	}

	// �����ع�������Ӧ��DEM�߳�
	if ( uavInquireDemValue::eOK == dem.inquireElevations(pointFirst, elevations, &srs) )
	{
		isbl = true;
		if (xList->size() == elevations.size())
			isbl = true;
		else 
			isbl = false;
	}

	// ����DEM�̼߳������ֱ���
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

	// ������Ҫ��
	int icount = 0;
	QgsFeatureList featureList;
	for (int i = 0; i < xList->size(); ++i)
	{
		// ȡ���ֶ�����
		double resolution = resolutionList.at(i).toDouble();
		double mRotate = kList->at(i).toDouble();

		if (resolution == 0.0)
		{
			QgsMessageLog::logMessage(QString("\t\t||-->��Ƭ:%1 �߳��쳣������ֱ��ʼ���Ϊ0��������������Ƭ.").arg(nList->at(i)));
			continue;
		}

		// ������Ҫ��, ������Omegaѡ��Ƕ�
		QgsPolygon polygon = rectangle( pointFirst.at(i), resolution );
		QgsGeometry* mGeometry = QgsGeometry::fromPolygon(polygon);
		mGeometry->rotate( mRotate, pointFirst.at(i) );

		// ���ü���Ҫ��������
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

	// ��ʼ�༭
	newLayer->startEditing();

	// ���Ҫ�ؼ���ͼ����
	dateProvider->addFeatures(featureList);

	// ����
	newLayer->commitChanges();

	// ���·�Χ
	newLayer->updateExtents();

	// ��ʼ������
	// ���ȱʡ�ķ���
	QgsSymbolV2* newSymbolV2 = QgsSymbolV2::defaultSymbol(newLayer->geometryType());
	// ����͸��������ɫ
	newSymbolV2->setAlpha(0.5);
	newSymbolV2->setColor(Qt::gray);
	QgsSingleSymbolRendererV2* singleRenderer = new QgsSingleSymbolRendererV2(newSymbolV2);
	newLayer->setRendererV2(singleRenderer);

	emit stopProcess();

	QgsMessageLog::logMessage(QString("����������ͼ : \t���. ������%1����Ƭ��ͼ.").arg(newLayer->featureCount()));
	UavMain::instance()->mapCanvas()->freeze( false );
	UavMain::instance()->refreshMapCanvas();
	return newLayer;
}

bool uavPosDataProcessing::createTargetCrs()
{
	// ��õ�ǰ�ع��Ĳ�������ϵ
	QString myDefaultCrs = mSettings.value( "/Uav/pos/options/projectDefaultCrs", GEO_EPSG_CRS_AUTHID ).toString();
	mSourceCrs.createFromOgcWmsCrs( myDefaultCrs );

	// ��֤Դ��������ϵ
	if (!mSourceCrs.isValid())
	{
		UavMain::instance()->messageBar()->pushMessage( "�ع������ת��", 
			"��Ŀû��ָ����ȷ�Ĳ�������ϵ, ��������ֹ!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("�ع������ת�� : \t��Ŀû��ָ����ȷ�Ĳ�������ϵ, ��������ֹ!");
		return false;
	}

	// ���������Ƿ���4�ֳ��õĵ�������ϵ
	if ( !( (mSourceCrs.authid() == "EPSG:4326") ||		// WGS84
		(mSourceCrs.authid() == "EPSG:4490") ) )		// CGCS2000
	{
		UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
			"��Ŀָ���˴���Ĳ�������ϵ, Ŀǰ��֧��WGS84��CGCS2000, ��������ֹ!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage("������������ϵ : \t��Ŀָ���˴���Ĳ�������ϵ, Ŀǰ��֧��WGS84��CGCS2000, ��������ֹ!");
		return false;
	}

	// ����ع���ļ��е����뾭��
	double cm = getCentralMeridian();

	// ��龭���Ƿ���������Χ��
	if ( !((cm>74 && cm<136) || (cm>24 && cm<46) || (cm>12 && cm<24)) )
	{
		UavMain::instance()->messageBar()->pushMessage( "�����Զ�����", 
			"�ع���ļ��еľ��Ȳ������й���Χ��, ��������ֹ!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("�����Զ����� : \t�ع���ļ��еľ��� %1 �������й���Χ��, ��������ֹ!").arg(cm));
		return false;
	}

	// ����WKT��ʽͶӰ����ϵ
	QString wkt;
	QString strDescription;
	if (mSourceCrs.authid() == "EPSG:4326")
	{
		wkt = uavPrj::createProj4Wgs84Gcs(cm);

		//���Ӵ���
		if (cm>74 && cm<136)
			strDescription = QString("WGS 84 / Gauss-Kruger CM %1E").arg(cm);
		//�Ӵ���
		if (cm>12 && cm<46)
			strDescription = QString("WGS 84 / Gauss-Kruger zone %1").arg(cm);
	}
	else if (mSourceCrs.authid() == "EPSG:4490")
	{
		wkt = uavPrj::createProj4Cgcs2000Gcs(cm);

		//���Ӵ���
		if (cm>74 && cm<136)
			strDescription = QString("CGCS2000 / Gauss-Kruger CM %1E").arg(cm);
		//�Ӵ���
		if (cm>12 && cm<46)
			strDescription = QString("CGCS2000 / Gauss-Kruger zone %1").arg(cm);
	}

	mTargetCrs.createFromProj4(wkt);
	
	if ( !mTargetCrs.isValid() )
	{
		UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
			QString("�ع�����뾭�߼���Ϊ%1, ����ͶӰ�ο�����ϵʧ��, ��������ֹ!").arg(cm), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("������������ϵ : \t�ع�����뾭�߼���Ϊ%1, ����ͶӰ�ο�����ϵʧ��, ��������ֹ!").arg(cm));
		return false;
	}
	
	QgsMessageLog::logMessage(QString("������������ϵ : \t�ع�����뾭�߼���Ϊ%1, ����ͶӰ�ο�����ϵ\"%2\"�ɹ�.").arg(cm).arg(mTargetCrs.description()));

	// ����������ϵ�����б�
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
	
	// ������ݿ���û�������������ϵ����д��
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
			UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
				QString("�����ݿ���д�� %1 �ο�����ϵʧ��, ��������ֹ!").arg(strDescription), 
				QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
			QgsMessageLog::logMessage(QString("������������ϵ : \t�����ݿ���д�� %1 �ο�����ϵʧ��, ��������ֹ!").arg(strDescription));
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
		UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
			QString("û���ҵ�srs.db, ��������ֹ!"), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("������������ϵ : \tû���ҵ�srs.db, ��������ֹ!"));
		return false;
	}

	// ������ݿ��Ƿ����
	myResult = sqlite3_open_v2(databaseFileName.toUtf8().data(), &myDatabase, SQLITE_OPEN_READONLY, nullptr);
	if ( myResult )
	{
		QString errInfo = QString( "���ܴ����ݿ�: %1" ).arg( sqlite3_errmsg( myDatabase ) );
		UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
			QString("%1, ��������ֹ!").arg(errInfo), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("������������ϵ : \t%1, ��������ֹ!").arg(errInfo));
		return false;
	}

	// ���ò�ѯ�����б������ͶӰ��Ϣ
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
		UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
			QString("��ѯϵͳ���ݿ�, ���������ͶӰ��Ϣʧ��, ��������ֹ!"), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("������������ϵ : \t��ѯϵͳ���ݿ�, ���������ͶӰ��Ϣʧ��, ��������ֹ!"));
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
		UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
			"û���ҵ�qgis.db, ��������ֹ!", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("������������ϵ : \tû���ҵ�qgis.db, ��������ֹ!"));
		return false;
	}

	sqlite3      *database;
	const char   *tail;
	sqlite3_stmt *stmt;
	// ������ݿ��Ƿ����
	int result = sqlite3_open_v2( databaseFileName.toUtf8().constData(), &database, SQLITE_OPEN_READONLY, nullptr );
	if ( result )
	{
		QString errInfo = QString( "���ܴ����ݿ�: %1" ).arg( sqlite3_errmsg( database ) );
		UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
			QString("%1, ��������ֹ!").arg(errInfo), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("������������ϵ : \t%1, ��������ֹ!").arg(errInfo));
		return false;
	}

	// ���ò�ѯ�Լ���������б������ͶӰ��Ϣ
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
		UavMain::instance()->messageBar()->pushMessage( "������������ϵ", 
			QString("��ѯϵͳ���ݿ�, ���������ͶӰ��Ϣʧ��, ��������ֹ!"), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("������������ϵ : \t��ѯϵͳ���ݿ�, ���������ͶӰ��Ϣʧ��, ��������ֹ!"));
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
		UavMain::instance()->messageBar()->pushMessage( "�����ع���ļ�", 
			"�ڴ�ṹ���ƻ���δ��ȷ����������ϵ������Ա���.", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("�����ع���ļ� : \t�ڴ�ṹ���ƻ���δ��ȷ����������ϵ������Ա���."));
		return false;
	}

	QString path = mSettings.value("/Uav/pos/lePosFile", "").toString();
	path.insert(path.size()-4, "out");
	QFile file(path);
	if (!file.open(QFile::WriteOnly | QFile::Text | QFile::Truncate))   //ֻд���ı�����д
	{
		UavMain::instance()->messageBar()->pushMessage( "�����ع���ļ�", 
			QString("����%1�ع���ļ�ʧ��.").arg(QDir::toNativeSeparators(path)), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("�����ع���ļ� : \t����%1�ع���ļ�ʧ��.").arg(QDir::toNativeSeparators(path)));
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
	UavMain::instance()->messageBar()->pushMessage( "�����ع���ļ�", 
		QString("����%1�ع���ļ��ɹ�.").arg(QDir::toNativeSeparators(path)), 
		QgsMessageBar::SUCCESS, UavMain::instance()->messageTimeout() );
	QgsMessageLog::logMessage(QString("�����ع���ļ� : \t����%1�ع���ļ��ɹ�.").arg(QDir::toNativeSeparators(path)));
	return true;
}

const QStringList uavPosDataProcessing::checkPosSettings()
{
	QStringList errList;
	double tmpDouble = 0.0;
	int tmpInt = 0;
	
	tmpDouble = mSettings.value("/Uav/pos/options/leFocal", 0.0).toDouble();
	if (!tmpDouble)
		errList.append("�������");
	tmpDouble = mSettings.value("/Uav/pos/options/lePixelSize", 0.0).toDouble();
	if (!tmpDouble)
		errList.append("�����С");
	tmpInt = mSettings.value("/Uav/pos/options/leHeight", 0.0).toInt();
	if (!tmpInt)
		errList.append("�����С(��)");
	tmpInt = mSettings.value("/Uav/pos/options/leWidth", 0.0).toInt();
	if (!tmpInt)
		errList.append("�����С(��)");

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
		QString tag( "�ع�㴦��" );
		QgsMessageLog::logMessage( QString("�����ļ� %1").arg( mFile->fileName() ), tag );
		foreach ( const QString& message, messages )
		{
			QgsMessageLog::logMessage( message, tag );
		}
		if ( ! mInvalidLines.isEmpty() )
		{
			QgsMessageLog::logMessage( "���ڴ���������δ���ص���ͼ��:", tag );
			for ( int i = 0; i < mInvalidLines.size(); ++i )
				QgsMessageLog::logMessage( mInvalidLines.at( i ), tag );
			if ( mNExtraInvalidLines > 0 )
				QgsMessageLog::logMessage( QString( "�ļ��л���%1����������" ).arg( mNExtraInvalidLines ), tag );
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
		UavMain::instance()->messageBar()->pushMessage( "�����ع���ļ�", 
			"�ڴ�ṹ���ƻ���δ��ȷ����������ϵ������Ա���.", 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("�����ع���ļ� : \t�ڴ�ṹ���ƻ���δ��ȷ����������ϵ������Ա���."));
		return;
	}


}
