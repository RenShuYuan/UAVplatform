/********************************************************************************
** Form generated from reading UI file 'qgsprojectpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPROJECTPROPERTIESBASE_H
#define UI_QGSPROJECTPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbuttonv2.h"
#include "qgsprojectionselector.h"

QT_BEGIN_NAMESPACE

class Ui_QgsProjectPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mProjOpts_01;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QgsCollapsibleGroupBox *titleBox;
    QGridLayout *gridLayout_26;
    QHBoxLayout *horizontalLayout_5;
    QLabel *textLabel1;
    QgsColorButtonV2 *pbnSelectionColor;
    QLabel *label;
    QgsColorButtonV2 *pbnCanvasColor;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLineEdit *titleEdit;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *projectFileName;
    QSpacerItem *spacerItem;
    QComboBox *cbxAbsolutePath;
    QCheckBox *mMapTileRenderingCheckBox;
    QgsCollapsibleGroupBox *btnGrpMeasureEllipsoid;
    QGridLayout *gridLayoutMeasureTool;
    QLabel *textLabel1_8;
    QComboBox *mDistanceUnitsCombo;
    QLabel *label_41;
    QLabel *label_28;
    QComboBox *cmbEllipsoid;
    QLineEdit *leSemiMinor;
    QLineEdit *leSemiMajor;
    QLabel *label_42;
    QLabel *label_29;
    QComboBox *mAreaUnitsCombo;
    QgsCollapsibleGroupBox *mCoordinateDisplayGroup;
    QGridLayout *gridLayout_18;
    QLabel *label_26;
    QLabel *label_25;
    QComboBox *mCoordinateDisplayComboBox;
    QFrame *mFramePrecision;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radAutomatic;
    QRadioButton *radManual;
    QSpinBox *spinBoxDP;
    QLabel *labelDP;
    QgsCollapsibleGroupBox *grpProjectScales;
    QGridLayout *gridLayout_7;
    QListWidget *lstScales;
    QVBoxLayout *verticalLayout_4;
    QToolButton *pbnAddScale;
    QToolButton *pbnRemoveScale;
    QToolButton *pbnImportScales;
    QToolButton *pbnExportScales;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_5;
    QWidget *mProjOpts_02;
    QVBoxLayout *verticalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *cbxProjectionEnabled;
    QVBoxLayout *verticalLayout_21;
    QgsProjectionSelector *projectionSelector;
    QWidget *mProjOpts_03;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_22;
    QTableWidget *twIdentifyLayers;
    QFrame *mButtonBoxFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsProjectPropertiesBase)
    {
        if (QgsProjectPropertiesBase->objectName().isEmpty())
            QgsProjectPropertiesBase->setObjectName(QString::fromUtf8("QgsProjectPropertiesBase"));
        QgsProjectPropertiesBase->resize(857, 830);
        QgsProjectPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsProjectPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsProjectPropertiesBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/images/themes/default/propertyicons/CRS.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/images/themes/default/propertyicons/map_tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mProjOpts_01 = new QWidget();
        mProjOpts_01->setObjectName(QString::fromUtf8("mProjOpts_01"));
        verticalLayout_6 = new QVBoxLayout(mProjOpts_01);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        scrollArea_2 = new QScrollArea(mProjOpts_01);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 681, 752));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 0, -1, 0);
        titleBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        titleBox->setObjectName(QString::fromUtf8("titleBox"));
        titleBox->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_26 = new QGridLayout(titleBox);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        textLabel1 = new QLabel(titleBox);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
        textLabel1->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(textLabel1);

        pbnSelectionColor = new QgsColorButtonV2(titleBox);
        pbnSelectionColor->setObjectName(QString::fromUtf8("pbnSelectionColor"));
        pbnSelectionColor->setMinimumSize(QSize(120, 0));
        pbnSelectionColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(pbnSelectionColor);

        label = new QLabel(titleBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label);

        pbnCanvasColor = new QgsColorButtonV2(titleBox);
        pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
        pbnCanvasColor->setMinimumSize(QSize(120, 0));
        pbnCanvasColor->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(pbnCanvasColor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_26->addLayout(horizontalLayout_5, 2, 0, 1, 4);

        label_3 = new QLabel(titleBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_3, 3, 0, 1, 1);

        titleEdit = new QLineEdit(titleBox);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

        gridLayout_26->addWidget(titleEdit, 1, 1, 1, 3);

        label_2 = new QLabel(titleBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(titleBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(label_4, 0, 0, 1, 1);

        projectFileName = new QLabel(titleBox);
        projectFileName->setObjectName(QString::fromUtf8("projectFileName"));
        sizePolicy2.setHeightForWidth(projectFileName->sizePolicy().hasHeightForWidth());
        projectFileName->setSizePolicy(sizePolicy2);

        gridLayout_26->addWidget(projectFileName, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_26->addItem(spacerItem, 3, 2, 1, 2);

        cbxAbsolutePath = new QComboBox(titleBox);
        cbxAbsolutePath->setObjectName(QString::fromUtf8("cbxAbsolutePath"));

        gridLayout_26->addWidget(cbxAbsolutePath, 3, 1, 1, 1);

        mMapTileRenderingCheckBox = new QCheckBox(titleBox);
        mMapTileRenderingCheckBox->setObjectName(QString::fromUtf8("mMapTileRenderingCheckBox"));

        gridLayout_26->addWidget(mMapTileRenderingCheckBox, 4, 0, 1, 4);


        verticalLayout_8->addWidget(titleBox);

        btnGrpMeasureEllipsoid = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        btnGrpMeasureEllipsoid->setObjectName(QString::fromUtf8("btnGrpMeasureEllipsoid"));
        btnGrpMeasureEllipsoid->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayoutMeasureTool = new QGridLayout(btnGrpMeasureEllipsoid);
        gridLayoutMeasureTool->setObjectName(QString::fromUtf8("gridLayoutMeasureTool"));
        textLabel1_8 = new QLabel(btnGrpMeasureEllipsoid);
        textLabel1_8->setObjectName(QString::fromUtf8("textLabel1_8"));

        gridLayoutMeasureTool->addWidget(textLabel1_8, 0, 0, 1, 1);

        mDistanceUnitsCombo = new QComboBox(btnGrpMeasureEllipsoid);
        mDistanceUnitsCombo->setObjectName(QString::fromUtf8("mDistanceUnitsCombo"));

        gridLayoutMeasureTool->addWidget(mDistanceUnitsCombo, 2, 1, 1, 4);

        label_41 = new QLabel(btnGrpMeasureEllipsoid);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayoutMeasureTool->addWidget(label_41, 1, 1, 1, 1);

        label_28 = new QLabel(btnGrpMeasureEllipsoid);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayoutMeasureTool->addWidget(label_28, 2, 0, 1, 1);

        cmbEllipsoid = new QComboBox(btnGrpMeasureEllipsoid);
        cmbEllipsoid->setObjectName(QString::fromUtf8("cmbEllipsoid"));

        gridLayoutMeasureTool->addWidget(cmbEllipsoid, 0, 1, 1, 4);

        leSemiMinor = new QLineEdit(btnGrpMeasureEllipsoid);
        leSemiMinor->setObjectName(QString::fromUtf8("leSemiMinor"));

        gridLayoutMeasureTool->addWidget(leSemiMinor, 1, 4, 1, 1);

        leSemiMajor = new QLineEdit(btnGrpMeasureEllipsoid);
        leSemiMajor->setObjectName(QString::fromUtf8("leSemiMajor"));

        gridLayoutMeasureTool->addWidget(leSemiMajor, 1, 2, 1, 1);

        label_42 = new QLabel(btnGrpMeasureEllipsoid);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayoutMeasureTool->addWidget(label_42, 1, 3, 1, 1);

        label_29 = new QLabel(btnGrpMeasureEllipsoid);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayoutMeasureTool->addWidget(label_29, 3, 0, 1, 1);

        mAreaUnitsCombo = new QComboBox(btnGrpMeasureEllipsoid);
        mAreaUnitsCombo->setObjectName(QString::fromUtf8("mAreaUnitsCombo"));

        gridLayoutMeasureTool->addWidget(mAreaUnitsCombo, 3, 1, 1, 4);


        verticalLayout_8->addWidget(btnGrpMeasureEllipsoid);

        mCoordinateDisplayGroup = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mCoordinateDisplayGroup->setObjectName(QString::fromUtf8("mCoordinateDisplayGroup"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mCoordinateDisplayGroup->sizePolicy().hasHeightForWidth());
        mCoordinateDisplayGroup->setSizePolicy(sizePolicy3);
        mCoordinateDisplayGroup->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_18 = new QGridLayout(mCoordinateDisplayGroup);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        label_26 = new QLabel(mCoordinateDisplayGroup);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_18->addWidget(label_26, 1, 0, 1, 1);

        label_25 = new QLabel(mCoordinateDisplayGroup);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_18->addWidget(label_25, 0, 0, 1, 1);

        mCoordinateDisplayComboBox = new QComboBox(mCoordinateDisplayGroup);
        mCoordinateDisplayComboBox->setObjectName(QString::fromUtf8("mCoordinateDisplayComboBox"));

        gridLayout_18->addWidget(mCoordinateDisplayComboBox, 0, 1, 1, 1);

        mFramePrecision = new QFrame(mCoordinateDisplayGroup);
        mFramePrecision->setObjectName(QString::fromUtf8("mFramePrecision"));
        horizontalLayout_12 = new QHBoxLayout(mFramePrecision);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        radAutomatic = new QRadioButton(mFramePrecision);
        radAutomatic->setObjectName(QString::fromUtf8("radAutomatic"));
        radAutomatic->setChecked(true);

        horizontalLayout_12->addWidget(radAutomatic);

        radManual = new QRadioButton(mFramePrecision);
        radManual->setObjectName(QString::fromUtf8("radManual"));

        horizontalLayout_12->addWidget(radManual);

        spinBoxDP = new QSpinBox(mFramePrecision);
        spinBoxDP->setObjectName(QString::fromUtf8("spinBoxDP"));

        horizontalLayout_12->addWidget(spinBoxDP);

        labelDP = new QLabel(mFramePrecision);
        labelDP->setObjectName(QString::fromUtf8("labelDP"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelDP->sizePolicy().hasHeightForWidth());
        labelDP->setSizePolicy(sizePolicy4);

        horizontalLayout_12->addWidget(labelDP);


        gridLayout_18->addWidget(mFramePrecision, 1, 1, 1, 1);


        verticalLayout_8->addWidget(mCoordinateDisplayGroup);

        grpProjectScales = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        grpProjectScales->setObjectName(QString::fromUtf8("grpProjectScales"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(3);
        sizePolicy5.setHeightForWidth(grpProjectScales->sizePolicy().hasHeightForWidth());
        grpProjectScales->setSizePolicy(sizePolicy5);
        grpProjectScales->setCheckable(true);
        grpProjectScales->setChecked(false);
        grpProjectScales->setProperty("syncGroup", QVariant(QString::fromUtf8("projgeneral")));
        gridLayout_7 = new QGridLayout(grpProjectScales);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lstScales = new QListWidget(grpProjectScales);
        lstScales->setObjectName(QString::fromUtf8("lstScales"));

        gridLayout_7->addWidget(lstScales, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pbnAddScale = new QToolButton(grpProjectScales);
        pbnAddScale->setObjectName(QString::fromUtf8("pbnAddScale"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddScale->setIcon(icon3);

        verticalLayout_4->addWidget(pbnAddScale);

        pbnRemoveScale = new QToolButton(grpProjectScales);
        pbnRemoveScale->setObjectName(QString::fromUtf8("pbnRemoveScale"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveScale->setIcon(icon4);

        verticalLayout_4->addWidget(pbnRemoveScale);

        pbnImportScales = new QToolButton(grpProjectScales);
        pbnImportScales->setObjectName(QString::fromUtf8("pbnImportScales"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportScales->setIcon(icon5);

        verticalLayout_4->addWidget(pbnImportScales);

        pbnExportScales = new QToolButton(grpProjectScales);
        pbnExportScales->setObjectName(QString::fromUtf8("pbnExportScales"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportScales->setIcon(icon6);

        verticalLayout_4->addWidget(pbnExportScales);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_7->addLayout(verticalLayout_4, 0, 1, 1, 1);


        verticalLayout_8->addWidget(grpProjectScales);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mProjOpts_01);
        mProjOpts_02 = new QWidget();
        mProjOpts_02->setObjectName(QString::fromUtf8("mProjOpts_02"));
        verticalLayout_5 = new QVBoxLayout(mProjOpts_02);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        scrollArea = new QScrollArea(mProjOpts_02);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 373, 49));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, 0);
        cbxProjectionEnabled = new QGroupBox(scrollAreaWidgetContents);
        cbxProjectionEnabled->setObjectName(QString::fromUtf8("cbxProjectionEnabled"));
        cbxProjectionEnabled->setCheckable(true);
        verticalLayout_21 = new QVBoxLayout(cbxProjectionEnabled);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        projectionSelector = new QgsProjectionSelector(cbxProjectionEnabled);
        projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

        verticalLayout_21->addWidget(projectionSelector);


        verticalLayout_7->addWidget(cbxProjectionEnabled);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_5->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mProjOpts_02);
        mProjOpts_03 = new QWidget();
        mProjOpts_03->setObjectName(QString::fromUtf8("mProjOpts_03"));
        verticalLayout_9 = new QVBoxLayout(mProjOpts_03);
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        scrollArea_3 = new QScrollArea(mProjOpts_03);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 158, 100));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 0, -1, 0);
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 100));
        verticalLayout_22 = new QVBoxLayout(groupBox_3);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        twIdentifyLayers = new QTableWidget(groupBox_3);
        if (twIdentifyLayers->columnCount() < 3)
            twIdentifyLayers->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twIdentifyLayers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        twIdentifyLayers->setObjectName(QString::fromUtf8("twIdentifyLayers"));
        twIdentifyLayers->setSortingEnabled(true);

        verticalLayout_22->addWidget(twIdentifyLayers);


        verticalLayout_10->addWidget(groupBox_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_9->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mProjOpts_03);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsProjectPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        sizePolicy3.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy3);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mButtonBoxFrame);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addWidget(mButtonBoxFrame);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(pbnSelectionColor);
        label->setBuddy(pbnCanvasColor);
        label_3->setBuddy(cbxAbsolutePath);
        label_2->setBuddy(projectFileName);
        label_4->setBuddy(titleEdit);
        projectFileName->setBuddy(titleEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mOptionsListWidget, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, titleEdit);
        QWidget::setTabOrder(titleEdit, pbnSelectionColor);
        QWidget::setTabOrder(pbnSelectionColor, pbnCanvasColor);
        QWidget::setTabOrder(pbnCanvasColor, cbxAbsolutePath);
        QWidget::setTabOrder(cbxAbsolutePath, mMapTileRenderingCheckBox);
        QWidget::setTabOrder(mMapTileRenderingCheckBox, cmbEllipsoid);
        QWidget::setTabOrder(cmbEllipsoid, leSemiMajor);
        QWidget::setTabOrder(leSemiMajor, leSemiMinor);
        QWidget::setTabOrder(leSemiMinor, mDistanceUnitsCombo);
        QWidget::setTabOrder(mDistanceUnitsCombo, mAreaUnitsCombo);
        QWidget::setTabOrder(mAreaUnitsCombo, mCoordinateDisplayComboBox);
        QWidget::setTabOrder(mCoordinateDisplayComboBox, radAutomatic);
        QWidget::setTabOrder(radAutomatic, radManual);
        QWidget::setTabOrder(radManual, spinBoxDP);
        QWidget::setTabOrder(spinBoxDP, grpProjectScales);
        QWidget::setTabOrder(grpProjectScales, lstScales);
        QWidget::setTabOrder(lstScales, pbnAddScale);
        QWidget::setTabOrder(pbnAddScale, pbnRemoveScale);
        QWidget::setTabOrder(pbnRemoveScale, pbnImportScales);
        QWidget::setTabOrder(pbnImportScales, pbnExportScales);
        QWidget::setTabOrder(pbnExportScales, scrollArea);
        QWidget::setTabOrder(scrollArea, cbxProjectionEnabled);
        QWidget::setTabOrder(cbxProjectionEnabled, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, twIdentifyLayers);

        retranslateUi(QgsProjectPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsProjectPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsProjectPropertiesBase)
    {
        QgsProjectPropertiesBase->setWindowTitle(QApplication::translate("QgsProjectPropertiesBase", "Project Properties", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsProjectPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsProjectPropertiesBase", "CRS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Coordinate Reference System", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsProjectPropertiesBase", "Identify layers", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Identifiable layers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        titleBox->setTitle(QApplication::translate("QgsProjectPropertiesBase", "General settings", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsProjectPropertiesBase", "Selection color", 0, QApplication::UnicodeUTF8));
        pbnSelectionColor->setText(QString());
        label->setText(QApplication::translate("QgsProjectPropertiesBase", "Background color", 0, QApplication::UnicodeUTF8));
        pbnCanvasColor->setText(QString());
        label_3->setText(QApplication::translate("QgsProjectPropertiesBase", "Save paths", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        titleEdit->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Descriptive project name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        titleEdit->setText(QApplication::translate("QgsProjectPropertiesBase", "Default project title", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsProjectPropertiesBase", "Project title", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsProjectPropertiesBase", "Project file", 0, QApplication::UnicodeUTF8));
        projectFileName->setText(QApplication::translate("QgsProjectPropertiesBase", "Project title", 0, QApplication::UnicodeUTF8));
        cbxAbsolutePath->clear();
        cbxAbsolutePath->insertItems(0, QStringList()
         << QApplication::translate("QgsProjectPropertiesBase", "absolute", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsProjectPropertiesBase", "relative", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        mMapTileRenderingCheckBox->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Checking this setting avoids visible edge artifacts when rendering this project as separate map tiles. Rendering performance will be degraded.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mMapTileRenderingCheckBox->setText(QApplication::translate("QgsProjectPropertiesBase", "Avoid artifacts when project is rendered as map tiles (degrades performance)", 0, QApplication::UnicodeUTF8));
        btnGrpMeasureEllipsoid->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Measurements", 0, QApplication::UnicodeUTF8));
        textLabel1_8->setText(QApplication::translate("QgsProjectPropertiesBase", "Ellipsoid\n"
"(for distance calculations)", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("QgsProjectPropertiesBase", "Semi-major", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("QgsProjectPropertiesBase", "Units for distance measurement", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("QgsProjectPropertiesBase", "Semi-minor", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("QgsProjectPropertiesBase", "Units for area measurement", 0, QApplication::UnicodeUTF8));
        mCoordinateDisplayGroup->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Coordinate display", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("QgsProjectPropertiesBase", "Precision", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("QgsProjectPropertiesBase", "Display coordinates using", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radAutomatic->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Automatically sets the number of decimal places to use when displaying coordinates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radAutomatic->setText(QApplication::translate("QgsProjectPropertiesBase", "Automatic", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radManual->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "Manually set the number of decimal places to use when displaying coordinates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radManual->setText(QApplication::translate("QgsProjectPropertiesBase", "Manual", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBoxDP->setToolTip(QApplication::translate("QgsProjectPropertiesBase", "The number of decimal places for the manual option", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelDP->setText(QApplication::translate("QgsProjectPropertiesBase", "decimal places", 0, QApplication::UnicodeUTF8));
        grpProjectScales->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project scales", 0, QApplication::UnicodeUTF8));
        pbnAddScale->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        pbnRemoveScale->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        pbnImportScales->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        pbnExportScales->setText(QApplication::translate("QgsProjectPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        cbxProjectionEnabled->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Enable 'on the fly' CRS transformation", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsProjectPropertiesBase", "Project layers", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twIdentifyLayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsProjectPropertiesBase", "Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twIdentifyLayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsProjectPropertiesBase", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = twIdentifyLayers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsProjectPropertiesBase", "Identifiable", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsProjectPropertiesBase: public Ui_QgsProjectPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPROJECTPROPERTIESBASE_H
