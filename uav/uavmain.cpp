//Qt
#include <QtGui/QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QSettings>
#include <QProgressBar>
#include <QDockWidget>
#include <QList>
#include <QFile>
#include <QLabel>
#include <QToolBar>
#include <QToolButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QStackedWidget>
#include <QMessageBox>
#include <QDebug>

//QGis
#include "qgsapplication.h"
#include "qgsmapcanvas.h"
#include "qgsproject.h"
#include "qgsmaplayer.h"
#include "qgsdoublespinbox.h"
#include "qgsscalecombobox.h"
#include "qgsvectorlayer.h"
#include "qgsvectordataprovider.h"
#include "qgsmessagebaritem.h"
#include "qgsmaplayerregistry.h"
#include "qgsmaptoolzoom.h"
#include "qgsmaptoolpan.h"
#include "qgscustomlayerorderwidget.h"
#include "qgsmapoverviewcanvas.h"
#include "qgsmaptip.h"
#include "qgsdataitem.h"
#include "qgssublayersdialog.h"
#include "qgsrasterlayer.h"
#include "qgsattributeaction.h"
#include "qgsmaplayeractionregistry.h"
#include "qgslayertreegroup.h"
#include "qgslayertreenode.h"
#include "qgslayertreelayer.h"
#include "qgslayertreemapcanvasbridge.h"
#include "qgslayertreeview.h"
#include "qgslayertreemodel.h"
#include "qgslayertreeregistrybridge.h"
#include "qgsproviderregistry.h"
#include "qgscoordinateutils.h"
#include "qgspoint.h"
#include "qgsauthguiutils.h"
#include "qgsauthmanager.h"
#include "qgsscalevisibilitydialog.h"
#include "qgsgenericprojectionselector.h"
#include "qgstransaction.h"
#include "qgstransactiongroup.h"
#include "qgslayertree.h"
#include "qgslayertreeviewdefaultactions.h"
#include "qgsmessagelogviewer.h"
#include "qgsdatumtransformdialog.h"
#include "qgsmessageviewer.h"

#include "app/qgsmaptoolidentifyaction.h"
#include "app/qgisappstylesheet.h"
#include "app/qgscustomprojectiondialog.h"
#include "app/qgsprojectproperties.h"
#include "app/qgsclipboard.h"
#include "app/qgsapplayertreeviewmenuprovider.h"
#include "app/qgsmaptoolselectrectangle.h"
#include "app/qgsmaptoolselectpolygon.h"
#include "app/qgsmeasuretool.h"
#include "app/qgsstatusbarcoordinateswidget.h"
#include "app/qgsvisibilitypresets.h"
#include "app/ogr/qgsopenvectorlayerdialog.h"
#include "gui/qgsattributetabledialog.h"
#include "app/qgsrasterlayerproperties.h"
#include "app/qgsvectorlayerproperties.h"
#include "app/ogr/qgsvectorlayersaveasdialog.h"

#include "uavmain.h"
#include "uavcore.h"

#include "uavposloaddialog.h"
#include "uavposdataprocessing.h"
#include "uavppinteractive.h"

UavMain *UavMain::smInstance = nullptr;

UavMain::UavMain(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
	, mNonEditMapTool( nullptr )
	, mScaleLabel( nullptr )
	, mScaleEdit( nullptr )
	, mCoordsEdit( nullptr )
	, mRotationLabel( nullptr )
	, mRotationEdit( nullptr )
	, mProgressBar( nullptr )
	, mRenderSuppressionCBox( nullptr )
	, mOnTheFlyProjectionStatusButton( nullptr )
	, mLayerTreeCanvasBridge( nullptr )
	, mInternalClipboard( nullptr )
	, mShowProjectionTab( false )
	, posdp( nullptr )
	, ppInter( nullptr )
{
	if ( smInstance )
	{
		QMessageBox::critical( this, "UAVplatform�Ķ��ʵ��", "��⵽���UAVplatformӦ�ö����ʵ��.\n����ϵ������.\n" );
		abort();
	}

	smInstance = this;

	ui.setupUi(this);

	// ������ʽ�������̺�Ӧ�ñ����Ĭ����ʽѡ��
	mStyleSheetBuilder = new QgisAppStyleSheet( this );
	connect( mStyleSheetBuilder, SIGNAL( appStyleSheetChanged( const QString& ) ),
		this, SLOT( setAppStyleSheet( const QString& ) ) );
	mStyleSheetBuilder->buildStyleSheet( mStyleSheetBuilder->defaultOptions() );

	QWidget *centralWidget = this->centralWidget();
	QGridLayout *centralLayout = new QGridLayout( centralWidget );
	centralWidget->setLayout( centralLayout );
	centralLayout->setContentsMargins( 0, 0, 0, 0 );

	//! "theMapCanvas" used to find this canonical instance later
	mMapCanvas = new QgsMapCanvas( centralWidget, "theMapCanvas" );
	mMapCanvas->setCanvasColor( QColor( 255, 255, 255 ) );
	connect( mMapCanvas, SIGNAL( messageEmitted( const QString&, const QString&, QgsMessageBar::MessageLevel ) ),
		this, SLOT( displayMessage( const QString&, const QString&, QgsMessageBar::MessageLevel ) ) );
	mMapCanvas->setWhatsThis( "��ͼ����." );

	// ���û�����ɫ
	//mStackedWidget = new QStackedWidget;
	//mStackedWidget->setLayout( new QHBoxLayout() );
	//mStackedWidget->addWidget( mMapCanvas );
	centralLayout->addWidget( mMapCanvas, 1, 0, 1, 1 );
	mMapCanvas->setFocus();

	//! ����ͼ��������
	mLayerTreeView = new QgsLayerTreeView( this );
	mLayerTreeView->setObjectName( "theLayerTreeView" );

	// ��ʼ����Ϣ��ʾ��
	mInfoBar = new QgsMessageBar( centralWidget );
	mInfoBar->setSizePolicy( QSizePolicy::Minimum, QSizePolicy::Fixed );
	centralLayout->addWidget( mInfoBar, 0, 0, 1, 1 );
	
	createActions();
	createMenus();
	createToolBars();
	createStatusBar();
	mMapCanvas->freeze();
	initLayerTreeView();
	createOverview();
	createCanvasTools();

	// ��Ϣ���
	mLogViewer = new QgsMessageLogViewer( statusBar(), this );

	mLogDock = new QDockWidget( tr( "Log Messages Panel" ), this );
	mLogDock->setObjectName( "MessageLog" );
	mLogDock->setAllowedAreas( Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea );
	addDockWidget( Qt::BottomDockWidgetArea, mLogDock );
	mLogDock->setWidget( mLogViewer );
	mLogDock->hide();
	connect( mMessageButton, SIGNAL( toggled( bool ) ), mLogDock, SLOT( setVisible( bool ) ) );
	connect( mLogDock, SIGNAL( visibilityChanged( bool ) ), mMessageButton, SLOT( setChecked( bool ) ) );
	connect( QgsMessageLog::instance(), SIGNAL( messageReceived( bool ) ), this, SLOT( toggleLogMessageIcon( bool ) ) );
	connect( mMessageButton, SIGNAL( toggled( bool ) ), this, SLOT( toggleLogMessageIcon( bool ) ) );
	// end

	mInternalClipboard = new QgsClipboard; // create clipboard
	connect( mInternalClipboard, SIGNAL( changed() ), this, SLOT( clipboardChanged() ) );

	posdp = new uavPosDataProcessing(this);
	connect( posdp, SIGNAL( startProcess() ), this, SLOT( canvasRefreshStarted ) );
	connect( posdp, SIGNAL( stopProcess() ), this, SLOT( canvasRefreshFinished() ) );
	upDataPosActions();

	setupConnections();

	mRasterFileFilter = QgsProviderRegistry::instance()->fileRasterFilters();

	mMapTipsVisible = false;

}

UavMain::~UavMain()
{
	QSettings settings;

	mMapCanvas->stopRendering();

	delete mInternalClipboard;

	delete mMapTools.mZoomIn;
	delete mMapTools.mZoomOut;
	delete mMapTools.mPan;

	delete mMapTools.mAddFeature;
	delete mMapTools.mAddPart;
	delete mMapTools.mAddRing;
	delete mMapTools.mFillRing;
	delete mMapTools.mAnnotation;
	delete mMapTools.mChangeLabelProperties;
	delete mMapTools.mDeletePart;
	delete mMapTools.mDeleteRing;
	delete mMapTools.mFeatureAction;
	delete mMapTools.mFormAnnotation;
	delete mMapTools.mHtmlAnnotation;
	delete mMapTools.mIdentify;
	delete mMapTools.mMeasureAngle;
	delete mMapTools.mMeasureArea;
	delete mMapTools.mMeasureDist;
	delete mMapTools.mMoveFeature;
	delete mMapTools.mMoveLabel;
	delete mMapTools.mNodeTool;
	delete mMapTools.mOffsetCurve;
	delete mMapTools.mPinLabels;
	delete mMapTools.mReshapeFeatures;
	delete mMapTools.mRotateFeature;
	delete mMapTools.mRotateLabel;
	delete mMapTools.mRotatePointSymbolsTool;
	delete mMapTools.mSelectFreehand;
	delete mMapTools.mSelectPolygon;
	delete mMapTools.mSelectRadius;
	delete mMapTools.mSelectFeatures;
	delete mMapTools.mShowHideLabels;
	delete mMapTools.mSimplifyFeature;
	delete mMapTools.mSplitFeatures;
	delete mMapTools.mSplitParts;
	delete mMapTools.mSvgAnnotation;
	delete mMapTools.mTextAnnotation;
	delete mMapTools.mCircularStringCurvePoint;
	delete mMapTools.mCircularStringRadius;

	delete ppInter;
	delete posdp;

	//delete mpMaptip;

	delete mOverviewMapCursor;

	//delete mVectorLayerTools;

	//deletePrintComposers();
	//removeAnnotationItems();

	// cancel request for FileOpen events
	QgsApplication::setFileOpenEventReceiver( nullptr );

	QgsApplication::exitQgis();

	delete QgsProject::instance();

}

void UavMain::displayMessage( const QString& title, const QString& message, QgsMessageBar::MessageLevel level )
{
	messageBar()->pushMessage( title, message, level, messageTimeout() );
}

int UavMain::messageTimeout()
{
	QSettings settings;
	return settings.value( "/qgis/messageTimeout", 5 ).toInt();
}

void UavMain::createActions()
{
	// Project Menu Items
	mActionNewProject = new QAction("�½�(&N)", this);
	mActionNewProject->setShortcut(QKeySequence::New);
	mActionNewProject->setStatusTip("��������Ŀ");
	mActionNewProject->setIcon(uavCore::getThemeIcon("mActionFileNew.svg"));
	connect( mActionNewProject, SIGNAL( triggered() ), this, SLOT( fileNew() ) );						///////////////////////////

	mActionProjectProperties = new QAction("��Ŀ����(&P)...", this);
	mActionProjectProperties->setShortcut(tr("Ctrl+Shift+P"));
	mActionProjectProperties->setStatusTip("��Ŀ����");
	mActionProjectProperties->setIcon(uavCore::getThemeIcon("mActionProjectProperties.png"));
	connect( mActionProjectProperties, SIGNAL( triggered() ), this, SLOT( projectProperties() ) );		///////////////////////////

	mActionSaveMapAsImage = new QAction("���Ϊλͼ(&I)...", this);
	mActionSaveMapAsImage->setStatusTip("���Ϊλͼ");
	mActionSaveMapAsImage->setIcon(uavCore::getThemeIcon("mActionSaveMapAsImage.png"));
	connect( mActionSaveMapAsImage, SIGNAL( triggered() ), this, SLOT( saveMapAsImage() ) );			///////////////////////////
	
	mActionExit = new QAction("�˳�", this);
	mActionExit->setShortcut(QKeySequence::Quit);
	mActionExit->setStatusTip("�˳�");
	mActionExit->setIcon(uavCore::getThemeIcon("mActionFileExit.png"));
	connect( mActionExit, SIGNAL( triggered() ), this, SLOT( fileExit() ) );

	// View Menu Items
	mActionPan = new QAction("ƽ�Ƶ�ͼ", this);
	mActionPan->setStatusTip("ƽ�Ƶ�ͼ");
	mActionPan->setIcon(uavCore::getThemeIcon("mActionPan.svg"));
	connect( mActionPan, SIGNAL( triggered() ), this, SLOT( pan() ) );

	mActionPanToSelected = new QAction("����ͼ�н�ѡ�в��־���", this);
	mActionPanToSelected->setStatusTip("����ͼ�н�ѡ�в��־���");
	mActionPanToSelected->setIcon(uavCore::getThemeIcon("mActionPanToSelected.svg"));
	connect( mActionPanToSelected, SIGNAL( triggered() ), this, SLOT( panToSelected() ) );

	mActionZoomIn = new QAction("�Ŵ�", this);
	mActionZoomIn->setShortcut(tr("Ctrl++"));
	mActionZoomIn->setStatusTip("�Ŵ�");
	mActionZoomIn->setIcon(uavCore::getThemeIcon("mActionZoomIn.svg"));
	connect( mActionZoomIn, SIGNAL( triggered() ), this, SLOT( zoomIn() ) );

	mActionZoomOut = new QAction("��С", this);
	mActionZoomOut->setShortcut(tr("Ctrl+-"));
	mActionZoomOut->setStatusTip("��С");
	mActionZoomOut->setIcon(uavCore::getThemeIcon("mActionZoomOut.svg"));
	connect( mActionZoomOut, SIGNAL( triggered() ), this, SLOT( zoomOut() ) );

	mActionSelectFeatures = new QAction("ѡ��Ҫ��", this);
	mActionSelectFeatures->setStatusTip("ѡ��Ҫ��");
	mActionSelectFeatures->setIcon(uavCore::getThemeIcon("mActionSelectRectangle.svg"));
	connect( mActionSelectFeatures, SIGNAL( triggered() ), this, SLOT( selectFeatures() ) );

	mActionSelectPolygon = new QAction("�������ѡ��Ҫ��", this);
	mActionSelectPolygon->setStatusTip("�������ѡ��Ҫ��");
	mActionSelectPolygon->setIcon(uavCore::getThemeIcon("mActionSelectPolygon.svg"));
	connect( mActionSelectPolygon, SIGNAL( triggered() ), this, SLOT( selectByPolygon() ) );

	mActionDeselectAll = new QAction("������ͼ����ȡ��ѡ��Ҫ��", this);
	mActionDeselectAll->setShortcut(tr("Ctrl+Shift+A"));
	mActionDeselectAll->setStatusTip("������ͼ����ȡ��ѡ��Ҫ��");
	mActionDeselectAll->setIcon(uavCore::getThemeIcon("mActionDeselectAll.svg"));
	connect( mActionDeselectAll, SIGNAL( triggered() ), this, SLOT( deselectAll() ) );

	mActionSelectAll = new QAction("ѡ������Ҫ��", this);
	mActionSelectAll->setShortcut(tr("Ctrl+A"));
	mActionSelectAll->setStatusTip("ѡ������Ҫ��");
	mActionSelectAll->setIcon(uavCore::getThemeIcon("mActionSelectAll.svg"));
	connect( mActionSelectAll, SIGNAL( triggered() ), this, SLOT( selectAll() ) );

	mActionInvertSelection = new QAction("��ѡҪ��", this);
	mActionInvertSelection->setStatusTip("��ѡҪ��");
	mActionInvertSelection->setIcon(uavCore::getThemeIcon("mActionInvertSelection.svg"));
	connect( mActionInvertSelection, SIGNAL( triggered() ), this, SLOT( invertSelection() ) );

	mActionIdentify = new QAction("ʶ��Ҫ��", this);
	mActionIdentify->setShortcut(tr("Ctrl+Shift+I"));
	mActionIdentify->setStatusTip("ʶ��Ҫ��");
	mActionIdentify->setIcon(uavCore::getThemeIcon("mActionIdentify.svg"));
	connect( mActionIdentify, SIGNAL( triggered() ), this, SLOT( identify() ) );						///////////////////////////

	//connect( mActionFeatureAction, SIGNAL( triggered() ), this, SLOT( doFeatureAction() ) );	//���е�ǰͼ���ϵ�Ĭ�Ϲ���

	mActionMeasure = new QAction("��������", this);
	mActionMeasure->setShortcut(tr("Ctrl+Shift+M"));
	mActionMeasure->setStatusTip("��������");
	mActionMeasure->setIcon(uavCore::getThemeIcon("mActionMeasure.png"));
	connect( mActionMeasure, SIGNAL( triggered() ), this, SLOT( measure() ) );

	mActionMeasureArea = new QAction("�������", this);
	mActionMeasureArea->setShortcut(tr("Ctrl+Shift+J"));
	mActionMeasureArea->setStatusTip("�������");
	mActionMeasureArea->setIcon(uavCore::getThemeIcon("mActionMeasureArea.png"));
	connect( mActionMeasureArea, SIGNAL( triggered() ), this, SLOT( measureArea() ) );

	mActionZoomFullExtent = new QAction("ȫͼ��ʾ(&F)", this);
	mActionZoomFullExtent->setShortcut(tr("Ctrl+Shift+F"));
	mActionZoomFullExtent->setStatusTip("ȫͼ��ʾ(F)");
	mActionZoomFullExtent->setIcon(uavCore::getThemeIcon("mActionZoomFullExtent.svg"));
	connect( mActionZoomFullExtent, SIGNAL( triggered() ), this, SLOT( zoomFull() ) );

	mActionZoomToLayer = new QAction("���ŵ�ͼ��(&L)", this);
	mActionZoomToLayer->setStatusTip("���ŵ�ͼ��(L)");
	mActionZoomToLayer->setIcon(uavCore::getThemeIcon("mActionZoomToLayer.svg"));
	connect( mActionZoomToLayer, SIGNAL( triggered() ), this, SLOT( zoomToLayerExtent() ) );

	mActionZoomToSelected = new QAction("���ŵ�ѡ�������(&S)", this);
	mActionZoomToSelected->setShortcut(tr("Ctrl+J"));
	mActionZoomToSelected->setStatusTip("���ŵ�ѡ�������(S)");
	mActionZoomToSelected->setIcon(uavCore::getThemeIcon("mActionZoomToSelected.svg"));
	connect( mActionZoomToSelected, SIGNAL( triggered() ), this, SLOT( zoomToSelected() ) );

	mActionZoomLast = new QAction("��һ��ͼ", this);
	mActionZoomLast->setStatusTip("��һ��ͼ");
	mActionZoomLast->setIcon(uavCore::getThemeIcon("mActionZoomLast.svg"));
	connect( mActionZoomLast, SIGNAL( triggered() ), this, SLOT( zoomToPrevious() ) );

	mActionZoomNext = new QAction("��һ��ͼ", this);
	mActionZoomNext->setStatusTip("��һ��ͼ");
	mActionZoomNext->setIcon(uavCore::getThemeIcon("mActionZoomNext.svg"));
	connect( mActionZoomNext, SIGNAL( triggered() ), this, SLOT( zoomToNext() ) );

	mActionZoomActualSize = new QAction("���ŵ�ԭʼ�ֱ���(100%)", this);
	mActionZoomActualSize->setStatusTip("���ŵ�ԭʼ�ֱ���(100%)");
	mActionZoomActualSize->setIcon(uavCore::getThemeIcon("mActionZoomActual.svg"));
	connect( mActionZoomActualSize, SIGNAL( triggered() ), this, SLOT( zoomActualSize() ) );

	mActionMapTips = new QAction("��ͼ��ʾ����", this);
	mActionMapTips->setStatusTip("��ͼ��ʾ����");
	mActionMapTips->setIcon(uavCore::getThemeIcon("mActionMapTips.png"));
	connect( mActionMapTips, SIGNAL( triggered() ), this, SLOT( toggleMapTips() ) );				///////////////////////////

	mActionDraw = new QAction("ˢ��", this);
	mActionDraw->setShortcut(tr("F5"));
	mActionDraw->setStatusTip("ˢ��");
	mActionDraw->setIcon(uavCore::getThemeIcon("mActionDraw.svg"));
	connect( mActionDraw, SIGNAL( triggered() ), this, SLOT( refreshMapCanvas() ) );

	mActionStatisticalSummary = new QAction("����ͳ��", this);
	mActionStatisticalSummary->setStatusTip("����ͳ��");
	mActionStatisticalSummary->setIcon(uavCore::getThemeIcon("mActionSum.png"));
	connect( mActionStatisticalSummary, SIGNAL( triggered() ), this, SLOT( showStatisticsDockWidget() ) );		//////////////////////////////////////////////////////////////////////////

	// Layer Menu Items
	mActionNewVectorLayer = new QAction("�½�Shapefileͼ��...", this);
	mActionNewVectorLayer->setShortcut(tr("Ctrl+Shift+N"));
	mActionNewVectorLayer->setStatusTip("�½�Shapefileͼ��...");
	mActionNewVectorLayer->setIcon(uavCore::getThemeIcon("mActionNewVectorLayer.svg"));
	connect( mActionNewVectorLayer, SIGNAL( triggered() ), this, SLOT( newVectorLayer() ) );

	mActionAddOgrLayer = new QAction("���ʸ��ͼ��...", this);
	mActionAddOgrLayer->setShortcut(tr("Ctrl+Shift+V"));
	mActionAddOgrLayer->setStatusTip("���ʸ��ͼ��...");
	mActionAddOgrLayer->setIcon(uavCore::getThemeIcon("mActionAddOgrLayer.svg"));
	connect( mActionAddOgrLayer, SIGNAL( triggered() ), this, SLOT( addVectorLayer() ) );

	mActionAddRasterLayer = new QAction("���դ��ͼ��...", this);
	mActionAddRasterLayer->setShortcut(tr("Ctrl+Shift+R"));
	mActionAddRasterLayer->setStatusTip("���դ��ͼ��...");
	mActionAddRasterLayer->setIcon(uavCore::getThemeIcon("mActionAddRasterLayer.svg"));
	connect( mActionAddRasterLayer, SIGNAL( triggered() ), this, SLOT( addRasterLayer() ) );

	mActionAddDelimitedText = new QAction("����ı�����ͼ��", this);
	mActionAddDelimitedText->setStatusTip("����ı�����ͼ��");
	mActionAddDelimitedText->setIcon(uavCore::getThemeIcon("mActionAddDelimitedTextLayer.svg"));
	connect( mActionAddDelimitedText, SIGNAL( triggered() ), this, SLOT( addDelimitedTextLayer() ) );

	mActionOpenTable = new QAction("�����Ա�(&A)", this);
	mActionOpenTable->setStatusTip("�����Ա�(A)");
	mActionOpenTable->setIcon(uavCore::getThemeIcon("mActionOpenTable.png"));
	connect( mActionOpenTable, SIGNAL( triggered() ), this, SLOT( attributeTable() ) );

	//connect( mActionOpenFieldCalc, SIGNAL( triggered() ), this, SLOT( fieldCalculator() ) );	//�ֶμ�����

	mActionLayerSaveAs = new QAction("���Ϊ(&S)...", this);
	mActionLayerSaveAs->setStatusTip("���Ϊ");
	mActionLayerSaveAs->setIcon(uavCore::getThemeIcon("mActionLayerSaveAs.svg"));
	connect( mActionLayerSaveAs, SIGNAL( triggered() ), this, SLOT( saveAsFile() ) );

	mActionRemoveLayer = new QAction("�Ƴ�ͼ��/��", this);
	mActionRemoveLayer->setShortcut(tr("Ctrl+D"));
	mActionRemoveLayer->setStatusTip("�Ƴ�ͼ��/��");
	mActionRemoveLayer->setIcon(uavCore::getThemeIcon("mActionRemoveLayer.svg"));
	connect( mActionRemoveLayer, SIGNAL( triggered() ), this, SLOT( removeLayer() ) );

	mActionSetLayerCRS = new QAction("����ͼ����������ϵ", this);
	mActionSetLayerCRS->setShortcut(tr("Ctrl+Shift+C"));
	mActionSetLayerCRS->setStatusTip("����ͼ����������ϵ");
	connect( mActionSetLayerCRS, SIGNAL( triggered() ), this, SLOT( setLayerCRS() ) );

	mActionSetProjectCRSFromLayer = new QAction("��ͼ����������ϵ�趨Ϊ��Ŀ���������ϵ", this);
	mActionSetProjectCRSFromLayer->setStatusTip("��ͼ����������ϵ�趨Ϊ��Ŀ���������ϵ");
	connect( mActionSetProjectCRSFromLayer, SIGNAL( triggered() ), this, SLOT( setProjectCRSFromLayer() ) );

	mActionLayerProperties = new QAction("����(&P)...", this);
	mActionLayerProperties->setStatusTip("����(P)...");
	connect( mActionLayerProperties, SIGNAL( triggered() ), this, SLOT( layerProperties() ) );

	mActionLayerSubsetString = new QAction("����...", this);
	mActionLayerSubsetString->setShortcut(tr("Ctrl+F"));
	mActionLayerSubsetString->setStatusTip("����...");
	connect( mActionLayerSubsetString, SIGNAL( triggered() ), this, SLOT( layerSubsetString() ) );

	mActionAddToOverview = new QAction("��ӵ�ӥ��ͼ", this);
	mActionAddToOverview->setStatusTip("��ӵ�ӥ��ͼ");
	mActionAddToOverview->setIcon(uavCore::getThemeIcon("mActionInOverview.svg"));
	connect( mActionAddToOverview, SIGNAL( triggered() ), this, SLOT( isInOverview() ) );

	mActionAddAllToOverview = new QAction("������ͼ����ӵ�ӥ��ͼ", this);
	mActionAddAllToOverview->setStatusTip("������ͼ����ӵ�ӥ��ͼ");
	mActionAddAllToOverview->setIcon(uavCore::getThemeIcon("mActionAddAllToOverview.svg"));
	connect( mActionAddAllToOverview, SIGNAL( triggered() ), this, SLOT( addAllToOverview() ) );

	mActionRemoveAllFromOverview = new QAction("�Ƴ�ӥ��ͼ�����е�ͼ��", this);
	mActionRemoveAllFromOverview->setStatusTip("�Ƴ�ӥ��ͼ�����е�ͼ��");
	mActionRemoveAllFromOverview->setIcon(uavCore::getThemeIcon("mActionRemoveAllFromOverview.svg"));
	connect( mActionRemoveAllFromOverview, SIGNAL( triggered() ), this, SLOT( removeAllFromOverview() ) );

	mActionShowAllLayers = new QAction("��ʾ����ͼ��", this);
	mActionShowAllLayers->setShortcut(tr("Ctrl+Shift+U"));
	mActionShowAllLayers->setStatusTip("��ʾ����ͼ��");
	mActionShowAllLayers->setIcon(uavCore::getThemeIcon("mActionShowAllLayers.png"));
	connect( mActionShowAllLayers, SIGNAL( triggered() ), this, SLOT( showAllLayers() ) );

	mActionHideAllLayers = new QAction("��������ͼ��", this);
	mActionHideAllLayers->setShortcut(tr("Ctrl+Shift+H"));
	mActionHideAllLayers->setStatusTip("��������ͼ��");
	mActionHideAllLayers->setIcon(uavCore::getThemeIcon("mActionHideAllLayers.png"));
	connect( mActionHideAllLayers, SIGNAL( triggered() ), this, SLOT( hideAllLayers() ) );

	mActionShowSelectedLayers = new QAction("��ʾѡ�е�ͼ��", this);
	mActionShowSelectedLayers->setStatusTip("��ʾѡ�е�ͼ��");
	mActionShowSelectedLayers->setIcon(uavCore::getThemeIcon("mActionShowSelectedLayers.png"));
	connect( mActionShowSelectedLayers, SIGNAL( triggered() ), this, SLOT( showSelectedLayers() ) );

	mActionHideSelectedLayers = new QAction("����ѡ�е�ͼ��", this);
	mActionHideSelectedLayers->setStatusTip("����ѡ�е�ͼ��");
	mActionHideSelectedLayers->setIcon(uavCore::getThemeIcon("mActionHideSelectedLayers.png"));
	connect( mActionHideSelectedLayers, SIGNAL( triggered() ), this, SLOT( hideSelectedLayers() ) );

	mActionToggleEditing = new QAction("�л��༭״̬", this);
	mActionToggleEditing->setStatusTip("�л���ǰ�༭״̬");
	mActionToggleEditing->setIcon(uavCore::getThemeIcon("mActionToggleEditing.png"));
	connect( mActionToggleEditing, SIGNAL( triggered() ), this, SLOT( toggleEditing() ) );

	// Settings Menu Items
	mActionOptions = new QAction("ѡ��(&O)...", this);
	mActionOptions->setStatusTip("ѡ��(O)...");
	mActionOptions->setIcon(uavCore::getThemeIcon("mActionOptions.svg"));
	connect( mActionOptions, SIGNAL( triggered() ), this, SLOT( options() ) );

	mActionCustomProjection = new QAction("�Զ����������ϵ...", this);
	mActionCustomProjection->setStatusTip("�Զ����������ϵ...");
	mActionCustomProjection->setIcon(uavCore::getThemeIcon("mActionCustomProjection.svg"));
	connect( mActionCustomProjection, SIGNAL( triggered() ), this, SLOT( customProjection() ) );

	//connect( mActionStyleManagerV2, SIGNAL( triggered() ), this, SLOT( showStyleManagerV2() ) );	//ֹͣ��ͼ��Ⱦ

	// դ�񹤾�����
	mActionLocalHistogramStretch = new QAction("�ֲ�ֱ��ͼ����", this);
	mActionLocalHistogramStretch->setStatusTip("�ֲ�ֱ��ͼ����");
	mActionLocalHistogramStretch->setIcon(uavCore::getThemeIcon("mActionLocalHistogramStretch.png"));
	connect( mActionLocalHistogramStretch, SIGNAL( triggered() ), this, SLOT( localHistogramStretch() ) );

	mActionFullHistogramStretch = new QAction("ȫͼֱ��ͼ����", this);
	mActionFullHistogramStretch->setStatusTip("ȫͼֱ��ͼ����");
	mActionFullHistogramStretch->setIcon(uavCore::getThemeIcon("mActionFullHistogramStretch.png"));
	connect( mActionFullHistogramStretch, SIGNAL( triggered() ), this, SLOT( fullHistogramStretch() ) );

	mActionLocalCumulativeCutStretch = new QAction("ʹ�õ�ǰ��Χ,Ĭ�����ƺ͹���ֵ���оֲ��ۼƲü�����", this);
	mActionLocalCumulativeCutStretch->setStatusTip("ʹ�õ�ǰ��Χ,Ĭ�����ƺ͹���ֵ���оֲ��ۼƲü�����");
	mActionLocalCumulativeCutStretch->setIcon(uavCore::getThemeIcon("mActionLocalCumulativeCutStretch.png"));
	connect( mActionLocalCumulativeCutStretch, SIGNAL( triggered() ), this, SLOT( localCumulativeCutStretch() ) );

	mActionFullCumulativeCutStretch = new QAction("ʹ��ȫͼ��Χ,Ĭ�����ƺ͹���ֵ���оֲ��ۼƲü�����", this);
	mActionFullCumulativeCutStretch->setStatusTip("ʹ��ȫͼ��Χ,Ĭ�����ƺ͹���ֵ���оֲ��ۼƲü�����");
	mActionFullCumulativeCutStretch->setIcon(uavCore::getThemeIcon("mActionFullCumulativeCutStretch.png"));
	connect( mActionFullCumulativeCutStretch, SIGNAL( triggered() ), this, SLOT( fullCumulativeCutStretch() ) );

	mActionIncreaseBrightness = new QAction("��������", this);
	mActionIncreaseBrightness->setStatusTip("��������");
	mActionIncreaseBrightness->setIcon(uavCore::getThemeIcon("mActionIncreaseBrightness.svg"));
	connect( mActionIncreaseBrightness, SIGNAL( triggered() ), this, SLOT( increaseBrightness() ) );

	mActionDecreaseBrightness = new QAction("��С����", this);
	mActionDecreaseBrightness->setStatusTip("��С����");
	mActionDecreaseBrightness->setIcon(uavCore::getThemeIcon("mActionDecreaseBrightness.svg"));
	connect( mActionDecreaseBrightness, SIGNAL( triggered() ), this, SLOT( decreaseBrightness() ) );

	mActionIncreaseContrast = new QAction("���ӶԱȶ�", this);
	mActionIncreaseContrast->setStatusTip("���ӶԱȶ�");
	mActionIncreaseContrast->setIcon(uavCore::getThemeIcon("mActionIncreaseContrast.svg"));
	connect( mActionIncreaseContrast, SIGNAL( triggered() ), this, SLOT( increaseContrast() ) );

	mActionDecreaseContrast = new QAction("��С�Աȶ�", this);
	mActionDecreaseContrast->setStatusTip("��С�Աȶ�");
	mActionDecreaseContrast->setIcon(uavCore::getThemeIcon("mActionDecreaseContrast.svg"));
	connect( mActionDecreaseContrast, SIGNAL( triggered() ), this, SLOT( decreaseContrast() ) );

	// ��ǩ��������
	mActionLabeling = new QAction("ͼ���ǩѡ��", this);
	mActionLabeling->setStatusTip("ͼ���ǩѡ��");
	mActionLabeling->setIcon(uavCore::getThemeIcon("mActionLabeling.png"));
	connect( mActionLabeling, SIGNAL( triggered() ), this, SLOT( labeling() ) );

	mActionShowPinnedLabels = new QAction("ͻ��ʵ�ֶ�ס�ı�ǩ", this);
	mActionShowPinnedLabels->setStatusTip("ͻ��ʵ�ֶ�ס�ı�ǩ");
	mActionShowPinnedLabels->setIcon(uavCore::getThemeIcon("mActionShowPinnedLabels.svg"));
	connect( mActionShowPinnedLabels, SIGNAL( toggled( bool ) ), this, SLOT( showPinnedLabels( bool ) ) );

	mActionPinLabels = new QAction("��ס/ȡ����ס��ǩ", this);
	mActionPinLabels->setStatusTip("�ڱ�ǩ�ϵ����ѡȡ�Զ�ס��ǩ/nͬʱ��Shift��ȡ����ǩ��ס״̬,��Ctrl(cmd)���л���ס״̬/n���������пɱ༭ͼ�����Ч");
	mActionPinLabels->setIcon(uavCore::getThemeIcon("mActionPinLabels.svg"));
	connect( mActionPinLabels, SIGNAL( triggered() ), this, SLOT( pinLabels() ) );

	mActionShowHideLabels = new QAction("��ʾ/���ر�ǩ", this);
	mActionShowHideLabels->setStatusTip("�ڱ�ǩ�ϵ����ѡȡ����ʾ��ǩ/nͬʱ��Shift�������ر�ǩ/n�������Ե�ǰ��Ŀɱ༭ͼ����Ч");
	mActionShowHideLabels->setIcon(uavCore::getThemeIcon("mActionShowHideLabels.svg"));
	connect( mActionShowHideLabels, SIGNAL( triggered() ), this, SLOT( showHideLabels() ) );

	mActionMoveLabel = new QAction("�ƶ���ǩ", this);
	mActionMoveLabel->setStatusTip("�ƶ���ǩ");
	mActionMoveLabel->setIcon(uavCore::getThemeIcon("mActionMoveLabel.png"));
	connect( mActionMoveLabel, SIGNAL( triggered() ), this, SLOT( moveLabel() ) );

	mActionRotateLabel = new QAction("��ת��ǩ", this);
	mActionRotateLabel->setStatusTip("��סCtrl(cmd),��������Ϊ15��");
	mActionRotateLabel->setIcon(uavCore::getThemeIcon("mActionRotateLabel.png"));
	connect( mActionRotateLabel, SIGNAL( triggered() ), this, SLOT( rotateLabel() ) );

	mActionChangeLabelProperties = new QAction("���ı�ǩ", this);
	mActionChangeLabelProperties->setStatusTip("���ı�ǩ");
	mActionChangeLabelProperties->setIcon(uavCore::getThemeIcon("mActionChangeLabelProperties.png"));
	connect( mActionChangeLabelProperties, SIGNAL( triggered() ), this, SLOT( changeLabelProperties() ) );

	// �༭����
	mActionCopyStyle = new QAction("������ʽ", this);
	mActionCopyStyle->setStatusTip("������ʽ");
	mActionCopyStyle->setIcon(uavCore::getThemeIcon("mActionEditCopy.png"));
	connect( mActionCopyStyle, SIGNAL( triggered() ), this, SLOT( copyStyle() ) );

	mActionPasteStyle = new QAction("ճ����ʽ", this);
	mActionPasteStyle->setStatusTip("ճ����ʽ");
	mActionPasteStyle->setIcon(uavCore::getThemeIcon("mActionEditPaste.png"));
	connect( mActionPasteStyle, SIGNAL( triggered() ), this, SLOT( pasteStyle() ) );

	// �ع�㶯��
	mOpenPosFile = new QAction("�����ع���ļ�", this);
	mOpenPosFile->setStatusTip("�����ع���ļ�");
	mOpenPosFile->setIcon(uavCore::getThemeIcon("mActionCapturePoint.png"));
	connect( mOpenPosFile, SIGNAL( triggered() ), this, SLOT( openPosFile() ) );

	mPosTransform = new QAction("�ع������ת��", this);
	mPosTransform->setStatusTip("�ع������ת��");
	mPosTransform->setIcon(uavCore::getThemeIcon("mIconAtlas.svg"));
	connect( mPosTransform, SIGNAL( triggered() ), this, SLOT( posTransform() ) );

	mPosSketchMap = new QAction("����������ͼ", this);
	mPosSketchMap->setStatusTip("����������ͼ");
	mPosSketchMap->setIcon(uavCore::getThemeIcon("mActionCapturePolygon.png"));
	connect( mPosSketchMap, SIGNAL( triggered() ), this, SLOT( posSketchMap() ) );

	mPosOneButton = new QAction("һ������", this);
	mPosOneButton->setStatusTip("һ������");
	mPosOneButton->setIcon(uavCore::getThemeIcon("mActionSelect.svg"));
	connect( mPosOneButton, SIGNAL( triggered() ), this, SLOT( posOneButton() ) );

	mPosExport = new QAction("�����ع���ļ�", this);
	mPosExport->setStatusTip("�����ع���ļ�");
	mPosExport->setIcon(uavCore::getThemeIcon("mActionSharingExport.svg"));
	connect( mPosExport, SIGNAL( triggered() ), this, SLOT( posExport() ) );

	// ��̬����
	mPosLinkPhoto = new QAction("PP��̬����", this);
	mPosLinkPhoto->setStatusTip("PP��̬����");
	mPosLinkPhoto->setIcon(uavCore::getThemeIcon("mActionLink.svg"));
	connect( mPosLinkPhoto, SIGNAL( triggered() ), this, SLOT( posLinkPhoto() ) );

	mMatchPosName = new QAction("PP�����Զ�ƥ��", this);
	mMatchPosName->setStatusTip("PP�����Զ�ƥ��");
	mMatchPosName->setIcon(uavCore::getThemeIcon("mActionExportMapServer.png"));
	connect( mMatchPosName, SIGNAL( triggered() ), this, SLOT( ppMatchPosName() ) );	// δ���

	// ���ݷ���
	mAnalysisOverlapping = new QAction("��Ƭ�ص��ȷ���", this);
	mAnalysisOverlapping->setStatusTip("��Ƭ�ص��ȷ���");
	mAnalysisOverlapping->setIcon(uavCore::getThemeIcon("mActionMoveItemsToTop.png"));
	connect( mAnalysisOverlapping, SIGNAL( triggered() ), this, SLOT(  ) );

	mAnalysisOmega = new QAction("��Ƭ�Ƿ���", this);
	mAnalysisOmega->setStatusTip("��Ƭ�Ƿ���");
	mAnalysisOmega->setIcon(uavCore::getThemeIcon("mActionInvertSelection.png"));
	connect( mAnalysisOmega, SIGNAL( triggered() ), this, SLOT(  ) );

	mAnalysisPhi = new QAction("��б�Ƿ���", this);
	mAnalysisPhi->setStatusTip("��б�Ƿ���");
	mAnalysisPhi->setIcon(uavCore::getThemeIcon("mActionNodeTool.png"));
	connect( mAnalysisPhi, SIGNAL( triggered() ), this, SLOT(  ) );
}

void UavMain::createMenus()
{
	// Panel and Toolbar Submenus
	mPanelMenu = new QMenu( tr( "Panels" ), this );
	mPanelMenu->setObjectName( "mPanelMenu" );
	mToolbarMenu = new QMenu( tr( "Toolbars" ), this );
	mToolbarMenu->setObjectName( "mToolbarMenu" );

	//! ��Ŀ�˵�
	ui.mProjectMenu->addAction(mActionNewProject);
	ui.mProjectMenu->addSeparator();
	ui.mProjectMenu->addAction(mActionSaveMapAsImage);
	ui.mProjectMenu->addSeparator();
	ui.mProjectMenu->addAction(mActionProjectProperties);
	ui.mProjectMenu->addSeparator();
	ui.mProjectMenu->addAction(mActionExit);

	//! ��ͼ�˵�
	ui.mViewMenu->addAction(mActionPan);
	ui.mViewMenu->addAction(mActionPanToSelected);
	ui.mViewMenu->addAction(mActionZoomIn);
	ui.mViewMenu->addAction(mActionZoomOut);
	ui.mViewMenu->addSeparator();

	QMenu *menuSelect = ui.mViewMenu->addMenu("ѡ��");
	menuSelect->addAction(mActionSelectFeatures);
	menuSelect->addAction(mActionSelectPolygon);
	menuSelect->addAction(mActionDeselectAll);
	menuSelect->addAction(mActionSelectAll);
	menuSelect->addAction(mActionInvertSelection);

	ui.mViewMenu->addAction(mActionIdentify);

	QMenu *menuMeasure = ui.mViewMenu->addMenu("����");
	menuMeasure->addAction(mActionMeasure);
	menuMeasure->addAction(mActionMeasureArea);

	ui.mViewMenu->addAction(mActionStatisticalSummary);
	ui.mViewMenu->addSeparator();
	ui.mViewMenu->addAction(mActionZoomFullExtent);
	ui.mViewMenu->addAction(mActionZoomToLayer);
	ui.mViewMenu->addAction(mActionZoomToSelected);
	ui.mViewMenu->addAction(mActionZoomLast);
	ui.mViewMenu->addAction(mActionZoomNext);
	ui.mViewMenu->addAction(mActionZoomActualSize);
	ui.mViewMenu->addSeparator();
	ui.mViewMenu->addAction(mActionMapTips);
	ui.mViewMenu->addAction(mActionDraw);

	//! ͼ��˵�
	QMenu *mNewLayerMenu = ui.mLayerMenu->addMenu("����ͼ��");
	mNewLayerMenu->addAction(mActionNewVectorLayer);

	QMenu *mAddLayerMenu = ui.mLayerMenu->addMenu("���ͼ��");
	mAddLayerMenu->addAction(mActionAddOgrLayer);
	mAddLayerMenu->addAction(mActionAddRasterLayer);
	mAddLayerMenu->addAction(mActionAddDelimitedText);

	ui.mLayerMenu->addSeparator();
	ui.mLayerMenu->addAction(mActionCopyStyle);
	ui.mLayerMenu->addAction(mActionPasteStyle);
	ui.mLayerMenu->addSeparator();
	ui.mLayerMenu->addAction(mActionOpenTable);
	ui.mLayerMenu->addSeparator();
	ui.mLayerMenu->addAction(mActionLayerSaveAs);
	ui.mLayerMenu->addAction(mActionRemoveLayer);
	ui.mLayerMenu->addAction(mActionSetLayerCRS);
	ui.mLayerMenu->addAction(mActionSetProjectCRSFromLayer);
	ui.mLayerMenu->addAction(mActionLayerProperties);
	ui.mLayerMenu->addAction(mActionLayerSubsetString);
	ui.mLayerMenu->addAction(mActionLabeling);
	ui.mLayerMenu->addSeparator();
	ui.mLayerMenu->addAction(mActionAddToOverview);
	ui.mLayerMenu->addAction(mActionAddAllToOverview);
	ui.mLayerMenu->addAction(mActionRemoveAllFromOverview);
	ui.mLayerMenu->addSeparator();
	ui.mLayerMenu->addAction(mActionShowAllLayers);
	ui.mLayerMenu->addAction(mActionHideAllLayers);
	ui.mLayerMenu->addAction(mActionShowSelectedLayers);
	ui.mLayerMenu->addAction(mActionHideSelectedLayers);

	//! �ع��˵�
	ui.mPosMenu->addAction(mOpenPosFile);
	ui.mPosMenu->addAction(mPosOneButton);
	ui.mPosMenu->addSeparator();
	ui.mPosMenu->addAction(mPosTransform);
	ui.mPosMenu->addAction(mPosSketchMap);
	ui.mPosMenu->addSeparator();
	ui.mPosMenu->addAction(mPosExport);
	ui.mPosMenu->addSeparator();
	
	//! ��̬�����˵�
	ui.mInteractiveMenu->addAction(mPosLinkPhoto);
	
	//! ���ݷ����˵�
	ui.mAnalysisMenu->addAction(mAnalysisOverlapping);
	ui.mAnalysisMenu->addAction(mAnalysisOmega);
	ui.mAnalysisMenu->addAction(mAnalysisPhi);

	//! ���ò˵�
	ui.mSettingsMenu->addAction(mActionCustomProjection);
	ui.mSettingsMenu->addAction(mActionOptions);

	mToolbarMenu = new QMenu( "������", this );
	mToolbarMenu->setObjectName( "mToolbarMenu" );
}

void UavMain::createToolBars()
{
	QSettings settings;

	//! �ļ�������
	mFileToolBar = new QToolBar("�ļ�������", this);
	this->addToolBar(Qt::TopToolBarArea, mFileToolBar);
	mFileToolBar->addAction(mActionNewProject);
	mFileToolBar->addAction(mActionSaveMapAsImage);

	//! ͼ���������
	mLayerToolBar = new QToolBar("ͼ���������", this);
	this->addToolBar(Qt::TopToolBarArea, mLayerToolBar);
	mLayerToolBar->addAction(mActionAddOgrLayer);
	mLayerToolBar->addAction(mActionAddRasterLayer);
	mLayerToolBar->addAction(mActionAddDelimitedText);
	mLayerToolBar->addAction(mActionNewVectorLayer);

	//! ��ͼ���������
	mMapNavToolBar = new QToolBar("��ͼ���������", this);
	this->addToolBar(Qt::TopToolBarArea, mMapNavToolBar);
	mMapNavToolBar->addAction(mActionPan);
	mMapNavToolBar->addAction(mActionPanToSelected);
	mMapNavToolBar->addAction(mActionZoomIn);
	mMapNavToolBar->addAction(mActionZoomOut);
	mMapNavToolBar->addAction(mActionZoomActualSize);
	mMapNavToolBar->addAction(mActionZoomFullExtent);
	mMapNavToolBar->addAction(mActionZoomToSelected);
	mMapNavToolBar->addAction(mActionZoomToLayer);
	mMapNavToolBar->addAction(mActionZoomLast);
	mMapNavToolBar->addAction(mActionZoomNext);
	mMapNavToolBar->addAction(mActionDraw);

	//! ���Թ�����
	mAttributesToolBar = new QToolBar("���Թ�����", this);
	this->addToolBar(Qt::TopToolBarArea, mAttributesToolBar);
	mAttributesToolBar->addAction(mActionIdentify);
	mAttributesToolBar->addAction(mActionDeselectAll);
	mAttributesToolBar->addAction(mActionOpenTable);
	mAttributesToolBar->addAction(mActionStatisticalSummary);
	mAttributesToolBar->addAction(mActionMapTips);

	QToolButton *bt = new QToolButton( mAttributesToolBar );	//ѡ�񹤾߰�ť
	bt->setPopupMode( QToolButton::MenuButtonPopup );
	bt->addAction( mActionSelectAll );
	bt->addAction(mActionInvertSelection);
	bt->setDefaultAction(mActionSelectAll);
	QAction* selectionAction = mAttributesToolBar->insertWidget( mActionDeselectAll, bt );
	selectionAction->setObjectName( "ActionSelection" );

	bt = new QToolButton( mAttributesToolBar );					//ѡ�񹤾߰�ť
	bt->setPopupMode( QToolButton::MenuButtonPopup );
	bt->addAction(mActionSelectFeatures);
	bt->addAction(mActionSelectPolygon);

	QAction* defSelectAction = mActionSelectFeatures;
	switch ( settings.value( "/UI/selectTool", 0 ).toInt() )
	{
	case 0:
		defSelectAction = mActionSelectFeatures;
		break;
	case 1:
		defSelectAction = mActionSelectFeatures;
		break;
	case 2:
		defSelectAction = mActionSelectPolygon;
		break;
	}
	bt->setDefaultAction( defSelectAction );
	QAction* selectAction = mAttributesToolBar->insertWidget( selectionAction, bt );
	selectAction->setObjectName( "ActionSelect" );
	connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

	bt = new QToolButton( mAttributesToolBar );					//�������߰�ť
	bt->setPopupMode( QToolButton::MenuButtonPopup );
	bt->addAction( mActionMeasure );
	bt->addAction( mActionMeasureArea );

	QAction* defMeasureAction = mActionMeasure;
	switch ( settings.value( "/UI/measureTool", 0 ).toInt() )
	{
	case 0:
		defMeasureAction = mActionMeasure;
		break;
	case 1:
		defMeasureAction = mActionMeasureArea;
		break;
	}
	bt->setDefaultAction( defMeasureAction );
	QAction* measureAction = mAttributesToolBar->insertWidget( mActionMapTips, bt );
	measureAction->setObjectName( "ActionMeasure" );
	connect( bt, SIGNAL( triggered( QAction * ) ), this, SLOT( toolButtonActionTriggered( QAction * ) ) );

	//! դ�񹤾���
	mRasterToolBar = new QToolBar("դ�񹤾���", this);
	this->addToolBar(Qt::TopToolBarArea, mRasterToolBar);
	mRasterToolBar->addAction(mActionLocalCumulativeCutStretch);
	mRasterToolBar->addAction(mActionFullCumulativeCutStretch);
	mRasterToolBar->addAction(mActionLocalHistogramStretch);
	mRasterToolBar->addAction(mActionFullHistogramStretch);
	mRasterToolBar->addAction(mActionIncreaseBrightness);
	mRasterToolBar->addAction(mActionDecreaseBrightness);
	mRasterToolBar->addAction(mActionIncreaseContrast);
	mRasterToolBar->addAction(mActionDecreaseContrast);

	//! ��ǩ������
	mLabelToolBar = new QToolBar("��ǩ������", this);
	this->addToolBar(Qt::TopToolBarArea, mLabelToolBar);
	mLabelToolBar->addAction(mActionLabeling);
	mLabelToolBar->addAction(mActionShowPinnedLabels);
	mLabelToolBar->addAction(mActionPinLabels);
	mLabelToolBar->addAction(mActionShowHideLabels);
	mLabelToolBar->addAction(mActionMoveLabel);
	mLabelToolBar->addAction(mActionRotateLabel);
	mLabelToolBar->addAction(mActionChangeLabelProperties);

	QList<QToolBar*> toolbarMenuToolBars;
	toolbarMenuToolBars << mFileToolBar
		<< mLayerToolBar
		<< mMapNavToolBar
		<< mAttributesToolBar
		<< mRasterToolBar
		<< mLabelToolBar;

	QList<QAction*> toolbarMenuActions;
	// ���ò������ƣ��Ա����ǿ������Զ�����ʹ��
	foreach ( QToolBar *toolBar, toolbarMenuToolBars )
	{
		toolBar->toggleViewAction()->setObjectName( "mActionToggle" + toolBar->objectName().mid( 1 ) );
		toolbarMenuActions << toolBar->toggleViewAction();
	}

	mToolbarMenu->addActions( toolbarMenuActions );
}

void UavMain::createStatusBar()
{
	//! ɾ���������µ��ӱ߽�
	statusBar()->setStyleSheet( "QStatusBar::item {border: none;}" );
		
	//! �������ߡ�����ϵ�������������ӵ�״̬����������ʾ��ѡ��
	mProgressBar = new QProgressBar( statusBar() );
	mProgressBar->setObjectName( "mProgressBar" );
	mProgressBar->setMaximumWidth( 100 );
	mProgressBar->hide();
	mProgressBar->setWhatsThis( "��ʾ��Ⱦ��ʱ���ܼ��Ͳ�����״̬������" );
	statusBar()->addPermanentWidget( mProgressBar, 1 );
	
	//��������������Ⱦ����ʾ��æ������
	connect( mMapCanvas, SIGNAL( renderStarting() ), this, SLOT( canvasRefreshStarted() ) );
	connect( mMapCanvas, SIGNAL( mapCanvasRefreshed() ), this, SLOT( canvasRefreshFinished() ) );

	//QFont myFont( "΢���ź�", 9 );
	//statusBar()->setFont( myFont );

	//��ʾ����ؼ�
	mCoordsEdit = new QgsStatusBarCoordinatesWidget( statusBar() );
	mCoordsEdit->setMapCanvas( mMapCanvas );
	//mCoordsEdit->setFont( myFont );
	statusBar()->addPermanentWidget( mCoordsEdit, 0 );

	// ���һ����ǩ��ʾ������
	mScaleLabel = new QLabel( QString(), statusBar() );
	mScaleLabel->setObjectName( "mScaleLable" );
	//mScaleLabel->setFont( myFont );
	mScaleLabel->setMinimumWidth( 10 );
	//mScaleLabel->setMaximumHeight( 20 );
	mScaleLabel->setMargin( 3 );
	mScaleLabel->setAlignment( Qt::AlignCenter );
	mScaleLabel->setFrameStyle( QFrame::NoFrame );
	mScaleLabel->setText( "������" );
	mScaleLabel->setToolTip( "��ǰ��ͼ������" );
	statusBar()->addPermanentWidget( mScaleLabel, 0 );

	mScaleEdit = new QgsScaleComboBox( statusBar() );
	mScaleEdit->setObjectName( "mScaleEdit" );
	//mScaleEdit->setFont( myFont );
	// seems setFont() change font only for popup not for line edit,
	// so we need to set font for it separately
	//mScaleEdit->lineEdit()->setFont( myFont );
	mScaleEdit->setMinimumWidth( 10 );
	mScaleEdit->setContentsMargins( 0, 0, 0, 0 );
	mScaleEdit->setWhatsThis( "��ʾ��ǰ��ͼ�ı�����" );
	mScaleEdit->setToolTip( "��ǰ��ͼ�ı�����" );

	statusBar()->addPermanentWidget( mScaleEdit, 0 );
	connect( mScaleEdit, SIGNAL( scaleChanged() ), this, SLOT( userScale() ) );


	if ( QgsMapCanvas::rotationEnabled() )
	{
		// ���һ���ؼ����� ��ʾ/���� ��ǰ�Ƕ�
		mRotationLabel = new QLabel( QString(), statusBar() );
		mRotationLabel->setObjectName( "mRotationLabel" );
		//mRotationLabel->setFont( myFont );
		mRotationLabel->setMinimumWidth( 10 );
		//mRotationLabel->setMaximumHeight( 20 );
		mRotationLabel->setMargin( 3 );
		mRotationLabel->setAlignment( Qt::AlignCenter );
		mRotationLabel->setFrameStyle( QFrame::NoFrame );
		mRotationLabel->setText( "��ת�Ƕ�" );
		mRotationLabel->setToolTip( "��ǰ��ͼ��˳ʱ�뷽����ת�Ķ���" );
		statusBar()->addPermanentWidget( mRotationLabel, 0 );

		mRotationEdit = new QgsDoubleSpinBox( statusBar() );
		mRotationEdit->setObjectName( "mRotationEdit" );
		mRotationEdit->setClearValue( 0.0 );
		mRotationEdit->setKeyboardTracking( false );
		mRotationEdit->setMaximumWidth( 120 );
		mRotationEdit->setDecimals( 1 );
		mRotationEdit->setRange( -180.0, 180.0 );
		mRotationEdit->setWrapping( true );
		mRotationEdit->setSingleStep( 5.0 );
		//mRotationEdit->setFont( myFont );
		mRotationEdit->setWhatsThis( "��ǰ��ͼ��˳ʱ�뷽����ת�Ķ���,��������༭������ת�Ƕ�");
		mRotationEdit->setToolTip( "��ǰ��ͼ��˳ʱ�뷽����ת�Ķ���" );
		statusBar()->addPermanentWidget( mRotationEdit, 0 );
		connect( mRotationEdit, SIGNAL( valueChanged( double ) ), this, SLOT( userRotation() ) );

		showRotation();
	}

	// ��Ⱦ����
	mRenderSuppressionCBox = new QCheckBox( "��Ⱦ", statusBar() );
	mRenderSuppressionCBox->setObjectName( "mRenderSuppressionCBox" );
	mRenderSuppressionCBox->setChecked( true );
	//mRenderSuppressionCBox->setFont( myFont );
	mRenderSuppressionCBox->setWhatsThis( "ѡ��ʱ����ͼͼ����Ⱦ��Ӧ���������������δѡ�У�û����Ⱦ��ɡ���ʹ����������Ӵ��������Ⱦ֮ǰ��־���ǡ�" );
	mRenderSuppressionCBox->setToolTip( "�л���ͼ��Ⱦ" );
	statusBar()->addPermanentWidget( mRenderSuppressionCBox, 0 );

	// ��������ϵ
	mOnTheFlyProjectionStatusButton = new QToolButton( statusBar() );
	mOnTheFlyProjectionStatusButton->setAutoRaise( true );
	mOnTheFlyProjectionStatusButton->setToolButtonStyle( Qt::ToolButtonTextBesideIcon );
	mOnTheFlyProjectionStatusButton->setObjectName( "mOntheFlyProjectionStatusButton" );

	mOnTheFlyProjectionStatusButton->setMaximumHeight( mScaleLabel->height() );
	mOnTheFlyProjectionStatusButton->setIcon( uavCore::getThemeIcon( "mIconProjectionEnabled.png" ) );
	mOnTheFlyProjectionStatusButton->setWhatsThis( "��ͼ����ʾ��̬ͶӰ�Ƿ����á�������ͼ�꣬�ڵ�����Ŀ���ԶԻ����иı������Ϊ" );
	mOnTheFlyProjectionStatusButton->setToolTip( tr( "CRS ״̬ - ������������ϵ�Ի���" ) );
	connect( mOnTheFlyProjectionStatusButton, SIGNAL( clicked() ),
		this, SLOT( projectPropertiesProjections() ) );//����ʱ���ԶԻ����е���
	statusBar()->addPermanentWidget( mOnTheFlyProjectionStatusButton, 0 );
	statusBar()->showMessage( "׼��" );

	// ��Ϣ��ť
	mMessageButton = new QToolButton( statusBar() );
	mMessageButton->setAutoRaise( true );
	mMessageButton->setIcon( uavCore::getThemeIcon( "mMessageLogRead.svg" ) );
	mMessageButton->setToolTip( tr( "Messages" ) );
	mMessageButton->setWhatsThis( tr( "Messages" ) );
	mMessageButton->setToolButtonStyle( Qt::ToolButtonTextBesideIcon );
	mMessageButton->setObjectName( "mMessageLogViewerButton" );
	mMessageButton->setMaximumHeight( mScaleLabel->height() );
	mMessageButton->setCheckable( true );
	statusBar()->addPermanentWidget( mMessageButton, 0 );
}

void UavMain::toolButtonActionTriggered( QAction *action )
{
	QToolButton *bt = qobject_cast<QToolButton *>( sender() );
	if ( !bt )
		return;

	QSettings settings;
	if ( action == mActionSelectFeatures )
		settings.setValue( "/UI/selectTool", 1 );
	else if ( action == mActionSelectPolygon )
		settings.setValue( "/UI/selectTool", 2 );
	else if ( action == mActionMeasure )
		settings.setValue( "/UI/measureTool", 0 );
	else if ( action == mActionMeasureArea )
		settings.setValue( "/UI/measureTool", 1 );
	else if ( action == mActionNewVectorLayer )
		settings.setValue( "/UI/defaultNewLayer", 1 );
	bt->setDefaultAction( action );
}

void UavMain::showRotation()
{
	// ���µ�ǰ״̬������ת��ǩ��
	double myrotation = mMapCanvas->rotation();
	mRotationEdit->setValue( myrotation );
}

void UavMain::createCanvasTools()
{
	// create tools
	mMapTools.mZoomIn = new QgsMapToolZoom( mMapCanvas, false /* zoomIn */ );
	mMapTools.mZoomIn->setAction( mActionZoomIn );
	mMapTools.mZoomOut = new QgsMapToolZoom( mMapCanvas, true /* zoomOut */ );
	mMapTools.mZoomOut->setAction( mActionZoomOut );
	mMapTools.mPan = new QgsMapToolPan( mMapCanvas );
	mMapTools.mPan->setAction( mActionPan );
	mMapTools.mIdentify = new QgsMapToolIdentifyAction( mMapCanvas );
	mMapTools.mIdentify->setAction( mActionIdentify );
	//connect( mMapTools.mIdentify, SIGNAL( copyToClipboard( QgsFeatureStore & ) ),
	//	this, SLOT( copyFeatures( QgsFeatureStore & ) ) );
	//mMapTools.mFeatureAction = new QgsMapToolFeatureAction( mMapCanvas );
	//mMapTools.mFeatureAction->setAction( mActionFeatureAction );
	mMapTools.mMeasureDist = new QgsMeasureTool( mMapCanvas, false /* area */ );
	mMapTools.mMeasureDist->setAction( mActionMeasure );
	mMapTools.mMeasureArea = new QgsMeasureTool( mMapCanvas, true /* area */ );
	mMapTools.mMeasureArea->setAction( mActionMeasureArea );
	//mMapTools.mMeasureAngle = new QgsMapToolMeasureAngle( mMapCanvas );
	//mMapTools.mMeasureAngle->setAction( mActionMeasureAngle );
//	mMapTools.mTextAnnotation = new QgsMapToolTextAnnotation( mMapCanvas );
//	mMapTools.mTextAnnotation->setAction( mActionTextAnnotation );
//	mMapTools.mFormAnnotation = new QgsMapToolFormAnnotation( mMapCanvas );
//	mMapTools.mFormAnnotation->setAction( mActionFormAnnotation );
//	mMapTools.mHtmlAnnotation = new QgsMapToolHtmlAnnotation( mMapCanvas );
//	mMapTools.mHtmlAnnotation->setAction( mActionHtmlAnnotation );
//	mMapTools.mSvgAnnotation = new QgsMapToolSvgAnnotation( mMapCanvas );
//	mMapTools.mSvgAnnotation->setAction( mActionSvgAnnotation );
//	mMapTools.mAnnotation = new QgsMapToolAnnotation( mMapCanvas );
//	mMapTools.mAnnotation->setAction( mActionAnnotation );
//	mMapTools.mAddFeature = new QgsMapToolAddFeature( mMapCanvas );
//	mMapTools.mAddFeature->setAction( mActionAddFeature );
//	mMapTools.mCircularStringCurvePoint = new QgsMapToolCircularStringCurvePoint( dynamic_cast<QgsMapToolAddFeature*>( mMapTools.mAddFeature ), mMapCanvas );
//	mMapTools.mCircularStringCurvePoint->setAction( mActionCircularStringCurvePoint );
//	mMapTools.mCircularStringRadius = new QgsMapToolCircularStringRadius( dynamic_cast<QgsMapToolAddFeature*>( mMapTools.mAddFeature ), mMapCanvas );
//	mMapTools.mCircularStringRadius->setAction( mActionCircularStringRadius );
//	mMapTools.mMoveFeature = new QgsMapToolMoveFeature( mMapCanvas );
//	mMapTools.mMoveFeature->setAction( mActionMoveFeature );
//	mMapTools.mRotateFeature = new QgsMapToolRotateFeature( mMapCanvas );
//	mMapTools.mRotateFeature->setAction( mActionRotateFeature );
//	//need at least geos 3.3 for OffsetCurve tool
//#if defined(GEOS_VERSION_MAJOR) && defined(GEOS_VERSION_MINOR) && \
//	((GEOS_VERSION_MAJOR>3) || ((GEOS_VERSION_MAJOR==3) && (GEOS_VERSION_MINOR>=3)))
//	mMapTools.mOffsetCurve = new QgsMapToolOffsetCurve( mMapCanvas );
//	mMapTools.mOffsetCurve->setAction( mActionOffsetCurve );
//#else
//	mAdvancedDigitizeToolBar->removeAction( mActionOffsetCurve );
//	mEditMenu->removeAction( mActionOffsetCurve );
//	mMapTools.mOffsetCurve = 0;
//#endif //GEOS_VERSION
//	mMapTools.mReshapeFeatures = new QgsMapToolReshape( mMapCanvas );
//	mMapTools.mReshapeFeatures->setAction( mActionReshapeFeatures );
//	mMapTools.mSplitFeatures = new QgsMapToolSplitFeatures( mMapCanvas );
//	mMapTools.mSplitFeatures->setAction( mActionSplitFeatures );
//	mMapTools.mSplitParts = new QgsMapToolSplitParts( mMapCanvas );
//	mMapTools.mSplitParts->setAction( mActionSplitParts );
	mMapTools.mSelectFeatures = new QgsMapToolSelectFeatures( mMapCanvas );
	mMapTools.mSelectFeatures->setAction( mActionSelectFeatures );
	mMapTools.mSelectPolygon = new QgsMapToolSelectPolygon( mMapCanvas );
	mMapTools.mSelectPolygon->setAction( mActionSelectPolygon );
//	mMapTools.mSelectFreehand = new QgsMapToolSelectFreehand( mMapCanvas );
//	mMapTools.mSelectFreehand->setAction( mActionSelectFreehand );
//	mMapTools.mSelectRadius = new QgsMapToolSelectRadius( mMapCanvas );
//	mMapTools.mSelectRadius->setAction( mActionSelectRadius );
//	mMapTools.mAddRing = new QgsMapToolAddRing( mMapCanvas );
//	mMapTools.mAddRing->setAction( mActionAddRing );
//	mMapTools.mFillRing = new QgsMapToolFillRing( mMapCanvas );
//	mMapTools.mFillRing->setAction( mActionFillRing );
//	mMapTools.mAddPart = new QgsMapToolAddPart( mMapCanvas );
//	mMapTools.mAddPart->setAction( mActionAddPart );
//	mMapTools.mSimplifyFeature = new QgsMapToolSimplify( mMapCanvas );
//	mMapTools.mSimplifyFeature->setAction( mActionSimplifyFeature );
//	mMapTools.mDeleteRing = new QgsMapToolDeleteRing( mMapCanvas );
//	mMapTools.mDeleteRing->setAction( mActionDeleteRing );
//	mMapTools.mDeletePart = new QgsMapToolDeletePart( mMapCanvas );
//	mMapTools.mDeletePart->setAction( mActionDeletePart );
//	mMapTools.mNodeTool = new QgsMapToolNodeTool( mMapCanvas );
//	mMapTools.mNodeTool->setAction( mActionNodeTool );
//	mMapTools.mRotatePointSymbolsTool = new QgsMapToolRotatePointSymbols( mMapCanvas );
//	mMapTools.mRotatePointSymbolsTool->setAction( mActionRotatePointSymbols );
//	mMapTools.mPinLabels = new QgsMapToolPinLabels( mMapCanvas );
//	mMapTools.mPinLabels->setAction( mActionPinLabels );
//	mMapTools.mShowHideLabels = new QgsMapToolShowHideLabels( mMapCanvas );
//	mMapTools.mShowHideLabels->setAction( mActionShowHideLabels );
//	mMapTools.mMoveLabel = new QgsMapToolMoveLabel( mMapCanvas );
//	mMapTools.mMoveLabel->setAction( mActionMoveLabel );
//
//	mMapTools.mRotateLabel = new QgsMapToolRotateLabel( mMapCanvas );
//	mMapTools.mRotateLabel->setAction( mActionRotateLabel );
//	mMapTools.mChangeLabelProperties = new QgsMapToolChangeLabelProperties( mMapCanvas );
//	mMapTools.mChangeLabelProperties->setAction( mActionChangeLabelProperties );
	//ensure that non edit tool is initialized or we will get crashes in some situations
	mNonEditMapTool = mMapTools.mPan;
}

QgsMapCanvas * UavMain::mapCanvas()
{
	Q_ASSERT( mMapCanvas );
	return mMapCanvas;
}

void UavMain::initLayerTreeView()
{
	mLayerTreeView->setWhatsThis( "��ʾ��ǰ�ڵ�ͼ�����ϵ�����ͼ�㡣�����ѡ����������ر�ͼ�㡣��ͼ����˫��������������ۺ������������ԡ�" );

	mLayerTreeDock = new QDockWidget( "ͼ�����", this );
	mLayerTreeDock->setObjectName( "Layers" );
	QFont myFont( "΢���ź�", 9 );
	mLayerTreeDock->setFont(myFont);
	mLayerTreeDock->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );

	QgsLayerTreeModel* model = new QgsLayerTreeModel( QgsProject::instance()->layerTreeRoot(), this );

	model->setFlag( QgsLayerTreeModel::AllowNodeReorder );
	model->setFlag( QgsLayerTreeModel::AllowNodeRename );
	model->setFlag( QgsLayerTreeModel::AllowNodeChangeVisibility );
	model->setFlag( QgsLayerTreeModel::ShowLegendAsTree );
	model->setAutoCollapseLegendNodes( 10 );
	QFont fontLayer, fontGroup;
	fontLayer.setBold( true );
	fontGroup.setBold( false );
	model->setLayerTreeNodeFont( QgsLayerTreeNode::NodeLayer, fontLayer );
	model->setLayerTreeNodeFont( QgsLayerTreeNode::NodeGroup, fontGroup );

	mLayerTreeView->setModel( model );

	//! ����Ҽ��˵�
	mLayerTreeView->setMenuProvider( new QgsAppLayerTreeViewMenuProvider( mLayerTreeView, mMapCanvas ) );

	connect( mLayerTreeView, SIGNAL( doubleClicked( QModelIndex ) ), this, SLOT( layerTreeViewDoubleClicked( QModelIndex ) ) );
	connect( mLayerTreeView, SIGNAL( currentLayerChanged( QgsMapLayer* ) ), this, SLOT( activeLayerChanged( QgsMapLayer* ) ) );
	connect( mLayerTreeView->selectionModel(), SIGNAL( currentChanged( QModelIndex, QModelIndex ) ), this, SLOT( updateNewLayerInsertionPoint() ) );
	connect( QgsProject::instance()->layerTreeRegistryBridge(), SIGNAL( addedLayersToLayerTree( QList<QgsMapLayer*> ) ),
		this, SLOT( autoSelectAddedLayer( QList<QgsMapLayer*> ) ) );

	// ������
	QAction* actionAddGroup = new QAction( "������", this );
	actionAddGroup->setIcon( uavCore::getThemeIcon( "mActionAddGroup.svg" ) );
	actionAddGroup->setToolTip( "������" );
	connect( actionAddGroup, SIGNAL( triggered( bool ) ), mLayerTreeView->defaultActions(), SLOT( addGroup() ) );

	// ͼ��ɼ���
	QToolButton* btnVisibilityPresets = new QToolButton;
	btnVisibilityPresets->setAutoRaise( true );
	btnVisibilityPresets->setToolTip( "����ͼ��ɼ���" );
	btnVisibilityPresets->setIcon( uavCore::getThemeIcon( "mActionShowAllLayers.svg" ) );
	btnVisibilityPresets->setPopupMode( QToolButton::InstantPopup );
	btnVisibilityPresets->setMenu( QgsVisibilityPresets::instance()->menu() );

	// ͼ��������
	mActionFilterLegend = new QAction( "����ͼ���ݹ���ͼ��", this );
	mActionFilterLegend->setCheckable( true );
	mActionFilterLegend->setToolTip( tr( "ͨ����ͼ���ݹ���ͼ��" ) );
	mActionFilterLegend->setIcon( uavCore::getThemeIcon( "mActionFilter2.svg" ) );
	connect( mActionFilterLegend, SIGNAL( toggled( bool ) ), this, SLOT( updateFilterLegend() ) );

	//mLegendExpressionFilterButton = new QgsLegendFilterButton( this );
	//mLegendExpressionFilterButton->setToolTip( tr( "Filter legend by expression" ) );
	//connect( mLegendExpressionFilterButton, SIGNAL( toggled( bool ) ), this, SLOT( toggleFilterLegendByExpression( bool ) ) );

	// expand / collapse tool buttons
	QAction* actionExpandAll = new QAction( "ȫ��չ��", this );
	actionExpandAll->setIcon( uavCore::getThemeIcon( "mActionExpandTree.svg" ) );
	actionExpandAll->setToolTip( "ȫ��չ��" );
	connect( actionExpandAll, SIGNAL( triggered( bool ) ), mLayerTreeView, SLOT( expandAll() ) );
	QAction* actionCollapseAll = new QAction( "ȫ���۵�", this );
	actionCollapseAll->setIcon( uavCore::getThemeIcon( "mActionCollapseTree.svg" ) );
	actionCollapseAll->setToolTip( "ȫ���۵�" );
	connect( actionCollapseAll, SIGNAL( triggered( bool ) ), mLayerTreeView, SLOT( collapseAll() ) );

	QToolBar* toolbar = new QToolBar();
	toolbar->setIconSize( QSize( 16, 16 ) );
	toolbar->addAction( actionAddGroup );
	toolbar->addWidget( btnVisibilityPresets );
	toolbar->addAction( mActionFilterLegend );
	//toolbar->addWidget( mLegendExpressionFilterButton );
	toolbar->addAction( actionExpandAll );
	toolbar->addAction( actionCollapseAll );
	toolbar->addAction( mActionRemoveLayer );

	QVBoxLayout* vboxLayout = new QVBoxLayout;
	vboxLayout->setMargin( 0 );
	vboxLayout->addWidget( toolbar );
	vboxLayout->addWidget( mLayerTreeView );

	QWidget* w = new QWidget;
	w->setLayout( vboxLayout );
	mLayerTreeDock->setWidget( w );
	addDockWidget( Qt::LeftDockWidgetArea, mLayerTreeDock );

	mLayerTreeCanvasBridge = new QgsLayerTreeMapCanvasBridge( QgsProject::instance()->layerTreeRoot(), mMapCanvas, this );
	connect( QgsProject::instance(), SIGNAL( writeProject( QDomDocument& ) ), mLayerTreeCanvasBridge, SLOT( writeProject( QDomDocument& ) ) );
	connect( QgsProject::instance(), SIGNAL( readProject( QDomDocument ) ), mLayerTreeCanvasBridge, SLOT( readProject( QDomDocument ) ) );

	bool otfTransformAutoEnable = QSettings().value( "/Projections/otfTransformAutoEnable", true ).toBool();
	mLayerTreeCanvasBridge->setAutoEnableCrsTransform( otfTransformAutoEnable );

	mMapLayerOrder = new QgsCustomLayerOrderWidget( mLayerTreeCanvasBridge, this );
	mMapLayerOrder->setObjectName( "theMapLayerOrder" );

	mMapLayerOrder->setWhatsThis( "������ʾͼ���ڵ�ͼ����˳��." );
	mLayerOrderDock = new QDockWidget( "ͼ��˳�����", this );
	mLayerOrderDock->setObjectName( "LayerOrder" );
	mLayerOrderDock->setFont(myFont);
	mLayerOrderDock->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );

	mLayerOrderDock->setWidget( mMapLayerOrder );
	addDockWidget( Qt::LeftDockWidgetArea, mLayerOrderDock );
	mLayerOrderDock->hide();

	connect( mMapCanvas, SIGNAL( mapCanvasRefreshed() ), this, SLOT( updateFilterLegend() ) );
}

