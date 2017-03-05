#ifndef POSDATAPROCESSING_H
#define POSDATAPROCESSING_H

#include <QObject>
#include <QMap>
#include <QSettings>
#include <QRegExp>
#include "qgscoordinatereferencesystem.h"
#include "qgsgeometry.h"

class QgsVectorLayer;
class QgsDelimitedTextFile;

// ���������ع��������ص���
class uavPosDataProcessing : public QObject
{
	Q_OBJECT

public:
	static QRegExp WktPrefixRegexp;
	static QRegExp CrdDmsRegexp;

	uavPosDataProcessing(QObject *parent = nullptr);
	~uavPosDataProcessing();

	/**
    * @brief                    ���ش����Ƿ���Ч
    * @author                   YuanLong
    * @warning					�ж�mFieldsList�Ƿ�Ϊ�գ��ó�Ա������
    *							��������Ļ���
    * @return					��Ч�򷵻�true
    */
	bool isValid();

	/**
    * @brief                    ���POS��ز����Ƿ���ȷ
    * @author                   YuanLong
    * @return					�б�Ϊ�ձ�ʾȫ����ȷ������ȷ�Ĳ������᷵��
	*							��Ӧ������
    */
	const QStringList checkPosSettings();

	/**
    * @brief                    ����Pos��Ƭ���
    * @author                   YuanLong
    * @return					����һ��ָ����Ƭ��ŵ�ָ��
    */
	QStringList* noList();

	/**
    * @brief                    ɾ���ع���¼
    * @author                   YuanLong
    * @param No 				Ҫɾ������Ƭ���
    * @return
    */
	void deletePosRecord( const QString No );

	// POS����ת��
	bool autoPosTransform();

	// ������ͼ
	QgsVectorLayer* autoSketchMap();

	// ����Pos�ļ�
	bool posExport();

signals:
	void startProcess();
	void stopProcess();

private slots:

	// ��ȡPOS�ļ��������ֶ��б�
	void readFieldsList(QString &);

private:

	// �������뾭��, �Զ�Ϊ׼
	int getCentralMeridian();

	// ����Ŀ��ͶӰ�ο�����ϵ
	bool createTargetCrs();

	// ����ϵͳ���ݿ�srs.db�л�õĲ�������ϵ��������б�
	bool descriptionForDb(QStringList &list);

	// �����û����ݿ��л�õĲ�������ϵ��������б�
	bool descriptionForUserDb(QStringList &list);

	// �����ع��������������Ը̼߳�����Ƭ4���ǵ�����꣬������
	QgsPolygon rectangle( const QgsPoint& point, const double& resolution );

	// ����ֱ���
	double calculateResolution(const double &absoluteHeight, const double &groundHeight);

	// ����Դ��Ŀ���������ϵ
	QgsCoordinateReferenceSystem& sourceCrs();
	QgsCoordinateReferenceSystem& targetCrs();

	// �ȷ���ת��
	bool dFromDms( QString &sDms, bool xyDms );
	static double dmsStringToDouble( const QString &sX, bool *xOk );

	// ��¼����
	void recordInvalidLine( const QString& message );
	static bool recordIsEmpty( QStringList &record );
	void reportErrors( const QStringList& messages = QStringList(), bool showDialog = false );
	void clearInvalidLines();

private:
	QObject *parent;
	QSettings mSettings;
	QMap< QString, QStringList > mFieldsList;
	QStringList descriptionList;
	QStringList descriptionUserList;

	QgsDelimitedTextFile *mFile;

	QgsCoordinateReferenceSystem mSourceCrs;
	QgsCoordinateReferenceSystem mTargetCrs;

	bool mXyDms;

	//! �洢�޷������ļ��е���
	int mMaxInvalidLines;
	int mNExtraInvalidLines;
	QStringList mInvalidLines;
};

#endif // POSDATAPROCESSING_H
