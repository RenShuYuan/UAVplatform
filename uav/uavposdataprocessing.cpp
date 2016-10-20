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

	// ��õ�ǰ��Ŀ�Ĳ�������ϵ
	mSourceCrs = UavMain::instance()->mapCanvas()->mapSettings().destinationCrs();

}

uavPosDataProcessing::~uavPosDataProcessing()
{

}

void uavPosDataProcessing::oneButtonOrganizePosFiles()
{
	QSettings mSettings;
	QgsMessageLog::logMessage("�ع��ļ�һ������ : \t��ʼ...");

	if (mSettings.value("/Uav/pos/chkFormat", true).toBool())	// ��ʽ����
	{
		autoPosFormat();
	}
	if (mSettings.value("/Uav/pos/chkTransform", true).toBool()) // ����ת��
	{
		autoPosTransform();
	}
	if (mSettings.value("/Uav/pos/chkSketchMap", true).toBool()) // ������ͼ
	{
		autoSketchMap();
	}
}

void uavPosDataProcessing::setFieldsList( QList< QStringList >& list )
{
	if (list.isEmpty())
	{
		QgsMessageLog::logMessage("��ȡ�ع���ļ����� : \t��ȡ�ֶ�ʧ��, ��������ֹ...");
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

	// ������˳�����������ֶ�
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

	QgsMessageLog::logMessage("�ع���ļ���ʽ�ع� : \tOK...");
}

void uavPosDataProcessing::autoPosTransform()
{	
	// ��֤��������ϵ
	if (!mSourceCrs.isValid())
	{
		QgsMessageLog::logMessage("�ع������ת�� : \t��Ŀû��ָ����ȷ�Ĳ�������ϵ, ��������ֹ...");
		return;
	}

	// ����Ŀ��ͶӰ
	if (!createTargetCrs())
	{
		return;
	}

	// ����ת����ϵ
	QgsCoordinateTransform ct(mSourceCrs, mTargetCrs);
	if (!ct.isInitialised())
	{
		QgsMessageLog::logMessage("�ع������ת�� : \t��������ת����ϵʧ��, ��������ֹ...");
		return;
	}

	// ��ʼת��
	for (int i=0; i<mFieldsList.size(); ++i)
	{
		QStringList list = mFieldsList.at(i);
		QgsPoint p = ct.transform(list.at(1).toDouble(), list.at(2).toDouble());
		list[1] = QString::number(p.x(), 'f');
		list[2] = QString::number(p.y(), 'f');
		mFieldsList[i] = list;
	}
	QgsMessageLog::logMessage("�ع������ת�� : \tOK...");
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
			QgsMessageLog::logMessage(QString("�ع�����뾭�ȼ��� : \t--> ��%1�к����겻��ʶ��, ��ɾ����������.").arg(i));
			mFieldsList.removeAt(i);
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
	layerProperties.append(QString( "field=id:integer&field=name:string(50)&" ));			// �����ֶ�
	layerProperties.append(QString( "index=yes&" ));										// ��������
	layerProperties.append(QString( "memoryid=%1" ).arg( QUuid::createUuid().toString() ));	// ��ʱ����

	QgsVectorLayer* newLayer = new QgsVectorLayer( 
		layerProperties, QString( "������ͼ" ), QString( "memory" ) );
	
	if (!newLayer->isValid())
	{
		QgsMessageLog::logMessage(QString("����������ͼ : \t������ͼʧ��, ��������ֹ..."));
		return nullptr;
	}

	// ����ͼ���������ϵ
	QgsCoordinateReferenceSystem srs( mTargetCrs.srsid(), QgsCoordinateReferenceSystem::InternalCrsId );
	newLayer->setCrs(srs);

	// ����ͼ��������Ϊ��ͼ��ͬ���Ĳ�������ϵ
	UavMain::instance()->mapCanvas()->setDestinationCrs(srs);

	// ���ӵ���ͼ
	QgsMapLayerRegistry::instance()->addMapLayer(newLayer);

	QgsVectorDataProvider* dateProvider = newLayer->dataProvider();

	// ������Ҫ��
	int icount = 0;
	QgsFeatureList featureList;
	QSettings mSettings;
	foreach(QStringList list, mFieldsList)
	{
		// ȡ���ֶ�����
		double x = list.at(1).toDouble();
		double y = list.at(2).toDouble();
		double h = list.at(7).toDouble();
		double mRotate = list.at(4).toDouble();

		// ������Ҫ��, ������Omegaѡ��Ƕ�
		QgsPolygon polygon = rectangle( QgsPoint(x, y), h );
		QgsGeometry* mGeometry = QgsGeometry::fromPolygon(polygon);
		mGeometry->rotate( mRotate, QgsPoint(x, y) );

		// ���ü���Ҫ��������
		QgsFeature MyFeature;
		MyFeature.setGeometry( mGeometry );
		MyFeature.setAttributes(QgsAttributes() << QVariant(++icount) << QVariant(list.first()));
		featureList.append(MyFeature);
	}

	// ��ʼ�༭
	newLayer->startEditing();

	// ����Ҫ�ؼ���ͼ����
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

	QgsMessageLog::logMessage(QString("����������ͼ : \tOK...\n\t\t������%1����Ƭ��ͼ.").arg(newLayer->featureCount()));
	UavMain::instance()->mapCanvas()->freeze( false );
	UavMain::instance()->refreshMapCanvas();
	return newLayer;
}

bool uavPosDataProcessing::createTargetCrs()
{
	// ���������Ƿ���4�г��õĵ�������ϵ
	if ( !( (mSourceCrs.authid() == "EPSG:4214") ||	// ����54
		(mSourceCrs.authid() == "EPSG:4610") ||		// ����80
		(mSourceCrs.authid() == "EPSG:4326") ||		// WGS84
		(mSourceCrs.authid() == "EPSG:4490") ) )	// CGCS2000
	{
		QgsMessageLog::logMessage("������������ϵ : \t��Ŀָ���Ĳ�����ȷ�ĳ��ã�����54������80��WGS84��CGCS2000����������ϵ֮һ, ��������ֹ...");
		return false;
	}

	// ����ع���ļ��е����뾭��
	int cm = getCentralMeridian();

	// ��龫���Ƿ���������Χ��
	if ( !((cm>74 && cm<136) || (cm>24 && cm<46) || (cm>12 && cm<24)) )
	{
		QgsMessageLog::logMessage("������������ϵ : \t�ع���ļ��еľ��Ȳ������й���Χ��, ��������ֹ...");
		return false;
	}

	// ����WKT��ʽͶӰ����ϵ
	QString wkt;
	QString strDescription;
	if (mSourceCrs.authid() == "EPSG:4214")
	{
		wkt = uavPrj::createProj4Beijing1954Gcs(cm);

		//���Ӵ���
		if (cm>74 && cm<136)
			strDescription = QString("Beijing 1954 / Gauss-Kruger CM %1E").arg(cm);
		//�Ӵ���
		if (cm>12 && cm<46)
			strDescription = QString("Beijing 1954 / Gauss-Kruger zone %1").arg(cm);
	}
	else if (mSourceCrs.authid() == "EPSG:4610")
	{
		wkt = uavPrj::createProj4Xian1980Gcs(cm);

		//���Ӵ���
		if (cm>74 && cm<136)
			strDescription = QString("Xian 1980 / Gauss-Kruger CM %1E").arg(cm);
		//�Ӵ���
		if (cm>12 && cm<46)
			strDescription = QString("Xian 1980 / Gauss-Kruger zone %1").arg(cm);
	}
	else if (mSourceCrs.authid() == "EPSG:4326")
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
		QgsMessageLog::logMessage(QString("������������ϵ : \t�ع�����뾭�߼���Ϊ%1, ����ͶӰ�ο�����ϵʧ��, ��������ֹ...").arg(cm));
		return false;
	}
	
	QgsMessageLog::logMessage(QString("������������ϵ : \t�ع�����뾭�߼���Ϊ%1, ����ͶӰ�ο�����ϵ�ɹ�.").arg(cm));

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
			QgsMessageLog::logMessage(QString("������������ϵ : \t�����ݿ���д�� %1 �ο�����ϵʧ��, ��������ֹ...").arg(strDescription));
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
	// ����ֱ���
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
		QgsMessageLog::logMessage(QString("������������ϵ : \tû���ҵ�srs.db, ��������ֹ..."));
		return false;
	}

	// ������ݿ��Ƿ����
	myResult = sqlite3_open_v2(databaseFileName.toUtf8().data(), &myDatabase, SQLITE_OPEN_READONLY, nullptr);
	if ( myResult )
	{
		QString errInfo = QString( "���ܴ����ݿ�: %1" ).arg( sqlite3_errmsg( myDatabase ) );
		QgsMessageLog::logMessage(QString("������������ϵ : \t%1, ��������ֹ...").arg(errInfo));
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
		QgsMessageLog::logMessage(QString("������������ϵ : \t��ѯϵͳ���ݿ�, ���������ͶӰ��Ϣʧ��, ��������ֹ..."));
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
		QgsMessageLog::logMessage(QString("������������ϵ : \tû���ҵ�qgis.db, ��������ֹ..."));
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
		QgsMessageLog::logMessage(QString("������������ϵ : \t%1, ��������ֹ...").arg(errInfo));
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
		QgsMessageLog::logMessage(QString("������������ϵ : \t��ѯϵͳ���ݿ�, ���������ͶӰ��Ϣʧ��, ��������ֹ..."));
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