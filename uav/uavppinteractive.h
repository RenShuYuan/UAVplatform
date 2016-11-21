#ifndef PPINTERACTIVE_H
#define PPINTERACTIVE_H

#include <QObject>
#include <QColor>
#include <QMap>

class QgsVectorLayer;
class QgsSymbolV2;

/*
 *负责曝光点与相片的所有互交细节
 **/
class uavPPInteractive : public QObject
{
	Q_OBJECT

public:
	//enum linkedType
	//{
	//	LINKED,				// 已关联
	//	UNLINKED,			// 未关联
	//	ERROR,				// 错误
	//	WARNING,			// 警告
	//};

	uavPPInteractive(QObject *parent);
	uavPPInteractive(QObject *parent, QgsVectorLayer* layer, QList< QStringList >* fieldsList);
	~uavPPInteractive();

	/**
    * @brief            检查是否满足联动条件
    * @author           YuanLong
    * @warning          检查航飞略图与曝光点是否都有效.
    * @return			有效则返回true
    */
	bool isValid();

	/**
    * @brief            检查是否已创建联动关系
    * @author           YuanLong
    * @return			有效则返回true
    */
	bool islinked(){ return isLinked; };

	/**
    * @brief            设置航飞略图
    * @author           YuanLong
    * @param layer 		指向有效航飞略图的QgsVectorLayer
    * @return
    */
	void setVectorLayer(QgsVectorLayer* layer);

	/**
    * @brief            设置曝光点文件列表
    * @author           YuanLong
    * @param layer 		指向有效的曝光点文件列表
    * @return
    */
	void setFieldsList(QList< QStringList >* fieldsList);

	/**
    * @brief            创建POS与Photo联动关系
    * @author           YuanLong
    * @warning			POS需要提前使用对应函数设置好，Photo文件
    *					路径将自动从设置中读取，创建成功后将会调用
    *					upDataLinkedSymbol()更新QgsVectorLayer符号
    *					，并更新isLinked。
    * @return
    */
	void createPPlinkage();

	/**
    * @brief            断开POS与Photo联动关系
    * @author           YuanLong
    * @warning			调用upDataUnLinkedSymbol()更新QgsVectorLayer，
    *					符号并更新isLinked。
    * @return
    */
	void unPPlinkage();

	/**
    * @brief            更新曝光点与相片已关联的符号
    * @author           YuanLong
    * @warning			使用图层的分类样式符号渲染器更新已关联符号
    * @return
    */
	void upDataLinkedSymbol();
	
	/**
    * @brief            更新曝光点与相片未关联的符号
    * @author           YuanLong
    * @warning			使用图层的分类样式符号渲染器更新未关联符号
    * @return
    */
	void upDataUnLinkedSymbol();

	/**
    * @brief            匹配曝光点名称
    * @author           YuanLong
    * @warning			检查当曝光点名称与相片名称不一致时，使用默认
    *					的匹配规则将曝光点名称与相片名称修改为一致
    * @return			当成功匹配则返回true
    */
	void matchPosName(const QStringList& photoList, QStringList& posList);

	void addChangedItem(const QString& item);
	void clearAllChangedItem();

	void updata(QgsSymbolV2* v2);
signals:
	/**
    * @brief            向主窗口发送信号更新繁忙进度条状态
    * @author           YuanLong
    * @return
    */
	void startProcess();
	void stopProcess();

private:

	// 初始化图层的渲染方式为分类渲染
	void initLayerCategorizedSymbolRendererV2();

	// 定义已关联与未关联的符号样式
	void definitionLinkedSymbolV2();
	void definitionUnLinkedSymbolV2();

	// 返回已关联与未关联的符号样式拷贝
	QgsSymbolV2* linkedSymbolV2();
	QgsSymbolV2* unlinkedSymbolV2();

private:
	QObject *parent;

	// 是否联动成功
	bool isLinked;

	// 相片列表,保存文件baseName与完整路径
	QMap<QString, QString> mPhotoMap;
	// 关联图层指针
	QgsVectorLayer* mLayer;
	// 关联POS列表指针
	QList< QStringList >* mFieldsList;
	// save changed item
	QList< QString > mChangeList;

	QColor cLinked;			// 已关联的符号颜色
	QColor cUnlinked;		// 未关联符号颜色
	QColor cError;			// 错误符号颜色
	QColor cWarning;		// 警告符号颜色

	QgsSymbolV2* mLinkedSymbolV2;	// 已关联的符号类
	QgsSymbolV2* mUnlinkedSymbolV2;	// 未关联的符号类
};

#endif // PPINTERACTIVE_H
