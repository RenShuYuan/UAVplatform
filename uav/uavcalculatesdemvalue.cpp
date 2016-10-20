#include "uavcalculatesdemvalue.h"

#include <QDir>

uavInquireDemValue::uavInquireDemValue(QObject *parent)
	: QObject(parent)
{
	mDefaultDemPath = QDir::currentPath() + "/Resources/DEM";
}

uavInquireDemValue::~uavInquireDemValue()
{

}

void uavInquireDemValue::setTargetCrs( const QgsCoordinateReferenceSystem& crs )
{
	mTargetCrs = crs;
}

void uavInquireDemValue::setDemPath( const QString& demPath )
{
	mCustomizeDemPath = demPath;
}

uavInquireDemValue::ErrorType uavInquireDemValue::inquireElevation( const QPointF& point, qreal& elevation, const QgsCoordinateReferenceSystem* crs /*= nullptr*/ )
{

}

uavInquireDemValue::ErrorType uavInquireDemValue::inquireElevation( const QList< QPointF >& points, QList< qreal >& elevations, const QgsCoordinateReferenceSystem* crs /*= nullptr*/ )
{

}

void uavInquireDemValue::involved()
{

}

void uavInquireDemValue::loadDem()
{

}

const qreal& uavInquireDemValue::searchElevationValue( const QPointF& point )
{

}
