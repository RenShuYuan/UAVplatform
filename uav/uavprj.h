#ifndef MYPRJ_H
#define MYPRJ_H

#include <gdal_priv.h>
#include "ogrsf_frmts.h"
#include "ogr_spatialref.h"
#include <QList>

class QString;
class QPointF;
class QStringList;

class uavPrj
{
public:
    uavPrj();
	~uavPrj();

    //返回指定的地理坐标系名称
    const QString getGCSDatum(const QString gcsEPSG);

    // 输入中央经线，返回ESRI格式的CGCS2000高斯投影字符串
    static QString createEsriCgcs2000Gcs(const int cm);
    // 输入中央经线，返回ESRI格式的WGS 84高斯投影字符串
    static QString createEsriWgs84Gcs(const int cm);
    // 输入中央经线，返回ESRI格式的Xian1980高斯投影字符串
    static QString createEsriXian1980Gcs(const int cm);
    // 输入中央经线，返回ESRI格式的Beijing1954高斯投影字符串
    static QString createEsriBeijing1954Gcs(const int cm);

	// 输入中央经线，返回WKT格式的CGCS2000高斯投影字符串
	static QString createWktCgcs2000Gcs(const int cm);
	// 输入中央经线，返回WKT格式的WGS 84高斯投影字符串
	static QString createWktWgs84Gcs(const int cm);
	// 输入中央经线，返回WKT格式的Xian1980高斯投影字符串
	static QString createWktXian1980Gcs(const int cm);
	// 输入中央经线，返回WKT格式的Beijing1954高斯投影字符串
	static QString createWktBeijing1954Gcs(const int cm);

	// 输入中央经线，返回PROJ4格式的CGCS2000高斯投影字符串
	static QString createProj4Cgcs2000Gcs(const double cm);
	// 输入中央经线，返回PROJ4格式的WGS 84高斯投影字符串
	static QString createProj4Wgs84Gcs(const double cm);
	// 输入中央经线，返回PROJ4格式的Xian1980高斯投影字符串
	static QString createProj4Xian1980Gcs(const double cm);
	// 输入中央经线，返回PROJ4格式的Beijing1954高斯投影字符串
	static QString createProj4Beijing1954Gcs(const double cm);

    // 坐标变换
    bool transformation(QPointF &point, OGRSpatialReference *oSourceSRS, OGRSpatialReference oTargetSRS);

    /***************************测绘相关基础算法模块***********************************/

    // 输入经度(十进制), 返回带号(3度分带)
    static int getBandwidth3(double djd);
	// 输入经度(十进制), 返回中央经线(3度分带)
    static int getCentralmeridian3(double djd);

private:

};

#endif // MYPRJ_H
