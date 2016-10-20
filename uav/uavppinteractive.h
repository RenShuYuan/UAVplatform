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
	uavPPInteractive(QObject *parent);
	uavPPInteractive(QObject *parent, QgsVectorLayer* layer, QList< QStringList >* fieldsList);
	~uavPPInteractive();

	bool isValid();
	bool islinked(){ return isLinked; };

	void setVectorLayer(QgsVectorLayer* layer);
	void setFieldsList(QList< QStringList >* fieldsList);

	// 创建POS与Photo联动关系
	void createPPlinkage();

	// 断开联动关系
	void unPPlinkage();

	// 更新曝光点与相片已关联的符号
	void upDataLinkedSymbol();
	// 更新曝光点与相片未关联的符号
	void upDataUnLinkedSymbol();

signals:
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
	QgsVectorLayer* mLayer;
	QList< QStringList >* mFieldsList;

	QColor cLinked;		// 已关联的符号颜色
	QColor cUnlinked;	// 未关联符号颜色

	QgsSymbolV2* mLinkedSymbolV2;
	QgsSymbolV2* mUnlinkedSymbolV2;
};

#endif // PPINTERACTIVE_H
