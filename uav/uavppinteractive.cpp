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
	mNoFields(nullptr),
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

uavPPInteractive::uavPPInteractive(QObject *parent, QgsVectorLayer* layer, QStringList* noFields)
	: QObject(parent),
	mLayer(layer),
	mNoFields(noFields),
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

void uavPPInteractive::upDataLinkedSymbol()
{
	if (mNoFields->isEmpty())
	{
		isLinked = false;
		return;
	}

	QSettings mSetting;
	QString phtotPath = mSetting.value("/Uav/pos/lePosFile", "").toString();
	phtotPath = QFileInfo(phtotPath).path();
	phtotPath += "/" + mSetting.value("/Uav/pos/options/lePhotoFolder", "").toString();

	if (!QFileInfo(phtotPath).exists())
	{
		UavMain::instance()->messageBar()->pushMessage( "PP��̬����", 
			QString("%1 δָ����ȷ����Ƭ·��, ����������ϵʧ��...").arg(QDir::toNativeSeparators(phtotPath)), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("\t%1 δָ����ȷ����Ƭ·��, ����������ϵʧ��...").arg(QDir::toNativeSeparators(phtotPath)));
		isLinked = false;
		return;
	}

	emit startProcess();
	photosList.clear();
	photosList = uavCore::searchFiles(phtotPath, QStringList() << "*.tif" << "*.jpg");
	emit stopProcess();

	if (photosList.isEmpty())
	{
		UavMain::instance()->messageBar()->pushMessage( "PP��̬����", 
			QString("\t%1 ·����δ������tif��jpg��ʽ�ĺ�����Ƭ, ����������ϵʧ��...").arg(QDir::toNativeSeparators(phtotPath)), 
			QgsMessageBar::CRITICAL, UavMain::instance()->messageTimeout() );
		QgsMessageLog::logMessage(QString("\t%1 ·����δ������tif��jpg��ʽ�ĺ�����Ƭ, ����������ϵʧ��...").arg(QDir::toNativeSeparators(phtotPath)));
		isLinked = false;
		return;
	}
	else
		QgsMessageLog::logMessage(QString("\t%1 ·����������%2����Ƭ.").arg(QDir::toNativeSeparators(phtotPath)).arg(photosList.size()));

	//matchPosName(list, basePos);

	// ���mPhotoMap, mPhotoMap[001] = "D:\��������\ƽ̨����\photo\001.tif"
	foreach (QString str, photosList)
		mPhotoMap[QFileInfo(str).baseName()] = str;
	
	QMap<QString, QString>::iterator it = mPhotoMap.begin();
	while (it != mPhotoMap.end())
	{
		QString key = it.key();
		if (!mNoFields->contains(key))
		{
			QgsMessageLog::logMessage(QString("\t||--> ��Ƭ:%1���ع���ļ���δ�ҵ���Ӧ��¼.").arg(key));
			it = mPhotoMap.erase(it);
		}
		else
		{
			addChangedItem(key, linkedSymbolV2());
			++it;
		}
	}

	isLinked = true;
	updata();
}

void uavPPInteractive::initLayerCategorizedSymbolRendererV2()
{
	QgsCategoryList cats;
	QgsFeature f;
	QgsFeatureIterator it = mLayer->getFeatures();
	while (it.nextFeature(f))
	{
		cats << QgsRendererCategoryV2(f.attribute("��Ƭ���"), unlinkedSymbolV2(), f.attribute("��Ƭ���").toString());
	}

	mLayer->setRendererV2( new QgsCategorizedSymbolRendererV2("��Ƭ���", cats) );
	UavMain::instance()->layerTreeView()->refreshLayerSymbology(mLayer->id());
}

void uavPPInteractive::upDataUnLinkedSymbol()
{
	QMap<QString, QString>::iterator it = mPhotoMap.begin();
	while (it != mPhotoMap.end())
	{
		addChangedItem(it.key(), unlinkedSymbolV2());
		++it;
	}

	mPhotoMap.clear();
	isLinked = false;

	updata();
}

