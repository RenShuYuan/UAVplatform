/********************************************************************************
** Form generated from reading UI file 'qgsdiagrampropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDIAGRAMPROPERTIESBASE_H
#define UI_QGSDIAGRAMPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbuttonv2.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgsscalerangewidget.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsDiagramPropertiesBase
{
public:
    QVBoxLayout *verticalLayout_8;
    QFrame *frameShowDiagrams;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *mEnableDiagramsCheckBox;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *mEngineSettingsButton;
    QFrame *mDiagramTypeFrame;
    QHBoxLayout *diagramTypeAndPriorityLayout;
    QLabel *mTypeLabel;
    QComboBox *mDiagramTypeComboBox;
    QSpacerItem *horizontalSpacer;
    QFrame *mDiagramFrame;
    QGridLayout *gridLayout_6;
    QSplitter *mDiagramOptionsSplitter;
    QFrame *mDiagramOptionsListFrame;
    QVBoxLayout *verticalLayout_23;
    QListWidget *mDiagramOptionsListWidget;
    QFrame *mDiagramOptionGroupsFrame;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *mDiagramStackedWidget;
    QWidget *mDiagramPage_Attributes;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *availAttributesLayout;
    QLabel *label;
    QTreeWidget *mAttributesTreeWidget;
    QVBoxLayout *attributeButtonLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *mAddAttributeExpression;
    QPushButton *mAddCategoryPushButton;
    QPushButton *mRemoveCategoryPushButton;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *assignedAttributesLayout;
    QLabel *Assigened;
    QTreeWidget *mDiagramAttributesTreeWidget;
    QWidget *mDiagramPage_Appearance;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_39;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_7;
    QLabel *label_2;
    QFrame *frame;
    QGridLayout *gridLayout_8;
    QLabel *mTransparencyLabel;
    QHBoxLayout *horizontalLayout_5;
    QSlider *mTransparencySlider;
    QgsSpinBox *mTransparencySpinBox;
    QLabel *mBarWidthLabel;
    QgsDoubleSpinBox *mBarWidthSpinBox;
    QgsColorButtonV2 *mBackgroundColorButton;
    QgsDoubleSpinBox *mPenWidthSpinBox;
    QLabel *mPenWidthLabel;
    QLabel *mBackgroundColorLabel;
    QLabel *mPenColorLabel;
    QLabel *mAngleOffsetLabel;
    QComboBox *mAngleOffsetComboBox;
    QgsColorButtonV2 *mDiagramPenColorButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mDiagramFontButton;
    QGridLayout *gridLayout_9;
    QLabel *label_3;
    QFrame *frame_2;
    QGridLayout *gridLayout_10;
    QCheckBox *mShowAllCheckBox;
    QgsCollapsibleGroupBox *mScaleVisibilityGroupBox;
    QGridLayout *gridLayout_15;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QSpacerItem *verticalSpacer_2;
    QWidget *mDiagramPage_Size;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_40;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_6;
    QGridLayout *gridLayout_11;
    QLabel *mDiagramUnitsLabel;
    QRadioButton *mFixedSizeRadio;
    QgsDoubleSpinBox *mDiagramSizeSpinBox;
    QComboBox *mDiagramUnitComboBox;
    QSpacerItem *verticalSpacer_3;
    QFrame *mLinearScaleFrame;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLinearlyScalingLabel;
    QGridLayout *gridLayout;
    QLabel *mSizeLabel;
    QgsSpinBox *mSizeSpinBox;
    QLabel *label_4;
    QLabel *mSizeAttributeLabel;
    QgsFieldExpressionWidget *mSizeFieldExpressionWidget;
    QLabel *mScaleDependencyLabel;
    QComboBox *mScaleDependencyComboBox;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mMaxValueSpinBox;
    QPushButton *mFindMaximumValueButton;
    QFrame *mFrameIncreaseSize;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mIncreaseSmallDiagramsCheck;
    QLabel *mIncreaseMinimumSizeLabel;
    QgsDoubleSpinBox *mIncreaseMinimumSizeSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *mAttributeBasedScalingRadio;
    QSpacerItem *horizontalSpacer_3;
    QWidget *mDiagramPage_Placement;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_41;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_7;
    QGridLayout *gridLayout_12;
    QGroupBox *mDataDefinedPositionGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *mXPosColLabel;
    QComboBox *mDataDefinedXComboBox;
    QLabel *mYPosColLabel;
    QComboBox *mDataDefinedYComboBox;
    QSpacerItem *verticalSpacer_4;
    QFrame *mPlacementFrame;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_9;
    QLabel *mPlacementLabel;
    QComboBox *mPlacementComboBox;
    QLabel *mDiagramDistanceLabel;
    QgsDoubleSpinBox *mDiagramDistanceSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mPriorityLabel;
    QLabel *mPriorityLowLabel;
    QSlider *mPrioritySlider;
    QLabel *mPriorityHighLabel;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_16;
    QgsDoubleSpinBox *mZIndexSpinBox;
    QSpacerItem *horizontalSpacer_10;
    QFrame *mLinePlacementFrame;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_14;
    QCheckBox *chkLineAbove;
    QCheckBox *chkLineBelow;
    QCheckBox *chkLineOn;
    QCheckBox *chkLineOrientationDependent;
    QWidget *mDiagramPage_Options;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_42;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_3;
    QFrame *mBarOptionsFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QRadioButton *mOrientationUpButton;
    QRadioButton *mOrientationDownButton;
    QRadioButton *mOrientationRightButton;
    QRadioButton *mOrientationLeftButton;
    QFrame *mTextOptionsFrame;
    QGridLayout *gridLayout_13;
    QLabel *mLabelPlacementLabel;
    QComboBox *mLabelPlacementComboBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QButtonGroup *mOrientationButtonGroup;

    void setupUi(QWidget *QgsDiagramPropertiesBase)
    {
        if (QgsDiagramPropertiesBase->objectName().isEmpty())
            QgsDiagramPropertiesBase->setObjectName(QString::fromUtf8("QgsDiagramPropertiesBase"));
        QgsDiagramPropertiesBase->resize(688, 491);
        verticalLayout_8 = new QVBoxLayout(QgsDiagramPropertiesBase);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(6, 6, 6, 6);
        frameShowDiagrams = new QFrame(QgsDiagramPropertiesBase);
        frameShowDiagrams->setObjectName(QString::fromUtf8("frameShowDiagrams"));
        horizontalLayout_4 = new QHBoxLayout(frameShowDiagrams);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        mEnableDiagramsCheckBox = new QCheckBox(frameShowDiagrams);
        mEnableDiagramsCheckBox->setObjectName(QString::fromUtf8("mEnableDiagramsCheckBox"));

        horizontalLayout_4->addWidget(mEnableDiagramsCheckBox);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_8 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        mEngineSettingsButton = new QPushButton(frameShowDiagrams);
        mEngineSettingsButton->setObjectName(QString::fromUtf8("mEngineSettingsButton"));
        mEngineSettingsButton->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconAutoPlacementSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEngineSettingsButton->setIcon(icon);
        mEngineSettingsButton->setIconSize(QSize(24, 16));

        horizontalLayout_4->addWidget(mEngineSettingsButton);


        verticalLayout_8->addWidget(frameShowDiagrams);

        mDiagramTypeFrame = new QFrame(QgsDiagramPropertiesBase);
        mDiagramTypeFrame->setObjectName(QString::fromUtf8("mDiagramTypeFrame"));
        diagramTypeAndPriorityLayout = new QHBoxLayout(mDiagramTypeFrame);
        diagramTypeAndPriorityLayout->setSpacing(2);
        diagramTypeAndPriorityLayout->setObjectName(QString::fromUtf8("diagramTypeAndPriorityLayout"));
        diagramTypeAndPriorityLayout->setContentsMargins(0, 0, 0, 0);
        mTypeLabel = new QLabel(mDiagramTypeFrame);
        mTypeLabel->setObjectName(QString::fromUtf8("mTypeLabel"));

        diagramTypeAndPriorityLayout->addWidget(mTypeLabel);

        mDiagramTypeComboBox = new QComboBox(mDiagramTypeFrame);
        mDiagramTypeComboBox->setObjectName(QString::fromUtf8("mDiagramTypeComboBox"));

        diagramTypeAndPriorityLayout->addWidget(mDiagramTypeComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        diagramTypeAndPriorityLayout->addItem(horizontalSpacer);


        verticalLayout_8->addWidget(mDiagramTypeFrame);

        mDiagramFrame = new QFrame(QgsDiagramPropertiesBase);
        mDiagramFrame->setObjectName(QString::fromUtf8("mDiagramFrame"));
        mDiagramFrame->setFrameShape(QFrame::NoFrame);
        mDiagramFrame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(mDiagramFrame);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setHorizontalSpacing(0);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        mDiagramOptionsSplitter = new QSplitter(mDiagramFrame);
        mDiagramOptionsSplitter->setObjectName(QString::fromUtf8("mDiagramOptionsSplitter"));
        mDiagramOptionsSplitter->setOrientation(Qt::Horizontal);
        mDiagramOptionsSplitter->setChildrenCollapsible(false);
        mDiagramOptionsListFrame = new QFrame(mDiagramOptionsSplitter);
        mDiagramOptionsListFrame->setObjectName(QString::fromUtf8("mDiagramOptionsListFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mDiagramOptionsListFrame->sizePolicy().hasHeightForWidth());
        mDiagramOptionsListFrame->setSizePolicy(sizePolicy);
        mDiagramOptionsListFrame->setMinimumSize(QSize(32, 0));
        mDiagramOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mDiagramOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(mDiagramOptionsListFrame);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(3, 0, 0, 0);
        mDiagramOptionsListWidget = new QListWidget(mDiagramOptionsListFrame);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/render.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/transparency.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelplacement.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mDiagramOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon5);
        mDiagramOptionsListWidget->setObjectName(QString::fromUtf8("mDiagramOptionsListWidget"));
        mDiagramOptionsListWidget->setMinimumSize(QSize(32, 0));
        mDiagramOptionsListWidget->setProperty("showDropIndicator", QVariant(false));
        mDiagramOptionsListWidget->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(mDiagramOptionsListWidget);

        mDiagramOptionsSplitter->addWidget(mDiagramOptionsListFrame);
        mDiagramOptionGroupsFrame = new QFrame(mDiagramOptionsSplitter);
        mDiagramOptionGroupsFrame->setObjectName(QString::fromUtf8("mDiagramOptionGroupsFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mDiagramOptionGroupsFrame->sizePolicy().hasHeightForWidth());
        mDiagramOptionGroupsFrame->setSizePolicy(sizePolicy1);
        mDiagramOptionGroupsFrame->setFrameShape(QFrame::StyledPanel);
        mDiagramOptionGroupsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(mDiagramOptionGroupsFrame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 0, 6);
        mDiagramStackedWidget = new QStackedWidget(mDiagramOptionGroupsFrame);
        mDiagramStackedWidget->setObjectName(QString::fromUtf8("mDiagramStackedWidget"));
        mDiagramPage_Attributes = new QWidget();
        mDiagramPage_Attributes->setObjectName(QString::fromUtf8("mDiagramPage_Attributes"));
        verticalLayout_9 = new QVBoxLayout(mDiagramPage_Attributes);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(mDiagramPage_Attributes);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_9->addWidget(label_6);

        scrollArea = new QScrollArea(mDiagramPage_Attributes);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 337, 113));
        horizontalLayout_6 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 6, 6);
        availAttributesLayout = new QVBoxLayout();
        availAttributesLayout->setObjectName(QString::fromUtf8("availAttributesLayout"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        availAttributesLayout->addWidget(label);

        mAttributesTreeWidget = new QTreeWidget(scrollAreaWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Attribute"));
        mAttributesTreeWidget->setHeaderItem(__qtreewidgetitem);
        mAttributesTreeWidget->setObjectName(QString::fromUtf8("mAttributesTreeWidget"));
        mAttributesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mAttributesTreeWidget->setIndentation(0);
        mAttributesTreeWidget->setRootIsDecorated(false);
        mAttributesTreeWidget->setItemsExpandable(false);
        mAttributesTreeWidget->setExpandsOnDoubleClick(false);
        mAttributesTreeWidget->setColumnCount(1);

        availAttributesLayout->addWidget(mAttributesTreeWidget);


        horizontalLayout_6->addLayout(availAttributesLayout);

        attributeButtonLayout = new QVBoxLayout();
        attributeButtonLayout->setObjectName(QString::fromUtf8("attributeButtonLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        attributeButtonLayout->addItem(verticalSpacer);

        mAddAttributeExpression = new QPushButton(scrollAreaWidgetContents);
        mAddAttributeExpression->setObjectName(QString::fromUtf8("mAddAttributeExpression"));
        mAddAttributeExpression->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mIconExpressionEditorOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddAttributeExpression->setIcon(icon6);
        mAddAttributeExpression->setIconSize(QSize(24, 16));

        attributeButtonLayout->addWidget(mAddAttributeExpression);

        mAddCategoryPushButton = new QPushButton(scrollAreaWidgetContents);
        mAddCategoryPushButton->setObjectName(QString::fromUtf8("mAddCategoryPushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mAddCategoryPushButton->sizePolicy().hasHeightForWidth());
        mAddCategoryPushButton->setSizePolicy(sizePolicy2);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddCategoryPushButton->setIcon(icon7);

        attributeButtonLayout->addWidget(mAddCategoryPushButton);

        mRemoveCategoryPushButton = new QPushButton(scrollAreaWidgetContents);
        mRemoveCategoryPushButton->setObjectName(QString::fromUtf8("mRemoveCategoryPushButton"));
        sizePolicy2.setHeightForWidth(mRemoveCategoryPushButton->sizePolicy().hasHeightForWidth());
        mRemoveCategoryPushButton->setSizePolicy(sizePolicy2);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveCategoryPushButton->setIcon(icon8);

        attributeButtonLayout->addWidget(mRemoveCategoryPushButton);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        attributeButtonLayout->addItem(verticalSpacer_5);


        horizontalLayout_6->addLayout(attributeButtonLayout);

        assignedAttributesLayout = new QVBoxLayout();
        assignedAttributesLayout->setObjectName(QString::fromUtf8("assignedAttributesLayout"));
        Assigened = new QLabel(scrollAreaWidgetContents);
        Assigened->setObjectName(QString::fromUtf8("Assigened"));

        assignedAttributesLayout->addWidget(Assigened);

        mDiagramAttributesTreeWidget = new QTreeWidget(scrollAreaWidgetContents);
        mDiagramAttributesTreeWidget->setObjectName(QString::fromUtf8("mDiagramAttributesTreeWidget"));
        mDiagramAttributesTreeWidget->setDragEnabled(true);
        mDiagramAttributesTreeWidget->setDragDropMode(QAbstractItemView::InternalMove);
        mDiagramAttributesTreeWidget->setDefaultDropAction(Qt::TargetMoveAction);
        mDiagramAttributesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mDiagramAttributesTreeWidget->setIndentation(0);
        mDiagramAttributesTreeWidget->setRootIsDecorated(false);
        mDiagramAttributesTreeWidget->setItemsExpandable(false);
        mDiagramAttributesTreeWidget->setColumnCount(3);

        assignedAttributesLayout->addWidget(mDiagramAttributesTreeWidget);


        horizontalLayout_6->addLayout(assignedAttributesLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_9->addWidget(scrollArea);

        mDiagramStackedWidget->addWidget(mDiagramPage_Attributes);
        mDiagramPage_Appearance = new QWidget();
        mDiagramPage_Appearance->setObjectName(QString::fromUtf8("mDiagramPage_Appearance"));
        verticalLayout_13 = new QVBoxLayout(mDiagramPage_Appearance);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(mDiagramPage_Appearance);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_13->addWidget(label_39);

        scrollArea_4 = new QScrollArea(mDiagramPage_Appearance);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 630, 376));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 6, 0);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_2 = new QLabel(scrollAreaWidgetContents_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        frame = new QFrame(scrollAreaWidgetContents_5);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(20, 0, 0, 0);
        mTransparencyLabel = new QLabel(frame);
        mTransparencyLabel->setObjectName(QString::fromUtf8("mTransparencyLabel"));
        mTransparencyLabel->setMinimumSize(QSize(130, 0));

        gridLayout_8->addWidget(mTransparencyLabel, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mTransparencySlider = new QSlider(frame);
        mTransparencySlider->setObjectName(QString::fromUtf8("mTransparencySlider"));
        mTransparencySlider->setEnabled(true);
        mTransparencySlider->setMinimumSize(QSize(0, 0));
        mTransparencySlider->setMaximumSize(QSize(16777215, 16777215));
        mTransparencySlider->setMaximum(100);
        mTransparencySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(mTransparencySlider);

        mTransparencySpinBox = new QgsSpinBox(frame);
        mTransparencySpinBox->setObjectName(QString::fromUtf8("mTransparencySpinBox"));
        mTransparencySpinBox->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mTransparencySpinBox->sizePolicy().hasHeightForWidth());
        mTransparencySpinBox->setSizePolicy(sizePolicy3);
        mTransparencySpinBox->setMaximum(100);

        horizontalLayout_5->addWidget(mTransparencySpinBox);


        gridLayout_8->addLayout(horizontalLayout_5, 0, 1, 1, 2);

        mBarWidthLabel = new QLabel(frame);
        mBarWidthLabel->setObjectName(QString::fromUtf8("mBarWidthLabel"));

        gridLayout_8->addWidget(mBarWidthLabel, 1, 0, 1, 1);

        mBarWidthSpinBox = new QgsDoubleSpinBox(frame);
        mBarWidthSpinBox->setObjectName(QString::fromUtf8("mBarWidthSpinBox"));
        mBarWidthSpinBox->setMinimum(0.01);
        mBarWidthSpinBox->setValue(5);

        gridLayout_8->addWidget(mBarWidthSpinBox, 1, 1, 1, 1);

        mBackgroundColorButton = new QgsColorButtonV2(frame);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_8->addWidget(mBackgroundColorButton, 2, 1, 1, 1);

        mPenWidthSpinBox = new QgsDoubleSpinBox(frame);
        mPenWidthSpinBox->setObjectName(QString::fromUtf8("mPenWidthSpinBox"));
        mPenWidthSpinBox->setDecimals(5);
        mPenWidthSpinBox->setMaximum(100000);
        mPenWidthSpinBox->setSingleStep(0.2);

        gridLayout_8->addWidget(mPenWidthSpinBox, 4, 1, 1, 1);

        mPenWidthLabel = new QLabel(frame);
        mPenWidthLabel->setObjectName(QString::fromUtf8("mPenWidthLabel"));

        gridLayout_8->addWidget(mPenWidthLabel, 4, 0, 1, 1);

        mBackgroundColorLabel = new QLabel(frame);
        mBackgroundColorLabel->setObjectName(QString::fromUtf8("mBackgroundColorLabel"));

        gridLayout_8->addWidget(mBackgroundColorLabel, 2, 0, 1, 1);

        mPenColorLabel = new QLabel(frame);
        mPenColorLabel->setObjectName(QString::fromUtf8("mPenColorLabel"));

        gridLayout_8->addWidget(mPenColorLabel, 3, 0, 1, 1);

        mAngleOffsetLabel = new QLabel(frame);
        mAngleOffsetLabel->setObjectName(QString::fromUtf8("mAngleOffsetLabel"));

        gridLayout_8->addWidget(mAngleOffsetLabel, 5, 0, 1, 1);

        mAngleOffsetComboBox = new QComboBox(frame);
        mAngleOffsetComboBox->setObjectName(QString::fromUtf8("mAngleOffsetComboBox"));

        gridLayout_8->addWidget(mAngleOffsetComboBox, 5, 1, 1, 1);

        mDiagramPenColorButton = new QgsColorButtonV2(frame);
        mDiagramPenColorButton->setObjectName(QString::fromUtf8("mDiagramPenColorButton"));
        mDiagramPenColorButton->setMinimumSize(QSize(120, 0));
        mDiagramPenColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_8->addWidget(mDiagramPenColorButton, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        mDiagramFontButton = new QPushButton(frame);
        mDiagramFontButton->setObjectName(QString::fromUtf8("mDiagramFontButton"));

        gridLayout_8->addWidget(mDiagramFontButton, 6, 1, 1, 1);


        gridLayout_7->addWidget(frame, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(scrollAreaWidgetContents_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_9->addWidget(label_3, 0, 0, 1, 1);

        frame_2 = new QFrame(scrollAreaWidgetContents_5);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(frame_2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(20, 0, 0, 0);
        mShowAllCheckBox = new QCheckBox(frame_2);
        mShowAllCheckBox->setObjectName(QString::fromUtf8("mShowAllCheckBox"));
        mShowAllCheckBox->setChecked(true);

        gridLayout_10->addWidget(mShowAllCheckBox, 0, 0, 1, 1);

        mScaleVisibilityGroupBox = new QgsCollapsibleGroupBox(frame_2);
        mScaleVisibilityGroupBox->setObjectName(QString::fromUtf8("mScaleVisibilityGroupBox"));
        mScaleVisibilityGroupBox->setCheckable(true);
        gridLayout_15 = new QGridLayout(mScaleVisibilityGroupBox);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(9, 9, -1, -1);
        mScaleRangeWidget = new QgsScaleRangeWidget(mScaleVisibilityGroupBox);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        gridLayout_15->addWidget(mScaleRangeWidget, 0, 0, 1, 1);


        gridLayout_10->addWidget(mScaleVisibilityGroupBox, 1, 0, 1, 1);


        gridLayout_9->addWidget(frame_2, 1, 0, 1, 1);

        gridLayout_9->setRowStretch(1, 1);

        verticalLayout->addLayout(gridLayout_9);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_13->addWidget(scrollArea_4);

        mDiagramStackedWidget->addWidget(mDiagramPage_Appearance);
        mDiagramPage_Size = new QWidget();
        mDiagramPage_Size->setObjectName(QString::fromUtf8("mDiagramPage_Size"));
        verticalLayout_6 = new QVBoxLayout(mDiagramPage_Size);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(mDiagramPage_Size);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_6->addWidget(label_40);

        scrollArea_5 = new QScrollArea(mDiagramPage_Size);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 525, 283));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents_6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 6, 0);
        mDiagramUnitsLabel = new QLabel(scrollAreaWidgetContents_6);
        mDiagramUnitsLabel->setObjectName(QString::fromUtf8("mDiagramUnitsLabel"));

        gridLayout_11->addWidget(mDiagramUnitsLabel, 0, 0, 1, 1);

        mFixedSizeRadio = new QRadioButton(scrollAreaWidgetContents_6);
        mFixedSizeRadio->setObjectName(QString::fromUtf8("mFixedSizeRadio"));

        gridLayout_11->addWidget(mFixedSizeRadio, 1, 0, 1, 1);

        mDiagramSizeSpinBox = new QgsDoubleSpinBox(scrollAreaWidgetContents_6);
        mDiagramSizeSpinBox->setObjectName(QString::fromUtf8("mDiagramSizeSpinBox"));
        mDiagramSizeSpinBox->setEnabled(false);
        mDiagramSizeSpinBox->setDecimals(5);
        mDiagramSizeSpinBox->setMaximum(1e+07);

        gridLayout_11->addWidget(mDiagramSizeSpinBox, 1, 1, 1, 1);

        mDiagramUnitComboBox = new QComboBox(scrollAreaWidgetContents_6);
        mDiagramUnitComboBox->setObjectName(QString::fromUtf8("mDiagramUnitComboBox"));

        gridLayout_11->addWidget(mDiagramUnitComboBox, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_3, 4, 0, 1, 1);

        mLinearScaleFrame = new QFrame(scrollAreaWidgetContents_6);
        mLinearScaleFrame->setObjectName(QString::fromUtf8("mLinearScaleFrame"));
        mLinearScaleFrame->setFrameShape(QFrame::NoFrame);
        mLinearScaleFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(mLinearScaleFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 0, 0);
        mLinearlyScalingLabel = new QLabel(mLinearScaleFrame);
        mLinearlyScalingLabel->setObjectName(QString::fromUtf8("mLinearlyScalingLabel"));
        mLinearlyScalingLabel->setWordWrap(true);

        verticalLayout_2->addWidget(mLinearlyScalingLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mSizeLabel = new QLabel(mLinearScaleFrame);
        mSizeLabel->setObjectName(QString::fromUtf8("mSizeLabel"));

        gridLayout->addWidget(mSizeLabel, 3, 0, 1, 1);

        mSizeSpinBox = new QgsSpinBox(mLinearScaleFrame);
        mSizeSpinBox->setObjectName(QString::fromUtf8("mSizeSpinBox"));
        mSizeSpinBox->setMaximum(10000000);
        mSizeSpinBox->setValue(50);

        gridLayout->addWidget(mSizeSpinBox, 3, 1, 1, 2);

        label_4 = new QLabel(mLinearScaleFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mSizeAttributeLabel = new QLabel(mLinearScaleFrame);
        mSizeAttributeLabel->setObjectName(QString::fromUtf8("mSizeAttributeLabel"));

        gridLayout->addWidget(mSizeAttributeLabel, 0, 0, 2, 1);

        mSizeFieldExpressionWidget = new QgsFieldExpressionWidget(mLinearScaleFrame);
        mSizeFieldExpressionWidget->setObjectName(QString::fromUtf8("mSizeFieldExpressionWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mSizeFieldExpressionWidget->sizePolicy().hasHeightForWidth());
        mSizeFieldExpressionWidget->setSizePolicy(sizePolicy4);
        mSizeFieldExpressionWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(mSizeFieldExpressionWidget, 0, 1, 2, 4);

        mScaleDependencyLabel = new QLabel(mLinearScaleFrame);
        mScaleDependencyLabel->setObjectName(QString::fromUtf8("mScaleDependencyLabel"));

        gridLayout->addWidget(mScaleDependencyLabel, 3, 3, 1, 1);

        mScaleDependencyComboBox = new QComboBox(mLinearScaleFrame);
        mScaleDependencyComboBox->setObjectName(QString::fromUtf8("mScaleDependencyComboBox"));

        gridLayout->addWidget(mScaleDependencyComboBox, 3, 4, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mMaxValueSpinBox = new QgsDoubleSpinBox(mLinearScaleFrame);
        mMaxValueSpinBox->setObjectName(QString::fromUtf8("mMaxValueSpinBox"));
        mMaxValueSpinBox->setDecimals(6);
        mMaxValueSpinBox->setMinimum(-1e+08);
        mMaxValueSpinBox->setMaximum(1e+08);

        horizontalLayout_2->addWidget(mMaxValueSpinBox);

        mFindMaximumValueButton = new QPushButton(mLinearScaleFrame);
        mFindMaximumValueButton->setObjectName(QString::fromUtf8("mFindMaximumValueButton"));

        horizontalLayout_2->addWidget(mFindMaximumValueButton);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 2);

        mFrameIncreaseSize = new QFrame(mLinearScaleFrame);
        mFrameIncreaseSize->setObjectName(QString::fromUtf8("mFrameIncreaseSize"));
        mFrameIncreaseSize->setFrameShape(QFrame::NoFrame);
        mFrameIncreaseSize->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(mFrameIncreaseSize);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mIncreaseSmallDiagramsCheck = new QCheckBox(mFrameIncreaseSize);
        mIncreaseSmallDiagramsCheck->setObjectName(QString::fromUtf8("mIncreaseSmallDiagramsCheck"));

        horizontalLayout->addWidget(mIncreaseSmallDiagramsCheck);

        mIncreaseMinimumSizeLabel = new QLabel(mFrameIncreaseSize);
        mIncreaseMinimumSizeLabel->setObjectName(QString::fromUtf8("mIncreaseMinimumSizeLabel"));

        horizontalLayout->addWidget(mIncreaseMinimumSizeLabel);

        mIncreaseMinimumSizeSpinBox = new QgsDoubleSpinBox(mFrameIncreaseSize);
        mIncreaseMinimumSizeSpinBox->setObjectName(QString::fromUtf8("mIncreaseMinimumSizeSpinBox"));
        mIncreaseMinimumSizeSpinBox->setDecimals(6);
        mIncreaseMinimumSizeSpinBox->setMaximum(100000);
        mIncreaseMinimumSizeSpinBox->setSingleStep(0.2);

        horizontalLayout->addWidget(mIncreaseMinimumSizeSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addWidget(mFrameIncreaseSize, 4, 0, 1, 5);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_11->addWidget(mLinearScaleFrame, 3, 0, 1, 3);

        mAttributeBasedScalingRadio = new QRadioButton(scrollAreaWidgetContents_6);
        mAttributeBasedScalingRadio->setObjectName(QString::fromUtf8("mAttributeBasedScalingRadio"));

        gridLayout_11->addWidget(mAttributeBasedScalingRadio, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        scrollArea_5->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_6->addWidget(scrollArea_5);

        mDiagramStackedWidget->addWidget(mDiagramPage_Size);
        mDiagramPage_Placement = new QWidget();
        mDiagramPage_Placement->setObjectName(QString::fromUtf8("mDiagramPage_Placement"));
        verticalLayout_7 = new QVBoxLayout(mDiagramPage_Placement);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_41 = new QLabel(mDiagramPage_Placement);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_7->addWidget(label_41);

        scrollArea_6 = new QScrollArea(mDiagramPage_Placement);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 296, 303));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_7);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        mDataDefinedPositionGroupBox = new QGroupBox(scrollAreaWidgetContents_7);
        mDataDefinedPositionGroupBox->setObjectName(QString::fromUtf8("mDataDefinedPositionGroupBox"));
        sizePolicy4.setHeightForWidth(mDataDefinedPositionGroupBox->sizePolicy().hasHeightForWidth());
        mDataDefinedPositionGroupBox->setSizePolicy(sizePolicy4);
        mDataDefinedPositionGroupBox->setCheckable(true);
        mDataDefinedPositionGroupBox->setChecked(false);
        gridLayout_5 = new QGridLayout(mDataDefinedPositionGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mXPosColLabel = new QLabel(mDataDefinedPositionGroupBox);
        mXPosColLabel->setObjectName(QString::fromUtf8("mXPosColLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mXPosColLabel->sizePolicy().hasHeightForWidth());
        mXPosColLabel->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(mXPosColLabel, 0, 0, 1, 1);

        mDataDefinedXComboBox = new QComboBox(mDataDefinedPositionGroupBox);
        mDataDefinedXComboBox->setObjectName(QString::fromUtf8("mDataDefinedXComboBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mDataDefinedXComboBox->sizePolicy().hasHeightForWidth());
        mDataDefinedXComboBox->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(mDataDefinedXComboBox, 0, 1, 1, 1);

        mYPosColLabel = new QLabel(mDataDefinedPositionGroupBox);
        mYPosColLabel->setObjectName(QString::fromUtf8("mYPosColLabel"));
        sizePolicy5.setHeightForWidth(mYPosColLabel->sizePolicy().hasHeightForWidth());
        mYPosColLabel->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(mYPosColLabel, 1, 0, 1, 1);

        mDataDefinedYComboBox = new QComboBox(mDataDefinedPositionGroupBox);
        mDataDefinedYComboBox->setObjectName(QString::fromUtf8("mDataDefinedYComboBox"));
        sizePolicy6.setHeightForWidth(mDataDefinedYComboBox->sizePolicy().hasHeightForWidth());
        mDataDefinedYComboBox->setSizePolicy(sizePolicy6);

        gridLayout_5->addWidget(mDataDefinedYComboBox, 1, 1, 1, 1);


        gridLayout_12->addWidget(mDataDefinedPositionGroupBox, 5, 0, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 8, 0, 1, 1);

        mPlacementFrame = new QFrame(scrollAreaWidgetContents_7);
        mPlacementFrame->setObjectName(QString::fromUtf8("mPlacementFrame"));
        mPlacementFrame->setFrameShape(QFrame::NoFrame);
        gridLayout_4 = new QGridLayout(mPlacementFrame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 0, 2, 1, 1);

        mPlacementLabel = new QLabel(mPlacementFrame);
        mPlacementLabel->setObjectName(QString::fromUtf8("mPlacementLabel"));

        gridLayout_4->addWidget(mPlacementLabel, 0, 0, 1, 1);

        mPlacementComboBox = new QComboBox(mPlacementFrame);
        mPlacementComboBox->setObjectName(QString::fromUtf8("mPlacementComboBox"));

        gridLayout_4->addWidget(mPlacementComboBox, 0, 1, 1, 1);

        mDiagramDistanceLabel = new QLabel(mPlacementFrame);
        mDiagramDistanceLabel->setObjectName(QString::fromUtf8("mDiagramDistanceLabel"));

        gridLayout_4->addWidget(mDiagramDistanceLabel, 1, 0, 1, 1);

        mDiagramDistanceSpinBox = new QgsDoubleSpinBox(mPlacementFrame);
        mDiagramDistanceSpinBox->setObjectName(QString::fromUtf8("mDiagramDistanceSpinBox"));

        gridLayout_4->addWidget(mDiagramDistanceSpinBox, 1, 1, 1, 1);


        gridLayout_12->addWidget(mPlacementFrame, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mPriorityLabel = new QLabel(scrollAreaWidgetContents_7);
        mPriorityLabel->setObjectName(QString::fromUtf8("mPriorityLabel"));

        horizontalLayout_3->addWidget(mPriorityLabel);

        mPriorityLowLabel = new QLabel(scrollAreaWidgetContents_7);
        mPriorityLowLabel->setObjectName(QString::fromUtf8("mPriorityLowLabel"));

        horizontalLayout_3->addWidget(mPriorityLowLabel);

        mPrioritySlider = new QSlider(scrollAreaWidgetContents_7);
        mPrioritySlider->setObjectName(QString::fromUtf8("mPrioritySlider"));
        mPrioritySlider->setMaximum(10);
        mPrioritySlider->setOrientation(Qt::Horizontal);
        mPrioritySlider->setInvertedAppearance(false);
        mPrioritySlider->setInvertedControls(false);
        mPrioritySlider->setTickPosition(QSlider::TicksBelow);
        mPrioritySlider->setTickInterval(1);

        horizontalLayout_3->addWidget(mPrioritySlider);

        mPriorityHighLabel = new QLabel(scrollAreaWidgetContents_7);
        mPriorityHighLabel->setObjectName(QString::fromUtf8("mPriorityHighLabel"));

        horizontalLayout_3->addWidget(mPriorityHighLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        gridLayout_12->addLayout(horizontalLayout_3, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_16 = new QLabel(scrollAreaWidgetContents_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_8->addWidget(label_16);

        mZIndexSpinBox = new QgsDoubleSpinBox(scrollAreaWidgetContents_7);
        mZIndexSpinBox->setObjectName(QString::fromUtf8("mZIndexSpinBox"));
        mZIndexSpinBox->setMinimum(-1e+07);
        mZIndexSpinBox->setMaximum(1e+07);

        horizontalLayout_8->addWidget(mZIndexSpinBox);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        gridLayout_12->addLayout(horizontalLayout_8, 7, 0, 1, 1);

        mLinePlacementFrame = new QFrame(scrollAreaWidgetContents_7);
        mLinePlacementFrame->setObjectName(QString::fromUtf8("mLinePlacementFrame"));
        mLinePlacementFrame->setFrameShape(QFrame::NoFrame);
        mLinePlacementFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(mLinePlacementFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        chkLineAbove = new QCheckBox(mLinePlacementFrame);
        chkLineAbove->setObjectName(QString::fromUtf8("chkLineAbove"));
        sizePolicy3.setHeightForWidth(chkLineAbove->sizePolicy().hasHeightForWidth());
        chkLineAbove->setSizePolicy(sizePolicy3);
        chkLineAbove->setChecked(true);

        gridLayout_14->addWidget(chkLineAbove, 0, 1, 1, 1);

        chkLineBelow = new QCheckBox(mLinePlacementFrame);
        chkLineBelow->setObjectName(QString::fromUtf8("chkLineBelow"));

        gridLayout_14->addWidget(chkLineBelow, 0, 3, 1, 1);

        chkLineOn = new QCheckBox(mLinePlacementFrame);
        chkLineOn->setObjectName(QString::fromUtf8("chkLineOn"));
        sizePolicy3.setHeightForWidth(chkLineOn->sizePolicy().hasHeightForWidth());
        chkLineOn->setSizePolicy(sizePolicy3);

        gridLayout_14->addWidget(chkLineOn, 0, 2, 1, 1);

        chkLineOrientationDependent = new QCheckBox(mLinePlacementFrame);
        chkLineOrientationDependent->setObjectName(QString::fromUtf8("chkLineOrientationDependent"));

        gridLayout_14->addWidget(chkLineOrientationDependent, 1, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout_14, 0, 0, 1, 3);


        gridLayout_12->addWidget(mLinePlacementFrame, 1, 0, 1, 2);

        scrollArea_6->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_7->addWidget(scrollArea_6);

        mDiagramStackedWidget->addWidget(mDiagramPage_Placement);
        mDiagramPage_Options = new QWidget();
        mDiagramPage_Options->setObjectName(QString::fromUtf8("mDiagramPage_Options"));
        verticalLayout_10 = new QVBoxLayout(mDiagramPage_Options);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(mDiagramPage_Options);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_10->addWidget(label_42);

        scrollArea_7 = new QScrollArea(mDiagramPage_Options);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 106, 161));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mBarOptionsFrame = new QFrame(scrollAreaWidgetContents_8);
        mBarOptionsFrame->setObjectName(QString::fromUtf8("mBarOptionsFrame"));
        mBarOptionsFrame->setFrameShape(QFrame::NoFrame);
        mBarOptionsFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_4 = new QVBoxLayout(mBarOptionsFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(mBarOptionsFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        mOrientationUpButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup = new QButtonGroup(QgsDiagramPropertiesBase);
        mOrientationButtonGroup->setObjectName(QString::fromUtf8("mOrientationButtonGroup"));
        mOrientationButtonGroup->addButton(mOrientationUpButton);
        mOrientationUpButton->setObjectName(QString::fromUtf8("mOrientationUpButton"));
        mOrientationUpButton->setChecked(true);

        verticalLayout_4->addWidget(mOrientationUpButton);

        mOrientationDownButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationDownButton);
        mOrientationDownButton->setObjectName(QString::fromUtf8("mOrientationDownButton"));

        verticalLayout_4->addWidget(mOrientationDownButton);

        mOrientationRightButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationRightButton);
        mOrientationRightButton->setObjectName(QString::fromUtf8("mOrientationRightButton"));

        verticalLayout_4->addWidget(mOrientationRightButton);

        mOrientationLeftButton = new QRadioButton(mBarOptionsFrame);
        mOrientationButtonGroup->addButton(mOrientationLeftButton);
        mOrientationLeftButton->setObjectName(QString::fromUtf8("mOrientationLeftButton"));

        verticalLayout_4->addWidget(mOrientationLeftButton);


        verticalLayout_3->addWidget(mBarOptionsFrame);

        mTextOptionsFrame = new QFrame(scrollAreaWidgetContents_8);
        mTextOptionsFrame->setObjectName(QString::fromUtf8("mTextOptionsFrame"));
        mTextOptionsFrame->setFrameShape(QFrame::NoFrame);
        mTextOptionsFrame->setFrameShadow(QFrame::Plain);
        gridLayout_13 = new QGridLayout(mTextOptionsFrame);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        mLabelPlacementLabel = new QLabel(mTextOptionsFrame);
        mLabelPlacementLabel->setObjectName(QString::fromUtf8("mLabelPlacementLabel"));
        mLabelPlacementLabel->setVisible(false);
#ifndef QT_NO_TOOLTIP
        mLabelPlacementLabel->setToolTip(0u);
#endif // QT_NO_TOOLTIP

        gridLayout_13->addWidget(mLabelPlacementLabel, 0, 0, 1, 1);

        mLabelPlacementComboBox = new QComboBox(mTextOptionsFrame);
        mLabelPlacementComboBox->setObjectName(QString::fromUtf8("mLabelPlacementComboBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mLabelPlacementComboBox->sizePolicy().hasHeightForWidth());
        mLabelPlacementComboBox->setSizePolicy(sizePolicy7);
        mLabelPlacementComboBox->setMinimumSize(QSize(20, 0));
        mLabelPlacementComboBox->setMaximumSize(QSize(200, 16777215));
        mLabelPlacementComboBox->setVisible(false);

        gridLayout_13->addWidget(mLabelPlacementComboBox, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        verticalLayout_3->addWidget(mTextOptionsFrame);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        scrollArea_7->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_10->addWidget(scrollArea_7);

        mDiagramStackedWidget->addWidget(mDiagramPage_Options);

        verticalLayout_5->addWidget(mDiagramStackedWidget);

        mDiagramOptionsSplitter->addWidget(mDiagramOptionGroupsFrame);

        gridLayout_6->addWidget(mDiagramOptionsSplitter, 0, 1, 1, 1);


        verticalLayout_8->addWidget(mDiagramFrame);

        verticalLayout_8->setStretch(2, 1);
        QWidget::setTabOrder(mEnableDiagramsCheckBox, mEngineSettingsButton);
        QWidget::setTabOrder(mEngineSettingsButton, mDiagramTypeComboBox);
        QWidget::setTabOrder(mDiagramTypeComboBox, mDiagramOptionsListWidget);
        QWidget::setTabOrder(mDiagramOptionsListWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, mAttributesTreeWidget);
        QWidget::setTabOrder(mAttributesTreeWidget, mAddAttributeExpression);
        QWidget::setTabOrder(mAddAttributeExpression, mAddCategoryPushButton);
        QWidget::setTabOrder(mAddCategoryPushButton, mRemoveCategoryPushButton);
        QWidget::setTabOrder(mRemoveCategoryPushButton, mDiagramAttributesTreeWidget);
        QWidget::setTabOrder(mDiagramAttributesTreeWidget, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mTransparencySlider);
        QWidget::setTabOrder(mTransparencySlider, mTransparencySpinBox);
        QWidget::setTabOrder(mTransparencySpinBox, mBarWidthSpinBox);
        QWidget::setTabOrder(mBarWidthSpinBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mDiagramPenColorButton);
        QWidget::setTabOrder(mDiagramPenColorButton, mPenWidthSpinBox);
        QWidget::setTabOrder(mPenWidthSpinBox, mAngleOffsetComboBox);
        QWidget::setTabOrder(mAngleOffsetComboBox, mDiagramFontButton);
        QWidget::setTabOrder(mDiagramFontButton, mShowAllCheckBox);
        QWidget::setTabOrder(mShowAllCheckBox, mScaleVisibilityGroupBox);
        QWidget::setTabOrder(mScaleVisibilityGroupBox, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, mDiagramUnitComboBox);
        QWidget::setTabOrder(mDiagramUnitComboBox, mFixedSizeRadio);
        QWidget::setTabOrder(mFixedSizeRadio, mDiagramSizeSpinBox);
        QWidget::setTabOrder(mDiagramSizeSpinBox, mAttributeBasedScalingRadio);
        QWidget::setTabOrder(mAttributeBasedScalingRadio, mMaxValueSpinBox);
        QWidget::setTabOrder(mMaxValueSpinBox, mFindMaximumValueButton);
        QWidget::setTabOrder(mFindMaximumValueButton, mSizeSpinBox);
        QWidget::setTabOrder(mSizeSpinBox, mScaleDependencyComboBox);
        QWidget::setTabOrder(mScaleDependencyComboBox, mIncreaseSmallDiagramsCheck);
        QWidget::setTabOrder(mIncreaseSmallDiagramsCheck, mIncreaseMinimumSizeSpinBox);
        QWidget::setTabOrder(mIncreaseMinimumSizeSpinBox, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, mPlacementComboBox);
        QWidget::setTabOrder(mPlacementComboBox, mDiagramDistanceSpinBox);
        QWidget::setTabOrder(mDiagramDistanceSpinBox, chkLineAbove);
        QWidget::setTabOrder(chkLineAbove, chkLineOn);
        QWidget::setTabOrder(chkLineOn, chkLineBelow);
        QWidget::setTabOrder(chkLineBelow, chkLineOrientationDependent);
        QWidget::setTabOrder(chkLineOrientationDependent, mDataDefinedPositionGroupBox);
        QWidget::setTabOrder(mDataDefinedPositionGroupBox, mDataDefinedXComboBox);
        QWidget::setTabOrder(mDataDefinedXComboBox, mDataDefinedYComboBox);
        QWidget::setTabOrder(mDataDefinedYComboBox, mPrioritySlider);
        QWidget::setTabOrder(mPrioritySlider, mZIndexSpinBox);
        QWidget::setTabOrder(mZIndexSpinBox, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, mOrientationUpButton);
        QWidget::setTabOrder(mOrientationUpButton, mOrientationDownButton);
        QWidget::setTabOrder(mOrientationDownButton, mOrientationRightButton);
        QWidget::setTabOrder(mOrientationRightButton, mOrientationLeftButton);

        retranslateUi(QgsDiagramPropertiesBase);
        QObject::connect(mDiagramOptionsListWidget, SIGNAL(currentRowChanged(int)), mDiagramStackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(mFixedSizeRadio, SIGNAL(toggled(bool)), mDiagramSizeSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(mAttributeBasedScalingRadio, SIGNAL(toggled(bool)), mLinearScaleFrame, SLOT(setEnabled(bool)));
        QObject::connect(mIncreaseSmallDiagramsCheck, SIGNAL(toggled(bool)), mIncreaseMinimumSizeSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(mIncreaseSmallDiagramsCheck, SIGNAL(toggled(bool)), mIncreaseMinimumSizeLabel, SLOT(setEnabled(bool)));

        mDiagramStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QgsDiagramPropertiesBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDiagramPropertiesBase)
    {
        mEnableDiagramsCheckBox->setText(QApplication::translate("QgsDiagramPropertiesBase", "Show diagrams for this layer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mEngineSettingsButton->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Automated placement settings (apply to all layers)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mTypeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Diagram type", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mDiagramOptionsListWidget->isSortingEnabled();
        mDiagramOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mDiagramOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsDiagramPropertiesBase", "Attributes", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = mDiagramOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsDiagramPropertiesBase", "Appearance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Rendering", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mDiagramOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = mDiagramOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsDiagramPropertiesBase", "Placement", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Placement", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mDiagramOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsDiagramPropertiesBase", "Options", 0, QApplication::UnicodeUTF8));
        mDiagramOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_6->setText(QApplication::translate("QgsDiagramPropertiesBase", "Attributes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsDiagramPropertiesBase", "Available attributes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddAttributeExpression->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Add expression", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddCategoryPushButton->setText(QString());
        mRemoveCategoryPushButton->setText(QString());
        Assigened->setText(QApplication::translate("QgsDiagramPropertiesBase", "Assigned attributes", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mDiagramAttributesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsDiagramPropertiesBase", "Legend", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsDiagramPropertiesBase", "Color", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsDiagramPropertiesBase", "Attribute", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mDiagramAttributesTreeWidget->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Drag and drop to reorder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_39->setText(QApplication::translate("QgsDiagramPropertiesBase", "Appearance", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsDiagramPropertiesBase", "Format", 0, QApplication::UnicodeUTF8));
        mTransparencyLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Transparency", 0, QApplication::UnicodeUTF8));
        mTransparencySpinBox->setSuffix(QApplication::translate("QgsDiagramPropertiesBase", " %", 0, QApplication::UnicodeUTF8));
        mBarWidthLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Bar width", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QString());
        mPenWidthLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line width", 0, QApplication::UnicodeUTF8));
        mBackgroundColorLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Background color", 0, QApplication::UnicodeUTF8));
        mPenColorLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line color", 0, QApplication::UnicodeUTF8));
        mAngleOffsetLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Start angle", 0, QApplication::UnicodeUTF8));
        mDiagramPenColorButton->setText(QString());
        mDiagramFontButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Font...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsDiagramPropertiesBase", "Visibility", 0, QApplication::UnicodeUTF8));
        mShowAllCheckBox->setText(QApplication::translate("QgsDiagramPropertiesBase", "Show all diagrams", 0, QApplication::UnicodeUTF8));
        mScaleVisibilityGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Scale dependent visibility", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size", 0, QApplication::UnicodeUTF8));
        mDiagramUnitsLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size units", 0, QApplication::UnicodeUTF8));
        mFixedSizeRadio->setText(QApplication::translate("QgsDiagramPropertiesBase", "Fixed size", 0, QApplication::UnicodeUTF8));
        mLinearlyScalingLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Scale linearly between 0 and the following attribute value / diagram size:", 0, QApplication::UnicodeUTF8));
        mSizeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Size", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsDiagramPropertiesBase", "Maximum value", 0, QApplication::UnicodeUTF8));
        mSizeAttributeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Attribute", 0, QApplication::UnicodeUTF8));
        mScaleDependencyLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Scale", 0, QApplication::UnicodeUTF8));
        mFindMaximumValueButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Find", 0, QApplication::UnicodeUTF8));
        mIncreaseSmallDiagramsCheck->setText(QApplication::translate("QgsDiagramPropertiesBase", "Increase size of small diagrams", 0, QApplication::UnicodeUTF8));
        mIncreaseMinimumSizeLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Minimum size", 0, QApplication::UnicodeUTF8));
        mAttributeBasedScalingRadio->setText(QApplication::translate("QgsDiagramPropertiesBase", "Scaled size", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("QgsDiagramPropertiesBase", "Placement", 0, QApplication::UnicodeUTF8));
        mDataDefinedPositionGroupBox->setTitle(QApplication::translate("QgsDiagramPropertiesBase", "Data defined position", 0, QApplication::UnicodeUTF8));
        mXPosColLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "x", 0, QApplication::UnicodeUTF8));
        mYPosColLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "y", 0, QApplication::UnicodeUTF8));
        mPlacementLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Placement", 0, QApplication::UnicodeUTF8));
        mDiagramDistanceLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Distance", 0, QApplication::UnicodeUTF8));
        mPriorityLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Priority:", 0, QApplication::UnicodeUTF8));
        mPriorityLowLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Low", 0, QApplication::UnicodeUTF8));
        mPriorityHighLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "High", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("QgsDiagramPropertiesBase", "Diagram z-index", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mZIndexSpinBox->setToolTip(QApplication::translate("QgsDiagramPropertiesBase", "Controls how labels are drawn on top of each other. Labels with a higher z-index are drawn above labels with a lower z-index.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        chkLineAbove->setText(QApplication::translate("QgsDiagramPropertiesBase", "Above line", 0, QApplication::UnicodeUTF8));
        chkLineBelow->setText(QApplication::translate("QgsDiagramPropertiesBase", "Below line", 0, QApplication::UnicodeUTF8));
        chkLineOn->setText(QApplication::translate("QgsDiagramPropertiesBase", "On line", 0, QApplication::UnicodeUTF8));
        chkLineOrientationDependent->setText(QApplication::translate("QgsDiagramPropertiesBase", "Line orientation dependent position", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("QgsDiagramPropertiesBase", "Options", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsDiagramPropertiesBase", "Bar Orientation", 0, QApplication::UnicodeUTF8));
        mOrientationUpButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Up", 0, QApplication::UnicodeUTF8));
        mOrientationDownButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Down", 0, QApplication::UnicodeUTF8));
        mOrientationRightButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Right", 0, QApplication::UnicodeUTF8));
        mOrientationLeftButton->setText(QApplication::translate("QgsDiagramPropertiesBase", "Left", 0, QApplication::UnicodeUTF8));
        mLabelPlacementLabel->setText(QApplication::translate("QgsDiagramPropertiesBase", "Label placement", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QgsDiagramPropertiesBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDiagramPropertiesBase: public Ui_QgsDiagramPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDIAGRAMPROPERTIESBASE_H
