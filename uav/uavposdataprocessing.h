#ifndef POSDATAPROCESSING_H
#define POSDATAPROCESSING_H

#include <QObject>
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

	bool isValid();

	QList< QStringList >* fieldsList();

	//! 按照POS对话框设置参数一键整理POS文件
	void oneButtonOrganizePosFiles();

	// POS格式整理
	void autoPosFormat();

	// POS坐标转换
	void autoPosTransform();

	// 创建略图
	QgsVectorLayer* autoSketchMap();

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
	QgsPolygon rectangle( const QgsPoint& point, const double& h );

	// 返回源、目标参照坐标系
	QgsCoordinateReferenceSystem& sourceCrs();
	QgsCoordinateReferenceSystem& targetCrs();

private:

	QObject *parent;
	QList< QStringList > mFieldsList;
	QStringList descriptionList;
	QStringList descriptionUserList;

	QgsCoordinateReferenceSystem mSourceCrs;
	QgsCoordinateReferenceSystem mTargetCrs;
};

#endif // POSDATAPROCESSING_H
