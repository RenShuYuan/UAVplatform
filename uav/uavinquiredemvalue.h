#ifndef UAVINQUIREDEMVALUE_H
#define UAVINQUIREDEMVALUE_H

#include <QObject>
#include <QList>
#include <QMap>
#include "qgscoordinatereferencesystem.h"
#include "qgspoint.h"

class uavOgr;
class QString;
class QgsRasterLayer;
class QgsCoordinateReferenceSystem;

class uavInquireDemValue : public QObject
{
	Q_OBJECT

public:
	enum ErrorType
	{
		eOK,						// ��Ч
		eInvalidDefaultDemPath,		// ��Ч��Ĭ��DEM·��
		eNotSupportCrs,				// ��֧�ֵ�Դ�ο�����ϵ
		eTransformFailed,			// ��������ת����ϵʧ��
		eOther,						// ��������
	};

	uavInquireDemValue(QObject *parent);
	~uavInquireDemValue();
	
	/**
    * @brief                    ����Ŀ��ο�����ϵ
    * @author                   YuanLong
    * @param crs				���ݲο�����ϵ
	* @warning					���øú������ڲ�ѯ�߳���Ϣʱ���û������
	*							�ο�����ϵ����Ĭ��ʹ�øú��������Crs��
    * @return
    */
	void setSourceCrs(const QgsCoordinateReferenceSystem& crs);

	
	/**
    * @brief                    ��ʾָ��DEM�ļ�·��
    * @author                   YuanLong
    * @param demPath			����DEM�ļ�����·��
	* @warning					������ݵ���һ����ЧDEM·���������ڸ�DEM��ѯ�߳���Ϣ��
	*							�������Ĭ��DEM���ݡ��ú���ֻ������Ҫʹ���Լ���DEM����
	*							ʱ�ŵ��á�
    * @return
    */
	void setDemPath(const QString& demPath);

	/**
    * @brief                    ��ѯ������������꼯��Ӧ�ĸ߳���Ϣ
    * @author                   YuanLong
    * @param point				ƽ�����꣨���꼯��
    * @param elevation			�����ѯ�ĸ߳���Ϣ
    * @param crs				���ݲο�����ϵ
	* @warning					���û��ָ��crs����Ĭ�ϵ���setTargetCrs()����
	*							��crs�����ϲ�����δ������ᷢ�ʹ�����Ϣ��
	*							�ú����ڲ��������һϵ�к�������ɸ̲߳�ѯ������
    * @return
    */
	uavInquireDemValue::ErrorType inquireElevation(const QgsPoint& point, qreal& elevation, const QgsCoordinateReferenceSystem* crs = nullptr);
	uavInquireDemValue::ErrorType inquireElevations(const QList< QgsPoint >& points, QList< qreal >& elevations, const QgsCoordinateReferenceSystem* crs = nullptr);

public:
	/**
    * @brief                    ��������ת������DEM��ͬ����ϵ
    * @author                   YuanLong
	* @param pointFirst			ת��ǰ��ƽ�����꣨���꼯��
	* @param pointAfter			ת�����ƽ�����꣨���꼯��
	* @param crs				����ת��ǰ�ο�����ϵ
    * @return
    */
	uavInquireDemValue::ErrorType pointTransform(const QList< QgsPoint >& pointFirst,QList< QgsPoint >& pointAfter, const QgsCoordinateReferenceSystem* crs);

	/**
    * @brief                    ��������������漰��DEM��Χ
    * @author                   YuanLong
    * @param points				���꼯
    * @return					����ҵ���ЧDEM�򷵻�true
    */
	bool involved(const QList< QgsPoint >& points);

	/**
    * @brief                    �������漰��DEM����
    * @author                   YuanLong
	* @warning					����involved()�������DEM��Χ����Ĭ��·������setDemPath()��
	*							�¼���DEM����������ָ�롣
    * @return
    */
	void loadDem();

	/**
    * @brief                    �����߳�ֵ
    * @author                   YuanLong
    * @param point				ƽ������
	* @warning					�ú�������crs��DEM���ݶ�׼���õ�����µ��ã�
	*							�����������Ӧ��DEM�ϵĸ߳�ֵ��
    * @return
    */
	void searchElevationValues(const QList< QgsPoint >& points, QList< qreal >& elevations);

	/**
    * @brief                    ����Ĭ��DEM�ļ�����
    * @author                   YuanLong
    * @param point				ƽ������
    * @return					����ͨ����Ϲ̶���ʽ���DEM�ļ�����
    */
	QString defaultDemName(const QgsPoint &point);

private:
	QList< QgsPoint > mPoints;
	QString mDefaultDemPath;
	QString mCustomizeDemPath;
	QgsCoordinateReferenceSystem mSourceCrs;
	QMap< QString, uavOgr* > mRasterLayersMap;
};

#endif // UAVINQUIREDEMVALUE_H