QgsClipboard * UavMain::clipboard()
{
	return mInternalClipboard;
}

QgsLayerTreeView * UavMain::layerTreeView()
{
	return mLayerTreeView;
}

void UavMain::createOverview()
{
	// overview canvas
	mOverviewCanvas = new QgsMapOverviewCanvas( nullptr, mMapCanvas );

	//set canvas color to default
	QSettings settings;
	int red = settings.value( "/qgis/default_canvas_color_red", 255 ).toInt();
	int green = settings.value( "/qgis/default_canvas_color_green", 255 ).toInt();
	int blue = settings.value( "/qgis/default_canvas_color_blue", 255 ).toInt();
	mOverviewCanvas->setBackgroundColor( QColor( red, green, blue ) );

	mOverviewCanvas->setWhatsThis( "ӥ�۵�ͼ�������˻�������������ʾһ����ͼ��λ������ʾ�ڵ�ͼ�ϻ����ĵ�ǰ�̶ȡ���ǰ��Χ��ʾΪ��ɫ���Ρ���ͼ�ϵ��κβ㶼���Ա���ӵ�ӥ�ۻ�����" );

	mOverviewMapCursor = new QCursor( Qt::OpenHandCursor );
	mOverviewCanvas->setCursor( *mOverviewMapCursor );
	mOverviewDock = new QDockWidget( "ӥ��ͼ���", this );
	mOverviewDock->setObjectName( "Overview" );
	QFont myFont( "΢���ź�", 9 );
	mOverviewDock->setFont(myFont);
	mOverviewDock->setAllowedAreas( Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea );
	mOverviewDock->setWidget( mOverviewCanvas );
	mOverviewDock->hide();
	addDockWidget( Qt::LeftDockWidgetArea, mOverviewDock );
	// add to the Panel submenu
	mPanelMenu->addAction( mOverviewDock->toggleViewAction() );

	mMapCanvas->enableOverviewMode( mOverviewCanvas );

	// moved here to set anti aliasing to both map canvas and overview
	QSettings mySettings;
	// Anti Aliasing enabled by default as of QGIS 1.7
	mMapCanvas->enableAntiAliasing( mySettings.value( "/qgis/enable_anti_aliasing", true ).toBool() );

	int action = mySettings.value( "/qgis/wheel_action", 2 ).toInt();
	double zoomFactor = mySettings.value( "/qgis/zoom_factor", 2 ).toDouble();
	mMapCanvas->setWheelAction( static_cast< QgsMapCanvas::WheelAction >( action ), zoomFactor );

	mMapCanvas->setCachingEnabled( mySettings.value( "/qgis/enable_render_caching", true ).toBool() );

	mMapCanvas->setParallelRenderingEnabled( mySettings.value( "/qgis/parallel_rendering", false ).toBool() );

	mMapCanvas->setMapUpdateInterval( mySettings.value( "/qgis/map_update_interval", 250 ).toInt() );
}

