#include "uavogr.h"

#include <string>
#include <QString>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QByteArray>
#include <QDirIterator>
#include <QDebug>
#include <QPointF>
#include <QMessageBox>
#include <QStringList>
#include <QTextStream>
#include <QtGlobal>

using namespace std;

uavOgr::uavOgr(const QString &fileName)
	: poDataset(nullptr)
{
    // 添加环境变量
    //CPLSetConfigOption("GDAL_DATA", "C:\\gdal201\\data");

    // 支持中文路径
    //CPLSetConfigOption("GDAL_FILENAME_IS_UTF8", "NO");

	open(fileName);
}

uavOgr::~uavOgr()
{
    if (poDataset)
        GDALClose((GDALDatasetH)poDataset);
	
}

bool uavOgr::open(const QString &fileName)
{
	// 注册所有影像格式
    GDALAllRegister();
    QByteArray ba = fileName.toLocal8Bit();
    const char* pszFile= ba.data();

    // 已只读方式打开影像文件
    poDataset=(GDALDataset*)GDALOpen(pszFile, GA_ReadOnly);
    if (poDataset)
        return true;
    else
        return false;
}

bool uavOgr::isOpen()
{
    if (poDataset)
        return true;
    else
        return false;
}

QStringList uavOgr::getXY()
{
    QStringList xyList;
    if (!poDataset)
        return xyList;

    //获得影像像素大小
    GDALRasterBand *poBand_1 = poDataset->GetRasterBand(1);
    int xSize = poBand_1->GetXSize();
    int ySize = poBand_1->GetYSize();

    double pro[6];
    poDataset->GetGeoTransform(pro);

    double xy[4];
    double midPixel = pro[1] / 2;
    xy[0] = pro[0] + midPixel;
    xy[1] = pro[3] - midPixel;
    xy[2] = pro[0] + pro[1] * xSize - midPixel;
    xy[3] = pro[3] + pro[5] * ySize + midPixel;

    QString str_out_xy[4];
    str_out_xy[0] = QString::number(xy[0], 10, 2);
    str_out_xy[1] = QString::number(xy[1], 10, 2);
    str_out_xy[2] = QString::number(xy[2], 10, 2);
    str_out_xy[3] = QString::number(xy[3], 10, 2);

    xyList <<  str_out_xy[0] <<  str_out_xy[1] <<  str_out_xy[2] <<  str_out_xy[3];

    return xyList;
}

QString uavOgr::getProjection()
{
    if (!poDataset)
        return "";

    QString projectionName = poDataset->GetProjectionRef();
    return projectionName;
}

QString uavOgr::getPixelSize()
{
	if (!poDataset)
		return "";

    double pro[6];
    poDataset->GetGeoTransform(pro);

    QString sizeX = QString::number(pro[1], 'f', 6);
    QString sizeY = QString::number(pro[5], 'f', 6);

    if (sizeX.at(0)=='-')
        sizeX = sizeX.mid(1, sizeX.length());
    if (sizeY.at(0)=='-')
        sizeY = sizeY.mid(1, sizeY.length());

    if (sizeX == sizeY)
        return sizeX.left(3);
    else
        return "";
}

int uavOgr::getDataType()
{
	if ((!poDataset) || poDataset->GetRasterCount() == 0)
		return 0;

    GDALRasterBand *poBand_1 = poDataset->GetRasterBand(1);
    GDALDataType datatype= poBand_1->GetRasterDataType();

    if (datatype==::GDT_Byte)   return 8;
    else if (datatype==::GDT_UInt16 )   return 16;
    else if (datatype==::GDT_Int16 )   return 16;
    else if (datatype==::GDT_UInt32 )   return 32;
    else if (datatype==::GDT_Int32 )   return 32;
    else    return 0;
}

bool uavOgr::getPixelValue( const QgsPoint& point, double &value )
{
	int iCol = 0;
	int iRow = 0;

	if (poDataset->GetRasterCount() == 0)
		return false;
	if (!Projection2ImageRowCol(point, iCol, iRow))
		return false;

	GDALRasterBand *poBand_1 = poDataset->GetRasterBand(1);
	//GDALDataType datatype= poBand_1->GetRasterDataType();

	double *pabyData = new double[1];
	CPLErr err = poBand_1->RasterIO( GF_Read, iCol, iRow, 1, 1, pabyData, 1, 1, GDT_Float64, 0, 0, 0 );
	if (err == CE_None)
	{
		value = pabyData[0];
		UAVRELEASE(pabyData);
		return true;
	}
	else
	{
		UAVRELEASE(pabyData);
		return false;
	}
	//int	nXBlocks, nYBlocks, nXBlockSize, nYBlockSize;
	//poBand_1->GetBlockSize( &nXBlockSize, &nYBlockSize );
	//nXBlocks = (poBand_1->GetXSize() + nXBlockSize - 1) / nXBlockSize;
	//nYBlocks = (poBand_1->GetYSize() + nYBlockSize - 1) / nYBlockSize;
	//
	//GInt16 *pabyData = new GInt16[nXBlockSize*nYBlockSize];
	//for( int iYBlock = 0; iYBlock < nYBlocks; iYBlock++ )
	//{
	//	for( int iXBlock = 0; iXBlock < nXBlocks; iXBlock++ )
	//	{
	//		poBand_1->ReadBlock( iXBlock, iYBlock, pabyData );
	//		for (int i=0; i<nXBlockSize*nYBlockSize; ++i)
	//		{
	//			double aa = pabyData[i];
	//		}
	//	}
	//}
}

bool uavOgr::Projection2ImageRowCol( const QgsPoint& point, int &iCol, int &iRow )
{
	if ((!poDataset) || poDataset->GetRasterCount() == 0)
		return false;

	double adfGeoTransform[6];
	poDataset->GetGeoTransform(adfGeoTransform);

	try
	{
		double dTemp = adfGeoTransform[1]*adfGeoTransform[5] - adfGeoTransform[2]*adfGeoTransform[4];
		double dCol = 0.0, dRow = 0.0;
		dCol = (adfGeoTransform[5]*(point.x() - adfGeoTransform[0]) -
			adfGeoTransform[2]*(point.y() - adfGeoTransform[3])) / dTemp + 0.5;
		dRow = (adfGeoTransform[1]*(point.y() - adfGeoTransform[3]) -
			adfGeoTransform[4]*(point.x() - adfGeoTransform[0])) / dTemp + 0.5;

		iCol = static_cast<int>(dCol);
		iRow = static_cast<int>(dRow);
		return true;
	}
	catch(...)
	{
		return false;
	}
}
