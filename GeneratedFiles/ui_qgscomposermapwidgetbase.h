/********************************************************************************
** Form generated from reading UI file 'qgscomposermapwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERMAPWIDGETBASE_H
#define UI_QGSCOMPOSERMAPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsblendmodecombobox.h"
#include "qgscolorbuttonv2.h"
#include "qgsdatadefinedbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerMapWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *mPreviewModeComboBox;
    QPushButton *mUpdatePreviewButton;
    QCheckBox *mDrawCanvasItemsCheckBox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mScaleLineEdit;
    QgsDataDefinedButton *mScaleDDBtn;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *mKeepLayerListCheckBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *mLayerListFromPresetButton;
    QgsDataDefinedButton *mLayersDDBtn;
    QLabel *mMapRotationLabel;
    QHBoxLayout *horizontalLayout_7;
    QgsDoubleSpinBox *mMapRotationSpinBox;
    QgsDataDefinedButton *mMapRotationDDBtn;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *mKeepLayerStylesCheckBox;
    QgsDataDefinedButton *mStylePresetsDDBtn;
    QgsCollapsibleGroupBoxBasic *mExtentsCheckBox;
    QGridLayout *gridLayout;
    QLabel *mXMinLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mXMinLineEdit;
    QgsDataDefinedButton *mXMinDDBtn;
    QLabel *mYMinLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *mYMinLineEdit;
    QgsDataDefinedButton *mYMinDDBtn;
    QLabel *mXMaxLabel;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *mXMaxLineEdit;
    QgsDataDefinedButton *mXMaxDDBtn;
    QLabel *mYMaxLabel;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *mYMaxLineEdit;
    QgsDataDefinedButton *mYMaxDDBtn;
    QPushButton *mSetToMapCanvasExtentButton;
    QPushButton *mViewExtentInCanvasButton;
    QgsCollapsibleGroupBoxBasic *mAtlasCheckBox;
    QGridLayout *gridLayout_2;
    QRadioButton *mAtlasMarginRadio;
    QHBoxLayout *horizontalLayout_11;
    QgsSpinBox *mAtlasMarginSpinBox;
    QgsDataDefinedButton *mAtlasMarginDDBtn;
    QRadioButton *mAtlasPredefinedScaleRadio;
    QRadioButton *mAtlasFixedScaleRadio;
    QgsCollapsibleGroupBoxBasic *mGridGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *mAddGridPushButton;
    QPushButton *mRemoveGridPushButton;
    QPushButton *mGridUpButton;
    QPushButton *mGridDownButton;
    QListWidget *mGridListWidget;
    QgsCollapsibleGroupBoxBasic *mGridCheckBox;
    QGridLayout *gridLayout_6;
    QLabel *mGridTypeLabel_2;
    QComboBox *mGridTypeComboBox;
    QLabel *mMapGridCRSLabel;
    QPushButton *mMapGridCRSButton;
    QLabel *mMapGridUnitLabel;
    QComboBox *mMapGridUnitComboBox;
    QLabel *mIntervalXLabel_2;
    QVBoxLayout *verticalLayout_9;
    QgsDoubleSpinBox *mIntervalXSpinBox;
    QgsDoubleSpinBox *mIntervalYSpinBox;
    QLabel *mOffsetXLabel_2;
    QVBoxLayout *verticalLayout_10;
    QgsDoubleSpinBox *mOffsetXSpinBox;
    QgsDoubleSpinBox *mOffsetYSpinBox;
    QLabel *mCrossWidthLabel;
    QgsDoubleSpinBox *mCrossWidthSpinBox;
    QLabel *mLineStyleLabel;
    QPushButton *mGridLineStyleButton;
    QLabel *mMarkerStyleLabel;
    QPushButton *mGridMarkerStyleButton;
    QLabel *mGridBlendLabel;
    QgsBlendModeComboBox *mGridBlendComboBox;
    QgsCollapsibleGroupBoxBasic *mGridFrameGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *mFrameStyleLabel_2;
    QLabel *mFrameWidthLabel;
    QLabel *mFramePenLabel;
    QgsDoubleSpinBox *mGridFramePenSizeSpinBox;
    QgsColorButtonV2 *mGridFramePenColorButton;
    QLabel *mFrameFillLabel;
    QgsColorButtonV2 *mGridFrameFill1ColorButton;
    QgsColorButtonV2 *mGridFrameFill2ColorButton;
    QGridLayout *gridLayout_4;
    QCheckBox *mCheckGridLeftSide;
    QCheckBox *mCheckGridRightSide;
    QCheckBox *mCheckGridTopSide;
    QCheckBox *mCheckGridBottomSide;
    QComboBox *mFrameStyleComboBox;
    QgsDoubleSpinBox *mFrameWidthSpinBox;
    QLabel *mRightDivisionsLabel;
    QLabel *mLeftDivisionsLabel;
    QLabel *mTopDivisionsLabel;
    QLabel *mBottomDivisionsLabel;
    QComboBox *mFrameDivisionsLeftComboBox;
    QComboBox *mFrameDivisionsRightComboBox;
    QComboBox *mFrameDivisionsTopComboBox;
    QComboBox *mFrameDivisionsBottomComboBox;
    QgsCollapsibleGroupBoxBasic *mDrawAnnotationGroupBox;
    QGridLayout *gridLayout_7;
    QLabel *mAnnotationPositionLabelRight;
    QComboBox *mAnnotationDisplayRightComboBox;
    QLabel *mAnnotationPositionLabelLeft;
    QLabel *mAnnotationFormatLabel;
    QComboBox *mAnnotationPositionLeftComboBox;
    QComboBox *mAnnotationDirectionComboBoxLeft;
    QComboBox *mAnnotationPositionRightComboBox;
    QComboBox *mAnnotationDirectionComboBoxRight;
    QComboBox *mAnnotationPositionTopComboBox;
    QComboBox *mAnnotationDirectionComboBoxTop;
    QComboBox *mAnnotationPositionBottomComboBox;
    QComboBox *mAnnotationDirectionComboBoxBottom;
    QLabel *label;
    QPushButton *mAnnotationFontButton;
    QLabel *mFontColorLabel;
    QgsColorButtonV2 *mAnnotationFontColorButton;
    QLabel *mDistanceToFrameLabel;
    QgsDoubleSpinBox *mDistanceToMapFrameSpinBox;
    QLabel *mCoordinatePrecisionLabel;
    QgsSpinBox *mCoordinatePrecisionSpinBox;
    QComboBox *mAnnotationDisplayLeftComboBox;
    QLabel *mAnnotationPositionLabelTop;
    QComboBox *mAnnotationDisplayTopComboBox;
    QComboBox *mAnnotationDisplayBottomComboBox;
    QLabel *mAnnotationPositionLabelBottom;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *mAnnotationFormatComboBox;
    QToolButton *mAnnotationFormatButton;
    QgsCollapsibleGroupBoxBasic *mOverviewsGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *mAddOverviewPushButton;
    QPushButton *mRemoveOverviewPushButton;
    QPushButton *mOverviewUpButton;
    QPushButton *mOverviewDownButton;
    QListWidget *mOverviewListWidget;
    QgsCollapsibleGroupBoxBasic *mOverviewCheckBox;
    QGridLayout *gridLayout_8;
    QLabel *mOverviewFrameMapLabel;
    QComboBox *mOverviewFrameMapComboBox;
    QLabel *mOverviewFrameStyleLabel;
    QPushButton *mOverviewFrameStyleButton;
    QLabel *mOverviewBlendModeLabel;
    QgsBlendModeComboBox *mOverviewBlendModeComboBox;
    QCheckBox *mOverviewInvertCheckbox;
    QCheckBox *mOverviewCenterCheckbox;

    void setupUi(QWidget *QgsComposerMapWidgetBase)
    {
        if (QgsComposerMapWidgetBase->objectName().isEmpty())
            QgsComposerMapWidgetBase->setObjectName(QString::fromUtf8("QgsComposerMapWidgetBase"));
        QgsComposerMapWidgetBase->resize(457, 1086);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsComposerMapWidgetBase->sizePolicy().hasHeightForWidth());
        QgsComposerMapWidgetBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsComposerMapWidgetBase);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mLabel = new QLabel(QgsComposerMapWidgetBase);
        mLabel->setObjectName(QString::fromUtf8("mLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLabel->sizePolicy().hasHeightForWidth());
        mLabel->setSizePolicy(sizePolicy1);
        mLabel->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout_2->addWidget(mLabel);

        scrollArea = new QScrollArea(QgsComposerMapWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -1446, 444, 2493));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mPreviewModeComboBox = new QComboBox(groupBox);
        mPreviewModeComboBox->setObjectName(QString::fromUtf8("mPreviewModeComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPreviewModeComboBox->sizePolicy().hasHeightForWidth());
        mPreviewModeComboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(mPreviewModeComboBox);

        mUpdatePreviewButton = new QPushButton(groupBox);
        mUpdatePreviewButton->setObjectName(QString::fromUtf8("mUpdatePreviewButton"));

        horizontalLayout_2->addWidget(mUpdatePreviewButton);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 3);

        mDrawCanvasItemsCheckBox = new QCheckBox(groupBox);
        mDrawCanvasItemsCheckBox->setObjectName(QString::fromUtf8("mDrawCanvasItemsCheckBox"));

        gridLayout_5->addWidget(mDrawCanvasItemsCheckBox, 4, 0, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mScaleLineEdit = new QLineEdit(groupBox);
        mScaleLineEdit->setObjectName(QString::fromUtf8("mScaleLineEdit"));

        horizontalLayout_6->addWidget(mScaleLineEdit);

        mScaleDDBtn = new QgsDataDefinedButton(groupBox);
        mScaleDDBtn->setObjectName(QString::fromUtf8("mScaleDDBtn"));

        horizontalLayout_6->addWidget(mScaleDDBtn);


        gridLayout_5->addLayout(horizontalLayout_6, 1, 2, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mKeepLayerListCheckBox = new QCheckBox(groupBox);
        mKeepLayerListCheckBox->setObjectName(QString::fromUtf8("mKeepLayerListCheckBox"));
        sizePolicy1.setHeightForWidth(mKeepLayerListCheckBox->sizePolicy().hasHeightForWidth());
        mKeepLayerListCheckBox->setSizePolicy(sizePolicy1);

        horizontalLayout_10->addWidget(mKeepLayerListCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        mLayerListFromPresetButton = new QToolButton(groupBox);
        mLayerListFromPresetButton->setObjectName(QString::fromUtf8("mLayerListFromPresetButton"));
        mLayerListFromPresetButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_10->addWidget(mLayerListFromPresetButton);

        mLayersDDBtn = new QgsDataDefinedButton(groupBox);
        mLayersDDBtn->setObjectName(QString::fromUtf8("mLayersDDBtn"));

        horizontalLayout_10->addWidget(mLayersDDBtn);


        gridLayout_5->addLayout(horizontalLayout_10, 5, 0, 1, 3);

        mMapRotationLabel = new QLabel(groupBox);
        mMapRotationLabel->setObjectName(QString::fromUtf8("mMapRotationLabel"));

        gridLayout_5->addWidget(mMapRotationLabel, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mMapRotationSpinBox = new QgsDoubleSpinBox(groupBox);
        mMapRotationSpinBox->setObjectName(QString::fromUtf8("mMapRotationSpinBox"));
        mMapRotationSpinBox->setMaximum(360);

        horizontalLayout_7->addWidget(mMapRotationSpinBox);

        mMapRotationDDBtn = new QgsDataDefinedButton(groupBox);
        mMapRotationDDBtn->setObjectName(QString::fromUtf8("mMapRotationDDBtn"));

        horizontalLayout_7->addWidget(mMapRotationDDBtn);


        gridLayout_5->addLayout(horizontalLayout_7, 2, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mKeepLayerStylesCheckBox = new QCheckBox(groupBox);
        mKeepLayerStylesCheckBox->setObjectName(QString::fromUtf8("mKeepLayerStylesCheckBox"));

        horizontalLayout_12->addWidget(mKeepLayerStylesCheckBox);

        mStylePresetsDDBtn = new QgsDataDefinedButton(groupBox);
        mStylePresetsDDBtn->setObjectName(QString::fromUtf8("mStylePresetsDDBtn"));

        horizontalLayout_12->addWidget(mStylePresetsDDBtn);


        gridLayout_5->addLayout(horizontalLayout_12, 8, 0, 1, 3);


        mainLayout->addWidget(groupBox);

        mExtentsCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mExtentsCheckBox->setObjectName(QString::fromUtf8("mExtentsCheckBox"));
        mExtentsCheckBox->setFocusPolicy(Qt::StrongFocus);
        mExtentsCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mExtentsCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mExtentsCheckBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mXMinLabel = new QLabel(mExtentsCheckBox);
        mXMinLabel->setObjectName(QString::fromUtf8("mXMinLabel"));
        mXMinLabel->setEnabled(true);
        mXMinLabel->setWordWrap(false);

        gridLayout->addWidget(mXMinLabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mXMinLineEdit = new QLineEdit(mExtentsCheckBox);
        mXMinLineEdit->setObjectName(QString::fromUtf8("mXMinLineEdit"));

        horizontalLayout->addWidget(mXMinLineEdit);

        mXMinDDBtn = new QgsDataDefinedButton(mExtentsCheckBox);
        mXMinDDBtn->setObjectName(QString::fromUtf8("mXMinDDBtn"));

        horizontalLayout->addWidget(mXMinDDBtn);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        mYMinLabel = new QLabel(mExtentsCheckBox);
        mYMinLabel->setObjectName(QString::fromUtf8("mYMinLabel"));
        mYMinLabel->setWordWrap(false);

        gridLayout->addWidget(mYMinLabel, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mYMinLineEdit = new QLineEdit(mExtentsCheckBox);
        mYMinLineEdit->setObjectName(QString::fromUtf8("mYMinLineEdit"));

        horizontalLayout_3->addWidget(mYMinLineEdit);

        mYMinDDBtn = new QgsDataDefinedButton(mExtentsCheckBox);
        mYMinDDBtn->setObjectName(QString::fromUtf8("mYMinDDBtn"));

        horizontalLayout_3->addWidget(mYMinDDBtn);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        mXMaxLabel = new QLabel(mExtentsCheckBox);
        mXMaxLabel->setObjectName(QString::fromUtf8("mXMaxLabel"));
        mXMaxLabel->setWordWrap(false);

        gridLayout->addWidget(mXMaxLabel, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mXMaxLineEdit = new QLineEdit(mExtentsCheckBox);
        mXMaxLineEdit->setObjectName(QString::fromUtf8("mXMaxLineEdit"));

        horizontalLayout_4->addWidget(mXMaxLineEdit);

        mXMaxDDBtn = new QgsDataDefinedButton(mExtentsCheckBox);
        mXMaxDDBtn->setObjectName(QString::fromUtf8("mXMaxDDBtn"));

        horizontalLayout_4->addWidget(mXMaxDDBtn);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        mYMaxLabel = new QLabel(mExtentsCheckBox);
        mYMaxLabel->setObjectName(QString::fromUtf8("mYMaxLabel"));
        mYMaxLabel->setWordWrap(false);

        gridLayout->addWidget(mYMaxLabel, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mYMaxLineEdit = new QLineEdit(mExtentsCheckBox);
        mYMaxLineEdit->setObjectName(QString::fromUtf8("mYMaxLineEdit"));

        horizontalLayout_5->addWidget(mYMaxLineEdit);

        mYMaxDDBtn = new QgsDataDefinedButton(mExtentsCheckBox);
        mYMaxDDBtn->setObjectName(QString::fromUtf8("mYMaxDDBtn"));

        horizontalLayout_5->addWidget(mYMaxDDBtn);


        gridLayout->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        mSetToMapCanvasExtentButton = new QPushButton(mExtentsCheckBox);
        mSetToMapCanvasExtentButton->setObjectName(QString::fromUtf8("mSetToMapCanvasExtentButton"));

        gridLayout->addWidget(mSetToMapCanvasExtentButton, 4, 0, 1, 2);

        mViewExtentInCanvasButton = new QPushButton(mExtentsCheckBox);
        mViewExtentInCanvasButton->setObjectName(QString::fromUtf8("mViewExtentInCanvasButton"));

        gridLayout->addWidget(mViewExtentInCanvasButton, 5, 0, 1, 2);


        mainLayout->addWidget(mExtentsCheckBox);

        mAtlasCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mAtlasCheckBox->setObjectName(QString::fromUtf8("mAtlasCheckBox"));
        mAtlasCheckBox->setCheckable(true);
        mAtlasCheckBox->setChecked(false);
        mAtlasCheckBox->setProperty("collapsed", QVariant(true));
        mAtlasCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_2 = new QGridLayout(mAtlasCheckBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mAtlasMarginRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasMarginRadio->setObjectName(QString::fromUtf8("mAtlasMarginRadio"));
        mAtlasMarginRadio->setEnabled(false);

        gridLayout_2->addWidget(mAtlasMarginRadio, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mAtlasMarginSpinBox = new QgsSpinBox(mAtlasCheckBox);
        mAtlasMarginSpinBox->setObjectName(QString::fromUtf8("mAtlasMarginSpinBox"));
        mAtlasMarginSpinBox->setEnabled(false);
        sizePolicy2.setHeightForWidth(mAtlasMarginSpinBox->sizePolicy().hasHeightForWidth());
        mAtlasMarginSpinBox->setSizePolicy(sizePolicy2);
        mAtlasMarginSpinBox->setMaximum(9999);
        mAtlasMarginSpinBox->setValue(10);

        horizontalLayout_11->addWidget(mAtlasMarginSpinBox);

        mAtlasMarginDDBtn = new QgsDataDefinedButton(mAtlasCheckBox);
        mAtlasMarginDDBtn->setObjectName(QString::fromUtf8("mAtlasMarginDDBtn"));

        horizontalLayout_11->addWidget(mAtlasMarginDDBtn);


        gridLayout_2->addLayout(horizontalLayout_11, 0, 1, 1, 1);

        mAtlasPredefinedScaleRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasPredefinedScaleRadio->setObjectName(QString::fromUtf8("mAtlasPredefinedScaleRadio"));

        gridLayout_2->addWidget(mAtlasPredefinedScaleRadio, 1, 0, 1, 1);

        mAtlasFixedScaleRadio = new QRadioButton(mAtlasCheckBox);
        mAtlasFixedScaleRadio->setObjectName(QString::fromUtf8("mAtlasFixedScaleRadio"));
        mAtlasFixedScaleRadio->setEnabled(false);

        gridLayout_2->addWidget(mAtlasFixedScaleRadio, 2, 0, 1, 1);


        mainLayout->addWidget(mAtlasCheckBox);

        mGridGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mGridGroupBox->setObjectName(QString::fromUtf8("mGridGroupBox"));
        mGridGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGridGroupBox->setProperty("collapsed", QVariant(true));
        mGridGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        verticalLayout_3 = new QVBoxLayout(mGridGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mAddGridPushButton = new QPushButton(mGridGroupBox);
        mAddGridPushButton->setObjectName(QString::fromUtf8("mAddGridPushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddGridPushButton->setIcon(icon);

        horizontalLayout_8->addWidget(mAddGridPushButton);

        mRemoveGridPushButton = new QPushButton(mGridGroupBox);
        mRemoveGridPushButton->setObjectName(QString::fromUtf8("mRemoveGridPushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveGridPushButton->setIcon(icon1);

        horizontalLayout_8->addWidget(mRemoveGridPushButton);

        mGridUpButton = new QPushButton(mGridGroupBox);
        mGridUpButton->setObjectName(QString::fromUtf8("mGridUpButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyUp.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mGridUpButton->setIcon(icon2);

        horizontalLayout_8->addWidget(mGridUpButton);

        mGridDownButton = new QPushButton(mGridGroupBox);
        mGridDownButton->setObjectName(QString::fromUtf8("mGridDownButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyDown.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mGridDownButton->setIcon(icon3);

        horizontalLayout_8->addWidget(mGridDownButton);


        verticalLayout_3->addLayout(horizontalLayout_8);

        mGridListWidget = new QListWidget(mGridGroupBox);
        mGridListWidget->setObjectName(QString::fromUtf8("mGridListWidget"));
        sizePolicy.setHeightForWidth(mGridListWidget->sizePolicy().hasHeightForWidth());
        mGridListWidget->setSizePolicy(sizePolicy);
        mGridListWidget->setMaximumSize(QSize(16777215, 90));

        verticalLayout_3->addWidget(mGridListWidget);

        mGridCheckBox = new QgsCollapsibleGroupBoxBasic(mGridGroupBox);
        mGridCheckBox->setObjectName(QString::fromUtf8("mGridCheckBox"));
        mGridCheckBox->setCheckable(true);
        mGridCheckBox->setChecked(true);
        mGridCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composermapgrid")));
        mGridCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_6 = new QGridLayout(mGridCheckBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mGridTypeLabel_2 = new QLabel(mGridCheckBox);
        mGridTypeLabel_2->setObjectName(QString::fromUtf8("mGridTypeLabel_2"));
        mGridTypeLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mGridTypeLabel_2, 0, 0, 1, 1);

        mGridTypeComboBox = new QComboBox(mGridCheckBox);
        mGridTypeComboBox->setObjectName(QString::fromUtf8("mGridTypeComboBox"));

        gridLayout_6->addWidget(mGridTypeComboBox, 0, 1, 1, 1);

        mMapGridCRSLabel = new QLabel(mGridCheckBox);
        mMapGridCRSLabel->setObjectName(QString::fromUtf8("mMapGridCRSLabel"));

        gridLayout_6->addWidget(mMapGridCRSLabel, 1, 0, 1, 1);

        mMapGridCRSButton = new QPushButton(mGridCheckBox);
        mMapGridCRSButton->setObjectName(QString::fromUtf8("mMapGridCRSButton"));

        gridLayout_6->addWidget(mMapGridCRSButton, 1, 1, 1, 1);

        mMapGridUnitLabel = new QLabel(mGridCheckBox);
        mMapGridUnitLabel->setObjectName(QString::fromUtf8("mMapGridUnitLabel"));

        gridLayout_6->addWidget(mMapGridUnitLabel, 2, 0, 1, 1);

        mMapGridUnitComboBox = new QComboBox(mGridCheckBox);
        mMapGridUnitComboBox->setObjectName(QString::fromUtf8("mMapGridUnitComboBox"));

        gridLayout_6->addWidget(mMapGridUnitComboBox, 2, 1, 1, 1);

        mIntervalXLabel_2 = new QLabel(mGridCheckBox);
        mIntervalXLabel_2->setObjectName(QString::fromUtf8("mIntervalXLabel_2"));
        mIntervalXLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mIntervalXLabel_2, 3, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        mIntervalXSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mIntervalXSpinBox->setObjectName(QString::fromUtf8("mIntervalXSpinBox"));
        mIntervalXSpinBox->setDecimals(12);
        mIntervalXSpinBox->setMaximum(1e+07);

        verticalLayout_9->addWidget(mIntervalXSpinBox);

        mIntervalYSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mIntervalYSpinBox->setObjectName(QString::fromUtf8("mIntervalYSpinBox"));
        mIntervalYSpinBox->setDecimals(12);
        mIntervalYSpinBox->setMaximum(1e+07);

        verticalLayout_9->addWidget(mIntervalYSpinBox);


        gridLayout_6->addLayout(verticalLayout_9, 3, 1, 1, 1);

        mOffsetXLabel_2 = new QLabel(mGridCheckBox);
        mOffsetXLabel_2->setObjectName(QString::fromUtf8("mOffsetXLabel_2"));
        mOffsetXLabel_2->setWordWrap(false);

        gridLayout_6->addWidget(mOffsetXLabel_2, 4, 0, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        mOffsetXSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mOffsetXSpinBox->setObjectName(QString::fromUtf8("mOffsetXSpinBox"));
        mOffsetXSpinBox->setDecimals(12);
        mOffsetXSpinBox->setMaximum(1e+07);

        verticalLayout_10->addWidget(mOffsetXSpinBox);

        mOffsetYSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mOffsetYSpinBox->setObjectName(QString::fromUtf8("mOffsetYSpinBox"));
        mOffsetYSpinBox->setDecimals(12);
        mOffsetYSpinBox->setMaximum(1e+07);

        verticalLayout_10->addWidget(mOffsetYSpinBox);


        gridLayout_6->addLayout(verticalLayout_10, 4, 1, 1, 1);

        mCrossWidthLabel = new QLabel(mGridCheckBox);
        mCrossWidthLabel->setObjectName(QString::fromUtf8("mCrossWidthLabel"));
        mCrossWidthLabel->setWordWrap(false);

        gridLayout_6->addWidget(mCrossWidthLabel, 5, 0, 1, 1);

        mCrossWidthSpinBox = new QgsDoubleSpinBox(mGridCheckBox);
        mCrossWidthSpinBox->setObjectName(QString::fromUtf8("mCrossWidthSpinBox"));
        mCrossWidthSpinBox->setDecimals(2);
        mCrossWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mCrossWidthSpinBox, 5, 1, 1, 1);

        mLineStyleLabel = new QLabel(mGridCheckBox);
        mLineStyleLabel->setObjectName(QString::fromUtf8("mLineStyleLabel"));
        mLineStyleLabel->setWordWrap(false);

        gridLayout_6->addWidget(mLineStyleLabel, 6, 0, 1, 1);

        mGridLineStyleButton = new QPushButton(mGridCheckBox);
        mGridLineStyleButton->setObjectName(QString::fromUtf8("mGridLineStyleButton"));

        gridLayout_6->addWidget(mGridLineStyleButton, 6, 1, 1, 1);

        mMarkerStyleLabel = new QLabel(mGridCheckBox);
        mMarkerStyleLabel->setObjectName(QString::fromUtf8("mMarkerStyleLabel"));
        mMarkerStyleLabel->setWordWrap(false);

        gridLayout_6->addWidget(mMarkerStyleLabel, 7, 0, 1, 1);

        mGridMarkerStyleButton = new QPushButton(mGridCheckBox);
        mGridMarkerStyleButton->setObjectName(QString::fromUtf8("mGridMarkerStyleButton"));

        gridLayout_6->addWidget(mGridMarkerStyleButton, 7, 1, 1, 1);

        mGridBlendLabel = new QLabel(mGridCheckBox);
        mGridBlendLabel->setObjectName(QString::fromUtf8("mGridBlendLabel"));

        gridLayout_6->addWidget(mGridBlendLabel, 8, 0, 1, 1);

        mGridBlendComboBox = new QgsBlendModeComboBox(mGridCheckBox);
        mGridBlendComboBox->setObjectName(QString::fromUtf8("mGridBlendComboBox"));

        gridLayout_6->addWidget(mGridBlendComboBox, 8, 1, 1, 1);

        mGridFrameGroupBox = new QgsCollapsibleGroupBoxBasic(mGridCheckBox);
        mGridFrameGroupBox->setObjectName(QString::fromUtf8("mGridFrameGroupBox"));
        mGridFrameGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGridFrameGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composermapgrid")));
        gridLayout_3 = new QGridLayout(mGridFrameGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mFrameStyleLabel_2 = new QLabel(mGridFrameGroupBox);
        mFrameStyleLabel_2->setObjectName(QString::fromUtf8("mFrameStyleLabel_2"));
        mFrameStyleLabel_2->setWordWrap(false);

        gridLayout_3->addWidget(mFrameStyleLabel_2, 0, 0, 1, 1);

        mFrameWidthLabel = new QLabel(mGridFrameGroupBox);
        mFrameWidthLabel->setObjectName(QString::fromUtf8("mFrameWidthLabel"));
        mFrameWidthLabel->setWordWrap(false);

        gridLayout_3->addWidget(mFrameWidthLabel, 1, 0, 1, 1);

        mFramePenLabel = new QLabel(mGridFrameGroupBox);
        mFramePenLabel->setObjectName(QString::fromUtf8("mFramePenLabel"));

        gridLayout_3->addWidget(mFramePenLabel, 2, 0, 1, 1);

        mGridFramePenSizeSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mGridFramePenSizeSpinBox->setObjectName(QString::fromUtf8("mGridFramePenSizeSpinBox"));
        mGridFramePenSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mGridFramePenSizeSpinBox, 2, 1, 1, 1);

        mGridFramePenColorButton = new QgsColorButtonV2(mGridFrameGroupBox);
        mGridFramePenColorButton->setObjectName(QString::fromUtf8("mGridFramePenColorButton"));
        mGridFramePenColorButton->setMinimumSize(QSize(100, 0));
        mGridFramePenColorButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(mGridFramePenColorButton, 2, 2, 1, 1);

        mFrameFillLabel = new QLabel(mGridFrameGroupBox);
        mFrameFillLabel->setObjectName(QString::fromUtf8("mFrameFillLabel"));

        gridLayout_3->addWidget(mFrameFillLabel, 3, 0, 1, 1);

        mGridFrameFill1ColorButton = new QgsColorButtonV2(mGridFrameGroupBox);
        mGridFrameFill1ColorButton->setObjectName(QString::fromUtf8("mGridFrameFill1ColorButton"));
        mGridFrameFill1ColorButton->setMinimumSize(QSize(100, 0));
        mGridFrameFill1ColorButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(mGridFrameFill1ColorButton, 3, 1, 1, 1);

        mGridFrameFill2ColorButton = new QgsColorButtonV2(mGridFrameGroupBox);
        mGridFrameFill2ColorButton->setObjectName(QString::fromUtf8("mGridFrameFill2ColorButton"));
        mGridFrameFill2ColorButton->setMinimumSize(QSize(100, 0));
        mGridFrameFill2ColorButton->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(mGridFrameFill2ColorButton, 3, 2, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mCheckGridLeftSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridLeftSide->setObjectName(QString::fromUtf8("mCheckGridLeftSide"));

        gridLayout_4->addWidget(mCheckGridLeftSide, 0, 0, 1, 1);

        mCheckGridRightSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridRightSide->setObjectName(QString::fromUtf8("mCheckGridRightSide"));

        gridLayout_4->addWidget(mCheckGridRightSide, 0, 1, 1, 1);

        mCheckGridTopSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridTopSide->setObjectName(QString::fromUtf8("mCheckGridTopSide"));

        gridLayout_4->addWidget(mCheckGridTopSide, 1, 0, 1, 1);

        mCheckGridBottomSide = new QCheckBox(mGridFrameGroupBox);
        mCheckGridBottomSide->setObjectName(QString::fromUtf8("mCheckGridBottomSide"));

        gridLayout_4->addWidget(mCheckGridBottomSide, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 8, 0, 1, 3);

        mFrameStyleComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameStyleComboBox->setObjectName(QString::fromUtf8("mFrameStyleComboBox"));

        gridLayout_3->addWidget(mFrameStyleComboBox, 0, 1, 1, 2);

        mFrameWidthSpinBox = new QgsDoubleSpinBox(mGridFrameGroupBox);
        mFrameWidthSpinBox->setObjectName(QString::fromUtf8("mFrameWidthSpinBox"));
        mFrameWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mFrameWidthSpinBox, 1, 1, 1, 2);

        mRightDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mRightDivisionsLabel->setObjectName(QString::fromUtf8("mRightDivisionsLabel"));

        gridLayout_3->addWidget(mRightDivisionsLabel, 5, 0, 1, 1);

        mLeftDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mLeftDivisionsLabel->setObjectName(QString::fromUtf8("mLeftDivisionsLabel"));

        gridLayout_3->addWidget(mLeftDivisionsLabel, 4, 0, 1, 1);

        mTopDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mTopDivisionsLabel->setObjectName(QString::fromUtf8("mTopDivisionsLabel"));

        gridLayout_3->addWidget(mTopDivisionsLabel, 6, 0, 1, 1);

        mBottomDivisionsLabel = new QLabel(mGridFrameGroupBox);
        mBottomDivisionsLabel->setObjectName(QString::fromUtf8("mBottomDivisionsLabel"));

        gridLayout_3->addWidget(mBottomDivisionsLabel, 7, 0, 1, 1);

        mFrameDivisionsLeftComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsLeftComboBox->setObjectName(QString::fromUtf8("mFrameDivisionsLeftComboBox"));

        gridLayout_3->addWidget(mFrameDivisionsLeftComboBox, 4, 1, 1, 2);

        mFrameDivisionsRightComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsRightComboBox->setObjectName(QString::fromUtf8("mFrameDivisionsRightComboBox"));

        gridLayout_3->addWidget(mFrameDivisionsRightComboBox, 5, 1, 1, 2);

        mFrameDivisionsTopComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsTopComboBox->setObjectName(QString::fromUtf8("mFrameDivisionsTopComboBox"));

        gridLayout_3->addWidget(mFrameDivisionsTopComboBox, 6, 1, 1, 2);

        mFrameDivisionsBottomComboBox = new QComboBox(mGridFrameGroupBox);
        mFrameDivisionsBottomComboBox->setObjectName(QString::fromUtf8("mFrameDivisionsBottomComboBox"));

        gridLayout_3->addWidget(mFrameDivisionsBottomComboBox, 7, 1, 1, 2);


        gridLayout_6->addWidget(mGridFrameGroupBox, 9, 0, 1, 2);

        mDrawAnnotationGroupBox = new QgsCollapsibleGroupBoxBasic(mGridCheckBox);
        mDrawAnnotationGroupBox->setObjectName(QString::fromUtf8("mDrawAnnotationGroupBox"));
        mDrawAnnotationGroupBox->setEnabled(true);
        mDrawAnnotationGroupBox->setCheckable(true);
        mDrawAnnotationGroupBox->setChecked(false);
        mDrawAnnotationGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composermapgrid")));
        mDrawAnnotationGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_7 = new QGridLayout(mDrawAnnotationGroupBox);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(6, -1, 6, -1);
        mAnnotationPositionLabelRight = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelRight->setObjectName(QString::fromUtf8("mAnnotationPositionLabelRight"));
        mAnnotationPositionLabelRight->setWordWrap(true);

        gridLayout_7->addWidget(mAnnotationPositionLabelRight, 4, 0, 1, 1);

        mAnnotationDisplayRightComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayRightComboBox->setObjectName(QString::fromUtf8("mAnnotationDisplayRightComboBox"));

        gridLayout_7->addWidget(mAnnotationDisplayRightComboBox, 4, 1, 1, 1);

        mAnnotationPositionLabelLeft = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelLeft->setObjectName(QString::fromUtf8("mAnnotationPositionLabelLeft"));
        mAnnotationPositionLabelLeft->setWordWrap(true);

        gridLayout_7->addWidget(mAnnotationPositionLabelLeft, 1, 0, 1, 1);

        mAnnotationFormatLabel = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationFormatLabel->setObjectName(QString::fromUtf8("mAnnotationFormatLabel"));

        gridLayout_7->addWidget(mAnnotationFormatLabel, 0, 0, 1, 1);

        mAnnotationPositionLeftComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionLeftComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionLeftComboBox"));

        gridLayout_7->addWidget(mAnnotationPositionLeftComboBox, 2, 1, 1, 1);

        mAnnotationDirectionComboBoxLeft = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxLeft->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBoxLeft"));

        gridLayout_7->addWidget(mAnnotationDirectionComboBoxLeft, 3, 1, 1, 1);

        mAnnotationPositionRightComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionRightComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionRightComboBox"));

        gridLayout_7->addWidget(mAnnotationPositionRightComboBox, 5, 1, 1, 1);

        mAnnotationDirectionComboBoxRight = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxRight->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBoxRight"));

        gridLayout_7->addWidget(mAnnotationDirectionComboBoxRight, 6, 1, 1, 1);

        mAnnotationPositionTopComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionTopComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionTopComboBox"));

        gridLayout_7->addWidget(mAnnotationPositionTopComboBox, 8, 1, 1, 1);

        mAnnotationDirectionComboBoxTop = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxTop->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBoxTop"));

        gridLayout_7->addWidget(mAnnotationDirectionComboBoxTop, 9, 1, 1, 1);

        mAnnotationPositionBottomComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationPositionBottomComboBox->setObjectName(QString::fromUtf8("mAnnotationPositionBottomComboBox"));

        gridLayout_7->addWidget(mAnnotationPositionBottomComboBox, 11, 1, 1, 1);

        mAnnotationDirectionComboBoxBottom = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDirectionComboBoxBottom->setObjectName(QString::fromUtf8("mAnnotationDirectionComboBoxBottom"));

        gridLayout_7->addWidget(mAnnotationDirectionComboBoxBottom, 12, 1, 1, 1);

        label = new QLabel(mDrawAnnotationGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_7->addWidget(label, 13, 0, 1, 1);

        mAnnotationFontButton = new QPushButton(mDrawAnnotationGroupBox);
        mAnnotationFontButton->setObjectName(QString::fromUtf8("mAnnotationFontButton"));

        gridLayout_7->addWidget(mAnnotationFontButton, 13, 1, 1, 1);

        mFontColorLabel = new QLabel(mDrawAnnotationGroupBox);
        mFontColorLabel->setObjectName(QString::fromUtf8("mFontColorLabel"));

        gridLayout_7->addWidget(mFontColorLabel, 14, 0, 1, 1);

        mAnnotationFontColorButton = new QgsColorButtonV2(mDrawAnnotationGroupBox);
        mAnnotationFontColorButton->setObjectName(QString::fromUtf8("mAnnotationFontColorButton"));
        mAnnotationFontColorButton->setMinimumSize(QSize(120, 0));
        mAnnotationFontColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(mAnnotationFontColorButton, 14, 1, 1, 1);

        mDistanceToFrameLabel = new QLabel(mDrawAnnotationGroupBox);
        mDistanceToFrameLabel->setObjectName(QString::fromUtf8("mDistanceToFrameLabel"));
        mDistanceToFrameLabel->setWordWrap(true);

        gridLayout_7->addWidget(mDistanceToFrameLabel, 15, 0, 1, 1);

        mDistanceToMapFrameSpinBox = new QgsDoubleSpinBox(mDrawAnnotationGroupBox);
        mDistanceToMapFrameSpinBox->setObjectName(QString::fromUtf8("mDistanceToMapFrameSpinBox"));

        gridLayout_7->addWidget(mDistanceToMapFrameSpinBox, 15, 1, 1, 1);

        mCoordinatePrecisionLabel = new QLabel(mDrawAnnotationGroupBox);
        mCoordinatePrecisionLabel->setObjectName(QString::fromUtf8("mCoordinatePrecisionLabel"));
        mCoordinatePrecisionLabel->setWordWrap(true);

        gridLayout_7->addWidget(mCoordinatePrecisionLabel, 16, 0, 1, 1);

        mCoordinatePrecisionSpinBox = new QgsSpinBox(mDrawAnnotationGroupBox);
        mCoordinatePrecisionSpinBox->setObjectName(QString::fromUtf8("mCoordinatePrecisionSpinBox"));
        mCoordinatePrecisionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mCoordinatePrecisionSpinBox, 16, 1, 1, 1);

        mAnnotationDisplayLeftComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayLeftComboBox->setObjectName(QString::fromUtf8("mAnnotationDisplayLeftComboBox"));

        gridLayout_7->addWidget(mAnnotationDisplayLeftComboBox, 1, 1, 1, 1);

        mAnnotationPositionLabelTop = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelTop->setObjectName(QString::fromUtf8("mAnnotationPositionLabelTop"));
        mAnnotationPositionLabelTop->setWordWrap(true);

        gridLayout_7->addWidget(mAnnotationPositionLabelTop, 7, 0, 1, 1);

        mAnnotationDisplayTopComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayTopComboBox->setObjectName(QString::fromUtf8("mAnnotationDisplayTopComboBox"));

        gridLayout_7->addWidget(mAnnotationDisplayTopComboBox, 7, 1, 1, 1);

        mAnnotationDisplayBottomComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationDisplayBottomComboBox->setObjectName(QString::fromUtf8("mAnnotationDisplayBottomComboBox"));

        gridLayout_7->addWidget(mAnnotationDisplayBottomComboBox, 10, 1, 1, 1);

        mAnnotationPositionLabelBottom = new QLabel(mDrawAnnotationGroupBox);
        mAnnotationPositionLabelBottom->setObjectName(QString::fromUtf8("mAnnotationPositionLabelBottom"));
        mAnnotationPositionLabelBottom->setWordWrap(true);

        gridLayout_7->addWidget(mAnnotationPositionLabelBottom, 10, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mAnnotationFormatComboBox = new QComboBox(mDrawAnnotationGroupBox);
        mAnnotationFormatComboBox->setObjectName(QString::fromUtf8("mAnnotationFormatComboBox"));

        horizontalLayout_13->addWidget(mAnnotationFormatComboBox);

        mAnnotationFormatButton = new QToolButton(mDrawAnnotationGroupBox);
        mAnnotationFormatButton->setObjectName(QString::fromUtf8("mAnnotationFormatButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAnnotationFormatButton->setIcon(icon4);

        horizontalLayout_13->addWidget(mAnnotationFormatButton);


        gridLayout_7->addLayout(horizontalLayout_13, 0, 1, 1, 1);

        gridLayout_7->setColumnStretch(1, 1);

        gridLayout_6->addWidget(mDrawAnnotationGroupBox, 10, 0, 1, 2);


        verticalLayout_3->addWidget(mGridCheckBox);


        mainLayout->addWidget(mGridGroupBox);

        mOverviewsGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mOverviewsGroupBox->setObjectName(QString::fromUtf8("mOverviewsGroupBox"));
        mOverviewsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mOverviewsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mOverviewsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout = new QVBoxLayout(mOverviewsGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mAddOverviewPushButton = new QPushButton(mOverviewsGroupBox);
        mAddOverviewPushButton->setObjectName(QString::fromUtf8("mAddOverviewPushButton"));
        mAddOverviewPushButton->setIcon(icon);

        horizontalLayout_9->addWidget(mAddOverviewPushButton);

        mRemoveOverviewPushButton = new QPushButton(mOverviewsGroupBox);
        mRemoveOverviewPushButton->setObjectName(QString::fromUtf8("mRemoveOverviewPushButton"));
        mRemoveOverviewPushButton->setIcon(icon1);

        horizontalLayout_9->addWidget(mRemoveOverviewPushButton);

        mOverviewUpButton = new QPushButton(mOverviewsGroupBox);
        mOverviewUpButton->setObjectName(QString::fromUtf8("mOverviewUpButton"));
        mOverviewUpButton->setIcon(icon2);

        horizontalLayout_9->addWidget(mOverviewUpButton);

        mOverviewDownButton = new QPushButton(mOverviewsGroupBox);
        mOverviewDownButton->setObjectName(QString::fromUtf8("mOverviewDownButton"));
        mOverviewDownButton->setIcon(icon3);

        horizontalLayout_9->addWidget(mOverviewDownButton);


        verticalLayout->addLayout(horizontalLayout_9);

        mOverviewListWidget = new QListWidget(mOverviewsGroupBox);
        mOverviewListWidget->setObjectName(QString::fromUtf8("mOverviewListWidget"));
        sizePolicy.setHeightForWidth(mOverviewListWidget->sizePolicy().hasHeightForWidth());
        mOverviewListWidget->setSizePolicy(sizePolicy);
        mOverviewListWidget->setMaximumSize(QSize(16777215, 90));

        verticalLayout->addWidget(mOverviewListWidget);

        mOverviewCheckBox = new QgsCollapsibleGroupBoxBasic(mOverviewsGroupBox);
        mOverviewCheckBox->setObjectName(QString::fromUtf8("mOverviewCheckBox"));
        mOverviewCheckBox->setCheckable(true);
        mOverviewCheckBox->setChecked(true);
        mOverviewCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composermapoverview")));
        mOverviewCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_8 = new QGridLayout(mOverviewCheckBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        mOverviewFrameMapLabel = new QLabel(mOverviewCheckBox);
        mOverviewFrameMapLabel->setObjectName(QString::fromUtf8("mOverviewFrameMapLabel"));

        gridLayout_8->addWidget(mOverviewFrameMapLabel, 0, 0, 1, 1);

        mOverviewFrameMapComboBox = new QComboBox(mOverviewCheckBox);
        mOverviewFrameMapComboBox->setObjectName(QString::fromUtf8("mOverviewFrameMapComboBox"));

        gridLayout_8->addWidget(mOverviewFrameMapComboBox, 0, 1, 1, 1);

        mOverviewFrameStyleLabel = new QLabel(mOverviewCheckBox);
        mOverviewFrameStyleLabel->setObjectName(QString::fromUtf8("mOverviewFrameStyleLabel"));

        gridLayout_8->addWidget(mOverviewFrameStyleLabel, 1, 0, 1, 1);

        mOverviewFrameStyleButton = new QPushButton(mOverviewCheckBox);
        mOverviewFrameStyleButton->setObjectName(QString::fromUtf8("mOverviewFrameStyleButton"));

        gridLayout_8->addWidget(mOverviewFrameStyleButton, 1, 1, 1, 1);

        mOverviewBlendModeLabel = new QLabel(mOverviewCheckBox);
        mOverviewBlendModeLabel->setObjectName(QString::fromUtf8("mOverviewBlendModeLabel"));

        gridLayout_8->addWidget(mOverviewBlendModeLabel, 2, 0, 1, 1);

        mOverviewBlendModeComboBox = new QgsBlendModeComboBox(mOverviewCheckBox);
        mOverviewBlendModeComboBox->setObjectName(QString::fromUtf8("mOverviewBlendModeComboBox"));

        gridLayout_8->addWidget(mOverviewBlendModeComboBox, 2, 1, 1, 1);

        mOverviewInvertCheckbox = new QCheckBox(mOverviewCheckBox);
        mOverviewInvertCheckbox->setObjectName(QString::fromUtf8("mOverviewInvertCheckbox"));

        gridLayout_8->addWidget(mOverviewInvertCheckbox, 3, 0, 1, 2);

        mOverviewCenterCheckbox = new QCheckBox(mOverviewCheckBox);
        mOverviewCenterCheckbox->setObjectName(QString::fromUtf8("mOverviewCenterCheckbox"));

        gridLayout_8->addWidget(mOverviewCenterCheckbox, 4, 0, 1, 2);

        gridLayout_8->setColumnStretch(1, 1);

        verticalLayout->addWidget(mOverviewCheckBox);


        mainLayout->addWidget(mOverviewsGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(mScaleLineEdit);
        mXMinLabel->setBuddy(mXMinLineEdit);
        mYMinLabel->setBuddy(mYMinLineEdit);
        mXMaxLabel->setBuddy(mXMaxLineEdit);
        mYMaxLabel->setBuddy(mYMaxLineEdit);
        mAnnotationPositionLabelRight->setBuddy(mAnnotationPositionRightComboBox);
        mAnnotationPositionLabelLeft->setBuddy(mAnnotationPositionLeftComboBox);
        mDistanceToFrameLabel->setBuddy(mDistanceToMapFrameSpinBox);
        mCoordinatePrecisionLabel->setBuddy(mCoordinatePrecisionSpinBox);
        mAnnotationPositionLabelTop->setBuddy(mAnnotationPositionTopComboBox);
        mAnnotationPositionLabelBottom->setBuddy(mAnnotationPositionRightComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mPreviewModeComboBox);
        QWidget::setTabOrder(mPreviewModeComboBox, mUpdatePreviewButton);
        QWidget::setTabOrder(mUpdatePreviewButton, mScaleLineEdit);
        QWidget::setTabOrder(mScaleLineEdit, mScaleDDBtn);
        QWidget::setTabOrder(mScaleDDBtn, mMapRotationSpinBox);
        QWidget::setTabOrder(mMapRotationSpinBox, mMapRotationDDBtn);
        QWidget::setTabOrder(mMapRotationDDBtn, mDrawCanvasItemsCheckBox);
        QWidget::setTabOrder(mDrawCanvasItemsCheckBox, mKeepLayerListCheckBox);
        QWidget::setTabOrder(mKeepLayerListCheckBox, mLayerListFromPresetButton);
        QWidget::setTabOrder(mLayerListFromPresetButton, mLayersDDBtn);
        QWidget::setTabOrder(mLayersDDBtn, mKeepLayerStylesCheckBox);
        QWidget::setTabOrder(mKeepLayerStylesCheckBox, mStylePresetsDDBtn);
        QWidget::setTabOrder(mStylePresetsDDBtn, mExtentsCheckBox);
        QWidget::setTabOrder(mExtentsCheckBox, mXMinLineEdit);
        QWidget::setTabOrder(mXMinLineEdit, mXMinDDBtn);
        QWidget::setTabOrder(mXMinDDBtn, mYMinLineEdit);
        QWidget::setTabOrder(mYMinLineEdit, mYMinDDBtn);
        QWidget::setTabOrder(mYMinDDBtn, mXMaxLineEdit);
        QWidget::setTabOrder(mXMaxLineEdit, mXMaxDDBtn);
        QWidget::setTabOrder(mXMaxDDBtn, mYMaxLineEdit);
        QWidget::setTabOrder(mYMaxLineEdit, mYMaxDDBtn);
        QWidget::setTabOrder(mYMaxDDBtn, mSetToMapCanvasExtentButton);
        QWidget::setTabOrder(mSetToMapCanvasExtentButton, mViewExtentInCanvasButton);
        QWidget::setTabOrder(mViewExtentInCanvasButton, mAtlasCheckBox);
        QWidget::setTabOrder(mAtlasCheckBox, mAtlasMarginRadio);
        QWidget::setTabOrder(mAtlasMarginRadio, mAtlasMarginSpinBox);
        QWidget::setTabOrder(mAtlasMarginSpinBox, mAtlasMarginDDBtn);
        QWidget::setTabOrder(mAtlasMarginDDBtn, mAtlasPredefinedScaleRadio);
        QWidget::setTabOrder(mAtlasPredefinedScaleRadio, mAtlasFixedScaleRadio);
        QWidget::setTabOrder(mAtlasFixedScaleRadio, mGridGroupBox);
        QWidget::setTabOrder(mGridGroupBox, mAddGridPushButton);
        QWidget::setTabOrder(mAddGridPushButton, mRemoveGridPushButton);
        QWidget::setTabOrder(mRemoveGridPushButton, mGridUpButton);
        QWidget::setTabOrder(mGridUpButton, mGridDownButton);
        QWidget::setTabOrder(mGridDownButton, mGridListWidget);
        QWidget::setTabOrder(mGridListWidget, mGridCheckBox);
        QWidget::setTabOrder(mGridCheckBox, mGridTypeComboBox);
        QWidget::setTabOrder(mGridTypeComboBox, mMapGridCRSButton);
        QWidget::setTabOrder(mMapGridCRSButton, mMapGridUnitComboBox);
        QWidget::setTabOrder(mMapGridUnitComboBox, mIntervalXSpinBox);
        QWidget::setTabOrder(mIntervalXSpinBox, mIntervalYSpinBox);
        QWidget::setTabOrder(mIntervalYSpinBox, mOffsetXSpinBox);
        QWidget::setTabOrder(mOffsetXSpinBox, mOffsetYSpinBox);
        QWidget::setTabOrder(mOffsetYSpinBox, mCrossWidthSpinBox);
        QWidget::setTabOrder(mCrossWidthSpinBox, mGridLineStyleButton);
        QWidget::setTabOrder(mGridLineStyleButton, mGridMarkerStyleButton);
        QWidget::setTabOrder(mGridMarkerStyleButton, mGridBlendComboBox);
        QWidget::setTabOrder(mGridBlendComboBox, mGridFrameGroupBox);
        QWidget::setTabOrder(mGridFrameGroupBox, mFrameStyleComboBox);
        QWidget::setTabOrder(mFrameStyleComboBox, mFrameWidthSpinBox);
        QWidget::setTabOrder(mFrameWidthSpinBox, mGridFramePenSizeSpinBox);
        QWidget::setTabOrder(mGridFramePenSizeSpinBox, mGridFramePenColorButton);
        QWidget::setTabOrder(mGridFramePenColorButton, mGridFrameFill1ColorButton);
        QWidget::setTabOrder(mGridFrameFill1ColorButton, mGridFrameFill2ColorButton);
        QWidget::setTabOrder(mGridFrameFill2ColorButton, mFrameDivisionsLeftComboBox);
        QWidget::setTabOrder(mFrameDivisionsLeftComboBox, mFrameDivisionsRightComboBox);
        QWidget::setTabOrder(mFrameDivisionsRightComboBox, mFrameDivisionsTopComboBox);
        QWidget::setTabOrder(mFrameDivisionsTopComboBox, mFrameDivisionsBottomComboBox);
        QWidget::setTabOrder(mFrameDivisionsBottomComboBox, mCheckGridLeftSide);
        QWidget::setTabOrder(mCheckGridLeftSide, mCheckGridRightSide);
        QWidget::setTabOrder(mCheckGridRightSide, mCheckGridTopSide);
        QWidget::setTabOrder(mCheckGridTopSide, mCheckGridBottomSide);
        QWidget::setTabOrder(mCheckGridBottomSide, mDrawAnnotationGroupBox);
        QWidget::setTabOrder(mDrawAnnotationGroupBox, mAnnotationFormatComboBox);
        QWidget::setTabOrder(mAnnotationFormatComboBox, mAnnotationFormatButton);
        QWidget::setTabOrder(mAnnotationFormatButton, mAnnotationDisplayLeftComboBox);
        QWidget::setTabOrder(mAnnotationDisplayLeftComboBox, mAnnotationPositionLeftComboBox);
        QWidget::setTabOrder(mAnnotationPositionLeftComboBox, mAnnotationDirectionComboBoxLeft);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxLeft, mAnnotationDisplayRightComboBox);
        QWidget::setTabOrder(mAnnotationDisplayRightComboBox, mAnnotationPositionRightComboBox);
        QWidget::setTabOrder(mAnnotationPositionRightComboBox, mAnnotationDirectionComboBoxRight);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxRight, mAnnotationDisplayTopComboBox);
        QWidget::setTabOrder(mAnnotationDisplayTopComboBox, mAnnotationPositionTopComboBox);
        QWidget::setTabOrder(mAnnotationPositionTopComboBox, mAnnotationDirectionComboBoxTop);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxTop, mAnnotationDisplayBottomComboBox);
        QWidget::setTabOrder(mAnnotationDisplayBottomComboBox, mAnnotationPositionBottomComboBox);
        QWidget::setTabOrder(mAnnotationPositionBottomComboBox, mAnnotationDirectionComboBoxBottom);
        QWidget::setTabOrder(mAnnotationDirectionComboBoxBottom, mAnnotationFontButton);
        QWidget::setTabOrder(mAnnotationFontButton, mAnnotationFontColorButton);
        QWidget::setTabOrder(mAnnotationFontColorButton, mDistanceToMapFrameSpinBox);
        QWidget::setTabOrder(mDistanceToMapFrameSpinBox, mCoordinatePrecisionSpinBox);
        QWidget::setTabOrder(mCoordinatePrecisionSpinBox, mOverviewsGroupBox);
        QWidget::setTabOrder(mOverviewsGroupBox, mAddOverviewPushButton);
        QWidget::setTabOrder(mAddOverviewPushButton, mRemoveOverviewPushButton);
        QWidget::setTabOrder(mRemoveOverviewPushButton, mOverviewUpButton);
        QWidget::setTabOrder(mOverviewUpButton, mOverviewDownButton);
        QWidget::setTabOrder(mOverviewDownButton, mOverviewListWidget);
        QWidget::setTabOrder(mOverviewListWidget, mOverviewCheckBox);
        QWidget::setTabOrder(mOverviewCheckBox, mOverviewFrameMapComboBox);
        QWidget::setTabOrder(mOverviewFrameMapComboBox, mOverviewFrameStyleButton);
        QWidget::setTabOrder(mOverviewFrameStyleButton, mOverviewBlendModeComboBox);
        QWidget::setTabOrder(mOverviewBlendModeComboBox, mOverviewInvertCheckbox);
        QWidget::setTabOrder(mOverviewInvertCheckbox, mOverviewCenterCheckbox);

        retranslateUi(QgsComposerMapWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerMapWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerMapWidgetBase)
    {
        QgsComposerMapWidgetBase->setWindowTitle(QApplication::translate("QgsComposerMapWidgetBase", "Map Options", 0, QApplication::UnicodeUTF8));
        mLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Map", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        mUpdatePreviewButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "Update preview", 0, QApplication::UnicodeUTF8));
        mDrawCanvasItemsCheckBox->setText(QApplication::translate("QgsComposerMapWidgetBase", "Draw map canvas items", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerMapWidgetBase", "Scale", 0, QApplication::UnicodeUTF8));
        mScaleLineEdit->setInputMask(QString());
        mScaleDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mKeepLayerListCheckBox->setText(QApplication::translate("QgsComposerMapWidgetBase", "Lock layers for map item", 0, QApplication::UnicodeUTF8));
        mLayerListFromPresetButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mLayersDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mMapRotationLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Map rotation", 0, QApplication::UnicodeUTF8));
        mMapRotationSpinBox->setSuffix(QApplication::translate("QgsComposerMapWidgetBase", " \302\260", 0, QApplication::UnicodeUTF8));
        mMapRotationDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mKeepLayerStylesCheckBox->setText(QApplication::translate("QgsComposerMapWidgetBase", "Lock layer styles for map item", 0, QApplication::UnicodeUTF8));
        mStylePresetsDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mExtentsCheckBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Extents", 0, QApplication::UnicodeUTF8));
        mXMinLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "X min", 0, QApplication::UnicodeUTF8));
        mXMinDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mYMinLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Y min", 0, QApplication::UnicodeUTF8));
        mYMinDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mXMaxLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "X max", 0, QApplication::UnicodeUTF8));
        mXMaxDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mYMaxLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Y max", 0, QApplication::UnicodeUTF8));
        mYMaxDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mSetToMapCanvasExtentButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "Set to map canvas extent", 0, QApplication::UnicodeUTF8));
        mViewExtentInCanvasButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "View extent in map canvas", 0, QApplication::UnicodeUTF8));
        mAtlasCheckBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Controlled by atlas", 0, QApplication::UnicodeUTF8));
        mAtlasMarginRadio->setText(QApplication::translate("QgsComposerMapWidgetBase", "Margin around feature", 0, QApplication::UnicodeUTF8));
        mAtlasMarginSpinBox->setSuffix(QApplication::translate("QgsComposerMapWidgetBase", "%", 0, QApplication::UnicodeUTF8));
        mAtlasMarginDDBtn->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAtlasPredefinedScaleRadio->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Use one of the predefined scales of the project where the atlas feature best fits.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAtlasPredefinedScaleRadio->setText(QApplication::translate("QgsComposerMapWidgetBase", "Predefined scale (best fit)", 0, QApplication::UnicodeUTF8));
        mAtlasFixedScaleRadio->setText(QApplication::translate("QgsComposerMapWidgetBase", "Fixed scale", 0, QApplication::UnicodeUTF8));
        mGridGroupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Grids", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddGridPushButton->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Add a new grid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddGridPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveGridPushButton->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Remove selected grid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRemoveGridPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mGridUpButton->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Move selected grid up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mGridUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mGridDownButton->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Move selected grid down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mGridDownButton->setText(QString());
        mGridCheckBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Draw grid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        mGridTypeLabel_2->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        mGridTypeLabel_2->setText(QApplication::translate("QgsComposerMapWidgetBase", "Grid type", 0, QApplication::UnicodeUTF8));
        mMapGridCRSLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "CRS", 0, QApplication::UnicodeUTF8));
        mMapGridCRSButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "change...", 0, QApplication::UnicodeUTF8));
        mMapGridUnitLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Interval units", 0, QApplication::UnicodeUTF8));
        mMapGridUnitComboBox->clear();
        mMapGridUnitComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsComposerMapWidgetBase", "Map unit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerMapWidgetBase", "Millimeter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerMapWidgetBase", "Centimeter", 0, QApplication::UnicodeUTF8)
        );
        mIntervalXLabel_2->setText(QApplication::translate("QgsComposerMapWidgetBase", "Interval", 0, QApplication::UnicodeUTF8));
        mIntervalXSpinBox->setPrefix(QApplication::translate("QgsComposerMapWidgetBase", "X ", 0, QApplication::UnicodeUTF8));
        mIntervalYSpinBox->setPrefix(QApplication::translate("QgsComposerMapWidgetBase", "Y ", 0, QApplication::UnicodeUTF8));
        mOffsetXLabel_2->setText(QApplication::translate("QgsComposerMapWidgetBase", "Offset", 0, QApplication::UnicodeUTF8));
        mOffsetXSpinBox->setPrefix(QApplication::translate("QgsComposerMapWidgetBase", "X ", 0, QApplication::UnicodeUTF8));
        mOffsetYSpinBox->setPrefix(QApplication::translate("QgsComposerMapWidgetBase", "Y ", 0, QApplication::UnicodeUTF8));
        mCrossWidthLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Cross width", 0, QApplication::UnicodeUTF8));
        mCrossWidthSpinBox->setSuffix(QApplication::translate("QgsComposerMapWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mLineStyleLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Line style", 0, QApplication::UnicodeUTF8));
        mGridLineStyleButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "change...", 0, QApplication::UnicodeUTF8));
        mMarkerStyleLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Marker style", 0, QApplication::UnicodeUTF8));
        mGridMarkerStyleButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "change...", 0, QApplication::UnicodeUTF8));
        mGridBlendLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Blend mode", 0, QApplication::UnicodeUTF8));
        mGridFrameGroupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Grid frame", 0, QApplication::UnicodeUTF8));
        mFrameStyleLabel_2->setText(QApplication::translate("QgsComposerMapWidgetBase", "Frame style", 0, QApplication::UnicodeUTF8));
        mFrameWidthLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Frame size", 0, QApplication::UnicodeUTF8));
        mFramePenLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Frame line thickness", 0, QApplication::UnicodeUTF8));
        mGridFramePenSizeSpinBox->setSuffix(QApplication::translate("QgsComposerMapWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mGridFramePenColorButton->setText(QString());
        mFrameFillLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Frame fill colors", 0, QApplication::UnicodeUTF8));
        mGridFrameFill1ColorButton->setText(QString());
        mGridFrameFill2ColorButton->setText(QString());
        mCheckGridLeftSide->setText(QApplication::translate("QgsComposerMapWidgetBase", "Left side", 0, QApplication::UnicodeUTF8));
        mCheckGridRightSide->setText(QApplication::translate("QgsComposerMapWidgetBase", "Right side", 0, QApplication::UnicodeUTF8));
        mCheckGridTopSide->setText(QApplication::translate("QgsComposerMapWidgetBase", "Top side", 0, QApplication::UnicodeUTF8));
        mCheckGridBottomSide->setText(QApplication::translate("QgsComposerMapWidgetBase", "Bottom side", 0, QApplication::UnicodeUTF8));
        mFrameStyleComboBox->clear();
        mFrameStyleComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsComposerMapWidgetBase", "No frame", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerMapWidgetBase", "Zebra", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerMapWidgetBase", "Interior ticks", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerMapWidgetBase", "Exterior ticks", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerMapWidgetBase", "Interior and exterior ticks", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerMapWidgetBase", "Line border", 0, QApplication::UnicodeUTF8)
        );
        mFrameWidthSpinBox->setSuffix(QApplication::translate("QgsComposerMapWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mRightDivisionsLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Right divisions", 0, QApplication::UnicodeUTF8));
        mLeftDivisionsLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Left divisions", 0, QApplication::UnicodeUTF8));
        mTopDivisionsLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Top divisions", 0, QApplication::UnicodeUTF8));
        mBottomDivisionsLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Bottom divisions", 0, QApplication::UnicodeUTF8));
        mDrawAnnotationGroupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Draw coordinates", 0, QApplication::UnicodeUTF8));
        mAnnotationPositionLabelRight->setText(QApplication::translate("QgsComposerMapWidgetBase", "Right", 0, QApplication::UnicodeUTF8));
        mAnnotationPositionLabelLeft->setText(QApplication::translate("QgsComposerMapWidgetBase", "Left", 0, QApplication::UnicodeUTF8));
        mAnnotationFormatLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Format", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerMapWidgetBase", "Font", 0, QApplication::UnicodeUTF8));
        mAnnotationFontButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "Font...", 0, QApplication::UnicodeUTF8));
        mFontColorLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Font color", 0, QApplication::UnicodeUTF8));
        mAnnotationFontColorButton->setText(QString());
        mDistanceToFrameLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Distance to map frame", 0, QApplication::UnicodeUTF8));
        mDistanceToMapFrameSpinBox->setSuffix(QApplication::translate("QgsComposerMapWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mCoordinatePrecisionLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Coordinate precision", 0, QApplication::UnicodeUTF8));
        mAnnotationPositionLabelTop->setText(QApplication::translate("QgsComposerMapWidgetBase", "Top", 0, QApplication::UnicodeUTF8));
        mAnnotationPositionLabelBottom->setText(QApplication::translate("QgsComposerMapWidgetBase", "Bottom", 0, QApplication::UnicodeUTF8));
        mAnnotationFormatButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mOverviewsGroupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Overviews", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddOverviewPushButton->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Add a new overview", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddOverviewPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mRemoveOverviewPushButton->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Remove selected overview", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRemoveOverviewPushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mOverviewUpButton->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Move selected overview up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOverviewUpButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        mOverviewDownButton->setToolTip(QApplication::translate("QgsComposerMapWidgetBase", "Move selected overview down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOverviewDownButton->setText(QString());
        mOverviewCheckBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Draw overview", 0, QApplication::UnicodeUTF8));
        mOverviewFrameMapLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Map frame", 0, QApplication::UnicodeUTF8));
        mOverviewFrameStyleLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Frame style", 0, QApplication::UnicodeUTF8));
        mOverviewFrameStyleButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "Change...", 0, QApplication::UnicodeUTF8));
        mOverviewBlendModeLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Blending mode", 0, QApplication::UnicodeUTF8));
        mOverviewInvertCheckbox->setText(QApplication::translate("QgsComposerMapWidgetBase", "Invert overview", 0, QApplication::UnicodeUTF8));
        mOverviewCenterCheckbox->setText(QApplication::translate("QgsComposerMapWidgetBase", "Center on overview", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerMapWidgetBase: public Ui_QgsComposerMapWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERMAPWIDGETBASE_H