void UavMain::setupConnections()
{
	// connect the "cleanup" slot
	//connect( qApp, SIGNAL( aboutToQuit() ), this, SLOT( saveWindowState() ) );

	// ������Ƶ����ڣ���״̬������ʾ��������ϵ��
	connect( mMapCanvas, SIGNAL( xyCoordinates( const QgsPoint & ) ),
		this, SLOT( saveLastMousePosition( const QgsPoint & ) ) );
	connect( mMapCanvas, SIGNAL( extentsChanged() ),
		this, SLOT( extentChanged() ) );
	connect( mMapCanvas, SIGNAL( scaleChanged( double ) ),
		this, SLOT( showScale( double ) ) );
	connect( mMapCanvas, SIGNAL( rotationChanged( double ) ),
		this, SLOT( showRotation() ) );
	connect( mMapCanvas, SIGNAL( scaleChanged( double ) ),
		this, SLOT( updateMouseCoordinatePrecision() ) );
	//connect( mMapCanvas, SIGNAL( mapToolSet( QgsMapTool *, QgsMapTool * ) ),
	//	this, SLOT( mapToolChanged( QgsMapTool *, QgsMapTool * ) ) );
	connect( mMapCanvas, SIGNAL( selectionChanged( QgsMapLayer * ) ),
		this, SLOT( selectionChanged( QgsMapLayer * ) ) );
	connect( mMapCanvas, SIGNAL( extentsChanged() ),
		this, SLOT( markDirty() ) );
	connect( mMapCanvas, SIGNAL( layersChanged() ),
		this, SLOT( markDirty() ) );	//֪ͨһ����Ŀ�б仯

	connect( mMapCanvas, SIGNAL( zoomLastStatusChanged( bool ) ),
		mActionZoomLast, SLOT( setEnabled( bool ) ) );
	connect( mMapCanvas, SIGNAL( zoomNextStatusChanged( bool ) ),
		mActionZoomNext, SLOT( setEnabled( bool ) ) );
	connect( mRenderSuppressionCBox, SIGNAL( toggled( bool ) ),
		mMapCanvas, SLOT( setRenderFlag( bool ) ) );

	//connect( mMapCanvas, SIGNAL( destinationCrsChanged() ),
	//	this, SLOT( reprojectAnnotations() ) );

	// connect ��ͼ���������¼����������ǿ��Լ�飬���ѡ���Ҫ�ؼ��ϱ��뱻ɾ��
	connect( mMapCanvas, SIGNAL( keyPressed( QKeyEvent * ) ),
		this, SLOT( mapCanvas_keyPressed( QKeyEvent * ) ) );

	//// connect ��Ⱦ��
	connect( mMapCanvas, SIGNAL( hasCrsTransformEnabledChanged( bool ) ),
		this, SLOT( hasCrsTransformEnabled( bool ) ) );
	connect( mMapCanvas, SIGNAL( destinationCrsChanged() ),
		this, SLOT( destinationCrsChanged() ) );

	// connect legend signals
	connect( mLayerTreeView, SIGNAL( currentLayerChanged( QgsMapLayer * ) ),
		this, SLOT( activateDeactivateLayerRelatedActions( QgsMapLayer * ) ) );
	connect( mLayerTreeView->selectionModel(), SIGNAL( selectionChanged( QItemSelection, QItemSelection ) ),
		this, SLOT( legendLayerSelectionChanged() ) );
	connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( addedChildren( QgsLayerTreeNode*, int, int ) ),
		this, SLOT( markDirty() ) );
	connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( addedChildren( QgsLayerTreeNode*, int, int ) ),
		this, SLOT( updateNewLayerInsertionPoint() ) );
	connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( removedChildren( QgsLayerTreeNode*, int, int ) ),
		this, SLOT( markDirty() ) );
	connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( removedChildren( QgsLayerTreeNode*, int, int ) ),
		this, SLOT( updateNewLayerInsertionPoint() ) );
	connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( visibilityChanged( QgsLayerTreeNode*, Qt::CheckState ) ),
		this, SLOT( markDirty() ) );
	connect( mLayerTreeView->layerTreeModel()->rootGroup(), SIGNAL( customPropertyChanged( QgsLayerTreeNode*, QString ) ),
		this, SLOT( markDirty() ) );

	// connect ͼ��ע��
	connect( QgsMapLayerRegistry::instance(), SIGNAL( layersAdded( QList<QgsMapLayer *> ) ),
		this, SLOT( layersWereAdded( QList<QgsMapLayer *> ) ) );
	connect( QgsMapLayerRegistry::instance(),
		SIGNAL( layersWillBeRemoved( QStringList ) ),
		this, SLOT( removingLayers( QStringList ) ) );

	//// connect initialization signal
	//connect( this, SIGNAL( initializationCompleted() ),
	//	this, SLOT( fileOpenAfterLaunch() ) );

	//// Connect warning dialog from project reading
	//connect( QgsProject::instance(), SIGNAL( oldProjectVersionWarning( QString ) ),
	//	this, SLOT( oldProjectVersionWarning( QString ) ) );
	//connect( QgsProject::instance(), SIGNAL( layerLoaded( int, int ) ),
	//	this, SLOT( showProgress( int, int ) ) );
	//connect( QgsProject::instance(), SIGNAL( loadingLayer( QString ) ),
	//	this, SLOT( showStatusMessage( QString ) ) );
	//connect( QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ),
	//	this, SLOT( readProject( const QDomDocument & ) ) );
	//connect( QgsProject::instance(), SIGNAL( writeProject( QDomDocument & ) ),
	//	this, SLOT( writeProject( QDomDocument & ) ) );
	//connect( QgsProject::instance(), SIGNAL( writeProject( QDomDocument& ) ),
	//	this, SLOT( writeAnnotationItemsToProject( QDomDocument& ) ) );

	//connect( QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ), this, SLOT( loadComposersFromProject( const QDomDocument& ) ) );
	//connect( QgsProject::instance(), SIGNAL( readProject( const QDomDocument & ) ), this, SLOT( loadAnnotationItemsFromProject( const QDomDocument& ) ) );

	//connect( this, SIGNAL( projectRead() ),
	//	this, SLOT( fileOpenedOKAfterLaunch() ) );

	//// connect preview modes actions
	//connect( mActionPreviewModeOff, SIGNAL( triggered() ), this, SLOT( disablePreviewMode() ) );
	//connect( mActionPreviewModeGrayscale, SIGNAL( triggered() ), this, SLOT( activateGrayscalePreview() ) );
	//connect( mActionPreviewModeMono, SIGNAL( triggered() ), this, SLOT( activateMonoPreview() ) );
	//connect( mActionPreviewProtanope, SIGNAL( triggered() ), this, SLOT( activateProtanopePreview() ) );
	//connect( mActionPreviewDeuteranope, SIGNAL( triggered() ), this, SLOT( activateDeuteranopePreview() ) );

	//// handle deprecated labels in project for QGIS 2.0
	//connect( this, SIGNAL( newProject() ),
	//	this, SLOT( checkForDeprecatedLabelsInProject() ) );
	//connect( this, SIGNAL( projectRead() ),
	//	this, SLOT( checkForDeprecatedLabelsInProject() ) );

	//// setup undo/redo actions
	//connect( mUndoWidget, SIGNAL( undoStackChanged() ), this, SLOT( updateUndoActions() ) );
}

void UavMain::createMapTips()
{
	// Set up the timer for maptips. The timer is reset everytime the mouse is moved
	mpMapTipsTimer = new QTimer( mMapCanvas );
	// connect the timer to the maptips slot
	connect( mpMapTipsTimer, SIGNAL( timeout() ), this, SLOT( showMapTip() ) );
	// set the interval to 0.850 seconds - timer will be started next time the mouse moves
	mpMapTipsTimer->setInterval( 850 );
	// Create the maptips object
	mpMaptip = new QgsMapTip();
}

void UavMain::updateCRSStatusBar()
{
	mOnTheFlyProjectionStatusButton->setText( mMapCanvas->mapSettings().destinationCrs().authid() );

	if ( mMapCanvas->mapSettings().hasCrsTransformEnabled() )
	{
		mOnTheFlyProjectionStatusButton->setText( tr( "%1 (OTF)" ).arg( mOnTheFlyProjectionStatusButton->text() ) );
		mOnTheFlyProjectionStatusButton->setToolTip(
			tr( "��ǰ�������ϵ: %1 (OTFR ������)" ).arg( mMapCanvas->mapSettings().destinationCrs().description() ) );
		mOnTheFlyProjectionStatusButton->setIcon( uavCore::getThemeIcon( "mIconProjectionEnabled.png" ) );
	}
	else
	{
		mOnTheFlyProjectionStatusButton->setToolTip(
			tr( "��ǰ�������ϵ: %1 (OTFR �ѽ���)" ).arg( mMapCanvas->mapSettings().destinationCrs().description() ) );
		mOnTheFlyProjectionStatusButton->setIcon( uavCore::getThemeIcon( "mIconProjectionDisabled.png" ) );
	}
}

void UavMain::fileExit()
{
	qApp->exit( 0 );
}

//#include "qgsnewvectorlayerdialog.h"
void UavMain::newVectorLayer()
{
	//QString enc;
	//QString fileName = QgsNewVectorLayerDialog::runAndCreateLayer( this, &enc );
	////QString fileName = "D:/test.shp";
	//QGis::WkbType geometrytype = QGis::WKBPoint;
	//QString fileformat = geomDialog.selectedFileFormat();
	//QString enc = geomDialog.selectedFileEncoding();
	//int crsId = geomDialog.selectedCrsId();

	//if ( !fileName.isEmpty() )
	//{
	//	//��ͼ����ӵ���ͼ
	//	QStringList fileNames;
	//	fileNames.append( fileName );
	//	//todo: ���һ������Ҳ����֮�ı�Ϊͼ������
	//	addVectorLayers( fileNames, enc, "file" );
	//}
	//else if ( fileName.isNull() )
	//{
	//	QLabel *msgLabel = new QLabel( tr( "Layer creation failed. Please check the <a href=\"#messageLog\">message log</a> for further information." ), messageBar() );
	//	msgLabel->setWordWrap( true );
	//	connect( msgLabel, SIGNAL( linkActivated( QString ) ), mLogDock, SLOT( show() ) );
	//	QgsMessageBarItem *item = new QgsMessageBarItem( msgLabel, QgsMessageBar::WARNING );
	//	messageBar()->pushItem( item );
	//}
}

void UavMain::addVectorLayer()
{
	mMapCanvas->freeze();
	QgsOpenVectorLayerDialog *ovl = new QgsOpenVectorLayerDialog( this );

	if ( ovl->exec() )
	{
		QStringList selectedSources = ovl->dataSources();
		QString enc = ovl->encoding();
		if ( !selectedSources.isEmpty() )
		{
			addVectorLayers( selectedSources, enc, ovl->dataSourceType() );
		}
	}

	mMapCanvas->freeze( false );
	mMapCanvas->refresh();

	delete ovl;
}

QgsVectorLayer * UavMain::addVectorLayer( const QString& vectorLayerPath, const QString& baseName, const QString& providerKey )
{
	bool wasfrozen = mMapCanvas->isFrozen();

	mMapCanvas->freeze();

	// �� render() �Լ���������
	//  QApplication::setOverrideCursor(Qt::WaitCursor);

	/* ������Ҫʵ�����Ļ������ṩ�ò�����͡�
	�������Ǹ���ƴ���������Ϣ�򿪲�
	*/
	QgsDebugMsg( "Creating new vector layer using " + vectorLayerPath
				+ " with baseName of " + baseName
				+ " and providerKey of " + providerKey );

	// �������Ҫ��֤��ȷ������������
	bool authok = true;
	QRegExp rx( "authcfg=([a-z]|[A-Z]|[0-9]){7}" );
	if ( rx.indexIn( vectorLayerPath ) != -1 )
	{
		authok = false;
		if ( !QgsAuthGuiUtils::isDisabled( messageBar(), messageTimeout() ) )
		{
			authok = QgsAuthManager::instance()->setMasterPassword( true );
		}
	}

	// ����ͼ��
	QgsVectorLayer *layer = new QgsVectorLayer( vectorLayerPath, baseName, providerKey, false );

	if ( authok && layer && layer->isValid() )
	{
		QStringList sublayers = layer->dataProvider()->subLayers();
		QgsDebugMsg( QString( "got valid layer with %1 sublayers" ).arg( sublayers.count() ) );

		// ����´����Ĳ���г���1���ṩ�����ݣ�������ʾ���Ӳ�ѡ��Ի���
		// �����û�����ѡ���Ӳ�ʵ�ʼ��ء�
		if ( sublayers.count() > 1 )
		{
			askUserForOGRSublayers( layer );

			// װ�ڵ�һ�㲻������������������õġ������Ҫ���������û��������б���ѡ������
			delete layer;
			layer = nullptr;
		}
		else
		{
			// ע��˲����ע���
			QList<QgsMapLayer *> myList;
			myList << layer;
			QgsMapLayerRegistry::instance()->addMapLayers( myList );
			bool ok;
			layer->loadDefaultStyle( ok );
		}
	}
	else
	{
		QString msg = tr( "The layer %1 is not a valid layer and can not be added to the map" ).arg( vectorLayerPath );
		messageBar()->pushMessage( tr( "Layer is not valid" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );

		delete layer;
		mMapCanvas->freeze( false );
		return nullptr;
	}

	if ( !wasfrozen )
	{
		mMapCanvas->freeze( false );
		mMapCanvas->refresh();
	}

	// �� render() �Լ���������
	//  QApplication::restoreOverrideCursor();

	return layer;
}

bool UavMain::addVectorLayers( const QStringList &theLayerQStringList, const QString &enc, const QString &dataSourceType )
{
	bool wasfrozen = mMapCanvas->isFrozen();
	QList<QgsMapLayer *> myList;
	foreach ( QString src, theLayerQStringList )
	{
		src = src.trimmed();
		QString base;
		QFileInfo fi( src );
		base = fi.completeBaseName();

		QgsDebugMsg( "completeBaseName: " + base );

		// ����һ��ʸ��ͼ��
		QgsVectorLayer *layer = new QgsVectorLayer( src, base, "ogr", false );
		Q_CHECK_PTR( layer );

		if ( ! layer )
		{
			mMapCanvas->freeze( false );
			return false;
		}

		if ( layer->isValid() )
		{
			layer->setProviderEncoding( enc );

			QStringList sublayers = layer->dataProvider()->subLayers();
			QgsDebugMsg( QString( "got valid layer with %1 sublayers" ).arg( sublayers.count() ) );

			// ����´����Ĳ���ж����ͼ�����ݣ�������ʾ�Ӳ�ѡ��Ի��������û�����ѡ��ʵ�ʼ��ص��Ӳ�
			if ( sublayers.count() > 1 )
			{
				askUserForOGRSublayers( layer );

				// װ�ڵ�һ�㲻������������������õġ������Ҫ���������û��������б���ѡ����
				delete layer;
			}
			else if ( !sublayers.isEmpty() ) // ֻ�е�����������
			{
				QStringList sublayers = layer->dataProvider()->subLayers();
				QStringList elements = sublayers.at( 0 ).split( ':' );

				Q_ASSERT( elements.size() >= 4 );
				if ( layer->name() != elements.at( 1 ) )
				{
					layer->setLayerName( QString( "%1 %2 %3" ).arg( layer->name(), elements.at( 1 ), elements.at( 3 ) ) );
				}

				myList << layer;
			}
			else
			{
				QString msg = QString("%1 �������κ�ͼ��").arg( src );
				messageBar()->pushMessage( "��Ч����Դ", msg, QgsMessageBar::CRITICAL, messageTimeout() );
				delete layer;
			}
		}
		else
		{
			QString msg = QString("%1 ������Ч��֧�ֵ�����Դ").arg( src );
			messageBar()->pushMessage( "��Ч����Դ", msg, QgsMessageBar::CRITICAL, messageTimeout() );

			// since the layer is bad, stomp on it
			delete layer;
		}

	}

	// ȷ������һ��ͼ���ѳɹ����
	if ( myList.isEmpty() )
	{
		return false;
	}

	// ��ͼ��ע�����ע�����ͼ��
	QgsMapLayerRegistry::instance()->addMapLayers( myList );

	foreach ( QgsMapLayer *l, myList )
	{
		bool ok;
		l->loadDefaultStyle( ok );
	}

	// ֻ�е������ڴ˷���������µ�ͼ
	if ( !wasfrozen )
	{
		mMapCanvas->freeze( false );
		mMapCanvas->refresh();
	}
	mMapCanvas->setCurrentLayer( myList.first() );	////////////////////////////////////////////////////////////////////

	

	return true;
}

// �ú�������ʵ�ʵĹ�������������ڲ��������Ĳ���nullptr����÷������������ڻ��Բ㡣
void UavMain::askUserForOGRSublayers( QgsVectorLayer *layer )
{
	if ( !layer )
	{
		layer = qobject_cast<QgsVectorLayer *>( activeLayer() );
		if ( !layer || layer->dataProvider()->name() != "ogr" )
			return;
	}

	QStringList sublayers = layer->dataProvider()->subLayers();
	QString layertype = layer->dataProvider()->storageType();

	// ���ǳ�ʼ��һ��ѡ��Ի�����ʾ��
	QgsSublayersDialog chooseSublayersDialog( QgsSublayersDialog::Ogr, "ogr", this );
	chooseSublayersDialog.populateLayerTable( sublayers );

	if ( chooseSublayersDialog.exec() )
	{
		QString uri = layer->source();
		//the separator char & was changed to | to be compatible
		//with url for protocol drivers
		if ( uri.contains( '|', Qt::CaseSensitive ) )
		{
			// If we get here, there are some options added to the filename.
			// A valid uri is of the form: filename&option1=value1&option2=value2,...
			// We want only the filename here, so we get the first part of the split.
			QStringList theURIParts = uri.split( '|' );
			uri = theURIParts.at( 0 );
		}
		QgsDebugMsg( "Layer type " + layertype );
		// the user has done his choice
		loadOGRSublayers( layertype, uri, chooseSublayersDialog.selectionNames() );
	}
}

// This method will load with OGR the layers  in parameter.
// This method has been conceived to use the new URI
// format of the ogrprovider so as to give precisions about which
// sublayer to load into QGIS. It is normally triggered by the
// sublayer selection dialog.
void UavMain::loadOGRSublayers( const QString& layertype, const QString& uri, const QStringList& list )
{
	// The uri must contain the actual uri of the vectorLayer from which we are
	// going to load the sublayers.
	QString fileName = QFileInfo( uri ).baseName();
	QList<QgsMapLayer *> myList;
	for ( int i = 0; i < list.size(); i++ )
	{
		QString composedURI;
		QStringList elements = list.at( i ).split( ':' );
		while ( elements.size() > 2 )
		{
			elements[0] += ':' + elements[1];
			elements.removeAt( 1 );
		}

		QString layerName = elements.value( 0 );
		QString layerType = elements.value( 1 );
		if ( layerType == "any" )
		{
			layerType = "";
			elements.removeAt( 1 );
		}

		if ( layertype != "GRASS" )
		{
			composedURI = uri + "|layername=" + layerName;
		}
		else
		{
			composedURI = uri + "|layerindex=" + layerName;
		}

		if ( !layerType.isEmpty() )
		{
			composedURI += "|geometrytype=" + layerType;
		}

		// addVectorLayer( composedURI, list.at( i ), "ogr" );

		QgsDebugMsg( "Creating new vector layer using " + composedURI );
		QString name = list.at( i );
		name.replace( ':', ' ' );
		QgsVectorLayer *layer = new QgsVectorLayer( composedURI, fileName + " " + name, "ogr", false );
		if ( layer && layer->isValid() )
		{
			myList << layer;
		}
		else
		{
			QString msg = tr( "%1 is not a valid or recognized data source" ).arg( composedURI );
			messageBar()->pushMessage( tr( "Invalid Data Source" ), msg, QgsMessageBar::CRITICAL, messageTimeout() );
			if ( layer )
				delete layer;
		}
	}

	if ( ! myList.isEmpty() )
	{
		// Register layer(s) with the layers registry
		QgsMapLayerRegistry::instance()->addMapLayers( myList );
		Q_FOREACH ( QgsMapLayer *l, myList )
		{
			bool ok;
			l->loadDefaultStyle( ok );
		}
	}
}

void UavMain::fileNew()
{
	messageBar()->pushMessage( "�ù��ܻ�δʵ��", "����Գ��δ���ü�ʵ�ָù��ܣ������ڴ�...", QgsMessageBar::WARNING, messageTimeout() );
}

QgsMapLayer * UavMain::activeLayer()
{
	return mLayerTreeView ? mLayerTreeView->currentLayer() : nullptr;
}

void UavMain::zoomOut()
{
	mMapCanvas->setMapTool( mMapTools.mZoomOut );
}

void UavMain::zoomIn()
{
	mMapCanvas->setMapTool( mMapTools.mZoomIn );
}

void UavMain::pan()
{
	mMapCanvas->setMapTool( mMapTools.mPan );
}

void UavMain::panToSelected()
{
	mMapCanvas->panToSelected();
}

void UavMain::selectFeatures()
{
	mMapCanvas->setMapTool( mMapTools.mSelectFeatures );
}

void UavMain::selectByPolygon()
{
	mMapCanvas->setMapTool( mMapTools.mSelectPolygon );
}

void UavMain::autoSelectAddedLayer( QList<QgsMapLayer*> layers )
{
	if ( !layers.isEmpty() )
	{
		QgsLayerTreeLayer* nodeLayer = QgsProject::instance()->layerTreeRoot()->findLayer( layers[0]->id() );

		if ( !nodeLayer )
			return;

		QModelIndex index = mLayerTreeView->layerTreeModel()->node2index( nodeLayer );
		mLayerTreeView->setCurrentIndex( index );
	}
}

void UavMain::deselectAll()
{
	// �ر���Ⱦ������ٶ�
	bool renderFlagState = mMapCanvas->renderFlag();
	if ( renderFlagState )
		mMapCanvas->setRenderFlag( false );

	QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
	for ( QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it )
	{
		QgsVectorLayer *vl = qobject_cast<QgsVectorLayer *>( it.value() );
		if ( !vl )
			continue;

		vl->removeSelection();
	}

	// ����Ⱦ
	if ( renderFlagState )
		mMapCanvas->setRenderFlag( true );
}

void UavMain::selectAll()
{
	QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mMapCanvas->currentLayer() );
	if ( !vlayer )
	{
		messageBar()->pushMessage( "û�л��ʸ��ͼ��", "Ҫѡ�����У�����ͼ���������ѡ��һ��ʸ��ͼ��", QgsMessageBar::INFO, messageTimeout() );
		return;
	}

	// �ر���Ⱦ������ٶ�
	bool renderFlagState = mMapCanvas->renderFlag();
	if ( renderFlagState )
		mMapCanvas->setRenderFlag( false );

	vlayer->selectAll();

	// ����Ⱦ
	if ( renderFlagState )
		mMapCanvas->setRenderFlag( true );
}

