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
	cError = Qt::red;
	cWarning = Qt::yellow;

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
		UavMain::instance()->messageBar()->pushMessage( "PP动态联动", 
			QString("%1 未指定正确的相片路径, 创建联动关系失败...").arg(QDir::toNativeSeparators(phtotPath)), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("PP动态联动 : \t%1 未指定正确的相片路径, 创建联动关系失败...").arg(QDir::toNativeSeparators(phtotPath)));
		isLinked = false;
		return;
	}

	emit startProcess();
	QStringList list = uavCore::searchFiles(phtotPath, QStringList() << "*.tif" << "*.jpg");
	emit stopProcess();

	if (list.isEmpty())
	{
		UavMain::instance()->messageBar()->pushMessage( "PP动态联动", 
			QString("\t%1 路径下未搜索到tif、jpg格式的航飞相片, 创建联动关系失败...").arg(QDir::toNativeSeparators(phtotPath)), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("PP动态联动 : \t%1 路径下未搜索到tif、jpg格式的航飞相片, 创建联动关系失败...").arg(QDir::toNativeSeparators(phtotPath)));
		isLinked = false;
		return;
	}
	else
		QgsMessageLog::logMessage(QString("PP动态联动 : \t%1 路径下搜索到%2张相片.").arg(QDir::toNativeSeparators(phtotPath)).arg(list.size()));

	// 从POS中提取曝光点名称
	QStringList basePos;
	foreach (QStringList subList, *mFieldsList)
		basePos.append(subList.at(0));

	//matchPosName(list, basePos);

	// 填充mPhotoMap, mPhotoMap[001] = "D:\测试数据\平台处理\photo\001.tif"
	foreach (QString str, list)
		mPhotoMap[QFileInfo(str).baseName()] = str;
	
	QMap<QString, QString>::iterator it = mPhotoMap.begin();
	while (it != mPhotoMap.end())
	{
		QString key = it.key();
		if (!basePos.contains(key))
		{
			QgsMessageLog::logMessage(QString("PP动态联动 : \t||--> 相片:%1在曝光点文件中未找到对应记录.").arg(key));
			it = mPhotoMap.erase(it);
		}
		else
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
		cats << QgsRendererCategoryV2(f.attribute("相片编号"), unlinkedSymbolV2(), f.attribute("相片编号").toString());
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
		 if (-1 != index)
		{
			cRenderer->deleteCategory(index);
			cRenderer->addCategory(QgsRendererCategoryV2(QVariant(it.key()), linkedSymbolV2(), it.key()));
		}
		++it;
	}

	cRenderer->sortByValue();
	UavMain::instance()->layerTreeView()->refreshLayerSymbology(mLayer->id());
	UavMain::instance()->refreshMapCanvas();
}

void uavPPInteractive::upDataUnLinkedSymbol()
{
	// 获得目前图层的分类样式符号渲染器
	//QgsCategorizedSymbolRendererV2* cRenderer;
	//cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	//if (!cRenderer)
	//{
	//	initLayerCategorizedSymbolRendererV2();
	//	cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	//}

	//QgsCategoryList cgList = cRenderer->categories();
	//for (int i=0; i<cgList.size(); i++)
	//{
	//	cRenderer->updateCategorySymbol(i, unlinkedSymbolV2());
	//}

	//UavMain::instance()->layerTreeView()->refreshLayerSymbology(mLayer->id());
	//UavMain::instance()->refreshMapCanvas();
	// 
	QMap<QString, QString>::iterator it = mPhotoMap.begin();
	while (it != mPhotoMap.end())
	{
		addChangedItem(it.key());
		++it;
	}

	updata(unlinkedSymbolV2());
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

void uavPPInteractive::matchPosName(const QStringList& photoList, QStringList& posList)
{
	QString photoName;
	QStringList tmpPosList;
	QStringList photoNameList;
	foreach (QString photoPath, photoList)
		photoNameList.append(QFileInfo(photoPath).baseName());
	if (photoNameList.isEmpty())
		return;

	tmpPosList = posList;

	QgsMessageLog::logMessage(QString("匹配曝光点名称 : \t开始匹配曝光点与相片名称..."));

	for (int i=0; i<tmpPosList.size(); ++i)
	{
		int count = 0;
		QString posName = tmpPosList.at(i);
		foreach (const QString tmpPhotoName, photoNameList)
		{
			if (tmpPhotoName.contains(posName, Qt::CaseInsensitive))
			{
				photoName = tmpPhotoName;
				++count;
			}
		}
		if (count==0)	// 没匹配到
		{
			int i = 0;
			while (i<posName.size())
			{
				if (posName.at(i).isNumber())
				{
					if (posName.at(i)==QChar('0'))
					{
						posName.remove(i, 1);
					}
					else
						break;
				}
				++i;
			}
			tmpPosList[i] = posName;
			--i;
		}
		else if (count==1) // 匹配到一个
		{
			QgsMessageLog::logMessage(QString("\t\t匹配到曝光点: %1与相片名称: %2符合规则, 已自动更新曝光点名称.").arg(posList.at(i)).arg(photoName));
			posList[i] = photoName;
		}
		else				// 匹配到多个
		{
			if (posName.size() < photoName.size())
			{
				tmpPosList[i] = posName.insert(0, '0');
				--i;
			}
			else
				QgsMessageLog::logMessage(QString("\t\t未匹配到曝光点: %1.").arg(posList.at(i)));
		}
	}
}

void uavPPInteractive::addChangedItem( const QString& item )
{
	mChangeList.append(item);
}

void uavPPInteractive::clearAllChangedItem()
{
	mChangeList.clear();
}

void uavPPInteractive::updata(QgsSymbolV2* v2)
{
	// 获得目前图层的分类样式符号渲染器
	QgsCategorizedSymbolRendererV2* cRenderer;
	cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	if (!cRenderer)
	{
		initLayerCategorizedSymbolRendererV2();
		cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	}

	foreach (QString str, mChangeList)
	{
		int index = cRenderer->categoryIndexForValue(QVariant(str));
		if (index != -1)
		{
			cRenderer->updateCategorySymbol(index, v2);
		}
	}

	UavMain::instance()->layerTreeView()->refreshLayerSymbology(mLayer->id());
	UavMain::instance()->refreshMapCanvas();
	clearAllChangedItem();
}
