#include "uavinquiredemvalue.h"
#include "uavogr.h"
#include "qgscoordinatetransform.h"

#include <QDir>

#include "qgsmessagelog.h"

uavInquireDemValue::uavInquireDemValue(QObject *parent)
	: QObject(parent)
{
	mDefaultDemPath = QDir::currentPath() + "/Resources/DEM/";
}

uavInquireDemValue::~uavInquireDemValue()
{
	QMap< QString, uavOgr* >::iterator it = mRasterLayersMap.begin();
	while (it != mRasterLayersMap.end())
	{
		uavOgr *ogr = it.value();
		if (ogr)
		{
			delete ogr; ogr = nullptr;
		}
		++it;
	}
}

void uavInquireDemValue::setSourceCrs( const QgsCoordinateReferenceSystem& crs )
{
	mSourceCrs = crs;
}

void uavInquireDemValue::setDemPath( const QString& demPath )
{
	mCustomizeDemPath = demPath;
}

uavInquireDemValue::ErrorType uavInquireDemValue::inquireElevation( const QgsPoint& point, qreal& elevation, const QgsCoordinateReferenceSystem* crs /*= nullptr*/ )
{
	QList< QgsPoint > points;
	QList< qreal > elevations;

	points << point;
	elevations << elevation;

	return inquireElevations(points, elevations, crs);
}

uavInquireDemValue::ErrorType uavInquireDemValue::inquireElevations( const QList< QgsPoint >& points, QList< qreal >& elevations, const QgsCoordinateReferenceSystem* crs /*= nullptr*/ )
{
	QgsMessageLog::logMessage(QString("自动匹配高程 : \t从默认DEM中匹配可用曝光点高程."));

	// 将点坐标转换到与DEM一致
	QList< QgsPoint > pointAfter;
	uavInquireDemValue::ErrorType et = pointTransform(points, pointAfter, crs);
	if (et != uavInquireDemValue::eOK)
		return et;

	// 计算涉及的所有DEM
	if (!involved(pointAfter))
	{
		QgsMessageLog::logMessage("\t\t没有找到相关的DEM数据，该问题极有可能是由于坐标系设置不正确造成.");
		return uavInquireDemValue::eOther;
	}

	// 加载DEM数据
	loadDem();

	// 搜索高程值
	searchElevationValues(pointAfter, elevations);

	QgsMessageLog::logMessage(QString("\t\t匹配完成."));

	return uavInquireDemValue::eOK;
}

bool uavInquireDemValue::involved(const QList< QgsPoint >& points)
{
	foreach (QgsPoint point, points)
	{
		mRasterLayersMap[defaultDemName(point)] = nullptr;
	}

	if (mRasterLayersMap.isEmpty())
		return false;
	else
		return true;
}

void uavInquireDemValue::loadDem()
{
	QMap< QString, uavOgr* >::iterator it = mRasterLayersMap.begin();
	while (it != mRasterLayersMap.end())
	{
		QString path = mDefaultDemPath + it.key();
		uavOgr *ogr = new uavOgr(path);
		if (ogr->isOpen())
			mRasterLayersMap[it.key()] = ogr;
		else
			QgsMessageLog::logMessage(QString("\t\t加载%1失败, 将使用预设的平均高程计算地面分辨率.").arg(path));
		++it;
	}
}

void uavInquireDemValue::searchElevationValues( const QList< QgsPoint >& points, QList< qreal >& elevations )
{
	foreach (QgsPoint point, points)
	{
		uavOgr *ogr = mRasterLayersMap.value(defaultDemName(point));
		if (!ogr)
			elevations.append(-9999.0);
		else
		{
			double value = 0.0;
			if (ogr->getPixelValue(point, value))
				elevations.append(value);
			else
				elevations.append(-9999.0);
		}
	}
}

uavInquireDemValue::ErrorType uavInquireDemValue::pointTransform(const QList< QgsPoint >& pointFirst,QList< QgsPoint >& pointAfter, const QgsCoordinateReferenceSystem* crs)
{
	if (pointFirst.isEmpty())
	{
		QgsMessageLog::logMessage("\t\t传递的曝光点坐标为空, 将使用预设的平均高程计算地面分辨率.");
		return uavInquireDemValue::eOther;
	}

	QgsCoordinateTransform transform;
	QgsCoordinateReferenceSystem sourceCrs;
	transform.setDestCRS(QgsCoordinateReferenceSystem(4326, QgsCoordinateReferenceSystem::EpsgCrsId));

	if (crs && crs->isValid())
		sourceCrs = *crs;
	else if (mSourceCrs.isValid())
		sourceCrs = mSourceCrs;
	else
	{
		QgsMessageLog::logMessage("\t\t未定义源参照坐标系, 将使用预设的平均高程计算地面分辨率.");
		return uavInquireDemValue::eOther;
	}

	// 判断是否需要转换坐标点的参照坐标系
	if ((sourceCrs.authid()=="EPSG:4326") || (sourceCrs.authid()=="EPSG:4490"))
	{
		pointAfter = pointFirst;
		return uavInquireDemValue::eOK;
	}
	else if (sourceCrs.description().startsWith("WGS 84") || sourceCrs.description().startsWith("CGCS2000"))
	{
		transform.setSourceCrs(sourceCrs);
	}
	else
	{
		QgsMessageLog::logMessage("\t\t目前仅支持CGCS2000与WGS84地理坐标系, 将使用预设的平均高程计算地面分辨率.");
		return uavInquireDemValue::eNotSupportCrs;
	}

	int numPoint = pointFirst.size();
	double *x = new double[numPoint];
	double *y = new double[numPoint];
	double *z = new double[numPoint];
	int index = 0;
	foreach (QgsPoint point, pointFirst)
	{
		x[index] = point.x();
		y[index] = point.y();
		z[index] = 0.0;
		++index;
	}

	if (!transform.isInitialised())
	{
		QgsMessageLog::logMessage("\t\t创建坐标转换关系失败, 将使用预设的平均高程计算地面分辨率.");
		return uavInquireDemValue::eTransformFailed;
	}
	transform.transformCoords(numPoint, x, y, z);

	for(int i=0; i<numPoint; ++i)
	{
		// 取出字段内容
		QgsPoint point;
		point.setX(x[i]);
		point.setY(y[i]);
		pointAfter.append(point);
	}

	delete [] x;
	delete [] y;
	delete [] z;

	return uavInquireDemValue::eOK;
}

QString uavInquireDemValue::defaultDemName( const QgsPoint &point )
{
	double longitude = point.x();
	double latitude = point.y();
	QString s_longitude;
	QString s_latitude;

	if (longitude < 100)
		s_longitude = "0" + QString::number(static_cast<int>(longitude));
	else
		s_longitude = QString::number(static_cast<int>(longitude));

	s_latitude = QString::number(static_cast<int>(latitude));

	QString str;
	str = "N" +  s_latitude + "E" + s_longitude + "_dem.tif";
	return str;
}