void UavMain::invertSelection()
{
	QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( mMapCanvas->currentLayer() );
	if ( !vlayer )
	{
		messageBar()->pushMessage( "û�л��ʸ��ͼ��", "Ҫ����ѡ������ͼ���������ѡ��һ��ʸ��ͼ��", QgsMessageBar::INFO, messageTimeout() );
		return;
	}

	// �ر���Ⱦ������ٶ�
	bool renderFlagState = mMapCanvas->renderFlag();
	if ( renderFlagState )
		mMapCanvas->setRenderFlag( false );

	vlayer->invertSelection();

	// ����Ⱦ
	if ( renderFlagState )
		mMapCanvas->setRenderFlag( true );
}


//! ���Ǵ�GUI�������դ��ͼ��(slot)
void UavMain::addRasterLayer()
{
	QString fileFilters;

	QStringList selectedFiles;
	QString e;//ֻΪ��������ȷ��
	QString title = "��GDAL֧�ֵĹ�դ����Դ";
	QgisGui::openFilesRememberingFilter( "lastRasterFileFilter", mRasterFileFilter, selectedFiles, e, title );

	if ( selectedFiles.isEmpty() )
	{
		// no files were selected, so just bail
		return;
	}

	addRasterLayers( selectedFiles );
}

//
// ���ǲ����դ����ʵ�ʹ������� - ����������ֻ�贴��һ��դ��ͼ����󣬲�ί�������
// ���ǵ��õķ���������Ķ�������mapcanvas�Ķ���״̬��ʹ��waitcursors�ȵ����� - ���ַ������ᣬ��Ӧ��������
//
bool UavMain::addRasterLayer( QgsRasterLayer * theRasterLayer )
{
	Q_CHECK_PTR( theRasterLayer );

	if ( ! theRasterLayer )
		return false;

	if ( !theRasterLayer->isValid() )
	{
		delete theRasterLayer;
		return false;
	}

	// �ڲ�ע�����ע��ò�
	QList<QgsMapLayer *> myList;
	myList << theRasterLayer;
	QgsMapLayerRegistry::instance()->addMapLayers( myList );

	return true;
}

bool UavMain::addRasterLayers( const QStringList &theFileNameQStringList, bool guiWarning /*= true */ )
{
	if ( theFileNameQStringList.empty() )
	{
		// no files selected so bail out, but
		// allow mMapCanvas to handle events
		// first
		mMapCanvas->freeze( false );
		return false;
	}

	mMapCanvas->freeze( true );

	// �����ҵģ���Ϊ�б��е�ĳЩ�ļ�������դ�������OGR�㡣
	// ���һ������ͼ�����ʧ�ܣ����ǽ����÷���ֵΪfalse
	bool returnValue = true;
	for ( QStringList::ConstIterator myIterator = theFileNameQStringList.begin();
		myIterator != theFileNameQStringList.end();
		++myIterator )
	{
		QString errMsg;
		bool ok = false;

		// ������������ļ����Ƿ�������һ����Ч�Ĺ�դ�ļ�����
		// ����ļ�����������������Ч�ģ������ڴ����ļ�ʱ���ִ�����errMsg���ش���
		if ( QgsRasterLayer::isValidRasterFileName( *myIterator, errMsg ) )
		{
			QFileInfo myFileInfo( *myIterator );

			// ���Դ���ͼ��
			QgsRasterLayer *layer = addRasterLayerPrivate( *myIterator, myFileInfo.completeBaseName(),
				QString(), guiWarning, true );
			if ( layer && layer->isValid() )
			{
				//ֻ����һ�μ���һ��AI�����ļ���һ��������
				// �Է�ֹ�û�ѡ����1Ŀ¼�е�����ADFS��ʵ���ϴ���1���ǣ�
				if ( myFileInfo.fileName().toLower().endsWith( ".adf" ) )
				{
					break;
				}
			}
			// ���������Ч��addRasterLayerPrivate��������ʾ����

		} // ��Ч�Ĺ�դ�ļ���
		else
		{
			ok = false;

			// ������Ϣ�򾯸棬�������Ǵ�CMD�߼�����Ϊ��դ�񴫵ݸ����������
			// Ȼ���ټ��سɹ��󣨼�main.cpp�У�
			if ( guiWarning )
			{
				QString msg = QString( "%1 ����һ����֧�ֵĹ�դ����Դ" ).arg( *myIterator );
				if ( !errMsg.isEmpty() )
					msg += '\n' + errMsg;

				messageBar()->pushMessage( "����֧�ֵ�����Դ", msg, QgsMessageBar::CRITICAL, messageTimeout() );
			}
		}
		if ( ! ok )
		{
			returnValue = false;
		}
	}

	mMapCanvas->freeze( false );
	mMapCanvas->refresh();

	// Let render() do its own cursor management
	//  QApplication::restoreOverrideCursor();

	return returnValue;
}

QgsRasterLayer* UavMain::addRasterLayerPrivate( const QString & uri, const QString & baseName, 
									const QString & providerKey, bool guiWarning, bool guiUpdate )
{
	if ( guiUpdate )
	{
		// ���û�֪�����ǽ��п�����һ��ʱ��
		// QApplication::setOverrideCursor( Qt::WaitCursor );
		mMapCanvas->freeze( true );
	}

	QgsDebugMsg( "Creating new raster layer using " + uri
		+ " with baseName of " + baseName );

	QgsRasterLayer *layer = nullptr;
	// XXX ya know QgsRasterLayer can snip out the basename on its own;
	// XXX why do we have to pass it in for it?
	// ET : we may not be getting "normal" files here, so we still need the baseName argument
	if ( !providerKey.isEmpty() && uri.endsWith( ".adf", Qt::CaseInsensitive ) )
	{
		QFileInfo fileInfo( uri );
		QString dirName = fileInfo.path();
		layer = new QgsRasterLayer( dirName, QFileInfo( dirName ).completeBaseName(), QString( "gdal" ) );
	}
	else if ( providerKey.isEmpty() )
		layer = new QgsRasterLayer( uri, baseName ); // fi.completeBaseName());
	else
		layer = new QgsRasterLayer( uri, baseName, providerKey );

	QgsDebugMsg( "Constructed new layer" );

	QgsError error;
	QString title;
	bool ok = false;

	if ( !layer->isValid() )
	{
		error = layer->error();
		title = "��Ч��";

		if ( shouldAskUserForGDALSublayers( layer ) )
		{
			askUserForGDALSublayers( layer );
			ok = true;

			// װ�ڵ�һ�㲻������������������õġ������Ҫ���������û��������б���ѡ������
			delete layer;
			layer = nullptr;
		}
	}
	else
	{
		ok = addRasterLayer( layer );
		if ( !ok )
		{
			error.append( QGS_ERROR_MESSAGE( "��������ͼ�㵽��ͼ����", "��դͼ��" ) );
			title = "����";
		}
	}

	if ( !ok )
	{
		if ( guiUpdate )
			mMapCanvas->freeze( false );

		// ����������������м��ز���ʾGUI����
		if ( guiWarning )
		{
			messageBar()->pushMessage( title, error.message( QgsErrorMessage::Text ),
				QgsMessageBar::CRITICAL, messageTimeout() );
		}

		if ( layer )
		{
			delete layer;
			layer = nullptr;
		}
	}

	if ( guiUpdate )
	{
		// ���Ƶ�ͼ
		mMapCanvas->freeze( false );
		mMapCanvas->refresh();
		// Let render() do its own cursor management
		//    QApplication::restoreOverrideCursor();
	}

	return layer;
}

// GDAL�Ӳ�Ի�Ӧ�ó��ָ��û���
bool UavMain::shouldAskUserForGDALSublayers( QgsRasterLayer *layer )
{
	// ������ǿյĻ��դ���Ӳ㣬����false
	if ( !layer || layer->providerType() != "gdal" || layer->subLayers().size() < 1 )
		return false;

	QSettings settings;
	int promptLayers = settings.value( "/qgis/promptForRasterSublayers", 1 ).toInt();
	// 0 = ʼ�� - >�����ʣ��������Ӳ㣩
	// 1 = �����Ҫ�Ļ� - >ѯ�����ͼ��û�в��Σ������Ӳ�
	// 2 = �Ӳ� - >������ʾ����������κζ���
	// 3 = �������� - >��������ʾ�������������Ӳ�

	return promptLayers == 0 || promptLayers == 3 || ( promptLayers == 1 && layer->bandCount() == 0 );
}

// �˷�����GDAL���ز�Ĳ�����
// ��ͨ�������Ӳ�ѡ��Ի��򴥷���
void UavMain::loadGDALSublayers( const QString& uri, const QStringList& list )
{
	QString path, name;
	QgsRasterLayer *subLayer = nullptr;

	// ���෴��˳����Ӳ㣬ʹ���ǰ���ȷ��˳�����
	for ( int i = list.size() - 1; i >= 0 ; i-- )
	{
		path = list[i];
		// ͨ���ļ�����������·����������
		name = path;
		name.replace( uri, QFileInfo( uri ).completeBaseName() );
		subLayer = new QgsRasterLayer( path, name );
		if ( subLayer )
		{
			if ( subLayer->isValid() )
				addRasterLayer( subLayer );
			else
				delete subLayer;
		}

	}
}

//! ��ʾһ���Ի���ѡ��GDAL��դ�Ӳ�
void UavMain::askUserForGDALSublayers( QgsRasterLayer *layer )
{
	if ( !layer )
		return;

	QStringList sublayers = layer->subLayers();
	QgsDebugMsg( QString( "��դͼ���� %1 ���Ӳ�" ).arg( layer->subLayers().size() ) );

	if ( sublayers.size() < 1 )
		return;

	// �����ʾͼ��=�������У��������е��Ӳ㣬������ʾ
	QSettings settings;
	if ( settings.value( "/qgis/promptForRasterSublayers", 1 ).toInt() == 3 )
	{
		loadGDALSublayers( layer->source(), sublayers );
		return;
	}

	// ���ǳ�ʼ��һ��ѡ��Ի�����ʾ����
	QgsSublayersDialog chooseSublayersDialog( QgsSublayersDialog::Gdal, "gdal", this );

	QStringList layers;
	QStringList names;
	for ( int i = 0; i < sublayers.size(); i++ )
	{
		// �򻯹�դ�ӵ����� - Ӧ��GDAL�ṩ�������һ�������أ�
		QString name = sublayers[i];
		QString path = layer->source();

		//�������NetCDF/ HDFʹ���ļ��������������
		//����HDF4�⽫������õ�����������Ϊ������ָ�겻�Ǻ�ʵ��
		if ( name.startsWith( "netcdf", Qt::CaseInsensitive ) ||
			name.startsWith( "hdf", Qt::CaseInsensitive ) )
			name = name.mid( name.indexOf( path ) + path.length() + 1 );
		else
		{
			// ɾ�������������ļ���
			name.remove( name.split( ':' )[0] );
			name.remove( path );
		}
		// remove any : or " left over
		if ( name.startsWith( ':' ) )
			name.remove( 0, 1 );

		if ( name.startsWith( '\"' ) )
			name.remove( 0, 1 );

		if ( name.endsWith( ':' ) )
			name.chop( 1 );

		if ( name.endsWith( '\"' ) )
			name.chop( 1 );

		names << name;
		layers << QString( "%1|%2" ).arg( i ).arg( name );
	}

	chooseSublayersDialog.populateLayerTable( layers, "|" );

	if ( chooseSublayersDialog.exec() )
	{
		// ������������Ϣͼ�����ƣ������ļ����Լ�������
		QRegExp rx( "\"(.*)\"" );
		QString uri, name;

		Q_FOREACH ( int i, chooseSublayersDialog.selectionIndexes() )
		{
			if ( rx.indexIn( sublayers[i] ) != -1 )
			{
				uri = rx.cap( 1 );
				name = sublayers[i];
				name.replace( uri, QFileInfo( uri ).completeBaseName() );
			}
			else
			{
				name = names[i];
			}

			QgsRasterLayer *rlayer = new QgsRasterLayer( sublayers[i], name );
			if ( rlayer && rlayer->isValid() )
				addRasterLayer( rlayer );
		}
	}
}

void UavMain::measure()
{
	mMapCanvas->setMapTool( mMapTools.mMeasureDist );
}

void UavMain::measureArea()
{
	mMapCanvas->setMapTool( mMapTools.mMeasureArea );
}

void UavMain::canvasRefreshStarted()
{
	showProgress( -1, 0 ); // ʹ��������ʾ��æָʾ��
}

void UavMain::canvasRefreshFinished()
{
	showProgress( 0, 0 ); // ֹͣæµָʾ
}

//! ����״̬���Ľ�����(slot)
void UavMain::showProgress( int theProgress, int theTotalSteps )
{
	if ( theProgress == theTotalSteps )
	{
		mProgressBar->reset();
		mProgressBar->hide();
	}
	else
	{
		//only call show if not already hidden to reduce flicker ֻ�е���show�����δ���أ��Լ�����˸
		if ( !mProgressBar->isVisible() )
		{
			mProgressBar->show();
		}
		mProgressBar->setMaximum( theTotalSteps );
		mProgressBar->setValue( theProgress );

		if ( mProgressBar->maximum() == 0 )
		{
			// ��æָʾ�ƣ�����С�������ֵ��Qt�ķ����KDE�У���һЩ���⣬��û��������æָʾ������
			// ����һ���򵥵��޸�����ʹ��ĳ�ַ�ʽ����������ʱ�������Ĵ�����
			// ע�⣺�ڿ�����Ĵ��������θ�����������ʹ��
			if ( strcmp( QApplication::style()->metaObject()->className(), "Oxygen::Style" ) == 0 )
			{
				QProgressBar pb;
				pb.setAttribute( Qt::WA_DontShowOnScreen ); // û���Ӿ�����
				pb.setMaximum( 0 );
				pb.show();
				qApp->processEvents();
			}
		}

	}
}

void UavMain::showScale( double theScale )
{
	mScaleEdit->setScale( 1.0 / theScale );

	// ���±�ǩ��С
	if ( mScaleEdit->width() > mScaleEdit->minimumWidth() )
	{
		mScaleEdit->setMinimumWidth( mScaleEdit->width() );
	}
}

void UavMain::userScale()
{
	mMapCanvas->zoomScale( 1.0 / mScaleEdit->scale() );
}

void UavMain::saveLastMousePosition( const QgsPoint & p)
{
	if ( mMapTipsVisible )
	{
		// �洢�㣬������Ҫ���ĵ�ͼ��ʾ��ʱ������ʱ
		mLastMapPosition = p;

		// ����ʹ������ۣ���Ϊ��ÿ�η��佫����ƶ������Ƶ�ͼ��ʾ��ʱ����
		if ( mMapCanvas->underMouse() )
		{
			// �����ͼ��ʾ��������������ɣ�
			mpMaptip->clear( mMapCanvas );
			// ���������ļ�ʱ��δ�ڵ�ͼ����
			mpMapTipsTimer->start();
			//QgsDebugMsg("Started maptips timer");
		}
	}
}

void UavMain::selectionChanged( QgsMapLayer *layer )
{
	QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
	if ( vlayer )
	{
		showStatusMessage( tr( "ͼ��%1��ѡ����%n��Ҫ��.", "ѡ���Ҫ������", vlayer->selectedFeatureCount() ).arg( vlayer->name() ) );
	}
	if ( layer == activeLayer() )
	{
		activateDeactivateLayerRelatedActions( layer );
	}
}

