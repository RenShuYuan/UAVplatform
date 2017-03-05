#ifndef PPINTERACTIVE_H
#define PPINTERACTIVE_H

#include <QObject>
#include <QColor>
#include <QMap>

class QgsVectorLayer;
class QgsSymbolV2;

/*
 *�����ع������Ƭ�����л���ϸ��
 **/
class uavPPInteractive : public QObject
{
	Q_OBJECT

public:
	//enum linkedType
	//{
	//	LINKED,				// �ѹ���
	//	UNLINKED,			// δ����
	//	ERROR,				// ����
	//	WARNING,			// ����
	//};

	uavPPInteractive(QObject *parent);
	uavPPInteractive(QObject *parent, QgsVectorLayer* layer, QStringList* noFields);
	~uavPPInteractive();

	/**
    * @brief            ����Ƿ�������������
    * @author           YuanLong
    * @warning          ��麽����ͼ���ع���Ƿ���Ч.
    * @return			��Ч�򷵻�true
    */
	bool isValid();

	/**
    * @brief            ����Ƿ��Ѵ���������ϵ
    * @author           YuanLong
    * @return			��Ч�򷵻�true
    */
	bool islinked(){ return isLinked; };

	/**
    * @brief            ���ú�����ͼ
    * @author           YuanLong
    * @param layer 		ָ����Ч������ͼ��QgsVectorLayer
    * @return
    */
	void setVectorLayer(QgsVectorLayer* layer);

	/**
    * @brief            ��ֵ�ع����Ƭ�����б��ָ��
    * @author           YuanLong
    * @param fieldsList ָ����Ч���ع���ļ������б�
    * @return
    */
	//void setNoFieldsList(QStringList* fieldsList);

	/**
    * @brief            �����ع������Ƭ�ѹ����ķ���
    * @author           YuanLong
    * @warning			POS��Ҫ��ǰʹ�ö�Ӧ�������úã�Photo�ļ�
    *					·�����Զ��������ж�ȡ�������ɹ��󽫻����
    *					upDataLinkedSymbol()����QgsVectorLayer����
    *					��������isLinked��
    *					ʹ��ͼ��ķ�����ʽ������Ⱦ�������ѹ�������
    * @return
    */
	void upDataLinkedSymbol();

	/**
    * @brief            �Ͽ�POS��Photo������ϵ
    * @author           YuanLong
    * @warning			ʹ��ͼ��ķ�����ʽ������Ⱦ������δ��������
    * @return
    */
	void upDataUnLinkedSymbol();

	/**
    * @brief            ƥ���ع������
    * @author           YuanLong
    * @warning			��鵱�ع����������Ƭ���Ʋ�һ��ʱ��ʹ��Ĭ��
    *					��ƥ������ع����������Ƭ�����޸�Ϊһ��
    * @return			���ɹ�ƥ���򷵻�true
    */
	void matchPosName();

	/**
	* @brief			addChangedItem
	* @author			YuanLong
	* @Access			public 
	* @Param item		
	* @Param QgsSymbolV2*	
	* @warning			����Ӧ��item��ӵ������б��У���ͬʱָ�����š�
	* @Returns			void
	*/
	void addChangedItem(const QString& item, QgsSymbolV2*);

	/**
	* @brief			clearAllChangedItem
	* @author			YuanLong
	* @Access			public 
	* @warning			��������б���������
	* @Returns			void
	*/
	void clearAllChangedItem();


	/**
	* @brief			updata
	* @author			YuanLong
	* @Access			public 
	* @warning			ʹ�ø����б��е���ͷ��Ÿ�����ͼ��
	*					ȫ�������������б�
	* @Returns			void
	*/
	void updata();
signals:
	/**
    * @brief            �������ڷ����źŸ��·�æ������״̬
    * @author           YuanLong
    * @return
    */
	void startProcess();
	void stopProcess();

private:

	// ��ʼ��ͼ�����Ⱦ��ʽΪ������Ⱦ
	void initLayerCategorizedSymbolRendererV2();

	// �����ѹ�����δ�����ķ�����ʽ
	void definitionLinkedSymbolV2();
	void definitionUnLinkedSymbolV2();

	// �����ѹ�����δ�����ķ�����ʽ����
	QgsSymbolV2* linkedSymbolV2();
	QgsSymbolV2* unlinkedSymbolV2();

private:
	QObject *parent;

	// �Ƿ������ɹ�
	bool isLinked;

	// ��Ƭ�б�,�����ļ�baseName������·��
	QMap<QString, QString> mPhotoMap;
	// ����ͼ��ָ��
	QgsVectorLayer* mLayer;
	// ������Ҫ���µķ�����
	QMap< QString, QgsSymbolV2* > mChangeList;

	QColor cLinked;			// �ѹ����ķ�����ɫ
	QColor cUnlinked;		// δ����������ɫ
	QColor cError;			// ���������ɫ
	QColor cWarning;		// ���������ɫ

	QgsSymbolV2* mLinkedSymbolV2;	// �ѹ����ķ�����
	QgsSymbolV2* mUnlinkedSymbolV2;	// δ�����ķ�����

	QStringList photosList;		// ���ڱ�������������Ƭ·��
	QStringList* mNoFields;		// ����POS�б�ָ��

};

#endif // PPINTERACTIVE_H
