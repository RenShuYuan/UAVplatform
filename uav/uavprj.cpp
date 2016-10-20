#include "uavprj.h"

#include <QString>
#include <QByteArray>
#include <QPointF>
#include <QStringList>

using namespace std;

uavPrj::uavPrj()
{
    //    添加环境变量
    //CPLSetConfigOption("GDAL_DATA", "C:\\gdal201\\data");

    //支持中文路径
    CPLSetConfigOption("GDAL_FILENAME_IS_UTF8", "NO");
}

const QString uavPrj::getGCSDatum(const QString gcsEPSG)
{

    OGRSpatialReference oSRS;

    QByteArray ba = gcsEPSG.toLocal8Bit();
    oSRS.SetWellKnownGeogCS(ba.data());

    const QString gcsDatum = oSRS.GetAttrValue("DATUM");

    return gcsDatum;
}

QString uavPrj::createEsriCgcs2000Gcs(const int cm)
{
    QString pszCGCS_2000_1;
    QString pszCGCS_2000_2;
    QString pszCGCS_2000_3;
    QString pszCGCS_2000_4 = "PARAMETER[\"Latitude_Of_Origin\",0.0],UNIT[\"Meter\",1.0],AUTHORITY[\"EPSG\",]]";

    //3度分带，不加带号
    if (cm>74 && cm<136)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"CGCS_2000_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = "GEOGCS[\"GCS_CGCS_2000\",DATUM[\"D_CGCS_2000\",SPHEROID[\"CGCS2000\",6378137.0,298.257222101]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",500000.0],PARAMETER[\"False_Northing\",0.0],";
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm);
    }

    //3度分带，加带号
    if (cm>24 && cm<46)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"CGCS_2000_GK_CM_zone_%1E\",").arg(cm);
        pszCGCS_2000_2 = QString("GEOGCS[\"GCS_CGCS_2000\",DATUM[\"D_CGCS_2000\",SPHEROID[\"CGCS2000\",6378137.0,298.257222101]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*3);
    }

    //6度分带，加带号
    if (cm>12 && cm<24)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"CGCS_2000_GK_CM_zone_%1E\",").arg(cm);
        pszCGCS_2000_2 = QString("GEOGCS[\"GCS_CGCS_2000\",DATUM[\"D_CGCS_2000\",SPHEROID[\"CGCS2000\",6378137.0,298.257222101]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*6);
    }

    return pszCGCS_2000_1 + pszCGCS_2000_2 + pszCGCS_2000_3 + pszCGCS_2000_4;
}

QString uavPrj::createEsriWgs84Gcs(const int cm)
{
    QString pszCGCS_2000_1;
    QString pszCGCS_2000_2;
    QString pszCGCS_2000_3;
    QString pszCGCS_2000_4 = "PARAMETER[\"Latitude_Of_Origin\",0.0],UNIT[\"Meter\",1.0],AUTHORITY[\"EPSG\",]]";

    //3度分带，不加带号
    if (cm>74 && cm<136)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"WGS84_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = "GEOGCS[\"GCS_WGS_1984\",DATUM[\"D_WGS_1984\",SPHEROID[\"WGS_1984\",6378137.0,298.257223563]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",500000.0],PARAMETER[\"False_Northing\",0.0],";
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm);
    }
    //3度分带，加带号
    if (cm>24 && cm<46)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"WGS84_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = QString("GEOGCS[\"GCS_WGS_1984\",DATUM[\"D_WGS_1984\",SPHEROID[\"WGS_1984\",6378137.0,298.257223563]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*3);
    }
    //6度分带，加带号
    if (cm>12 && cm<24)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"WGS84_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = QString("GEOGCS[\"GCS_WGS_1984\",DATUM[\"D_WGS_1984\",SPHEROID[\"WGS_1984\",6378137.0,298.257223563]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*6);
    }

    return pszCGCS_2000_1 + pszCGCS_2000_2 + pszCGCS_2000_3 + pszCGCS_2000_4;
}