void UavMain::activateDeactivateLayerRelatedActions( QgsMapLayer *layer )
{

	//bool enableMove = false, enableRotate = false, enablePin = false, enableShowHide = false, enableChange = false;

	//// �����ע�������ͼ��
	//QMap<QString, QgsMapLayer*> layers = QgsMapLayerRegistry::instance()->mapLayers();
	//for ( QMap<QString, QgsMapLayer*>::iterator it = layers.begin(); it != layers.end(); ++it )
	//{
	//	// �����ʸ��ͼ��
	//	QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( it.value() );
	//	if ( !vlayer || !vlayer->isEditable() ||
	//		( !vlayer->diagramsEnabled() && !vlayer->labelsEnabled() ) )
	//		continue;

	//	int colX, colY, colShow, colAng;
	//	enablePin =
	//		enablePin ||
	//		( qobject_cast<QgsMapToolPinLabels*>( mMapTools.mPinLabels ) &&
	//		qobject_cast<QgsMapToolPinLabels*>( mMapTools.mPinLabels )->layerCanPin( vlayer, colX, colY ) );

	//	enableShowHide =
	//		enableShowHide ||
	//		( qobject_cast<QgsMapToolShowHideLabels*>( mMapTools.mShowHideLabels ) &&
	//		qobject_cast<QgsMapToolShowHideLabels*>( mMapTools.mShowHideLabels )->layerCanShowHide( vlayer, colShow ) );

	//	enableMove =
	//		enableMove ||
	//		( qobject_cast<QgsMapToolMoveLabel*>( mMapTools.mMoveLabel ) &&
	//		( qobject_cast<QgsMapToolMoveLabel*>( mMapTools.mMoveLabel )->labelMoveable( vlayer, colX, colY )
	//		|| qobject_cast<QgsMapToolMoveLabel*>( mMapTools.mMoveLabel )->diagramMoveable( vlayer, colX, colY ) )
	//		);

	//	enableRotate =
	//		enableRotate ||
	//		( qobject_cast<QgsMapToolRotateLabel*>( mMapTools.mRotateLabel ) &&
	//		qobject_cast<QgsMapToolRotateLabel*>( mMapTools.mRotateLabel )->layerIsRotatable( vlayer, colAng ) );

	//	enableChange = true;

	//	if ( enablePin && enableShowHide && enableMove && enableRotate && enableChange )
	//		break;
	//}

	//mActionPinLabels->setEnabled( enablePin );
	//mActionShowHideLabels->setEnabled( enableShowHide );
	//mActionMoveLabel->setEnabled( enableMove );
	//mActionRotateLabel->setEnabled( enableRotate );
	//mActionChangeLabelProperties->setEnabled( enableChange );

	//mMenuPasteAs->setEnabled( clipboard() && !clipboard()->empty() );
	//mActionPasteAsNewVector->setEnabled( clipboard() && !clipboard()->empty() );
	//mActionPasteAsNewMemoryVector->setEnabled( clipboard() && !clipboard()->empty() );

	//updateLayerModifiedActions();

	if ( !layer )
	{
		mActionSelectFeatures->setEnabled( false );
		mActionSelectPolygon->setEnabled( false );
		//mActionSelectFreehand->setEnabled( false );
		//mActionSelectRadius->setEnabled( false );
		mActionIdentify->setEnabled( QSettings().value( "/Map/identifyMode", 0 ).toInt() != 0 );
		//mActionSelectByExpression->setEnabled( false );
		mActionLabeling->setEnabled( false );
		mActionOpenTable->setEnabled( false );
		mActionSelectAll->setEnabled( false );
		mActionInvertSelection->setEnabled( false );
		//mActionOpenFieldCalc->setEnabled( false );
		mActionToggleEditing->setEnabled( false );
		mActionToggleEditing->setChecked( false );
		//mActionSaveLayerEdits->setEnabled( false );
		//mActionSaveLayerDefinition->setEnabled( false );
		//mActionLayerSaveAs->setEnabled( false );
		mActionLayerProperties->setEnabled( false );
		mActionLayerSubsetString->setEnabled( false );
		mActionAddToOverview->setEnabled( false );
		//mActionFeatureAction->setEnabled( false );
		//mActionAddFeature->setEnabled( false );
		//mActionCircularStringCurvePoint->setEnabled( false );
		//mActionCircularStringRadius->setEnabled( false );
		//mActionMoveFeature->setEnabled( false );
		//mActionRotateFeature->setEnabled( false );
		//mActionOffsetCurve->setEnabled( false );
		//mActionNodeTool->setEnabled( false );
		//mActionDeleteSelected->setEnabled( false );
		//mActionCutFeatures->setEnabled( false );
		//mActionCopyFeatures->setEnabled( false );
		//mActionPasteFeatures->setEnabled( false );
		mActionCopyStyle->setEnabled( false );
		mActionPasteStyle->setEnabled( false );

		//mUndoWidget->dockContents()->setEnabled( false );
		//mActionUndo->setEnabled( false );
		//mActionRedo->setEnabled( false );
		//mActionSimplifyFeature->setEnabled( false );
		//mActionAddRing->setEnabled( false );
		//mActionFillRing->setEnabled( false );
		//mActionAddPart->setEnabled( false );
		//mActionDeleteRing->setEnabled( false );
		//mActionDeletePart->setEnabled( false );
		//mActionReshapeFeatures->setEnabled( false );
		//mActionOffsetCurve->setEnabled( false );
		//mActionSplitFeatures->setEnabled( false );
		//mActionSplitParts->setEnabled( false );
		//mActionMergeFeatures->setEnabled( false );
		//mActionMergeFeatureAttributes->setEnabled( false );
		//mActionRotatePointSymbols->setEnabled( false );
		//mActionEnableTracing->setEnabled( false );

		mActionPinLabels->setEnabled( false );
		mActionShowHideLabels->setEnabled( false );
		mActionMoveLabel->setEnabled( false );
		mActionRotateLabel->setEnabled( false );
		mActionChangeLabelProperties->setEnabled( false );

		mActionLocalHistogramStretch->setEnabled( false );
		mActionFullHistogramStretch->setEnabled( false );
		mActionLocalCumulativeCutStretch->setEnabled( false );
		mActionFullCumulativeCutStretch->setEnabled( false );
		mActionIncreaseBrightness->setEnabled( false );
		mActionDecreaseBrightness->setEnabled( false );
		mActionIncreaseContrast->setEnabled( false );
		mActionDecreaseContrast->setEnabled( false );
		mActionZoomActualSize->setEnabled( false );
		mActionZoomToLayer->setEnabled( false );
		return;
	}

	mActionLayerProperties->setEnabled( QgsProject::instance()->layerIsEmbedded( layer->id() ).isEmpty() );
	mActionAddToOverview->setEnabled( true );
	mActionZoomToLayer->setEnabled( true );

	mActionCopyStyle->setEnabled( true );
	mActionPasteStyle->setEnabled( clipboard()->hasFormat( QGSCLIPBOARD_STYLE_MIME ) );

	/***********Vector layers****************/
	if ( layer->type() == QgsMapLayer::VectorLayer )
	{
		QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( layer );
		QgsVectorDataProvider* dprovider = vlayer->dataProvider();

		bool isEditable = vlayer->isEditable();
		bool layerHasSelection = vlayer->selectedFeatureCount() > 0;
		bool layerHasActions = vlayer->actions()->size() || !QgsMapLayerActionRegistry::instance()->mapLayerActions( vlayer ).isEmpty();

		mActionLocalHistogramStretch->setEnabled( false );
		mActionFullHistogramStretch->setEnabled( false );
		mActionLocalCumulativeCutStretch->setEnabled( false );
		mActionFullCumulativeCutStretch->setEnabled( false );
		mActionIncreaseBrightness->setEnabled( false );
		mActionDecreaseBrightness->setEnabled( false );
		mActionIncreaseContrast->setEnabled( false );
		mActionDecreaseContrast->setEnabled( false );
		mActionZoomActualSize->setEnabled( false );
		mActionLabeling->setEnabled( true );

		mActionSelectFeatures->setEnabled( true );
		mActionSelectPolygon->setEnabled( true );
		//mActionSelectFreehand->setEnabled( true );
		//mActionSelectRadius->setEnabled( true );
		mActionIdentify->setEnabled( true );
		//mActionSelectByExpression->setEnabled( true );
		mActionOpenTable->setEnabled( true );
		mActionSelectAll->setEnabled( true );
		mActionInvertSelection->setEnabled( true );
		//mActionSaveLayerDefinition->setEnabled( true );
		//mActionLayerSaveAs->setEnabled( true );
		//mActionCopyFeatures->setEnabled( layerHasSelection );
		//mActionFeatureAction->setEnabled( layerHasActions );

		//if ( !isEditable && mMapCanvas && mMapCanvas->mapTool()
		//	&& mMapCanvas->mapTool()->isEditTool() && !mSaveRollbackInProgress )
		//{
		//	mMapCanvas->setMapTool( mNonEditMapTool );
		//}

		//if ( dprovider )
		//{
		//	bool canChangeAttributes = dprovider->capabilities() & QgsVectorDataProvider::ChangeAttributeValues;
		//	bool canDeleteFeatures = dprovider->capabilities() & QgsVectorDataProvider::DeleteFeatures;
		//	bool canAddFeatures = dprovider->capabilities() & QgsVectorDataProvider::AddFeatures;
		//	bool canSupportEditing = dprovider->capabilities() & QgsVectorDataProvider::EditingCapabilities;
		//	bool canChangeGeometry = dprovider->capabilities() & QgsVectorDataProvider::ChangeGeometries;

		//	mActionLayerSubsetString->setEnabled( !isEditable && dprovider->supportsSubsetString() );

		//	mActionToggleEditing->setEnabled( canSupportEditing && !vlayer->isReadOnly() );
		//	mActionToggleEditing->setChecked( canSupportEditing && isEditable );
		//	mActionSaveLayerEdits->setEnabled( canSupportEditing && isEditable && vlayer->isModified() );
		//	mUndoWidget->dockContents()->setEnabled( canSupportEditing && isEditable );
		//	mActionUndo->setEnabled( canSupportEditing );
		//	mActionRedo->setEnabled( canSupportEditing );

		//	//start editing/stop editing
		//	if ( canSupportEditing )
		//	{
		//		updateUndoActions();
		//	}

		//	mActionPasteFeatures->setEnabled( isEditable && canAddFeatures && !clipboard()->empty() );

		//	mActionAddFeature->setEnabled( isEditable && canAddFeatures );
		//	mActionCircularStringCurvePoint->setEnabled( isEditable && ( canAddFeatures || canChangeGeometry ) && vlayer->geometryType() != QGis::Point );
		//	mActionCircularStringRadius->setEnabled( isEditable && ( canAddFeatures || canChangeGeometry ) );

		//	//does provider allow deleting of features?
		//	mActionDeleteSelected->setEnabled( isEditable && canDeleteFeatures && layerHasSelection );
		//	mActionCutFeatures->setEnabled( isEditable && canDeleteFeatures && layerHasSelection );

		//	//merge tool needs editable layer and provider with the capability of adding and deleting features
		//	if ( isEditable && canChangeAttributes )
		//	{
		//		mActionMergeFeatures->setEnabled( layerHasSelection && canDeleteFeatures && canAddFeatures );
		//		mActionMergeFeatureAttributes->setEnabled( layerHasSelection );
		//	}
		//	else
		//	{
		//		mActionMergeFeatures->setEnabled( false );
		//		mActionMergeFeatureAttributes->setEnabled( false );
		//	}

		//	bool isMultiPart = QGis::isMultiType( vlayer->wkbType() ) || !dprovider->doesStrictFeatureTypeCheck();

		//	// moving enabled if geometry changes are supported
		//	mActionAddPart->setEnabled( isEditable && canChangeGeometry );
		//	mActionDeletePart->setEnabled( isEditable && canChangeGeometry );
		//	mActionMoveFeature->setEnabled( isEditable && canChangeGeometry );
		//	mActionRotateFeature->setEnabled( isEditable && canChangeGeometry );
		//	mActionNodeTool->setEnabled( isEditable && canChangeGeometry );

		//	mActionEnableTracing->setEnabled( isEditable && canAddFeatures &&
		//		( vlayer->geometryType() == QGis::Line || vlayer->geometryType() == QGis::Polygon ) );

		//	if ( vlayer->geometryType() == QGis::Point )
		//	{
		//		mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionCapturePoint.svg" ) );

		//		mActionAddRing->setEnabled( false );
		//		mActionFillRing->setEnabled( false );
		//		mActionReshapeFeatures->setEnabled( false );
		//		mActionSplitFeatures->setEnabled( false );
		//		mActionSplitParts->setEnabled( false );
		//		mActionSimplifyFeature->setEnabled( false );
		//		mActionDeleteRing->setEnabled( false );
		//		mActionRotatePointSymbols->setEnabled( false );
		//		mActionOffsetCurve->setEnabled( false );

		//		if ( isEditable && canChangeAttributes )
		//		{
		//			if ( QgsMapToolRotatePointSymbols::layerIsRotatable( vlayer ) )
		//			{
		//				mActionRotatePointSymbols->setEnabled( true );
		//			}
		//		}
		//	}
		//	else if ( vlayer->geometryType() == QGis::Line )
		//	{
		//		mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionCaptureLine.svg" ) );

		//		mActionReshapeFeatures->setEnabled( isEditable && canChangeGeometry );
		//		mActionSplitFeatures->setEnabled( isEditable && canAddFeatures );
		//		mActionSplitParts->setEnabled( isEditable && canChangeGeometry && isMultiPart );
		//		mActionSimplifyFeature->setEnabled( isEditable && canChangeGeometry );
		//		mActionOffsetCurve->setEnabled( isEditable && canAddFeatures && canChangeAttributes );

		//		mActionAddRing->setEnabled( false );
		//		mActionFillRing->setEnabled( false );
		//		mActionDeleteRing->setEnabled( false );
		//	}
		//	else if ( vlayer->geometryType() == QGis::Polygon )
		//	{
		//		mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionCapturePolygon.svg" ) );

		//		mActionAddRing->setEnabled( isEditable && canChangeGeometry );
		//		mActionFillRing->setEnabled( isEditable && canChangeGeometry );
		//		mActionReshapeFeatures->setEnabled( isEditable && canChangeGeometry );
		//		mActionSplitFeatures->setEnabled( isEditable && canAddFeatures );
		//		mActionSplitParts->setEnabled( isEditable && canChangeGeometry && isMultiPart );
		//		mActionSimplifyFeature->setEnabled( isEditable && canChangeGeometry );
		//		mActionDeleteRing->setEnabled( isEditable && canChangeGeometry );
		//		mActionOffsetCurve->setEnabled( false );
		//	}
		//	else if ( vlayer->geometryType() == QGis::NoGeometry )
		//	{
		//		mActionAddFeature->setIcon( QgsApplication::getThemeIcon( "/mActionNewTableRow.png" ) );
		//	}

		//	mActionOpenFieldCalc->setEnabled( true );

		//	return;
		//}
		//else
		//{
		//	mUndoWidget->dockContents()->setEnabled( false );
		//	mActionUndo->setEnabled( false );
		//	mActionRedo->setEnabled( false );
		//}

		mActionLayerSubsetString->setEnabled( false );
	} //end vector layer block
	/*************Raster layers*************/
	else if ( layer->type() == QgsMapLayer::RasterLayer )
	{
		const QgsRasterLayer *rlayer = qobject_cast<const QgsRasterLayer *>( layer );
		if ( rlayer->dataProvider()->dataType( 1 ) != QGis::ARGB32
			&& rlayer->dataProvider()->dataType( 1 ) != QGis::ARGB32_Premultiplied )
		{
			if ( rlayer->dataProvider()->capabilities() & QgsRasterDataProvider::Size )
			{
				mActionFullHistogramStretch->setEnabled( true );
			}
			else
			{
				// it would hang up reading the data for WMS for example
				mActionFullHistogramStretch->setEnabled( false );
			}
			mActionLocalHistogramStretch->setEnabled( true );
		}
		else
		{
			mActionLocalHistogramStretch->setEnabled( false );
			mActionFullHistogramStretch->setEnabled( false );
		}

		mActionLocalCumulativeCutStretch->setEnabled( true );
		mActionFullCumulativeCutStretch->setEnabled( true );
		mActionIncreaseBrightness->setEnabled( true );
		mActionDecreaseBrightness->setEnabled( true );
		mActionIncreaseContrast->setEnabled( true );
		mActionDecreaseContrast->setEnabled( true );

		mActionLayerSubsetString->setEnabled( false );
		//mActionFeatureAction->setEnabled( false );
		mActionSelectFeatures->setEnabled( false );
		mActionSelectPolygon->setEnabled( false );
		//mActionSelectFreehand->setEnabled( false );
		//mActionSelectRadius->setEnabled( false );
		mActionZoomActualSize->setEnabled( true );
		mActionOpenTable->setEnabled( false );
		mActionSelectAll->setEnabled( false );
		mActionInvertSelection->setEnabled( false );
		//mActionSelectByExpression->setEnabled( false );
		//mActionOpenFieldCalc->setEnabled( false );
		mActionToggleEditing->setEnabled( false );
		mActionToggleEditing->setChecked( false );
		//mActionSaveLayerEdits->setEnabled( false );
		//mUndoWidget->dockContents()->setEnabled( false );
		//mActionUndo->setEnabled( false );
		//mActionRedo->setEnabled( false );
		//mActionSaveLayerDefinition->setEnabled( true );
		//mActionLayerSaveAs->setEnabled( true );
		//mActionAddFeature->setEnabled( false );
		//mActionCircularStringCurvePoint->setEnabled( false );
		//mActionCircularStringRadius->setEnabled( false );
		//mActionDeleteSelected->setEnabled( false );
		//mActionAddRing->setEnabled( false );
		//mActionFillRing->setEnabled( false );
		//mActionAddPart->setEnabled( false );
		//mActionNodeTool->setEnabled( false );
		//mActionMoveFeature->setEnabled( false );
		//mActionRotateFeature->setEnabled( false );
		//mActionOffsetCurve->setEnabled( false );
		//mActionCopyFeatures->setEnabled( false );
		//mActionCutFeatures->setEnabled( false );
		//mActionPasteFeatures->setEnabled( false );
		//mActionRotatePointSymbols->setEnabled( false );
		//mActionDeletePart->setEnabled( false );
		//mActionDeleteRing->setEnabled( false );
		//mActionSimplifyFeature->setEnabled( false );
		//mActionReshapeFeatures->setEnabled( false );
		//mActionSplitFeatures->setEnabled( false );
		//mActionSplitParts->setEnabled( false );
		mActionLabeling->setEnabled( false );

		//NOTE: �����鲻�����������κα�������Ϊ������ν�ĸ��ز����ڲ�ѡ��/����
		//If you load a layer with a provider and idenitfy ability then load another without, the tool would be disabled for both

		//����ʶ�𹤾ߣ�GDAL���ݼ���û���ṩ��
		//���رգ���������ṩ������ڣ���û��ʶ������
		mActionIdentify->setEnabled( true );

		QSettings settings;
		int identifyMode = settings.value( "/Map/identifyMode", 0 ).toInt();
		if ( identifyMode == 0 )
		{
			const QgsRasterLayer *rlayer = qobject_cast<const QgsRasterLayer *>( layer );
			const QgsRasterDataProvider* dprovider = rlayer->dataProvider();
			if ( dprovider )
			{
				// ���ṩ����ʶ���ͼ����?
				if ( dprovider->capabilities() & QgsRasterDataProvider::Identify )
				{
					mActionIdentify->setEnabled( true );
				}
				else
				{
					mActionIdentify->setEnabled( false );
				}
			}
		}
	}
}

void UavMain::extentChanged()
{
	// ��������ʹ�õĵ�ͼ��λͼ�����Ÿ���Ԥ��
	mLayerTreeView->layerTreeModel()->setLegendMapViewData( mMapCanvas->mapUnitsPerPixel(), mMapCanvas->mapSettings().outputDpi(), mMapCanvas->scale() );
}

void UavMain::updateMouseCoordinatePrecision()
{
	mCoordsEdit->setMouseCoordinatesPrecision( QgsCoordinateUtils::calculateCoordinatePrecision( mapCanvas()->mapUnitsPerPixel(), mapCanvas()->mapSettings().destinationCrs() ) );
}

void UavMain::showStatusMessage( const QString& theMessage )
{
	statusBar()->showMessage( theMessage );
}

void UavMain::userRotation()
{
	double degrees = mRotationEdit->value();
	mMapCanvas->setRotation( degrees );
	mMapCanvas->refresh();
}

void UavMain::projectPropertiesProjections()
{
	// ������������ʾ����Ŀ�Ի����л���ͶӰҳ
	mShowProjectionTab = true;
	projectProperties();
}

void UavMain::projectProperties()
{
	/* ��ʾ����Ŀ�����Ա�*/
	// ��Ŀ���ԶԻ���������ڹ�������Ϊ�ȴ����
	QApplication::setOverrideCursor( Qt::WaitCursor );
	QgsProjectProperties *pp = new QgsProjectProperties( mMapCanvas );
	// �����״̬�����ã���ʾͶӰҳ
	if ( mShowProjectionTab )
	{
		pp->showProjectionsTab();
		mShowProjectionTab = false;
	}
	qApp->processEvents();

	// �������Ŀ���ԶԻ����иı���ʾ���ȵȣ���Ӧ�޸�״̬��
	connect( pp, SIGNAL( displayPrecisionChanged() ), this,
		SLOT( updateMouseCoordinatePrecision() ) );

	connect( pp, SIGNAL( scalesChanged( const QStringList & ) ), mScaleEdit,
		SLOT( updateScales( const QStringList & ) ) );
	QApplication::restoreOverrideCursor();	//�ָ����

	//ͨ������ˢ���źŹرյ�����
	connect( pp, SIGNAL( refresh() ), mMapCanvas, SLOT( refresh() ) );

	// ��ʾģ̬�Ի���
	pp->exec();

	qobject_cast<QgsMeasureTool*>( mMapTools.mMeasureDist )->updateSettings();
	qobject_cast<QgsMeasureTool*>( mMapTools.mMeasureArea )->updateSettings();

	// ���ô��ڱ���
	//setTitleBarText_( *this );

	// ɾ�����Ա����
	delete pp;
}

void UavMain::hasCrsTransformEnabled( bool theFlag )
{
	// �������Ϣ��Ŀ
	QgsProject::instance()->writeEntry( "SpatialRefSys", "/ProjectionsEnabled", ( theFlag ? 1 : 0 ) );
	updateCRSStatusBar();
}

void UavMain::mapCanvas_keyPressed( QKeyEvent *e )
{
	// ɾ����ѡ�Ĺ���ʱ�����ǿ��ܵģ��¼�������Ŀǰ��MapTool����
	if (( e->key() == Qt::Key_Backspace || e->key() == Qt::Key_Delete ) && e->isAccepted() )
	{
		//deleteSelected();
	}
}

void UavMain::legendLayerSelectionChanged( void )
{
	QList<QgsLayerTreeLayer*> selectedLayers = mLayerTreeView ? mLayerTreeView->selectedLayerNodes() : QList<QgsLayerTreeLayer*>();

	//mActionDuplicateLayer->setEnabled( !selectedLayers.isEmpty() );
	//mActionSetLayerScaleVisibility->setEnabled( !selectedLayers.isEmpty() );
	mActionSetLayerCRS->setEnabled( !selectedLayers.isEmpty() );
	mActionSetProjectCRSFromLayer->setEnabled( selectedLayers.count() == 1 );

	//mActionSaveEdits->setEnabled( QgsLayerTreeUtils::layersModified( selectedLayers ) );
	//mActionRollbackEdits->setEnabled( QgsLayerTreeUtils::layersModified( selectedLayers ) );
	//mActionCancelEdits->setEnabled( QgsLayerTreeUtils::layersEditable( selectedLayers ) );

	//mLegendExpressionFilterButton->setEnabled( false );
	//mLegendExpressionFilterButton->setVectorLayer( nullptr );
	//if ( selectedLayers.size() == 1 )
	//{
	//	QgsLayerTreeLayer* l = selectedLayers.front();
	//	if ( l->layer() && l->layer()->type() == QgsMapLayer::VectorLayer )
	//	{
	//		mLegendExpressionFilterButton->setEnabled( true );
	//		bool exprEnabled;
	//		QString expr = QgsLayerTreeUtils::legendFilterByExpression( *l, &exprEnabled );
	//		mLegendExpressionFilterButton->setExpressionText( expr );
	//		mLegendExpressionFilterButton->setVectorLayer( qobject_cast<QgsVectorLayer*>( l->layer() ) );
	//		mLegendExpressionFilterButton->setChecked( exprEnabled );
	//	}
	//}
}

void UavMain::markDirty()
{
	// ֪ͨ��һ���仯����Ŀ
	QgsProject::instance()->dirty( true );
}

void UavMain::updateNewLayerInsertionPoint()
{
	// Ĭ��
	QgsLayerTreeGroup* parentGroup = mLayerTreeView->layerTreeModel()->rootGroup();
	int index = 0;
	QModelIndex current = mLayerTreeView->currentIndex();

	if ( current.isValid() )
	{
		if ( QgsLayerTreeNode* currentNode = mLayerTreeView->currentNode() )
		{
			// if the insertion point is actually a group, insert new layers into the group
			// ��������ʵ������һ���飬�����µĲ㵽��
			if ( QgsLayerTree::isGroup( currentNode ) )
			{
				QgsProject::instance()->layerTreeRegistryBridge()->setLayerInsertionPoint( QgsLayerTree::toGroup( currentNode ), 0 );
				return;
			}

			// ����ֻ�����ò�����ڵ�ǰ�ڵ��ǰ��
			QgsLayerTreeNode* parentNode = currentNode->parent();
			if ( QgsLayerTree::isGroup( parentNode ) )
				parentGroup = QgsLayerTree::toGroup( parentNode );
		}

		index = current.row();
	}

	QgsProject::instance()->layerTreeRegistryBridge()->setLayerInsertionPoint( parentGroup, index );
}

void UavMain::layersWereAdded( const QList<QgsMapLayer*>& theLayers )
{
	foreach ( QgsMapLayer* layer, theLayers )
	{
		QgsDataProvider *provider = nullptr;

		QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );
		if ( vlayer )
		{
			// notify user about any font family substitution, but only when rendering labels (i.e. not when opening settings dialog)
			// ֪ͨ�û��йص��κ�����ϵ������������ֵı�ǩ��ֻ�е������������öԻ���ʱ��
			connect( vlayer, SIGNAL( labelingFontNotFound( QgsVectorLayer*, QString ) ), this, SLOT( labelingFontNotFound( QgsVectorLayer*, QString ) ) );

			QgsVectorDataProvider* vProvider = vlayer->dataProvider();
			if ( vProvider && vProvider->capabilities() & QgsVectorDataProvider::EditingCapabilities )
			{
				connect( vlayer, SIGNAL( layerModified() ), this, SLOT( updateLayerModifiedActions() ) );
				connect( vlayer, SIGNAL( editingStarted() ), this, SLOT( layerEditStateChanged() ) );
				connect( vlayer, SIGNAL( editingStopped() ), this, SLOT( layerEditStateChanged() ) );
			}

			if ( autoTransaction() )
			{
				if ( QgsTransaction::supportsTransaction( vlayer ) )
				{
					QString connString = QgsDataSourceURI( vlayer->source() ).connectionInfo();
					QString key = vlayer->providerType();

					QgsTransactionGroup* tg = mTransactionGroups.value( qMakePair( key, connString ) );

					if ( !tg )
					{
						tg = new QgsTransactionGroup();
						mTransactionGroups.insert( qMakePair( key, connString ), tg );

						connect( tg, SIGNAL( commitError( QString ) ), this, SLOT( displayMapToolMessage( QString ) ) );
					}
					tg->addLayer( vlayer );
				}
			}

			connect( vlayer, SIGNAL( raiseError( QString ) ), this, SLOT( onLayerError( QString ) ) );

			provider = vProvider;
		}

		QgsRasterLayer *rlayer = qobject_cast<QgsRasterLayer *>( layer );
		if ( rlayer )
		{
			// connect up any request the raster may make to update the app progress
			connect( rlayer, SIGNAL( drawingProgress( int, int ) ), this, SLOT( showProgress( int, int ) ) );

			// connect up any request the raster may make to update the statusbar message
			connect( rlayer, SIGNAL( statusChanged( QString ) ), this, SLOT( showStatusMessage( QString ) ) );

			provider = rlayer->dataProvider();
		}

		if ( provider )
		{
			connect( provider, SIGNAL( dataChanged() ), layer, SLOT( triggerRepaint() ) );
			connect( provider, SIGNAL( dataChanged() ), mMapCanvas, SLOT( refresh() ) );
		}
	}
}

