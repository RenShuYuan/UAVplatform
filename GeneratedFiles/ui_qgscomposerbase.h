/********************************************************************************
** Form generated from reading UI file 'qgscomposerbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERBASE_H
#define UI_QGSCOMPOSERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsComposerBase
{
public:
    QAction *mActionPrint;
    QAction *mActionZoomAll;
    QAction *mActionZoomIn;
    QAction *mActionZoomOut;
    QAction *mActionZoomActual;
    QAction *mActionMouseZoom;
    QAction *mActionAddNewMap;
    QAction *mActionAddNewLabel;
    QAction *mActionAddNewLegend;
    QAction *mActionSelectMoveItem;
    QAction *mActionExportAsImage;
    QAction *mActionExportAsPDF;
    QAction *mActionExportAsSVG;
    QAction *mActionAddNewScalebar;
    QAction *mActionRefreshView;
    QAction *mActionShowGrid;
    QAction *mActionSnapGrid;
    QAction *mActionShowGuides;
    QAction *mActionSnapGuides;
    QAction *mActionSmartGuides;
    QAction *mActionClearGuides;
    QAction *mActionAddImage;
    QAction *mActionMoveItemContent;
    QAction *mActionGroupItems;
    QAction *mActionUngroupItems;
    QAction *mActionRaiseItems;
    QAction *mActionLowerItems;
    QAction *mActionMoveItemsToTop;
    QAction *mActionMoveItemsToBottom;
    QAction *mActionLoadFromTemplate;
    QAction *mActionSaveAsTemplate;
    QAction *mActionAlignLeft;
    QAction *mActionAlignHCenter;
    QAction *mActionAlignRight;
    QAction *mActionAlignTop;
    QAction *mActionAlignVCenter;
    QAction *mActionAlignBottom;
    QAction *mActionQuit;
    QAction *mActionAddArrow;
    QAction *mActionAddTable;
    QAction *mActionAddAttributeTable;
    QAction *mActionPageSetup;
    QAction *mActionUndo;
    QAction *mActionRedo;
    QAction *mActionAddRectangle;
    QAction *mActionAddTriangle;
    QAction *mActionAddEllipse;
    QAction *mActionAddHtml;
    QAction *mActionComposerManager;
    QAction *mActionNewComposer;
    QAction *mActionSaveProject;
    QAction *mActionDuplicateComposer;
    QAction *mActionLockItems;
    QAction *mActionUnlockAll;
    QAction *mActionPasteInPlace;
    QAction *mActionDeleteSelection;
    QAction *mActionDeselectAll;
    QAction *mActionSelectAll;
    QAction *mActionInvertSelection;
    QAction *mActionSelectNextBelow;
    QAction *mActionSelectNextAbove;
    QAction *mActionPan;
    QAction *mActionOptions;
    QAction *mActionShowRulers;
    QAction *mActionAtlasFirst;
    QAction *mActionAtlasPrev;
    QAction *mActionAtlasNext;
    QAction *mActionAtlasLast;
    QAction *mActionAtlasPreview;
    QAction *mActionPrintAtlas;
    QAction *mActionExportAtlasAsImage;
    QAction *mActionExportAtlasAsSVG;
    QAction *mActionExportAtlasAsPDF;
    QAction *mActionAtlasSettings;
    QAction *mActionShowBoxes;
    QAction *mActionToggleFullScreen;
    QAction *mActionHidePanels;
    QAction *mActionShowPage;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *mViewFrame;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QStatusBar *mStatusBar;
    QToolBar *mComposerToolbar;
    QToolBar *mPaperNavToolbar;
    QToolBar *mItemActionToolbar;
    QToolBar *mItemToolbar;
    QToolBar *mAtlasToolbar;

    void setupUi(QMainWindow *QgsComposerBase)
    {
        if (QgsComposerBase->objectName().isEmpty())
            QgsComposerBase->setObjectName(QString::fromUtf8("QgsComposerBase"));
        QgsComposerBase->resize(1333, 609);
        QgsComposerBase->setMouseTracking(true);
        mActionPrint = new QAction(QgsComposerBase);
        mActionPrint->setObjectName(QString::fromUtf8("mActionPrint"));
        mActionPrint->setCheckable(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionFilePrint.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPrint->setIcon(icon);
        mActionZoomAll = new QAction(QgsComposerBase);
        mActionZoomAll->setObjectName(QString::fromUtf8("mActionZoomAll"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomFullExtent.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomAll->setIcon(icon1);
        mActionZoomIn = new QAction(QgsComposerBase);
        mActionZoomIn->setObjectName(QString::fromUtf8("mActionZoomIn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomIn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomIn->setIcon(icon2);
        mActionZoomOut = new QAction(QgsComposerBase);
        mActionZoomOut->setObjectName(QString::fromUtf8("mActionZoomOut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomOut.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomOut->setIcon(icon3);
        mActionZoomActual = new QAction(QgsComposerBase);
        mActionZoomActual->setObjectName(QString::fromUtf8("mActionZoomActual"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomActual.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionZoomActual->setIcon(icon4);
        mActionMouseZoom = new QAction(QgsComposerBase);
        mActionMouseZoom->setObjectName(QString::fromUtf8("mActionMouseZoom"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionZoomToSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionMouseZoom->setIcon(icon5);
        mActionAddNewMap = new QAction(QgsComposerBase);
        mActionAddNewMap->setObjectName(QString::fromUtf8("mActionAddNewMap"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionAddMap.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddNewMap->setIcon(icon6);
        mActionAddNewLabel = new QAction(QgsComposerBase);
        mActionAddNewLabel->setObjectName(QString::fromUtf8("mActionAddNewLabel"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/mActionLabel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddNewLabel->setIcon(icon7);
        mActionAddNewLegend = new QAction(QgsComposerBase);
        mActionAddNewLegend->setObjectName(QString::fromUtf8("mActionAddNewLegend"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionAddLegend.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddNewLegend->setIcon(icon8);
        mActionSelectMoveItem = new QAction(QgsComposerBase);
        mActionSelectMoveItem->setObjectName(QString::fromUtf8("mActionSelectMoveItem"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mActionPan.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectMoveItem->setIcon(icon9);
        mActionExportAsImage = new QAction(QgsComposerBase);
        mActionExportAsImage->setObjectName(QString::fromUtf8("mActionExportAsImage"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveMapAsImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsImage->setIcon(icon10);
        mActionExportAsPDF = new QAction(QgsComposerBase);
        mActionExportAsPDF->setObjectName(QString::fromUtf8("mActionExportAsPDF"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveAsPDF.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsPDF->setIcon(icon11);
        mActionExportAsSVG = new QAction(QgsComposerBase);
        mActionExportAsSVG->setObjectName(QString::fromUtf8("mActionExportAsSVG"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveAsSVG.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionExportAsSVG->setIcon(icon12);
        mActionAddNewScalebar = new QAction(QgsComposerBase);
        mActionAddNewScalebar->setObjectName(QString::fromUtf8("mActionAddNewScalebar"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/mActionScaleBar.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddNewScalebar->setIcon(icon13);
        mActionRefreshView = new QAction(QgsComposerBase);
        mActionRefreshView->setObjectName(QString::fromUtf8("mActionRefreshView"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/mActionDraw.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRefreshView->setIcon(icon14);
        mActionShowGrid = new QAction(QgsComposerBase);
        mActionShowGrid->setObjectName(QString::fromUtf8("mActionShowGrid"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/default/vector_grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionShowGrid->setIcon(icon15);
        mActionSnapGrid = new QAction(QgsComposerBase);
        mActionSnapGrid->setObjectName(QString::fromUtf8("mActionSnapGrid"));
        mActionShowGuides = new QAction(QgsComposerBase);
        mActionShowGuides->setObjectName(QString::fromUtf8("mActionShowGuides"));
        mActionSnapGuides = new QAction(QgsComposerBase);
        mActionSnapGuides->setObjectName(QString::fromUtf8("mActionSnapGuides"));
        mActionSmartGuides = new QAction(QgsComposerBase);
        mActionSmartGuides->setObjectName(QString::fromUtf8("mActionSmartGuides"));
        mActionClearGuides = new QAction(QgsComposerBase);
        mActionClearGuides->setObjectName(QString::fromUtf8("mActionClearGuides"));
        mActionAddImage = new QAction(QgsComposerBase);
        mActionAddImage->setObjectName(QString::fromUtf8("mActionAddImage"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/themes/default/mActionAddImage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAddImage->setIcon(icon16);
        mActionMoveItemContent = new QAction(QgsComposerBase);
        mActionMoveItemContent->setObjectName(QString::fromUtf8("mActionMoveItemContent"));
        mActionGroupItems = new QAction(QgsComposerBase);
        mActionGroupItems->setObjectName(QString::fromUtf8("mActionGroupItems"));
        mActionUngroupItems = new QAction(QgsComposerBase);
        mActionUngroupItems->setObjectName(QString::fromUtf8("mActionUngroupItems"));
        mActionRaiseItems = new QAction(QgsComposerBase);
        mActionRaiseItems->setObjectName(QString::fromUtf8("mActionRaiseItems"));
        mActionLowerItems = new QAction(QgsComposerBase);
        mActionLowerItems->setObjectName(QString::fromUtf8("mActionLowerItems"));
        mActionMoveItemsToTop = new QAction(QgsComposerBase);
        mActionMoveItemsToTop->setObjectName(QString::fromUtf8("mActionMoveItemsToTop"));
        mActionMoveItemsToBottom = new QAction(QgsComposerBase);
        mActionMoveItemsToBottom->setObjectName(QString::fromUtf8("mActionMoveItemsToBottom"));
        mActionLoadFromTemplate = new QAction(QgsComposerBase);
        mActionLoadFromTemplate->setObjectName(QString::fromUtf8("mActionLoadFromTemplate"));
        mActionSaveAsTemplate = new QAction(QgsComposerBase);
        mActionSaveAsTemplate->setObjectName(QString::fromUtf8("mActionSaveAsTemplate"));
        mActionAlignLeft = new QAction(QgsComposerBase);
        mActionAlignLeft->setObjectName(QString::fromUtf8("mActionAlignLeft"));
        mActionAlignHCenter = new QAction(QgsComposerBase);
        mActionAlignHCenter->setObjectName(QString::fromUtf8("mActionAlignHCenter"));
        mActionAlignRight = new QAction(QgsComposerBase);
        mActionAlignRight->setObjectName(QString::fromUtf8("mActionAlignRight"));
        mActionAlignTop = new QAction(QgsComposerBase);
        mActionAlignTop->setObjectName(QString::fromUtf8("mActionAlignTop"));
        mActionAlignVCenter = new QAction(QgsComposerBase);
        mActionAlignVCenter->setObjectName(QString::fromUtf8("mActionAlignVCenter"));
        mActionAlignBottom = new QAction(QgsComposerBase);
        mActionAlignBottom->setObjectName(QString::fromUtf8("mActionAlignBottom"));
        mActionQuit = new QAction(QgsComposerBase);
        mActionQuit->setObjectName(QString::fromUtf8("mActionQuit"));
        mActionAddArrow = new QAction(QgsComposerBase);
        mActionAddArrow->setObjectName(QString::fromUtf8("mActionAddArrow"));
        mActionAddArrow->setCheckable(true);
        mActionAddTable = new QAction(QgsComposerBase);
        mActionAddTable->setObjectName(QString::fromUtf8("mActionAddTable"));
        mActionAddTable->setCheckable(true);
        mActionAddAttributeTable = new QAction(QgsComposerBase);
        mActionAddAttributeTable->setObjectName(QString::fromUtf8("mActionAddAttributeTable"));
        mActionAddAttributeTable->setCheckable(true);
        mActionPageSetup = new QAction(QgsComposerBase);
        mActionPageSetup->setObjectName(QString::fromUtf8("mActionPageSetup"));
        mActionUndo = new QAction(QgsComposerBase);
        mActionUndo->setObjectName(QString::fromUtf8("mActionUndo"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.png"), QSize(), QIcon::Normal, QIcon::On);
        mActionUndo->setIcon(icon17);
        mActionRedo = new QAction(QgsComposerBase);
        mActionRedo->setObjectName(QString::fromUtf8("mActionRedo"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/themes/default/mActionRedo.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionRedo->setIcon(icon18);
        mActionAddRectangle = new QAction(QgsComposerBase);
        mActionAddRectangle->setObjectName(QString::fromUtf8("mActionAddRectangle"));
        mActionAddRectangle->setCheckable(true);
        mActionAddTriangle = new QAction(QgsComposerBase);
        mActionAddTriangle->setObjectName(QString::fromUtf8("mActionAddTriangle"));
        mActionAddTriangle->setCheckable(true);
        mActionAddEllipse = new QAction(QgsComposerBase);
        mActionAddEllipse->setObjectName(QString::fromUtf8("mActionAddEllipse"));
        mActionAddEllipse->setCheckable(true);
        mActionAddHtml = new QAction(QgsComposerBase);
        mActionAddHtml->setObjectName(QString::fromUtf8("mActionAddHtml"));
        mActionAddHtml->setCheckable(true);
        mActionComposerManager = new QAction(QgsComposerBase);
        mActionComposerManager->setObjectName(QString::fromUtf8("mActionComposerManager"));
        mActionNewComposer = new QAction(QgsComposerBase);
        mActionNewComposer->setObjectName(QString::fromUtf8("mActionNewComposer"));
        mActionSaveProject = new QAction(QgsComposerBase);
        mActionSaveProject->setObjectName(QString::fromUtf8("mActionSaveProject"));
        mActionDuplicateComposer = new QAction(QgsComposerBase);
        mActionDuplicateComposer->setObjectName(QString::fromUtf8("mActionDuplicateComposer"));
        mActionLockItems = new QAction(QgsComposerBase);
        mActionLockItems->setObjectName(QString::fromUtf8("mActionLockItems"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/themes/default/locked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionLockItems->setIcon(icon19);
        mActionUnlockAll = new QAction(QgsComposerBase);
        mActionUnlockAll->setObjectName(QString::fromUtf8("mActionUnlockAll"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/themes/default/unlocked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionUnlockAll->setIcon(icon20);
        mActionPasteInPlace = new QAction(QgsComposerBase);
        mActionPasteInPlace->setObjectName(QString::fromUtf8("mActionPasteInPlace"));
        mActionDeleteSelection = new QAction(QgsComposerBase);
        mActionDeleteSelection->setObjectName(QString::fromUtf8("mActionDeleteSelection"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/themes/default/mActionDeleteSelected.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeleteSelection->setIcon(icon21);
        mActionDeselectAll = new QAction(QgsComposerBase);
        mActionDeselectAll->setObjectName(QString::fromUtf8("mActionDeselectAll"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionDeselectAll->setIcon(icon22);
        mActionSelectAll = new QAction(QgsComposerBase);
        mActionSelectAll->setObjectName(QString::fromUtf8("mActionSelectAll"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/themes/default/mActionSelectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSelectAll->setIcon(icon23);
        mActionInvertSelection = new QAction(QgsComposerBase);
        mActionInvertSelection->setObjectName(QString::fromUtf8("mActionInvertSelection"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/themes/default/mActionInvertSelection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionInvertSelection->setIcon(icon24);
        mActionSelectNextBelow = new QAction(QgsComposerBase);
        mActionSelectNextBelow->setObjectName(QString::fromUtf8("mActionSelectNextBelow"));
        mActionSelectNextAbove = new QAction(QgsComposerBase);
        mActionSelectNextAbove->setObjectName(QString::fromUtf8("mActionSelectNextAbove"));
        mActionPan = new QAction(QgsComposerBase);
        mActionPan->setObjectName(QString::fromUtf8("mActionPan"));
        mActionPan->setIcon(icon9);
        mActionOptions = new QAction(QgsComposerBase);
        mActionOptions->setObjectName(QString::fromUtf8("mActionOptions"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOptions->setIcon(icon25);
        mActionOptions->setMenuRole(QAction::PreferencesRole);
        mActionShowRulers = new QAction(QgsComposerBase);
        mActionShowRulers->setObjectName(QString::fromUtf8("mActionShowRulers"));
        mActionAtlasFirst = new QAction(QgsComposerBase);
        mActionAtlasFirst->setObjectName(QString::fromUtf8("mActionAtlasFirst"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/themes/default/mActionAtlasFirst.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasFirst->setIcon(icon26);
        mActionAtlasPrev = new QAction(QgsComposerBase);
        mActionAtlasPrev->setObjectName(QString::fromUtf8("mActionAtlasPrev"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/themes/default/mActionAtlasPrev.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasPrev->setIcon(icon27);
        mActionAtlasNext = new QAction(QgsComposerBase);
        mActionAtlasNext->setObjectName(QString::fromUtf8("mActionAtlasNext"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/themes/default/mActionAtlasNext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasNext->setIcon(icon28);
        mActionAtlasLast = new QAction(QgsComposerBase);
        mActionAtlasLast->setObjectName(QString::fromUtf8("mActionAtlasLast"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/themes/default/mActionAtlasLast.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasLast->setIcon(icon29);
        mActionAtlasPreview = new QAction(QgsComposerBase);
        mActionAtlasPreview->setObjectName(QString::fromUtf8("mActionAtlasPreview"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/themes/default/mIconAtlas.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasPreview->setIcon(icon30);
        mActionPrintAtlas = new QAction(QgsComposerBase);
        mActionPrintAtlas->setObjectName(QString::fromUtf8("mActionPrintAtlas"));
        mActionPrintAtlas->setIcon(icon);
        mActionExportAtlasAsImage = new QAction(QgsComposerBase);
        mActionExportAtlasAsImage->setObjectName(QString::fromUtf8("mActionExportAtlasAsImage"));
        mActionExportAtlasAsImage->setIcon(icon10);
        mActionExportAtlasAsSVG = new QAction(QgsComposerBase);
        mActionExportAtlasAsSVG->setObjectName(QString::fromUtf8("mActionExportAtlasAsSVG"));
        mActionExportAtlasAsSVG->setIcon(icon12);
        mActionExportAtlasAsPDF = new QAction(QgsComposerBase);
        mActionExportAtlasAsPDF->setObjectName(QString::fromUtf8("mActionExportAtlasAsPDF"));
        mActionExportAtlasAsPDF->setIcon(icon11);
        mActionAtlasSettings = new QAction(QgsComposerBase);
        mActionAtlasSettings->setObjectName(QString::fromUtf8("mActionAtlasSettings"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/themes/default/mActionAtlasSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionAtlasSettings->setIcon(icon31);
        mActionShowBoxes = new QAction(QgsComposerBase);
        mActionShowBoxes->setObjectName(QString::fromUtf8("mActionShowBoxes"));
        mActionToggleFullScreen = new QAction(QgsComposerBase);
        mActionToggleFullScreen->setObjectName(QString::fromUtf8("mActionToggleFullScreen"));
        mActionToggleFullScreen->setCheckable(true);
        mActionHidePanels = new QAction(QgsComposerBase);
        mActionHidePanels->setObjectName(QString::fromUtf8("mActionHidePanels"));
        mActionHidePanels->setCheckable(true);
        mActionShowPage = new QAction(QgsComposerBase);
        mActionShowPage->setObjectName(QString::fromUtf8("mActionShowPage"));
        mActionShowPage->setCheckable(true);
        centralwidget = new QWidget(QgsComposerBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMouseTracking(true);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mViewFrame = new QFrame(centralwidget);
        mViewFrame->setObjectName(QString::fromUtf8("mViewFrame"));
        mViewFrame->setMouseTracking(true);
        mViewFrame->setFrameShape(QFrame::StyledPanel);
        mViewFrame->setFrameShadow(QFrame::Raised);
        scrollArea = new QScrollArea(mViewFrame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(280, 110, 120, 80));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 78));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(mViewFrame, 0, 0, 1, 1);

        QgsComposerBase->setCentralWidget(centralwidget);
        mStatusBar = new QStatusBar(QgsComposerBase);
        mStatusBar->setObjectName(QString::fromUtf8("mStatusBar"));
        QgsComposerBase->setStatusBar(mStatusBar);
        mComposerToolbar = new QToolBar(QgsComposerBase);
        mComposerToolbar->setObjectName(QString::fromUtf8("mComposerToolbar"));
        QgsComposerBase->addToolBar(Qt::TopToolBarArea, mComposerToolbar);
        mPaperNavToolbar = new QToolBar(QgsComposerBase);
        mPaperNavToolbar->setObjectName(QString::fromUtf8("mPaperNavToolbar"));
        QgsComposerBase->addToolBar(Qt::TopToolBarArea, mPaperNavToolbar);
        QgsComposerBase->insertToolBarBreak(mPaperNavToolbar);
        mItemActionToolbar = new QToolBar(QgsComposerBase);
        mItemActionToolbar->setObjectName(QString::fromUtf8("mItemActionToolbar"));
        QgsComposerBase->addToolBar(Qt::TopToolBarArea, mItemActionToolbar);
        QgsComposerBase->insertToolBarBreak(mItemActionToolbar);
        mItemToolbar = new QToolBar(QgsComposerBase);
        mItemToolbar->setObjectName(QString::fromUtf8("mItemToolbar"));
        QgsComposerBase->addToolBar(Qt::TopToolBarArea, mItemToolbar);
        QgsComposerBase->insertToolBarBreak(mItemToolbar);
        mAtlasToolbar = new QToolBar(QgsComposerBase);
        mAtlasToolbar->setObjectName(QString::fromUtf8("mAtlasToolbar"));
        QgsComposerBase->addToolBar(Qt::TopToolBarArea, mAtlasToolbar);
        QgsComposerBase->insertToolBarBreak(mAtlasToolbar);

        mComposerToolbar->addAction(mActionSaveProject);
        mComposerToolbar->addSeparator();
        mComposerToolbar->addAction(mActionNewComposer);
        mComposerToolbar->addAction(mActionDuplicateComposer);
        mComposerToolbar->addAction(mActionComposerManager);
        mComposerToolbar->addAction(mActionLoadFromTemplate);
        mComposerToolbar->addAction(mActionSaveAsTemplate);
        mComposerToolbar->addSeparator();
        mComposerToolbar->addAction(mActionPrint);
        mComposerToolbar->addAction(mActionExportAsImage);
        mComposerToolbar->addAction(mActionExportAsSVG);
        mComposerToolbar->addAction(mActionExportAsPDF);
        mComposerToolbar->addAction(mActionUndo);
        mComposerToolbar->addAction(mActionRedo);
        mPaperNavToolbar->addAction(mActionZoomAll);
        mPaperNavToolbar->addAction(mActionZoomActual);
        mPaperNavToolbar->addAction(mActionZoomIn);
        mPaperNavToolbar->addAction(mActionZoomOut);
        mPaperNavToolbar->addAction(mActionRefreshView);
        mItemActionToolbar->addAction(mActionGroupItems);
        mItemActionToolbar->addAction(mActionUngroupItems);
        mItemActionToolbar->addAction(mActionLockItems);
        mItemActionToolbar->addAction(mActionUnlockAll);
        mItemToolbar->addAction(mActionPan);
        mItemToolbar->addAction(mActionMouseZoom);
        mItemToolbar->addAction(mActionSelectMoveItem);
        mItemToolbar->addAction(mActionMoveItemContent);
        mItemToolbar->addSeparator();
        mItemToolbar->addAction(mActionAddNewMap);
        mItemToolbar->addAction(mActionAddImage);
        mItemToolbar->addAction(mActionAddNewLabel);
        mItemToolbar->addAction(mActionAddNewLegend);
        mItemToolbar->addAction(mActionAddNewScalebar);
        mItemToolbar->addAction(mActionAddArrow);
        mItemToolbar->addAction(mActionAddAttributeTable);
        mItemToolbar->addAction(mActionAddHtml);
        mAtlasToolbar->addAction(mActionAtlasPreview);
        mAtlasToolbar->addAction(mActionAtlasFirst);
        mAtlasToolbar->addAction(mActionAtlasPrev);
        mAtlasToolbar->addAction(mActionAtlasNext);
        mAtlasToolbar->addAction(mActionAtlasLast);
        mAtlasToolbar->addAction(mActionPrintAtlas);
        mAtlasToolbar->addAction(mActionAtlasSettings);

        retranslateUi(QgsComposerBase);

        QMetaObject::connectSlotsByName(QgsComposerBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgsComposerBase)
    {
        QgsComposerBase->setWindowTitle(QApplication::translate("QgsComposerBase", "MainWindow", 0, QApplication::UnicodeUTF8));
        mActionPrint->setText(QApplication::translate("QgsComposerBase", "&Print...", 0, QApplication::UnicodeUTF8));
        mActionPrint->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        mActionZoomAll->setText(QApplication::translate("QgsComposerBase", "Zoom &Full", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionZoomAll->setToolTip(QApplication::translate("QgsComposerBase", "Zoom full", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionZoomAll->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+0", 0, QApplication::UnicodeUTF8));
        mActionZoomIn->setText(QApplication::translate("QgsComposerBase", "Zoom &In", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionZoomIn->setToolTip(QApplication::translate("QgsComposerBase", "Zoom in", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionZoomIn->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl++", 0, QApplication::UnicodeUTF8));
        mActionZoomOut->setText(QApplication::translate("QgsComposerBase", "Zoom &Out", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionZoomOut->setToolTip(QApplication::translate("QgsComposerBase", "Zoom out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionZoomOut->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        mActionZoomActual->setText(QApplication::translate("QgsComposerBase", "Zoom to &100%", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionZoomActual->setToolTip(QApplication::translate("QgsComposerBase", "Zoom to 100%", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionZoomActual->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+1", 0, QApplication::UnicodeUTF8));
        mActionMouseZoom->setText(QApplication::translate("QgsComposerBase", "Zoom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionMouseZoom->setToolTip(QApplication::translate("QgsComposerBase", "Zoom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionMouseZoom->setShortcut(QApplication::translate("QgsComposerBase", "Z", 0, QApplication::UnicodeUTF8));
        mActionAddNewMap->setText(QApplication::translate("QgsComposerBase", "Add &Map", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddNewMap->setToolTip(QApplication::translate("QgsComposerBase", "Add new map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddNewLabel->setText(QApplication::translate("QgsComposerBase", "Add Lab&el", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddNewLabel->setToolTip(QApplication::translate("QgsComposerBase", "Add new label", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddNewLegend->setText(QApplication::translate("QgsComposerBase", "Add Legen&d", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddNewLegend->setToolTip(QApplication::translate("QgsComposerBase", "Add new legend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSelectMoveItem->setText(QApplication::translate("QgsComposerBase", "Move &Item", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSelectMoveItem->setToolTip(QApplication::translate("QgsComposerBase", "Select/Move item", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSelectMoveItem->setShortcut(QApplication::translate("QgsComposerBase", "V", 0, QApplication::UnicodeUTF8));
        mActionExportAsImage->setText(QApplication::translate("QgsComposerBase", "Export as &Image...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionExportAsImage->setToolTip(QApplication::translate("QgsComposerBase", "Export as image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionExportAsPDF->setText(QApplication::translate("QgsComposerBase", "&Export as PDF...", 0, QApplication::UnicodeUTF8));
        mActionExportAsSVG->setText(QApplication::translate("QgsComposerBase", "Export as S&VG...", 0, QApplication::UnicodeUTF8));
        mActionAddNewScalebar->setText(QApplication::translate("QgsComposerBase", "Add &Scalebar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddNewScalebar->setToolTip(QApplication::translate("QgsComposerBase", "Add new scalebar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionRefreshView->setText(QApplication::translate("QgsComposerBase", "&Refresh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionRefreshView->setToolTip(QApplication::translate("QgsComposerBase", "Refresh view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionRefreshView->setShortcut(QApplication::translate("QgsComposerBase", "F5", 0, QApplication::UnicodeUTF8));
        mActionShowGrid->setText(QApplication::translate("QgsComposerBase", "Show &Grid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionShowGrid->setToolTip(QApplication::translate("QgsComposerBase", "Show grid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionShowGrid->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+'", 0, QApplication::UnicodeUTF8));
        mActionSnapGrid->setText(QApplication::translate("QgsComposerBase", "S&nap to Grid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSnapGrid->setToolTip(QApplication::translate("QgsComposerBase", "Snap to grid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSnapGrid->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+'", 0, QApplication::UnicodeUTF8));
        mActionShowGuides->setText(QApplication::translate("QgsComposerBase", "Show G&uides", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionShowGuides->setToolTip(QApplication::translate("QgsComposerBase", "Show guides", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionShowGuides->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+;", 0, QApplication::UnicodeUTF8));
        mActionSnapGuides->setText(QApplication::translate("QgsComposerBase", "&Snap to Guides", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSnapGuides->setToolTip(QApplication::translate("QgsComposerBase", "Snap to guides", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSnapGuides->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+;", 0, QApplication::UnicodeUTF8));
        mActionSmartGuides->setText(QApplication::translate("QgsComposerBase", "S&mart Guides", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSmartGuides->setToolTip(QApplication::translate("QgsComposerBase", "Smart guides", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSmartGuides->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Alt+;", 0, QApplication::UnicodeUTF8));
        mActionClearGuides->setText(QApplication::translate("QgsComposerBase", "&Clear Guides", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionClearGuides->setToolTip(QApplication::translate("QgsComposerBase", "Clear guides", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddImage->setText(QApplication::translate("QgsComposerBase", "Add Im&age", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddImage->setToolTip(QApplication::translate("QgsComposerBase", "Add image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionMoveItemContent->setText(QApplication::translate("QgsComposerBase", "Move &Content", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemContent->setToolTip(QApplication::translate("QgsComposerBase", "Move item content", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionMoveItemContent->setShortcut(QApplication::translate("QgsComposerBase", "C", 0, QApplication::UnicodeUTF8));
        mActionGroupItems->setText(QApplication::translate("QgsComposerBase", "&Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionGroupItems->setToolTip(QApplication::translate("QgsComposerBase", "Group items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionGroupItems->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        mActionUngroupItems->setText(QApplication::translate("QgsComposerBase", "&Ungroup", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionUngroupItems->setToolTip(QApplication::translate("QgsComposerBase", "Ungroup items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionUngroupItems->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+G", 0, QApplication::UnicodeUTF8));
        mActionRaiseItems->setText(QApplication::translate("QgsComposerBase", "&Raise", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionRaiseItems->setToolTip(QApplication::translate("QgsComposerBase", "Raise selected items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionRaiseItems->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+]", 0, QApplication::UnicodeUTF8));
        mActionLowerItems->setText(QApplication::translate("QgsComposerBase", "&Lower", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionLowerItems->setToolTip(QApplication::translate("QgsComposerBase", "Lower selected items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionLowerItems->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+[", 0, QApplication::UnicodeUTF8));
        mActionMoveItemsToTop->setText(QApplication::translate("QgsComposerBase", "Bring to &Front", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemsToTop->setToolTip(QApplication::translate("QgsComposerBase", "Move selected items to top", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionMoveItemsToTop->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+]", 0, QApplication::UnicodeUTF8));
        mActionMoveItemsToBottom->setText(QApplication::translate("QgsComposerBase", "Send to &Back", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionMoveItemsToBottom->setToolTip(QApplication::translate("QgsComposerBase", "Move selected items to bottom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionMoveItemsToBottom->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+[", 0, QApplication::UnicodeUTF8));
        mActionLoadFromTemplate->setText(QApplication::translate("QgsComposerBase", "&Add Items from Template...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionLoadFromTemplate->setToolTip(QApplication::translate("QgsComposerBase", "Add items from template", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSaveAsTemplate->setText(QApplication::translate("QgsComposerBase", "Save as &Template...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSaveAsTemplate->setToolTip(QApplication::translate("QgsComposerBase", "Save as template", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignLeft->setText(QApplication::translate("QgsComposerBase", "Align Left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignLeft->setToolTip(QApplication::translate("QgsComposerBase", "Align selected items left", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignHCenter->setText(QApplication::translate("QgsComposerBase", "Align Center", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignHCenter->setToolTip(QApplication::translate("QgsComposerBase", "Align center horizontal", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignRight->setText(QApplication::translate("QgsComposerBase", "Align Right", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignRight->setToolTip(QApplication::translate("QgsComposerBase", "Align selected items right", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignTop->setText(QApplication::translate("QgsComposerBase", "Align Top", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignTop->setToolTip(QApplication::translate("QgsComposerBase", "Align selected items to top", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignVCenter->setText(QApplication::translate("QgsComposerBase", "Align Center Vertical", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignVCenter->setToolTip(QApplication::translate("QgsComposerBase", "Align center vertical", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAlignBottom->setText(QApplication::translate("QgsComposerBase", "Align Bottom", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAlignBottom->setToolTip(QApplication::translate("QgsComposerBase", "Align selected items bottom", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionQuit->setText(QApplication::translate("QgsComposerBase", "&Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionQuit->setToolTip(QApplication::translate("QgsComposerBase", "Quit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionQuit->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        mActionAddArrow->setText(QApplication::translate("QgsComposerBase", "Add Arro&w", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddArrow->setToolTip(QApplication::translate("QgsComposerBase", "Add arrow", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddTable->setText(QApplication::translate("QgsComposerBase", "Add Table", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddTable->setToolTip(QApplication::translate("QgsComposerBase", "Add table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddAttributeTable->setText(QApplication::translate("QgsComposerBase", "Add Attribute &Table", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddAttributeTable->setToolTip(QApplication::translate("QgsComposerBase", "Add attribute table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionPageSetup->setText(QApplication::translate("QgsComposerBase", "Pa&ge Setup...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionPageSetup->setToolTip(QApplication::translate("QgsComposerBase", "Page setup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionPageSetup->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+P", 0, QApplication::UnicodeUTF8));
        mActionUndo->setText(QApplication::translate("QgsComposerBase", "&Undo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionUndo->setToolTip(QApplication::translate("QgsComposerBase", "Revert last change", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionUndo->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        mActionRedo->setText(QApplication::translate("QgsComposerBase", "&Redo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionRedo->setToolTip(QApplication::translate("QgsComposerBase", "Restore last change", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionRedo->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+Z", 0, QApplication::UnicodeUTF8));
        mActionAddRectangle->setText(QApplication::translate("QgsComposerBase", "Add Rectangle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddRectangle->setToolTip(QApplication::translate("QgsComposerBase", "Add rectangle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddTriangle->setText(QApplication::translate("QgsComposerBase", "Add Triangle", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddTriangle->setToolTip(QApplication::translate("QgsComposerBase", "Add triangle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddEllipse->setText(QApplication::translate("QgsComposerBase", "Add Ellipse", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddEllipse->setToolTip(QApplication::translate("QgsComposerBase", "Add ellipse", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAddHtml->setText(QApplication::translate("QgsComposerBase", "Add &HTML", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionAddHtml->setToolTip(QApplication::translate("QgsComposerBase", "Add HTML frame", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionComposerManager->setText(QApplication::translate("QgsComposerBase", "Composer &Manager...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionComposerManager->setToolTip(QApplication::translate("QgsComposerBase", "Composer manager", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionNewComposer->setText(QApplication::translate("QgsComposerBase", "&New Composer...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionNewComposer->setToolTip(QApplication::translate("QgsComposerBase", "New composer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionNewComposer->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        mActionSaveProject->setText(QApplication::translate("QgsComposerBase", "&Save Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSaveProject->setToolTip(QApplication::translate("QgsComposerBase", "Save project", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSaveProject->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        mActionDuplicateComposer->setText(QApplication::translate("QgsComposerBase", "&Duplicate Composer...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionDuplicateComposer->setToolTip(QApplication::translate("QgsComposerBase", "Duplicate composer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionLockItems->setText(QApplication::translate("QgsComposerBase", "Loc&k Selected Items", 0, QApplication::UnicodeUTF8));
        mActionLockItems->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        mActionUnlockAll->setText(QApplication::translate("QgsComposerBase", "Unl&ock All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionUnlockAll->setToolTip(QApplication::translate("QgsComposerBase", "Unlock All Items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionUnlockAll->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+L", 0, QApplication::UnicodeUTF8));
        mActionPasteInPlace->setText(QApplication::translate("QgsComposerBase", "Paste in P&lace", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionPasteInPlace->setToolTip(QApplication::translate("QgsComposerBase", "Paste in place", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionPasteInPlace->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+V", 0, QApplication::UnicodeUTF8));
        mActionDeleteSelection->setText(QApplication::translate("QgsComposerBase", "&Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionDeleteSelection->setToolTip(QApplication::translate("QgsComposerBase", "Delete selected items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionDeleteSelection->setShortcut(QApplication::translate("QgsComposerBase", "Del", 0, QApplication::UnicodeUTF8));
        mActionDeselectAll->setText(QApplication::translate("QgsComposerBase", "D&eselect All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionDeselectAll->setToolTip(QApplication::translate("QgsComposerBase", "Deselect all", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionDeselectAll->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+A", 0, QApplication::UnicodeUTF8));
        mActionSelectAll->setText(QApplication::translate("QgsComposerBase", "&Select All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSelectAll->setToolTip(QApplication::translate("QgsComposerBase", "Select all items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSelectAll->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        mActionInvertSelection->setText(QApplication::translate("QgsComposerBase", "&Invert Selection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionInvertSelection->setToolTip(QApplication::translate("QgsComposerBase", "Invert selection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSelectNextBelow->setText(QApplication::translate("QgsComposerBase", "Select Next Item &Below", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSelectNextBelow->setToolTip(QApplication::translate("QgsComposerBase", "Select next item below", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSelectNextBelow->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Alt+[", 0, QApplication::UnicodeUTF8));
        mActionSelectNextAbove->setText(QApplication::translate("QgsComposerBase", "Select Next Item &Above", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionSelectNextAbove->setToolTip(QApplication::translate("QgsComposerBase", "Select next item above", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionSelectNextAbove->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Alt+]", 0, QApplication::UnicodeUTF8));
        mActionPan->setText(QApplication::translate("QgsComposerBase", "Pan Composer", 0, QApplication::UnicodeUTF8));
        mActionPan->setShortcut(QApplication::translate("QgsComposerBase", "P", 0, QApplication::UnicodeUTF8));
        mActionOptions->setText(QApplication::translate("QgsComposerBase", "Composer &Options...", 0, QApplication::UnicodeUTF8));
        mActionShowRulers->setText(QApplication::translate("QgsComposerBase", "Show Ru&lers", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionShowRulers->setToolTip(QApplication::translate("QgsComposerBase", "Show rulers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionShowRulers->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        mActionAtlasFirst->setText(QApplication::translate("QgsComposerBase", "&First Feature", 0, QApplication::UnicodeUTF8));
        mActionAtlasFirst->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+<", 0, QApplication::UnicodeUTF8));
        mActionAtlasPrev->setText(QApplication::translate("QgsComposerBase", "P&revious Feature", 0, QApplication::UnicodeUTF8));
        mActionAtlasPrev->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+,", 0, QApplication::UnicodeUTF8));
        mActionAtlasNext->setText(QApplication::translate("QgsComposerBase", "&Next Feature", 0, QApplication::UnicodeUTF8));
        mActionAtlasNext->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+.", 0, QApplication::UnicodeUTF8));
        mActionAtlasLast->setText(QApplication::translate("QgsComposerBase", "&Last Feature", 0, QApplication::UnicodeUTF8));
        mActionAtlasLast->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+>", 0, QApplication::UnicodeUTF8));
        mActionAtlasPreview->setText(QApplication::translate("QgsComposerBase", "Preview &Atlas", 0, QApplication::UnicodeUTF8));
        mActionAtlasPreview->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Alt+/", 0, QApplication::UnicodeUTF8));
        mActionPrintAtlas->setText(QApplication::translate("QgsComposerBase", "&Print Atlas...", 0, QApplication::UnicodeUTF8));
        mActionExportAtlasAsImage->setText(QApplication::translate("QgsComposerBase", "Export Atlas as &Images...", 0, QApplication::UnicodeUTF8));
        mActionExportAtlasAsSVG->setText(QApplication::translate("QgsComposerBase", "Export Atlas as S&VG...", 0, QApplication::UnicodeUTF8));
        mActionExportAtlasAsPDF->setText(QApplication::translate("QgsComposerBase", "&Export Atlas as PDF...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionExportAtlasAsPDF->setToolTip(QApplication::translate("QgsComposerBase", "Export Atlas as PDF", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionAtlasSettings->setText(QApplication::translate("QgsComposerBase", "Atlas &Settings", 0, QApplication::UnicodeUTF8));
        mActionShowBoxes->setText(QApplication::translate("QgsComposerBase", "Show Bounding Boxes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionShowBoxes->setToolTip(QApplication::translate("QgsComposerBase", "Show bounding boxes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionShowBoxes->setShortcut(QApplication::translate("QgsComposerBase", "Ctrl+Shift+B", 0, QApplication::UnicodeUTF8));
        mActionToggleFullScreen->setText(QApplication::translate("QgsComposerBase", "Toggle Full Scr&een", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionToggleFullScreen->setToolTip(QApplication::translate("QgsComposerBase", "Toggle full screen mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionToggleFullScreen->setShortcut(QApplication::translate("QgsComposerBase", "F11", 0, QApplication::UnicodeUTF8));
        mActionHidePanels->setText(QApplication::translate("QgsComposerBase", "&Hide Panels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionHidePanels->setToolTip(QApplication::translate("QgsComposerBase", "Hide panels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionHidePanels->setShortcut(QApplication::translate("QgsComposerBase", "F10", 0, QApplication::UnicodeUTF8));
        mActionShowPage->setText(QApplication::translate("QgsComposerBase", "Show Pages", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionShowPage->setToolTip(QApplication::translate("QgsComposerBase", "Show pages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mComposerToolbar->setWindowTitle(QApplication::translate("QgsComposerBase", "Composer", 0, QApplication::UnicodeUTF8));
        mPaperNavToolbar->setWindowTitle(QApplication::translate("QgsComposerBase", "Navigation", 0, QApplication::UnicodeUTF8));
        mItemActionToolbar->setWindowTitle(QApplication::translate("QgsComposerBase", "Actions", 0, QApplication::UnicodeUTF8));
        mItemToolbar->setWindowTitle(QApplication::translate("QgsComposerBase", "Toolbox", 0, QApplication::UnicodeUTF8));
        mAtlasToolbar->setWindowTitle(QApplication::translate("QgsComposerBase", "Atlas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerBase: public Ui_QgsComposerBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERBASE_H