QString uavPrj::createEsriXian1980Gcs(const int cm)
{
    QString pszCGCS_2000_1;
    QString pszCGCS_2000_2;
    QString pszCGCS_2000_3;
    QString pszCGCS_2000_4 = "PARAMETER[\"Latitude_Of_Origin\",0.0],UNIT[\"Meter\",1.0],AUTHORITY[\"EPSG\",]]";

    //3度分带，不加带号
    if (cm>74 && cm<136)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"Xian1980_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = "GEOGCS[\"GCS_Xian_1980\",DATUM[\"D_Xian_1980\",SPHEROID[\"Xian_1980\",6378140.0,298.257]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",500000.0],PARAMETER[\"False_Northing\",0.0],";
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm);
    }
    //3度分带，加带号
    if (cm>24 && cm<46)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"Xian1980_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = QString("GEOGCS[\"GCS_Xian_1980\",DATUM[\"D_Xian_1980\",SPHEROID[\"Xian_1980\",6378140.0,298.257]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*3);

    }
    //6度分带，加带号
    if (cm>12 && cm<24)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"Xian1980_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = QString("GEOGCS[\"GCS_Xian_1980\",DATUM[\"D_Xian_1980\",SPHEROID[\"Xian_1980\",6378140.0,298.257]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*6);

    }

    return pszCGCS_2000_1 + pszCGCS_2000_2 + pszCGCS_2000_3 + pszCGCS_2000_4;
}

QString uavPrj::createEsriBeijing1954Gcs(const int cm)
{
    QString pszCGCS_2000_1;
    QString pszCGCS_2000_2;
    QString pszCGCS_2000_3;
    QString pszCGCS_2000_4 = "PARAMETER[\"Latitude_Of_Origin\",0.0],UNIT[\"Meter\",1.0],AUTHORITY[\"EPSG\",]]";

    //3度分带，不加带号
    if (cm>74 && cm<136)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"Beijing1954_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = "GEOGCS[\"GCS_Beijing_1954\",DATUM[\"D_Beijing_1954\",SPHEROID[\"Krasovsky_1940\",6378245.0,298.3]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",500000.0],PARAMETER[\"False_Northing\",0.0],";
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm);
    }
    //3度分带，加带号
    if (cm>24 && cm<46)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"Beijing1954_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = QString("GEOGCS[\"GCS_Beijing_1954\",DATUM[\"D_Beijing_1954\",SPHEROID[\"Krasovsky_1940\",6378245.0,298.3]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*3);
    }
    //6度分带，加带号
    if (cm>12 && cm<24)
    {
        pszCGCS_2000_1 = QString("ESRI::PROJCS[\"Beijing1954_GK_CM_%1E\",").arg(cm);
        pszCGCS_2000_2 = QString("GEOGCS[\"GCS_Beijing_1954\",DATUM[\"D_Beijing_1954\",SPHEROID[\"Krasovsky_1940\",6378245.0,298.3]],"
                         "PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
                         "PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
        pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*6);
    }

    return pszCGCS_2000_1 + pszCGCS_2000_2 + pszCGCS_2000_3 + pszCGCS_2000_4;
}

bool uavPrj::transformation(QPointF &point, OGRSpatialReference *oSourceSRS, OGRSpatialReference oTargetSRS)
{
    OGRCoordinateTransformation *poTransform;
    double x = point.x();
    double y = point.y();

    poTransform = OGRCreateCoordinateTransformation(oSourceSRS, &oTargetSRS);

    if (poTransform == NULL)
        return false;

    if (!poTransform->Transform(1, &x, &y))
    {
        OGRCoordinateTransformation::DestroyCT(poTransform);
        return false;
    }

    point.setX(x);
    point.setY(y);
    return true;
}

int uavPrj::getBandwidth3(double djd)
{
    int itmp=(djd-1.5)/3+1;
    return itmp;
}

int uavPrj::getCentralmeridian3(double djd)
{
    int itmp=(djd-1.5)/3+1;
    return itmp*3;
}

QString uavPrj::createWktCgcs2000Gcs( const int cm )
{
	QString pszCGCS_2000_1;
	QString pszCGCS_2000_2;
	QString pszCGCS_2000_3;
	QString pszCGCS_2000_4 = "PARAMETER[\"Latitude_Of_Origin\",0.0],UNIT[\"Meter\",1.0],AUTHORITY[\"EPSG\",]]";

	//3度分带，不加带号
	if (cm>74 && cm<136)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"CGCS_2000_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = "GEOGCS[\"GCS_CGCS_2000\",DATUM[\"D_CGCS_2000\",SPHEROID[\"CGCS2000\",6378137.0,298.257222101]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",500000.0],PARAMETER[\"False_Northing\",0.0],";
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm);
	}

	//3度分带，加带号
	if (cm>24 && cm<46)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"CGCS_2000_GK_CM_zone_%1E\",").arg(cm);
		pszCGCS_2000_2 = QString("GEOGCS[\"GCS_CGCS_2000\",DATUM[\"D_CGCS_2000\",SPHEROID[\"CGCS2000\",6378137.0,298.257222101]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*3);
	}

	//6度分带，加带号
	if (cm>12 && cm<24)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"CGCS_2000_GK_CM_zone_%1E\",").arg(cm);
		pszCGCS_2000_2 = QString("GEOGCS[\"GCS_CGCS_2000\",DATUM[\"D_CGCS_2000\",SPHEROID[\"CGCS2000\",6378137.0,298.257222101]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*6);
	}

	return pszCGCS_2000_1 + pszCGCS_2000_2 + pszCGCS_2000_3 + pszCGCS_2000_4;
}