void UavMain::labelingFontNotFound( QgsVectorLayer *vlayer, const QString& fontfamily )
{
	// TODO: update when pref for how to resolve missing family (use matching algorithm or just default font) is implemented
	// ����ʱ��ν��ȱ�ټ�ͥ��ʹ�õ�ƥ���㷨����ֻ��Ĭ�����壩PREFʵʩ
	QString substitute = tr( "Default system font substituted." );

	QToolButton* btnOpenPrefs = new QToolButton();
	btnOpenPrefs->setStyleSheet( "QToolButton{ background-color: rgba(255, 255, 255, 0); color: black; text-decoration: underline; }" );
	btnOpenPrefs->setCursor( Qt::PointingHandCursor );
	btnOpenPrefs->setSizePolicy( QSizePolicy::Maximum, QSizePolicy::Preferred );
	btnOpenPrefs->setToolButtonStyle( Qt::ToolButtonTextOnly );

	// �洢ָ�뵽���е�QAction������
	QAction* act = new QAction( btnOpenPrefs );
	act->setData( QVariant( QMetaType::QObjectStar, &vlayer ) );
	act->setText( tr( "Open labeling dialog" ) );
	btnOpenPrefs->addAction( act );
	btnOpenPrefs->setDefaultAction( act );
	btnOpenPrefs->setToolTip( "" );
	connect( btnOpenPrefs, SIGNAL( triggered( QAction* ) ), this, SLOT( labelingDialogFontNotFound( QAction* ) ) );

	// û�г�ʱ���ã���Ϊ֪ͨ��Ҫע�⣬����ֻ��ʾ�����Ϊ��һ�β�
	QgsMessageBarItem* fontMsg = new QgsMessageBarItem(
		tr( "Labeling" ),
		tr( "Font for layer <b><u>%1</u></b> was not found (<i>%2</i>). %3" ).arg( vlayer->name(), fontfamily, substitute ),
		btnOpenPrefs,
		QgsMessageBar::WARNING,
		0,
		messageBar() );
	messageBar()->pushItem( fontMsg );
}

bool UavMain::autoTransaction() const
{
	QSettings settings;
	return settings.value( "/qgis/autoTransaction", false ).toBool();
}

void UavMain::setAutoTransaction( bool state )
{
	QSettings settings;

	if ( settings.value( "/qgis/autoTransaction", false ).toBool() != state )
	{
		settings.setValue( "/qgis/autoTransaction", state );
	}
}

void UavMain::removingLayers( const QStringList& theLayers )
{
	foreach ( const QString &layerId, theLayers )
	{
		QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>(
			QgsMapLayerRegistry::instance()->mapLayer( layerId ) );
		if ( !vlayer || !vlayer->isEditable() )
			return;

		//toggleEditing( vlayer, false );
	}

	if ( autoTransaction() )
	{
		for ( QMap< QPair< QString, QString>, QgsTransactionGroup*>::Iterator tg = mTransactionGroups.begin(); tg != mTransactionGroups.end(); )
		{
			if ( tg.value()->isEmpty() )
			{
				delete tg.value();
				tg = mTransactionGroups.erase( tg );
			}
			else
			{
				++tg;
			}
		}
	}
}

void UavMain::zoomToLayerExtent()
{
	mLayerTreeView->defaultActions()->zoomToLayer( mMapCanvas );
}

void UavMain::zoomFull()
{
	mMapCanvas->zoomToFullExtent();
}

void UavMain::zoomToPrevious()
{
	mMapCanvas->zoomToPreviousExtent();
}

void UavMain::zoomToNext()
{
	mMapCanvas->zoomToNextExtent();
}

void UavMain::zoomToSelected()
{
	mMapCanvas->zoomToSelected();
}

void UavMain::localHistogramStretch()
{
	histogramStretch( true, QgsRaster::ContrastEnhancementMinMax );
}

void UavMain::fullHistogramStretch()
{
	histogramStretch( false, QgsRaster::ContrastEnhancementMinMax );
}

void UavMain::localCumulativeCutStretch()
{
	histogramStretch( true, QgsRaster::ContrastEnhancementCumulativeCut );
}

void UavMain::fullCumulativeCutStretch()
{
	histogramStretch( false, QgsRaster::ContrastEnhancementCumulativeCut );
}

void UavMain::increaseBrightness()
{
	int step = 1;
	if ( QgsApplication::keyboardModifiers() == Qt::ShiftModifier )
	{
		step = 10;
	}
	adjustBrightnessContrast( step );
}

void UavMain::decreaseBrightness()
{
	int step = -1;
	if ( QgsApplication::keyboardModifiers() == Qt::ShiftModifier )
	{
		step = -10;
	}
	adjustBrightnessContrast( step );
}

void UavMain::increaseContrast()
{
	int step = 1;
	if ( QgsApplication::keyboardModifiers() == Qt::ShiftModifier )
	{
		step = 10;
	}
	adjustBrightnessContrast( step, false );
}

void UavMain::decreaseContrast()
{
	int step = -1;
	if ( QgsApplication::keyboardModifiers() == Qt::ShiftModifier )
	{
		step = -10;
	}
	adjustBrightnessContrast( step, false );
}

void UavMain::histogramStretch( bool visibleAreaOnly /*= false*/, QgsRaster::ContrastEnhancementLimits theLimits /*= QgsRaster::ContrastEnhancementMinMax */ )
{
	QgsMapLayer * myLayer = mLayerTreeView->currentLayer();

	if ( !myLayer )
	{
		messageBar()->pushMessage( tr( "No Layer Selected" ),
			tr( "To perform a full histogram stretch, you need to have a raster layer selected." ),
			QgsMessageBar::INFO, messageTimeout() );
		return;
	}

	QgsRasterLayer* myRasterLayer = qobject_cast<QgsRasterLayer *>( myLayer );
	if ( !myRasterLayer )
	{
		messageBar()->pushMessage( tr( "No Layer Selected" ),
			tr( "To perform a full histogram stretch, you need to have a raster layer selected." ),
			QgsMessageBar::INFO, messageTimeout() );
		return;
	}

	QgsRectangle myRectangle;
	if ( visibleAreaOnly )
		myRectangle = mMapCanvas->mapSettings().outputExtentToLayerExtent( myRasterLayer, mMapCanvas->extent() );

	myRasterLayer->setContrastEnhancement( QgsContrastEnhancement::StretchToMinimumMaximum, theLimits, myRectangle );

	mMapCanvas->refresh();
}

void UavMain::adjustBrightnessContrast( int delta, bool updateBrightness /*= true */ )
{
	foreach ( QgsMapLayer * layer, mLayerTreeView->selectedLayers() )
	{
		if ( !layer )
		{
			messageBar()->pushMessage( tr( "No Layer Selected" ),
				tr( "To change brightness or contrast, you need to have a raster layer selected." ),
				QgsMessageBar::INFO, messageTimeout() );
			return;
		}

		QgsRasterLayer* rasterLayer = qobject_cast<QgsRasterLayer *>( layer );
		if ( !rasterLayer )
		{
			messageBar()->pushMessage( tr( "No Layer Selected" ),
				tr( "To change brightness or contrast, you need to have a raster layer selected." ),
				QgsMessageBar::INFO, messageTimeout() );
			return;
		}

		QgsBrightnessContrastFilter* brightnessFilter = rasterLayer->brightnessFilter();

		if ( updateBrightness )
		{
			brightnessFilter->setBrightness( brightnessFilter->brightness() + delta );
		}
		else
		{
			brightnessFilter->setContrast( brightnessFilter->contrast() + delta );
		}

		rasterLayer->triggerRepaint();
	}
}

