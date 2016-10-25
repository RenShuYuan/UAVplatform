#include "uavppinteractive.h"
#include "uavmain.h"
#include "uavcore.h"

#include "qgsmapcanvas.h"
#include "qgsmessagelog.h"
#include "qgslayertreeview.h"
#include "qgsvectorlayer.h"
#include "qgssymbolv2.h"
#include "qgssinglesymbolrendererv2.h"
#include "qgscategorizedsymbolrendererv2.h"

uavPPInteractive::uavPPInteractive(QObject *parent)
	: QObject(parent),
	mLayer(nullptr),
	mFieldsList(nullptr),
	mLinkedSymbolV2(nullptr),
	mUnlinkedSymbolV2(nullptr)
{
	this->parent = parent;
	isLinked = false;

	cLinked.setRgb(186, 221, 105);
	cUnlinked = Qt::gray;

	definitionLinkedSymbolV2();
	definitionUnLinkedSymbolV2();
}

uavPPInteractive::uavPPInteractive(QObject *parent, QgsVectorLayer* layer, QList< QStringList >* fieldsList)
	: QObject(parent),
	mLayer(layer),
	mFieldsList(fieldsList),
	mLinkedSymbolV2(nullptr),
	mUnlinkedSymbolV2(nullptr)
{
	this->parent = parent;
	isLinked = false;

	cLinked.setRgb(186, 221, 105);
	cUnlinked = Qt::gray;

	definitionLinkedSymbolV2();
	definitionUnLinkedSymbolV2();
}

uavPPInteractive::~uavPPInteractive()
{

}

void uavPPInteractive::createPPlinkage()
{
	if (mFieldsList->isEmpty())
		return;

	QSettings mSetting;
	QString phtotPath = mSetting.value("/Uav/pos/lePosFile", "").toString();
	phtotPath = QFileInfo(phtotPath).path();
	phtotPath += "/" + mSetting.value("/Uav/pos/options/lePhotoFolder", "").toString();

	if (!QFileInfo(phtotPath).exists())
	{
		QgsMessageLog::logMessage(QString("PP动态联动 : \t%1 未指定正确的相片路径, 创建联动关系失败...").arg(phtotPath));
		isLinked = false;
		return;
	}

	emit startProcess();
	QStringList list = uavCore::searchFiles(phtotPath, QStringList() << "*.tif" << "*.jpg", 0, "搜索相片...");
	emit stopProcess();

	if (list.isEmpty())
	{
		QgsMessageLog::logMessage(QString("PP动态联动 : \t%1 路径下未搜索到tif、jpg格式的航飞相片, 创建联动关系失败...").arg(phtotPath));
		isLinked = false;
		return;
	}
	else
		QgsMessageLog::logMessage(QString("PP动态联动 : \t%1 路径下搜索到%2张相片.").arg(phtotPath).arg(list.size()));

	// 从POS中提取相片名称
	QStringList basePos;
	foreach (QStringList subList, *mFieldsList)
		basePos.append(subList.at(0));

	// 填充mPhotoMap
	foreach (QString str, list)
		mPhotoMap[QFileInfo(str).baseName()] = str;
	
	QMap<QString, QString>::iterator it = mPhotoMap.begin();
	while (it != mPhotoMap.end())
	{
		if (!basePos.contains(it.key()))
		{
			QgsMessageLog::logMessage(QString("PP动态联动 : \t--> %1在曝光点文件中未找到对应记录.").arg(it.key()));
			mPhotoMap.remove(it.key());
		}
		++it;
	}

	QgsMessageLog::logMessage(QString("PP动态联动 : \t成功创建PP联动关系..."));
	isLinked = true;
}

void uavPPInteractive::unPPlinkage()
{
	upDataUnLinkedSymbol();
	mPhotoMap.clear();
	isLinked = false;
}

void uavPPInteractive::initLayerCategorizedSymbolRendererV2()
{
	QgsCategoryList cats;
	QgsFeature f;
	QgsFeatureIterator it = mLayer->getFeatures();
	while (it.nextFeature(f))
	{
		cats << QgsRendererCategoryV2(f.attribute("相片编号"), unlinkedSymbolV2(), "未关联");
	}

	mLayer->setRendererV2( new QgsCategorizedSymbolRendererV2("相片编号", cats) );
	UavMain::instance()->layerTreeView()->refreshLayerSymbology(mLayer->id());
}