QString uavPrj::createWktWgs84Gcs( const int cm )
{
	QString pszCGCS_2000_1;
	QString pszCGCS_2000_2;
	QString pszCGCS_2000_3;
	QString pszCGCS_2000_4 = "PARAMETER[\"Latitude_Of_Origin\",0.0],UNIT[\"Meter\",1.0],AUTHORITY[\"EPSG\",]]";

	//3度分带，不加带号
	if (cm>74 && cm<136)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"WGS84_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = "GEOGCS[\"GCS_WGS_1984\",DATUM[\"D_WGS_1984\",SPHEROID[\"WGS_1984\",6378137.0,298.257223563]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",500000.0],PARAMETER[\"False_Northing\",0.0],";
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm);
	}
	//3度分带，加带号
	if (cm>24 && cm<46)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"WGS84_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = QString("GEOGCS[\"GCS_WGS_1984\",DATUM[\"D_WGS_1984\",SPHEROID[\"WGS_1984\",6378137.0,298.257223563]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*3);
	}
	//6度分带，加带号
	if (cm>12 && cm<24)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"WGS84_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = QString("GEOGCS[\"GCS_WGS_1984\",DATUM[\"D_WGS_1984\",SPHEROID[\"WGS_1984\",6378137.0,298.257223563]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*6);
	}

	return pszCGCS_2000_1 + pszCGCS_2000_2 + pszCGCS_2000_3 + pszCGCS_2000_4;
}

QString uavPrj::createWktXian1980Gcs( const int cm )
{
	QString pszCGCS_2000_1;
	QString pszCGCS_2000_2;
	QString pszCGCS_2000_3;
	QString pszCGCS_2000_4 = "PARAMETER[\"Latitude_Of_Origin\",0.0],UNIT[\"Meter\",1.0],AUTHORITY[\"EPSG\",]]";

	//3度分带，不加带号
	if (cm>74 && cm<136)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"Xian1980_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = "GEOGCS[\"GCS_Xian_1980\",DATUM[\"D_Xian_1980\",SPHEROID[\"Xian_1980\",6378140.0,298.257]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",500000.0],PARAMETER[\"False_Northing\",0.0],";
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm);
	}
	//3度分带，加带号
	if (cm>24 && cm<46)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"Xian1980_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = QString("GEOGCS[\"GCS_Xian_1980\",DATUM[\"D_Xian_1980\",SPHEROID[\"Xian_1980\",6378140.0,298.257]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*3);

	}
	//6度分带，加带号
	if (cm>12 && cm<24)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"Xian1980_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = QString("GEOGCS[\"GCS_Xian_1980\",DATUM[\"D_Xian_1980\",SPHEROID[\"Xian_1980\",6378140.0,298.257]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*6);

	}

	return pszCGCS_2000_1 + pszCGCS_2000_2 + pszCGCS_2000_3 + pszCGCS_2000_4;
}

QString uavPrj::createWktBeijing1954Gcs( const int cm )
{
	QString pszCGCS_2000_1;
	QString pszCGCS_2000_2;
	QString pszCGCS_2000_3;
	QString pszCGCS_2000_4 = "PARAMETER[\"Latitude_Of_Origin\",0.0],UNIT[\"Meter\",1.0],AUTHORITY[\"EPSG\",]]";

	//3度分带，不加带号
	if (cm>74 && cm<136)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"Beijing1954_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = "GEOGCS[\"GCS_Beijing_1954\",DATUM[\"D_Beijing_1954\",SPHEROID[\"Krasovsky_1940\",6378245.0,298.3]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",500000.0],PARAMETER[\"False_Northing\",0.0],";
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm);
	}
	//3度分带，加带号
	if (cm>24 && cm<46)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"Beijing1954_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = QString("GEOGCS[\"GCS_Beijing_1954\",DATUM[\"D_Beijing_1954\",SPHEROID[\"Krasovsky_1940\",6378245.0,298.3]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*3);
	}
	//6度分带，加带号
	if (cm>12 && cm<24)
	{
		pszCGCS_2000_1 = QString("PROJCS[\"Beijing1954_GK_CM_%1E\",").arg(cm);
		pszCGCS_2000_2 = QString("GEOGCS[\"GCS_Beijing_1954\",DATUM[\"D_Beijing_1954\",SPHEROID[\"Krasovsky_1940\",6378245.0,298.3]],"
			"PRIMEM[\"Greenwich\",0.0],UNIT[\"Degree\",0.0174532925199433]],PROJECTION[\"Gauss_Kruger\"],"
			"PARAMETER[\"False_Easting\",%1.0],PARAMETER[\"False_Northing\",0.0],").arg(cm*1000000+500000);
		pszCGCS_2000_3 = QString("PARAMETER[\"Central_Meridian\",%1.0],PARAMETER[\"Scale_Factor\",1.0],").arg(cm*6);
	}

	return pszCGCS_2000_1 + pszCGCS_2000_2 + pszCGCS_2000_3 + pszCGCS_2000_4;
}