void UavMain::hideAllLayers()
{
	foreach ( QgsLayerTreeLayer* nodeLayer, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
		nodeLayer->setVisible( Qt::Unchecked );
}

void UavMain::showAllLayers()
{
	foreach ( QgsLayerTreeLayer* nodeLayer, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
		nodeLayer->setVisible( Qt::Checked );
}

void UavMain::hideSelectedLayers()
{
	foreach ( QgsLayerTreeNode* node, mLayerTreeView->selectedNodes() )
	{
		if ( QgsLayerTree::isGroup( node ) )
			QgsLayerTree::toGroup( node )->setVisible( Qt::Unchecked );
		else if ( QgsLayerTree::isLayer( node ) )
			QgsLayerTree::toLayer( node )->setVisible( Qt::Unchecked );
	}
}

void UavMain::showSelectedLayers()
{
	foreach ( QgsLayerTreeNode* node, mLayerTreeView->selectedNodes() )
	{
		if ( QgsLayerTree::isGroup( node ) )
			QgsLayerTree::toGroup( node )->setVisible( Qt::Checked );
		else if ( QgsLayerTree::isLayer( node ) )
			QgsLayerTree::toLayer( node )->setVisible( Qt::Checked );
	}
}

void UavMain::zoomActualSize()
{
	legendLayerZoomNative();
}

void UavMain::legendLayerZoomNative()
{
	if ( !mLayerTreeView )
		return;

	//�ҵ���ǰͼ��
	QgsMapLayer* currentLayer = mLayerTreeView->currentLayer();
	if ( !currentLayer )
		return;

	QgsRasterLayer *layer =  qobject_cast<QgsRasterLayer *>( currentLayer );
	if ( layer )
	{
		QgsDebugMsg( "Raster units per pixel  : " + QString::number( layer->rasterUnitsPerPixelX() ) );
		QgsDebugMsg( "MapUnitsPerPixel before : " + QString::number( mMapCanvas->mapUnitsPerPixel() ) );

		if ( mMapCanvas->hasCrsTransformEnabled() )
		{
			// �õ�����Ļ������ؿ�ȵĳ���Դդ��CRS
			QgsRectangle e = mMapCanvas->extent();
			QSize s = mMapCanvas->mapSettings().outputSize();
			QgsPoint p1( e.center().x(), e.center().y() );
			QgsPoint p2( e.center().x() + e.width() / s.width(), e.center().y() + e.height() / s.height() );
			QgsCoordinateTransform ct( mMapCanvas->mapSettings().destinationCrs(), layer->crs() );
			p1 = ct.transform( p1 );
			p2 = ct.transform( p2 );
			double width = sqrt( p1.sqrDist( p2 ) ); // ͶӰ���صĿ�ȣ�ʵ�ʶԽ��ߣ�
			mMapCanvas->zoomByFactor( sqrt( layer->rasterUnitsPerPixelX() * layer->rasterUnitsPerPixelX() + layer->rasterUnitsPerPixelY() * layer->rasterUnitsPerPixelY() ) / width );
		}
		else
		{
			mMapCanvas->zoomByFactor( qAbs( layer->rasterUnitsPerPixelX() / mMapCanvas->mapUnitsPerPixel() ) );
		}
		mMapCanvas->refresh();
		QgsDebugMsg( "MapUnitsPerPixel after  : " + QString::number( mMapCanvas->mapUnitsPerPixel() ) );
	}
}

void UavMain::refreshMapCanvas()
{
	//ֹͣ�κε�ǰ����Ⱦ
	mMapCanvas->stopRendering();

	mMapCanvas->refreshAllLayers();
}

void UavMain::saveAsFile()
{
	QgsMapLayer* layer = activeLayer();
	if ( !layer )
		return;

	QgsMapLayer::LayerType layerType = layer->type();
	if ( layerType == QgsMapLayer::RasterLayer )
	{
		//saveAsRasterFile();
	}
	else if ( layerType == QgsMapLayer::VectorLayer )
	{
		saveAsVectorFileGeneral();
	}
}

void UavMain::removeLayer()
{
	if ( !mLayerTreeView )
	{
		return;
	}

	//foreach ( QgsMapLayer * layer, mLayerTreeView->selectedLayers() )
	//{
	//	QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>( layer );
	//	if ( vlayer && vlayer->isEditable() && !toggleEditing( vlayer, true ) )
	//		return;
	//}

	QList<QgsLayerTreeNode*> selectedNodes = mLayerTreeView->selectedNodes( true );

	//validate selection
	if ( selectedNodes.isEmpty() )
	{
		messageBar()->pushMessage( tr( "No legend entries selected" ),
			tr( "Select the layers and groups you want to remove in the legend." ),
			QgsMessageBar::INFO, messageTimeout() );
		return;
	}

	bool promptConfirmation = QSettings().value( "qgis/askToDeleteLayers", true ).toBool();
	//display a warning
	if ( promptConfirmation && QMessageBox::warning( this, tr( "Remove layers and groups" ), tr( "Remove %n legend entries?", "number of legend items to remove", selectedNodes.count() ), QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
	{
		return;
	}

	Q_FOREACH ( QgsLayerTreeNode* node, selectedNodes )
	{
		QgsLayerTreeGroup* parentGroup = qobject_cast<QgsLayerTreeGroup*>( node->parent() );
		if ( parentGroup )
			parentGroup->removeChildNode( node );
	}

	showStatusMessage( tr( "%n legend entries removed.", "number of removed legend entries", selectedNodes.count() ) );

	mMapCanvas->refresh();
}

void UavMain::setLayerCRS()
{
	if ( !( mLayerTreeView && mLayerTreeView->currentLayer() ) )
	{
		return;
	}

	QgsGenericProjectionSelector mySelector( this );
	mySelector.setSelectedCrsId( mLayerTreeView->currentLayer()->crs().srsid() );
	mySelector.setMessage();
	if ( !mySelector.exec() )
	{
		QApplication::restoreOverrideCursor();
		return;
	}

	QgsCoordinateReferenceSystem crs( mySelector.selectedCrsId(), QgsCoordinateReferenceSystem::InternalCrsId );

	foreach ( QgsLayerTreeNode* node, mLayerTreeView->selectedNodes() )
	{
		if ( QgsLayerTree::isGroup( node ) )
		{
			foreach ( QgsLayerTreeLayer* child, QgsLayerTree::toGroup( node )->findLayers() )
			{
				if ( child->layer() )
				{
					child->layer()->setCrs( crs );
					child->layer()->triggerRepaint();
				}
			}
		}
		else if ( QgsLayerTree::isLayer( node ) )
		{
			QgsLayerTreeLayer* nodeLayer = QgsLayerTree::toLayer( node );
			if ( nodeLayer->layer() )
			{
				nodeLayer->layer()->setCrs( crs );
				nodeLayer->layer()->triggerRepaint();
			}
		}
	}

	mMapCanvas->refresh();
}

void UavMain::setProjectCRSFromLayer()
{
	if ( !( mLayerTreeView && mLayerTreeView->currentLayer() ) )
	{
		return;
	}

	QgsCoordinateReferenceSystem crs = mLayerTreeView->currentLayer()->crs();
	mMapCanvas->freeze();
	mMapCanvas->setDestinationCrs( crs );
	if ( crs.mapUnits() != QGis::UnknownUnit )
	{
		mMapCanvas->setMapUnits( crs.mapUnits() );
	}
	mMapCanvas->freeze( false );
	mMapCanvas->refresh();
}

void UavMain::isInOverview()
{
	mLayerTreeView->defaultActions()->showInOverview();
}

void UavMain::addAllToOverview()
{
	if ( mLayerTreeView )
	{
		foreach ( QgsLayerTreeLayer* nodeL, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
			nodeL->setCustomProperty( "overview", 1 );
	}

	markDirty();
}

void UavMain::removeAllFromOverview()
{
	if ( mLayerTreeView )
	{
		foreach ( QgsLayerTreeLayer* nodeL, mLayerTreeView->layerTreeModel()->rootGroup()->findLayers() )
			nodeL->setCustomProperty( "overview", 0 );
	}

	markDirty();
} 

void UavMain::customProjection()
{
	// �����Զ���ͶӰ��ģʽ�Ի����һ��ʵ����
	// �Զ��ر�ʱ����Ϊָ�벻����ɾ���Ի���
	QgsCustomProjectionDialog * myDialog = new QgsCustomProjectionDialog( this );
	myDialog->setAttribute( Qt::WA_DeleteOnClose );
	myDialog->show();
}

void UavMain::addDelimitedTextLayer()
{
	// ��ʾ�ָ��ı��Ի���
	QDialog *dts = dynamic_cast<QDialog*>( QgsProviderRegistry::instance()->selectWidget( "delimitedtext", this ) );
	if ( !dts )
	{
		QMessageBox::warning( this, tr( "Delimited Text" ), tr( "Cannot get Delimited Text select dialog from provider." ) );
		return;
	}
	connect( dts, SIGNAL( addVectorLayer( QString, QString, QString ) ),
		this, SLOT( addSelectedVectorLayer( QString, QString, QString ) ) );
	dts->exec();
	delete dts;
}

void UavMain::addSelectedVectorLayer( const QString& uri, const QString& layerName, const QString& provider )
{
	addVectorLayer( uri, layerName, provider );
}

void UavMain::activeLayerChanged( QgsMapLayer *layer )
{
	if ( mMapCanvas )
		mMapCanvas->setCurrentLayer( layer );
}

void UavMain::destinationCrsChanged()
{
	updateCRSStatusBar();
}

void UavMain::legendGroupSetCRS()
{
	if ( !mMapCanvas )
	{
		return;
	}

	QgsLayerTreeGroup* currentGroup = mLayerTreeView->currentGroupNode();
	if ( !currentGroup )
		return;

	QgsGenericProjectionSelector mySelector( this );
	mySelector.setMessage();
	if ( !mySelector.exec() )
	{
		QApplication::restoreOverrideCursor();
		return;
	}

	QgsCoordinateReferenceSystem crs( mySelector.selectedCrsId(), QgsCoordinateReferenceSystem::InternalCrsId );
	foreach ( QgsLayerTreeLayer* nodeLayer, currentGroup->findLayers() )
	{
		if ( nodeLayer->layer() )
		{
			nodeLayer->layer()->setCrs( crs );
			nodeLayer->layer()->triggerRepaint();	//�����ػ�
		}
	}
}

void UavMain::legendLayerStretchUsingCurrentExtent()
{
	if ( !mLayerTreeView )
		return;

	//���ҵ�ǰͼ��
	QgsMapLayer* currentLayer = mLayerTreeView->currentLayer();
	if ( !currentLayer )
		return;

	QgsRasterLayer *layer =  qobject_cast<QgsRasterLayer *>( currentLayer );
	if ( layer )
	{
		QgsContrastEnhancement::ContrastEnhancementAlgorithm contrastEnhancementAlgorithm = QgsContrastEnhancement::StretchToMinimumMaximum;

		QgsRectangle myRectangle;
		myRectangle = mMapCanvas->mapSettings().outputExtentToLayerExtent( layer, mMapCanvas->extent() );
		layer->setContrastEnhancement( contrastEnhancementAlgorithm, QgsRaster::ContrastEnhancementMinMax, myRectangle );

		mLayerTreeView->refreshLayerSymbology( layer->id() );
		mMapCanvas->refresh();
	}
}

void UavMain::duplicateLayers( const QList<QgsMapLayer *>& lyrList /*= QList<QgsMapLayer *>() */ )
{
	if ( !mLayerTreeView )
	{
		return;
	}

	const QList<QgsMapLayer *> selectedLyrs = lyrList.empty() ? mLayerTreeView->selectedLayers() : lyrList;
	if ( selectedLyrs.empty() )
	{
		return;
	}

	mMapCanvas->freeze();
	QgsMapLayer *dupLayer;
	QString layerDupName, unSppType;
	QList<QgsMessageBarItem *> msgBars;

	foreach ( QgsMapLayer * selectedLyr, selectedLyrs )
	{
		dupLayer = nullptr;
		unSppType.clear();
		layerDupName = selectedLyr->name() + ' ' + tr( "copy" );

		if ( selectedLyr->type() == QgsMapLayer::PluginLayer )
		{
			unSppType = tr( "Plugin layer" );
		}

		// ����ͼ���������

		if ( unSppType.isEmpty() )
		{
			QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer*>( selectedLyr );
			// TODO: ����һ�㣬���Ը�������ͼ�����ͣ���ʱͼ��Ͳ��ͼ�㽫������
			if ( vlayer && vlayer->storageType() == "Memory storage" )
			{
				unSppType = tr( "Memory layer" );
			}
			else if ( vlayer )
			{
				QgsVectorLayer *dupVLayer = new QgsVectorLayer( vlayer->source(), layerDupName, vlayer->providerType() );
				if ( vlayer->dataProvider() )
				{
					dupVLayer->setProviderEncoding( vlayer->dataProvider()->encoding() );
				}

				//�����ͼ�����Զ���ı���
				QStringList variableNames = vlayer->customProperty( "variableNames" ).toStringList();
				QStringList variableValues = vlayer->customProperty( "variableValues" ).toStringList();

				int varIndex = 0;
				foreach ( const QString& variableName, variableNames )
				{
					if ( varIndex >= variableValues.length() )
					{
						break;
					}

					QVariant varValue = variableValues.at( varIndex );
					varIndex++;
					QgsExpressionContextUtils::setLayerVariable( dupVLayer, variableName, varValue );
				}

				foreach ( const QgsVectorJoinInfo& join, vlayer->vectorJoins() )
					dupVLayer->addJoin( join );

				for ( int fld = 0; fld < vlayer->fields().count(); fld++ )
				{
					if ( vlayer->fields().fieldOrigin( fld ) == QgsFields::OriginExpression )
						dupVLayer->addExpressionField( vlayer->expressionField( fld ), vlayer->fields().at( fld ) );
				}

				dupLayer = dupVLayer;
			}
		}

		if ( unSppType.isEmpty() && !dupLayer )
		{
			QgsRasterLayer *rlayer = qobject_cast<QgsRasterLayer*>( selectedLyr );
			if ( rlayer )
			{
				dupLayer = new QgsRasterLayer( rlayer->source(), layerDupName );
			}
		}

		if ( unSppType.isEmpty() && dupLayer && !dupLayer->isValid() )
		{
			msgBars.append( new QgsMessageBarItem(
				tr( "Duplicate layer: " ),
				tr( "%1 (duplication resulted in invalid layer)" ).arg( selectedLyr->name() ),
				QgsMessageBar::WARNING,
				0,
				mInfoBar ) );
			continue;
		}

		if ( !unSppType.isEmpty() || !dupLayer )
		{
			msgBars.append( new QgsMessageBarItem(
				tr( "Duplicate layer: " ),
				tr( "%1 (%2 type unsupported)" )
				.arg( selectedLyr->name(),
				!unSppType.isEmpty() ? QString( "'" ) + unSppType + "' " : "" ),
				QgsMessageBar::WARNING,
				0,
				mInfoBar ) );
			continue;
		}

		// ���ͼ�㵽ͼ����ע��
		QList<QgsMapLayer *> myList;
		myList << dupLayer;
		QgsProject::instance()->layerTreeRegistryBridge()->setEnabled( false );
		QgsMapLayerRegistry::instance()->addMapLayers( myList );
		QgsProject::instance()->layerTreeRegistryBridge()->setEnabled( true );

		QgsLayerTreeLayer* nodeSelectedLyr = mLayerTreeView->layerTreeModel()->rootGroup()->findLayer( selectedLyr->id() );
		Q_ASSERT( nodeSelectedLyr );
		Q_ASSERT( QgsLayerTree::isGroup( nodeSelectedLyr->parent() ) );
		QgsLayerTreeGroup* parentGroup = QgsLayerTree::toGroup( nodeSelectedLyr->parent() );

		QgsLayerTreeLayer* nodeDupLayer = parentGroup->insertLayer( parentGroup->children().indexOf( nodeSelectedLyr ) + 1, dupLayer );

		// �����ظ�����ͼ�㲻�ɼ������Բ�ɱ���֮ͨǰ��������
		nodeDupLayer->setVisible( Qt::Unchecked );

		// ����ͼ����ʽ
		QString errMsg;
		QDomDocument style;
		selectedLyr->exportNamedStyle( style, errMsg );
		if ( errMsg.isEmpty() )
			dupLayer->importNamedStyle( style, errMsg );
		if ( !errMsg.isEmpty() )
			messageBar()->pushMessage( errMsg,
			tr( "Cannot copy style to duplicated layer." ),
			QgsMessageBar::CRITICAL, messageTimeout() );
	}

	dupLayer = nullptr;

	mMapCanvas->freeze( false );

	// ͼ�㸴�ƺ���ʾ��Ϣ������
	foreach ( QgsMessageBarItem * msgBar, msgBars )
	{
		mInfoBar->pushItem( msgBar );
	}
}

void UavMain::setLayerScaleVisibility()
{
	if ( !mLayerTreeView )
		return;

	QList<QgsMapLayer*> layers = mLayerTreeView->selectedLayers();

	if ( layers.length() < 1 )
		return;

	QgsScaleVisibilityDialog* dlg = new QgsScaleVisibilityDialog( this, tr( "Set scale visibility for selected layers" ), mMapCanvas );
	QgsMapLayer* layer = mLayerTreeView->currentLayer();
	if ( layer )
	{
		dlg->setScaleVisiblity( layer->hasScaleBasedVisibility() );
		dlg->setMinimumScale( 1.0 / layer->maximumScale() );
		dlg->setMaximumScale( 1.0 / layer->minimumScale() );
	}
	if ( dlg->exec() )
	{
		mMapCanvas->freeze();
		Q_FOREACH ( QgsMapLayer* layer, layers )
		{
			layer->setScaleBasedVisibility( dlg->hasScaleVisibility() );
			layer->setMinimumScale( 1.0 / dlg->maximumScale() );
			layer->setMaximumScale( 1.0 / dlg->minimumScale() );
		}
		mMapCanvas->freeze( false );
		mMapCanvas->refresh();
	}
	delete dlg;
}

void UavMain::copyStyle( QgsMapLayer *sourceLayer /*= nullptr */ )
{
	QgsMapLayer *selectionLayer = sourceLayer ? sourceLayer : activeLayer();

	if ( selectionLayer )
	{
		QString errorMsg;
		QDomDocument doc( "qgis" );
		selectionLayer->exportNamedStyle( doc, errorMsg );


		if ( !errorMsg.isEmpty() )
		{
			messageBar()->pushMessage( tr( "Cannot copy style" ),
				errorMsg,
				QgsMessageBar::CRITICAL, messageTimeout() );
			return;
		}
		// �����ı���ʽ������Ϊ�ã�������XML����ճ�����ı��༭��
		clipboard()->setData( QGSCLIPBOARD_STYLE_MIME, doc.toByteArray(), doc.toString() );
		// ����ճ���˵�Ԫ��
		mActionPasteStyle->setEnabled( true );
	}
}

void UavMain::pasteStyle( QgsMapLayer *destinationLayer /*= nullptr */ )
{
	QgsMapLayer *selectionLayer = destinationLayer ? destinationLayer : activeLayer();
	if ( selectionLayer )
	{
		if ( clipboard()->hasFormat( QGSCLIPBOARD_STYLE_MIME ) )
		{
			QDomDocument doc( "qgis" );
			QString errorMsg;
			int errorLine, errorColumn;
			if ( !doc.setContent( clipboard()->data( QGSCLIPBOARD_STYLE_MIME ), false, &errorMsg, &errorLine, &errorColumn ) )
			{

				messageBar()->pushMessage( tr( "Cannot parse style" ),
					errorMsg,
					QgsMessageBar::CRITICAL, messageTimeout() );
				return;
			}

			bool isVectorStyle = doc.elementsByTagName( "pipe" ).isEmpty();
			if (( selectionLayer->type() == QgsMapLayer::RasterLayer && isVectorStyle ) ||
				( selectionLayer->type() == QgsMapLayer::VectorLayer && !isVectorStyle ) )
			{
				return;
			}

			if ( !selectionLayer->importNamedStyle( doc, errorMsg ) )
			{
				messageBar()->pushMessage( tr( "Cannot paste style" ),
					errorMsg,
					QgsMessageBar::CRITICAL, messageTimeout() );
				return;
			}

			mLayerTreeView->refreshLayerSymbology( selectionLayer->id() );
			mMapCanvas->clearCache();
			mMapCanvas->refresh();
		}
	}
}

void UavMain::applyStyleToGroup()
{
	if ( !mLayerTreeView )
		return;

	foreach ( QgsLayerTreeNode* node, mLayerTreeView->selectedNodes() )
	{
		if ( QgsLayerTree::isGroup( node ) )
		{
			foreach ( QgsLayerTreeLayer* nodeLayer, QgsLayerTree::toGroup( node )->findLayers() )
			{
				if ( nodeLayer->layer() )
				{
					pasteStyle( nodeLayer->layer() );
				}
			}
		}
		else if ( QgsLayerTree::isLayer( node ) )
		{
			QgsLayerTreeLayer* nodeLayer = QgsLayerTree::toLayer( node );
			if ( nodeLayer->layer() )
			{
				pasteStyle( nodeLayer->layer() );
			}
		}
	}
}

void UavMain::attributeTable()
{
	QgsVectorLayer *myLayer = qobject_cast<QgsVectorLayer *>( activeLayer() );
	if ( !myLayer )
	{
		return;
	}

	//QgsAttributeTableDialog *mDialog = new QgsAttributeTableDialog( myLayer, this );
	//mDialog->show();
	// the dialog will be deleted by itself on close
}

void UavMain::showLayerProperties( QgsMapLayer *ml )
{
  if ( !ml )
    return;

  if ( !QgsProject::instance()->layerIsEmbedded( ml->id() ).isEmpty() )
  {
    return; //����ʾǶ��������
  }

  if ( ml->type() == QgsMapLayer::RasterLayer )
  {
    QgsRasterLayerProperties *rlp = new QgsRasterLayerProperties( ml, mMapCanvas, this );

    rlp->exec();
    delete rlp; // delete since dialog cannot be reused without updating code
  }
  else if ( ml->type() == QgsMapLayer::VectorLayer ) // VECTOR
  {
    QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer *>( ml );

    QgsVectorLayerProperties *vlp = new QgsVectorLayerProperties( vlayer, this );

    if ( vlp->exec() )
    {
      activateDeactivateLayerRelatedActions( ml );
    }
    delete vlp; // delete since dialog cannot be reused without updating code
  }
  //else if ( ml->type() == QgsMapLayer::PluginLayer )//////////////////////////////////////////////////////////////////////////
  //{
  //  QgsPluginLayer* pl = qobject_cast<QgsPluginLayer *>( ml );
  //  if ( !pl )
  //    return;

  //  QgsPluginLayerType* plt = QgsPluginLayerRegistry::instance()->pluginLayerType( pl->pluginLayerType() );
  //  if ( !plt )
  //    return;

  //  if ( !plt->showLayerProperties( pl ) )
  //  {
  //    messageBar()->pushMessage( tr( "Warning" ),
  //                               tr( "This layer doesn't have a properties dialog." ),
  //                               QgsMessageBar::INFO, messageTimeout() );
  //  }
  //}
}

void UavMain::layerProperties()
{
	showLayerProperties( activeLayer() );
}

void UavMain::identify()
{
	mMapCanvas->setMapTool( mMapTools.mIdentify );
}

void UavMain::options()
{
	showOptionsDialog( this );
}
#include "app/qgsoptions.h"
#include "app/composer/qgscomposer.h"
void UavMain::showOptionsDialog( QWidget *parent /*= nullptr*/, const QString& currentPage /*= QString() */ )
{
	QSettings mySettings;
	// ��ȡ״̬���е�ͼ�����ߵ��б�
	QString oldScales = mySettings.value( "Map/scales", PROJECT_SCALES ).toString();

	bool oldCapitalise = mySettings.value( "/qgis/capitaliseLayerName", QVariant( false ) ).toBool();

	QgsOptions *optionsDialog = new QgsOptions( parent );
	if ( !currentPage.isEmpty() )
	{
		optionsDialog->setCurrentPage( currentPage );
	}

	if ( optionsDialog->exec() )
	{
		QgsProject::instance()->layerTreeRegistryBridge()->setNewLayersVisible( mySettings.value( "/qgis/new_layers_visible", true ).toBool() );

		// ����QSettings�û���ѡ�����ò�����ͼ
		setupLayerTreeViewFromSettings();

		// ����ȷ���Ƿ񿹾��
		mMapCanvas->enableAntiAliasing( mySettings.value( "/qgis/enable_anti_aliasing" ).toBool() );


		// ���ֲ����ͱ佹ϵ����ӦΪ����1��
		int action = mySettings.value( "/qgis/wheel_action", 2 ).toInt();
		double zoomFactor = mySettings.value( "/qgis/zoom_factor", 2 ).toDouble();
		mMapCanvas->setWheelAction( static_cast< QgsMapCanvas::WheelAction >( action ), zoomFactor );

		// �����Ƿ�ʹ����Ⱦ�������ͼ���ػ�
		mMapCanvas->setCachingEnabled( mySettings.value( "/qgis/enable_render_caching", true ).toBool() );

		// �趨�Ƿ���㲢�л�˳��س���
		mMapCanvas->setParallelRenderingEnabled( mySettings.value( "/qgis/parallel_rendering", false ).toBool() );

		// ��ͼˢ�¼�������룩
		mMapCanvas->setMapUpdateInterval( mySettings.value( "/qgis/map_update_interval", 250 ).toInt() );

		if ( oldCapitalise != mySettings.value( "/qgis/capitaliseLayerName", QVariant( false ) ).toBool() )
		{
			// ���ͼ��ʹ�ô�д��ĸ��������Ҫ��������ͼ������
			foreach ( QgsMapLayer* layer, QgsMapLayerRegistry::instance()->mapLayers() )
				layer->setLayerName( layer->originalName() );
		}

		//update any open compositions so they reflect new composer settings
		//we have to push the changes to the compositions here, because compositions
		//have no access to qgisapp and accordingly can't listen in to changes
		//QSet<QgsComposer*> composers = instance()->printComposers();
		//QSet<QgsComposer*>::iterator composer_it = composers.begin();
		//for ( ; composer_it != composers.end(); ++composer_it )
		//{
		//	QgsComposition* composition = ( *composer_it )->composition();
		//	composition->updateSettings();
		//}

		//do we need this? TS
		mMapCanvas->refresh();

		mRasterFileFilter = QgsProviderRegistry::instance()->fileRasterFilters();

		// ����������б�ı��������
		if ( oldScales != mySettings.value( "Map/scales", PROJECT_SCALES ).toString() )
		{
			mScaleEdit->updateScales();
		}

		// ���³��ȡ��������Ի�����������
		qobject_cast<QgsMeasureTool*>( mMapTools.mMeasureDist )->updateSettings();
		qobject_cast<QgsMeasureTool*>( mMapTools.mMeasureArea )->updateSettings();
		//qobject_cast<QgsMapToolMeasureAngle*>( mMapTools.mMeasureAngle )->updateSettings();

		//�Ƿ����ö�̬ͶӰ
		bool otfTransformAutoEnable = mySettings.value( "/Projections/otfTransformAutoEnable", true ).toBool();
		mLayerTreeCanvasBridge->setAutoEnableCrsTransform( otfTransformAutoEnable );
	}

	delete optionsDialog;
}

void UavMain::setupLayerTreeViewFromSettings()
{
	QSettings s;

	QgsLayerTreeModel* model = mLayerTreeView->layerTreeModel();

	// ��դ��ʾͼ��Ԥ��
	model->setFlag( QgsLayerTreeModel::ShowRasterPreviewIcon, s.value( "/qgis/createRasterLegendIcons", false ).toBool() );

	// ��ϡ�ͼ��ڵ������Ƿ�Ӵ�
	QFont fontLayer, fontGroup;
	fontLayer.setBold( s.value( "/qgis/legendLayersBold", true ).toBool() );
	fontGroup.setBold( s.value( "/qgis/legendGroupsBold", false ).toBool() );
	model->setLayerTreeNodeFont( QgsLayerTreeNode::NodeLayer, fontLayer );
	model->setLayerTreeNodeFont( QgsLayerTreeNode::NodeGroup, fontGroup );
}

QgisAppStyleSheet * UavMain::styleSheetBuilder()
{
	Q_ASSERT( mStyleSheetBuilder );
	return mStyleSheetBuilder;
}

void UavMain::setAppStyleSheet( const QString& stylesheet )
{
	setStyleSheet( stylesheet );

	// cascade styles to any current project composers
	// ������ʽ�κε�ǰ��Ŀ����
	//foreach ( QgsComposer *c, mPrintComposers )
	//{
	//	c->setStyleSheet( stylesheet );
	//}
}

void UavMain::setIconSizes( int size )
{
	int dockSize;
	if ( size > 32 )
	{
		dockSize = size - 16;
	}
	else if ( size == 32 )
	{
		dockSize = 24;
	}
	else
	{
		dockSize = 16;
	}

	//Set the icon size of for all the toolbars created in the future.
	setIconSize( QSize( size, size ) );

	//Change all current icon sizes.
	QList<QToolBar *> toolbars = findChildren<QToolBar *>();
	foreach ( QToolBar * toolbar, toolbars )
	{
		QString className = toolbar->parent()->metaObject()->className();
		if ( className == "QgisApp" )
		{
			toolbar->setIconSize( QSize( size, size ) );
		}
		else
		{
			toolbar->setIconSize( QSize( dockSize, dockSize ) );
		}
	}

	//foreach ( QgsComposer *c, mPrintComposers )
	//{
	//	c->setIconSizes( size );
	//}
}

void UavMain::upDataPosActions()
{
	if ( posdp->isValid() )
	{
		mPosTransform->setEnabled(true);
		mPosLinkPhoto->setEnabled(true);
		mPosSketchMap->setEnabled(true);
		mPosOneButton->setEnabled(true);
		mPosExport->setEnabled(true);
	}
	else
	{
		mPosTransform->setEnabled(false);
		mPosLinkPhoto->setEnabled(false);
		mPosSketchMap->setEnabled(false);
		mPosOneButton->setEnabled(false);
		mPosExport->setEnabled(false);
	}
}

void UavMain::openPosFile()
{
	uavPosLoadDialog *posDialog = new uavPosLoadDialog(this);
	connect( posDialog, SIGNAL( readFieldsList( QString & ) ), posdp, SLOT( readFieldsList( QString & ) ) );
	posDialog->exec();

	upDataPosActions();
	openMessageLog();
	QgsMessageLog::logMessage("\n");

	const QStringList errList = posdp->checkPosSettings();
	if (!errList.isEmpty())
	{
		QString err;
		foreach (QString str, errList)
			err += str + "��";

		messageBar()->pushMessage( "�ع����ز������", 
			QString("�����⵽%1�������ÿ��ܲ���ȷ����ȷ�ϲ����Ƿ�����ȷ��ʼ����").arg(err), 
			QgsMessageBar::WARNING, messageTimeout() );
	}

	delete posDialog;
}

bool UavMain::posTransform()
{
	return posdp->autoPosTransform();
}

void UavMain::posLinkPhoto()
{
	QgsMessageLog::logMessage("PP��̬���� :");

	if (!ppInter)
	{
		messageBar()->pushMessage( "PP��̬����", 
			"�����ں�����ͼ�ɹ����������������������, ������������ʧ��...",
			QgsMessageBar::CRITICAL, messageTimeout() );
		QgsMessageLog::logMessage(QString("\t�����ں�����ͼ�ɹ����������������������, ������������ʧ��..."));
		return;
	}

	if (ppInter->islinked())
	{
		// �Ͽ����Ӳ�����QAction
		ppInter->upDataUnLinkedSymbol();

		QgsMessageLog::logMessage("\t�ѳɹ��Ͽ�����.");
		messageBar()->pushMessage( "PP��̬����", "�ɹ��Ͽ�������ϵ.",QgsMessageBar::SUCCESS, messageTimeout() );

		mPosLinkPhoto->setText("PP��̬����");
		mPosLinkPhoto->setStatusTip("PP��̬����");
		mPosLinkPhoto->setIcon(uavCore::getThemeIcon("mActionlink.svg"));
	}
	else
	{
		if (!ppInter->isValid())
		{
			messageBar()->pushMessage( "PP��̬����", 
				"�������ع���ļ������ɹ������������������, ������������ʧ��...",
				QgsMessageBar::CRITICAL, messageTimeout() );
			QgsMessageLog::logMessage(QString("\t�������ع���ļ������ɹ������������������, ������������ʧ��..."));
			return;
		}

		// ����������ϵ
		ppInter->upDataLinkedSymbol();

		if (!ppInter->islinked())
			return;

		QgsMessageLog::logMessage(QString("\t�ɹ�����������ϵ."));
		messageBar()->pushMessage( "PP��̬����", "�ɹ�����������ϵ.",QgsMessageBar::SUCCESS, messageTimeout() );

		mPosLinkPhoto->setText("�Ͽ�PP��̬����");
		mPosLinkPhoto->setStatusTip("�Ͽ�PP��̬����");
		mPosLinkPhoto->setIcon(uavCore::getThemeIcon("mActionUnlink.svg"));
	}
}

void UavMain::posSketchMap()
{
	QgsVectorLayer* layer = posdp->autoSketchMap();
	if (!layer)
		return;
	ppInter = new uavPPInteractive(this, layer, posdp->noList());
	addAllToOverview();
}

void UavMain::posOneButton()
{
	const QStringList errList = posdp->checkPosSettings();
	if (!errList.isEmpty())
	{
		QString err;
		foreach (QString str, errList)
			err += str + "��";

		messageBar()->pushMessage( "�ع����ز������", 
			QString("�����⵽%1�������ÿ��ܲ���ȷ����ȷ�ϲ����Ƿ�����ȷ��ʼ����").arg(err), 
			QgsMessageBar::WARNING, messageTimeout() );
	}

	QgsMessageLog::logMessage("�ع��ļ�һ������ : \t��ʼ...");

	QSettings mSettings;
	if (mSettings.value("/Uav/pos/options/chkTransform", true).toBool()) // ����ת��
	{
		if (!posTransform())
			return;
	}
	if (mSettings.value("/Uav/pos/options/chkSketchMap", true).toBool()) // ������ͼ
	{
		posSketchMap();
	}
	if (mSettings.value("/Uav/pos/options/chkLinkPhoto", true).toBool()) // PP����
	{
		posLinkPhoto();
	}
}

void UavMain::posExport()
{
	posdp->posExport();
}

void UavMain::ppMatchPosName()
{
	//ppInter->matchPosName();
}

void UavMain::toggleLogMessageIcon( bool hasLogMessage )
{
	if ( hasLogMessage && !mLogDock->isVisible() )
	{
		mMessageButton->setIcon( uavCore::getThemeIcon( "mMessageLog.svg" ) );
	}
	else
	{
		mMessageButton->setIcon( uavCore::getThemeIcon( "mMessageLogRead.svg" ) );
	}
}

QgsMessageBar * UavMain::messageBar()
{
	Q_ASSERT( mInfoBar );
	return mInfoBar;
}

void UavMain::openMessageLog()
{
	mMessageButton->setChecked( true );
}

void UavMain::saveAsVectorFileGeneral( QgsVectorLayer* vlayer /*= nullptr*/, bool symbologyOption /*= true */ )
{
	if ( !vlayer )
	{
		vlayer = qobject_cast<QgsVectorLayer *>( activeLayer() ); // FIXME: output of multiple layers at once?
	}

	if ( !vlayer )
		return;

	QgsCoordinateReferenceSystem destCRS;

	int options = QgsVectorLayerSaveAsDialog::AllOptions;
	if ( !symbologyOption )
	{
		options &= ~QgsVectorLayerSaveAsDialog::Symbology;
	}

	QgsVectorLayerSaveAsDialog *dialog = new QgsVectorLayerSaveAsDialog( vlayer->crs().srsid(), vlayer->extent(), vlayer->selectedFeatureCount() != 0, options, this );

	dialog->setCanvasExtent( mMapCanvas->mapSettings().visibleExtent(), mMapCanvas->mapSettings().destinationCrs() );
	dialog->setIncludeZ( QgsWKBTypes::hasZ( QGis::fromOldWkbType( vlayer->wkbType() ) ) );

	if ( dialog->exec() == QDialog::Accepted )
	{
		QString encoding = dialog->encoding();
		QString vectorFilename = dialog->filename();
		QString format = dialog->format();
		QStringList datasourceOptions = dialog->datasourceOptions();
		bool autoGeometryType = dialog->automaticGeometryType();
		QgsWKBTypes::Type forcedGeometryType = dialog->geometryType();

		QgsCoordinateTransform* ct = nullptr;
		destCRS = QgsCoordinateReferenceSystem( dialog->crs(), QgsCoordinateReferenceSystem::InternalCrsId );

		if ( destCRS.isValid() && destCRS != vlayer->crs() )
		{
			ct = new QgsCoordinateTransform( vlayer->crs(), destCRS );

			//ask user about datum transformation
			QSettings settings;
			QList< QList< int > > dt = QgsCoordinateTransform::datumTransformations( vlayer->crs(), destCRS );
			if ( dt.size() > 1 && settings.value( "/Projections/showDatumTransformDialog", false ).toBool() )
			{
				QgsDatumTransformDialog d( vlayer->name(), dt );
				if ( d.exec() == QDialog::Accepted )
				{
					QList< int > sdt = d.selectedDatumTransform();
					if ( !sdt.isEmpty() )
					{
						ct->setSourceDatumTransform( sdt.at( 0 ) );
					}
					if ( sdt.size() > 1 )
					{
						ct->setDestinationDatumTransform( sdt.at( 1 ) );
					}
					ct->initialise();
				}
			}
		}

		// ok if the file existed it should be deleted now so we can continue...
		QApplication::setOverrideCursor( Qt::WaitCursor );

		QgsVectorFileWriter::WriterError error;
		QString errorMessage;
		QString newFilename;
		QgsRectangle filterExtent = dialog->filterExtent();
		error = QgsVectorFileWriter::writeAsVectorFormat(
			vlayer, vectorFilename, encoding, ct, format,
			dialog->onlySelected(),
			&errorMessage,
			datasourceOptions, dialog->layerOptions(),
			dialog->skipAttributeCreation(),
			&newFilename,
			static_cast< QgsVectorFileWriter::SymbologyExport >( dialog->symbologyExport() ),
			dialog->scaleDenominator(),
			dialog->hasFilterExtent() ? &filterExtent : nullptr,
			autoGeometryType ? QgsWKBTypes::Unknown : forcedGeometryType,
			dialog->forceMulti(),
			dialog->includeZ()
			);

		delete ct;

		QApplication::restoreOverrideCursor();

		if ( error == QgsVectorFileWriter::NoError )
		{
			if ( dialog->addToCanvas() )
			{
				addVectorLayers( QStringList( newFilename ), encoding, "file" );
			}
			emit layerSavedAs( vlayer, vectorFilename );
			messageBar()->pushMessage( tr( "Saving done" ),
				tr( "Export to vector file has been completed" ),
				QgsMessageBar::INFO, messageTimeout() );
		}
		else
		{
			QgsMessageViewer *m = new QgsMessageViewer( nullptr );
			m->setWindowTitle( tr( "Save error" ) );
			m->setMessageAsPlainText( tr( "Export to vector file failed.\nError: %1" ).arg( errorMessage ) );
			m->exec();
		}
	}

	delete dialog;
}

void UavMain::addDockWidget( Qt::DockWidgetArea theArea, QDockWidget *thepDockWidget )
{
	QMainWindow::addDockWidget( theArea, thepDockWidget );
	// Make the right and left docks consume all vertical space and top
	// and bottom docks nest between them
	setCorner( Qt::TopLeftCorner, Qt::LeftDockWidgetArea );
	setCorner( Qt::BottomLeftCorner, Qt::LeftDockWidgetArea );
	setCorner( Qt::TopRightCorner, Qt::RightDockWidgetArea );
	setCorner( Qt::BottomRightCorner, Qt::RightDockWidgetArea );
	// add to the Panel submenu
	mPanelMenu->addAction( thepDockWidget->toggleViewAction() );

	thepDockWidget->show();

	// refresh the map canvas
	mMapCanvas->refresh();
}