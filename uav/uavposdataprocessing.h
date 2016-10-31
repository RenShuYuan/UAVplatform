#ifndef POSDATAPROCESSING_H
#define POSDATAPROCESSING_H

#include <QObject>
#include <QSettings>
#include "qgscoordinatereferencesystem.h"
#include "qgsgeometry.h"

class QgsVectorLayer;

// 负责处理与曝光点数据相关的类
class uavPosDataProcessing : public QObject
{
	Q_OBJECT

public:
	uavPosDataProcessing(QObject *parent = nullptr);
	~uavPosDataProcessing();

	/**
    * @brief                    返回此类是否有效
    * @author                   YuanLong
    * @warning					判断mFieldsList是否为空，该成员变量是
    *							后续处理的基础
    * @return					有效则返回true
    */
	bool isValid();

	/**
    * @brief                    检查POS相关参数是否正确
    * @author                   YuanLong
    * @return					列表为空表示全部正确，不正确的参数将会返回
	*							对应的名称
    */
	const QStringList checkPosSettings();

	/**
    * @brief                    返回Pos文件内容
    * @author                   YuanLong
    * @return					返回一个指向mFieldsList的指针
    */
	QList< QStringList >* fieldsList();

	// POS格式整理
	void autoPosFormat();

	// POS坐标转换
	bool autoPosTransform();

	// 创建略图
	QgsVectorLayer* autoSketchMap();

	// 导出Pos文件
	bool posExport();

signals:
	void startProcess();
	void stopProcess();

private slots:

	// 设置POS列表
	void setFieldsList(QList< QStringList >&);

private:

	// 计算中央经度, 以多为准
	int getCentralMeridian();

	// 创建目标投影参考坐标系
	bool createTargetCrs();

	// 利用系统数据库srs.db中获得的参照坐标系名称填充列表
	bool descriptionForDb(QStringList &list);

	// 利用用户数据库中获得的参照坐标系名称填充列表
	bool descriptionForUserDb(QStringList &list);

	// 利用曝光点中心坐标与绝对高程计算相片4个角点的坐标，并构面
	QgsPolygon rectangle( const QgsPoint& point, const double& resolution );

	// 计算分辨率
	double calculateResolution(const double &absoluteHeight, const double &groundHeight);

	// 返回源、目标参照坐标系
	QgsCoordinateReferenceSystem& sourceCrs();
	QgsCoordinateReferenceSystem& targetCrs();

private:
	QObject *parent;
	QSettings mSettings;
	QList< QStringList > mFieldsList;
	QStringList descriptionList;
	QStringList descriptionUserList;

	QgsCoordinateReferenceSystem mSourceCrs;
	QgsCoordinateReferenceSystem mTargetCrs;
};

#endif // POSDATAPROCESSING_H