QString uavPrj::createProj4Cgcs2000Gcs( const int cm )
{
	QString pszCGCS_2000;

	//3度分带，不加带号
	if (cm>74 && cm<136)
	{
		pszCGCS_2000 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=500000 +y_0=0 +ellps=GRS80 +units=m +no_defs").arg(cm);
	}
	//3度分带，加带号
	if (cm>24 && cm<46)
	{
		pszCGCS_2000 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=%2 +y_0=0 +ellps=GRS80 +units=m +no_defs").arg(cm*3).arg(cm*1000000+500000);
	}
	//6度分带，加带号
	if (cm>12 && cm<24)
	{
		pszCGCS_2000 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=%2 +y_0=0 +ellps=GRS80 +units=m +no_defs").arg(cm*6-3).arg(cm*1000000+500000);
	}

	return pszCGCS_2000;
}

QString uavPrj::createProj4Wgs84Gcs( const int cm )
{
	QString pszCGCS_84;

	//3度分带，不加带号
	if (cm>74 && cm<136)
	{
		pszCGCS_84 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=500000 +y_0=0 +datum=WGS84 +units=m +no_defs").arg(cm);
	}
	//3度分带，加带号
	if (cm>24 && cm<46)
	{
		pszCGCS_84 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=%2 +y_0=0 +datum=WGS84 +units=m +no_defs").arg(cm*3).arg(cm*1000000+500000);
	}
	//6度分带，加带号
	if (cm>12 && cm<24)
	{
		pszCGCS_84 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=%2 +y_0=0 +datum=WGS84 +units=m +no_defs").arg(cm*6-3).arg(cm*1000000+500000);
	}

	return pszCGCS_84;
}

QString uavPrj::createProj4Xian1980Gcs( const int cm )
{
	QString pszCGCS_80;

	//3度分带，不加带号
	if (cm>74 && cm<136)
	{
		pszCGCS_80 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=500000 +y_0=0 +a=6378140 +b=6356755.288157528 +units=m +no_defs").arg(cm);
	}
	//3度分带，加带号
	if (cm>24 && cm<46)
	{
		pszCGCS_80 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=%2 +y_0=0 +a=6378140 +b=6356755.288157528 +units=m +no_defs").arg(cm*3).arg(cm*1000000+500000);
	}
	//6度分带，加带号
	if (cm>12 && cm<24)
	{
		pszCGCS_80 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=%2 +y_0=0 +a=6378140 +b=6356755.288157528 +units=m +no_defs").arg(cm*6-3).arg(cm*1000000+500000);
	}

	return pszCGCS_80;
}

QString uavPrj::createProj4Beijing1954Gcs( const int cm )
{
	QString pszCGCS_54;

	//3度分带，不加带号
	if (cm>74 && cm<136)
	{
		pszCGCS_54 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=500000 +y_0=0 +ellps=krass +towgs84=15.8,-154.4,-82.3,0,0,0,0 +units=m +no_defs").arg(cm);
	}
	//3度分带，加带号
	if (cm>24 && cm<46)
	{
		pszCGCS_54 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=%2 +y_0=0 +ellps=krass +towgs84=15.8,-154.4,-82.3,0,0,0,0 +units=m +no_defs").arg(cm*3).arg(cm*1000000+500000);
	}
	//6度分带，加带号
	if (cm>12 && cm<24)
	{
		pszCGCS_54 = QString("+proj=tmerc +lat_0=0 +lon_0=%1 +k=1 +x_0=%2 +y_0=0 +ellps=krass +towgs84=15.8,-154.4,-82.3,0,0,0,0 +units=m +no_defs").arg(cm*6-3).arg(cm*1000000+500000);
	}

	return pszCGCS_54;
}
