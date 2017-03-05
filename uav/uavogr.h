#ifndef UAVOGR_H
#define UAVOGR_H
#include <QList>
#include "qgspoint.h"

#include <gdal_priv.h>
#include "ogrsf_frmts.h"
#include "ogr_spatialref.h"

// 释放数组
#define UAVRELEASE(x)	if(x!=NULL) {delete []x; x=NULL;}

class QString;
class QStringList;

class uavOgr
{
public:
    uavOgr(const QString &fileName);
    ~uavOgr();

    bool open(const QString &fileName);
    bool isOpen();

    //返回指定影像的角点坐标
    QStringList getXY();

    //返回指定影像的投影信息
    QString getProjection();

    //返回影像像元大小
    QString getPixelSize();

    //返回影像位深
    int getDataType();

	bool getPixelValue(const QgsPoint& point, double &value);

	// 返回灰度影像中对应坐标的行列值
	bool Projection2ImageRowCol(const QgsPoint& point, int &iCol, int &iRow);

private:
    GDALDataset* poDataset;
};

#endif // UAVOGR_H