void uavPPInteractive::upDataLinkedSymbol()
{
	// 获得目前图层的分类样式符号渲染器
	QgsCategorizedSymbolRendererV2* cRenderer;
	cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	if (!cRenderer)
	{
		initLayerCategorizedSymbolRendererV2();
		cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	}
	

	QMap<QString, QString>::iterator it = mPhotoMap.begin();
	while (it != mPhotoMap.end())
	{
		// 在渲染器中查找是否有更新列表中的相片编号
		int index = cRenderer->categoryIndexForValue(QVariant(it.key()));

		// 根据查找结果进行更新
		if (-1 == index)
		{
			cRenderer->addCategory(QgsRendererCategoryV2(QVariant(it.key()), linkedSymbolV2(), QString("已关联 "+)));
		}
		else
		{
			cRenderer->deleteCategory(index);
			cRenderer->addCategory(QgsRendererCategoryV2(QVariant(it.key()), unlinkedSymbolV2(), "未关联"));
		}
		++it;
	}

	UavMain::instance()->layerTreeView()->refreshLayerSymbology(mLayer->id());
	UavMain::instance()->refreshMapCanvas();
}

void uavPPInteractive::upDataUnLinkedSymbol()
{
	// 获得目前图层的分类样式符号渲染器
	QgsCategorizedSymbolRendererV2* cRenderer;
	cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	if (!cRenderer)
	{
		initLayerCategorizedSymbolRendererV2();
		cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	}

	QgsCategoryList cgList = cRenderer->categories();
	for (int i=0; i<cgList.size(); i++)
	{
		cRenderer->updateCategorySymbol(i, unlinkedSymbolV2());
	}

	//foreach (QString str_value, list)
	//{
	//	// 在渲染器中查找是否有更新列表中的相片编号
	//	int index = cRenderer->categoryIndexForValue(QVariant(str_value));

	//	// 根据查找结果进行更新
	//	if (-1 == index)
	//	{
	//		cRenderer->addCategory(QgsRendererCategoryV2(QVariant(str_value), unlinkedSymbolV2(), "未关联"));
	//	} 
	//	else
	//	{
	//		cRenderer->deleteCategory(index);
	//		cRenderer->addCategory(QgsRendererCategoryV2(QVariant(str_value), unlinkedSymbolV2(), "未关联"));
	//	}
	//}

	UavMain::instance()->layerTreeView()->refreshLayerSymbology(mLayer->id());
	UavMain::instance()->refreshMapCanvas();
}

void uavPPInteractive::definitionLinkedSymbolV2()
{
	// 获得缺省的符号
	mLinkedSymbolV2 = QgsSymbolV2::defaultSymbol(mLayer->geometryType());

	// 设置透明度与颜色
	mLinkedSymbolV2->setAlpha(0.5);
	mLinkedSymbolV2->setColor(cLinked);
}

void uavPPInteractive::definitionUnLinkedSymbolV2()
{
	// 获得缺省的符号
	mUnlinkedSymbolV2 = QgsSymbolV2::defaultSymbol(mLayer->geometryType());

	// 设置透明度与颜色
	mUnlinkedSymbolV2->setAlpha(0.5);
	mUnlinkedSymbolV2->setColor(cUnlinked);
}

QgsSymbolV2* uavPPInteractive::linkedSymbolV2()
{
	return mLinkedSymbolV2->clone();
}

QgsSymbolV2* uavPPInteractive::unlinkedSymbolV2()
{
	return mUnlinkedSymbolV2->clone();
}

bool uavPPInteractive::isValid()
{
	if (!mLayer || !mFieldsList)
	{
		return false;
	}
	if (!mLayer->isValid() || mFieldsList->isEmpty())
	{
		return false;
	}
	return true;
}

void uavPPInteractive::setVectorLayer( QgsVectorLayer* layer )
{
	if (!layer || !layer->isValid())
		return;
	mLayer = layer;
}

void uavPPInteractive::setFieldsList( QList< QStringList >* fieldsList )
{
	if (!fieldsList)
		return;
	mFieldsList = fieldsList;
}