void uavPPInteractive::definitionLinkedSymbolV2()
{
	// ���ȱʡ�ķ���
	mLinkedSymbolV2 = QgsSymbolV2::defaultSymbol(mLayer->geometryType());

	// ����͸��������ɫ
	mLinkedSymbolV2->setAlpha(0.5);
	mLinkedSymbolV2->setColor(cLinked);
}

void uavPPInteractive::definitionUnLinkedSymbolV2()
{
	// ���ȱʡ�ķ���
	mUnlinkedSymbolV2 = QgsSymbolV2::defaultSymbol(mLayer->geometryType());

	// ����͸��������ɫ
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
	if (!mLayer || !mNoFields)
	{
		return false;
	}
	if (!mLayer->isValid() || mNoFields->isEmpty())
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

//void uavPPInteractive::setNoFieldsList(QStringList* fieldsList)
//{
//	if (!fieldsList)
//		return;
//	mNoFields = fieldsList;
//}

void uavPPInteractive::matchPosName()
{
	QString photoName;
	QStringList* tmpPosList;
	QStringList photoNameList;
	foreach (QString photoPath, photosList)
		photoNameList.append(QFileInfo(photoPath).baseName());
	if (photoNameList.isEmpty())
		return;

	tmpPosList = mNoFields;

	QgsMessageLog::logMessage(QString("ƥ���ع������ : \t��ʼƥ���ع������Ƭ����..."));

	for (int i=0; i<tmpPosList->size(); ++i)
	{
		int count = 0;
		QString posName = tmpPosList->at(i);
		foreach (const QString tmpPhotoName, photoNameList)
		{
			if (tmpPhotoName.contains(posName, Qt::CaseInsensitive))
			{
				photoName = tmpPhotoName;
				++count;
			}
		}
		if (count==0)	// ûƥ�䵽
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
			(*tmpPosList)[i] = posName;
			--i;
		}
		else if (count==1) // ƥ�䵽һ��
		{
			QgsMessageLog::logMessage(QString("\t\tƥ�䵽�ع��: %1����Ƭ����: %2���Ϲ���, ���Զ������ع������.").arg(mNoFields->at(i)).arg(photoName));
			(*mNoFields)[i] = photoName;
		}
		else				// ƥ�䵽���
		{
			if (posName.size() < photoName.size())
			{
				(*tmpPosList)[i] = posName.insert(0, '0');
				--i;
			}
			else
				QgsMessageLog::logMessage(QString("\t\tδƥ�䵽�ع��: %1.").arg(mNoFields->at(i)));
		}
	}

	// 
}

void uavPPInteractive::addChangedItem( const QString& item, QgsSymbolV2* v2 )
{
	mChangeList[item] = v2;
}

void uavPPInteractive::clearAllChangedItem()
{
	mChangeList.clear();
}

void uavPPInteractive::updata()
{
	// ���Ŀǰͼ��ķ�����ʽ������Ⱦ��
	QgsCategorizedSymbolRendererV2* cRenderer;
	cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	if (!cRenderer)
	{
		initLayerCategorizedSymbolRendererV2();
		cRenderer = dynamic_cast< QgsCategorizedSymbolRendererV2* >( mLayer->rendererV2() );
	}

	QMap< QString, QgsSymbolV2* >::iterator it = mChangeList.begin();
	while (it != mChangeList.end())
	{
		int index = cRenderer->categoryIndexForValue(QVariant(it.key()));
		if (index != -1)
		{
			cRenderer->updateCategorySymbol(index, it.value());
		}
		++it;
	}

	UavMain::instance()->layerTreeView()->refreshLayerSymbology(mLayer->id());
	UavMain::instance()->refreshMapCanvas();
	clearAllChangedItem();
}
