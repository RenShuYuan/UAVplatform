#ifndef UAVINQUIREDEMVALUE_H
#define UAVINQUIREDEMVALUE_H

#include <QObject>
#include <QList>
#include <QMap>

class QPointF;
class QString;
class QgsRasterLayer;
class QgsCoordinateReferenceSystem;

class uavInquireDemValue : public QObject
{
	Q_OBJECT

public:
	enum ErrorType
	{
		eOK,						// 有效
		eInvalidDefaultDemPath,		// 无效的默认路径
	};

	uavInquireDemValue(QObject *parent);
	~uavInquireDemValue();
	
	/**
    * @brief                    设置目标参考坐标系
    * @author                   YuanLong
    * @param crs				传递参考坐标系
	* @warning					调用该函数后，在查询高程信息时如果没有设置
	*							参考坐标系，将默认使用该函数定义的Crs。
    * @return
    */
	void setTargetCrs(const QgsCoordinateReferenceSystem& crs);

	
	/**
    * @brief                    显示指定DEM文件路径
    * @author                   YuanLong
    * @param demPath			传递DEM文件完整路径
	* @warning					如果传递的是一个有效DEM路径，则会基于该DEM查询高程信息，
	*							否则调用默认DEM数据。该函数只有在需要使用自己的DEM数据
	*							时才调用。
    * @return
    */
	void setDemPath(const QString& demPath);

	/**
    * @brief                    查询单个坐标或坐标集对应的高程信息
    * @author                   YuanLong
    * @param point				平面坐标（坐标集）
    * @param elevation			保存查询的高程信息
    * @param crs				传递参考坐标系
	* @warning					如果没有指定crs，则默认调用setTargetCrs()设置
	*							的crs，以上参数都未设置则会发送错误信息。
	*							该函数内部将会调用一系列函数来完成高程查询工作。
    * @return
    */
	uavInquireDemValue::ErrorType inquireElevation(const QPointF& point, qreal& elevation, const QgsCoordinateReferenceSystem* crs = nullptr);
	uavInquireDemValue::ErrorType inquireElevation(const QList< QPointF >& points, QList< qreal >& elevations, const QgsCoordinateReferenceSystem* crs = nullptr);

private:
	/**
    * @brief                    根据传递的平面坐标计算所涉及的DEM范围
    * @author                   YuanLong
    * @return
    */
	void involved();

	/**
    * @brief                    加载所涉及的DEM数据
    * @author                   YuanLong
	* @warning					利用involved()计算出的DEM范围，从默认路径（或setDemPath()）
	*							下加载DEM，并以栅格图层形式存储。
    * @return
    */
	void loadDem();

	/**
    * @brief                    搜索高程值
    * @author                   YuanLong
    * @param point				平面坐标
	* @warning					该函数是在crs、DEM数据都准备好的情况下调用，
	*							将返回坐标对应到DEM上的高程值。
    * @return
    */
	const qreal& searchElevationValue(const QPointF& point);

private:
	QList< QPointF > mPoints;
	QString mDefaultDemPath;
	QString mCustomizeDemPath;
	QgsCoordinateReferenceSystem mTargetCrs;
	QMap< QString, QgsRasterLayer* > mRasterLayersMap;
};

#endif // UAVINQUIREDEMVALUE_H
