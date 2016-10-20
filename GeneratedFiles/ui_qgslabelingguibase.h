/********************************************************************************
** Form generated from reading UI file 'qgslabelingguibase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGGUIBASE_H
#define UI_QGSLABELINGGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDial>
#include <QtGui/QFontComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbuttonv2.h"
#include "qgsdatadefinedbutton.h"
#include "qgsdoublespinbox.h"
#include "qgsfieldexpressionwidget.h"
#include "qgslabelpreview.h"
#include "qgspenstylecombobox.h"
#include "qgsspinbox.h"
#include "qgsunitselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingGuiBase
{
public:
    QGridLayout *gridLayout_8;
    QFrame *mLabelingFrame;
    QGridLayout *gridLayout_23;
    QSplitter *mFontPreviewSplitter;
    QgsCollapsibleGroupBox *groupBox_mPreview;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea_mPreview;
    QWidget *scrollAreaWidgetContents_mPreveiw;
    QVBoxLayout *verticalLayout_5;
    QgsLabelPreview *lblFontPreview;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *mPreviewTextEdit;
    QToolButton *mPreviewTextBtn;
    QSpacerItem *horizontalSpacer;
    QSlider *mPreviewSizeSlider;
    QSpacerItem *horizontalSpacer_2;
    QgsColorButtonV2 *mPreviewBackgroundBtn;
    QFrame *mLabelingOptionsFrame;
    QGridLayout *gridLayout_17;
    QSplitter *mLabelingOptionsSplitter;
    QFrame *mLabelingOptionsListFrame;
    QVBoxLayout *verticalLayout_23;
    QListWidget *mLabelingOptionsListWidget;
    QFrame *mLabelingOptionGroupsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mLabelStackedWidget;
    QWidget *mLabelPage_Text;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_36;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *mFontStyleGroupBox;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *mFontLetterSpacingLabel;
    QgsDoubleSpinBox *mFontLetterSpacingSpinBox;
    QgsDataDefinedButton *mFontLetterSpacingDDBtn;
    QgsDoubleSpinBox *mFontSizeSpinBox;
    QLabel *mFontStyleLabel;
    QComboBox *mFontCapitalsComboBox;
    QLabel *mFontTranspLabel;
    QLabel *mFontLabel;
    QComboBox *mFontStyleComboBox;
    QgsDataDefinedButton *mFontCaseDDBtn;
    QgsDataDefinedButton *mFontUnitsDDBtn;
    QgsDataDefinedButton *mFontColorDDBtn;
    QgsDataDefinedButton *mFontDDBtn;
    QgsDataDefinedButton *mFontTranspDDBtn;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_23;
    QSlider *mFontTranspSlider;
    QgsSpinBox *mFontTranspSpinBox;
    QLabel *mFontCapitalsLabel;
    QgsDataDefinedButton *mFontBlendModeDDBtn;
    QLabel *mFontColorLabel;
    QgsDataDefinedButton *mFontSizeDDBtn;
    QLabel *label_10;
    QgsColorButtonV2 *btnTextColor;
    QLabel *labelBlendMode;
    QHBoxLayout *horizontalLayout_15;
    QLabel *mFontWordSpacingLabel;
    QgsDoubleSpinBox *mFontWordSpacingSpinBox;
    QgsDataDefinedButton *mFontWordSpacingDDBtn;
    QHBoxLayout *horizontalLayout_13;
    QToolButton *mFontUnderlineBtn;
    QgsDataDefinedButton *mFontUnderlineDDBtn;
    QToolButton *mFontStrikethroughBtn;
    QgsDataDefinedButton *mFontStrikeoutDDBtn;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *mFontBoldBtn;
    QgsDataDefinedButton *mFontBoldDDBtn;
    QToolButton *mFontItalicBtn;
    QgsDataDefinedButton *mFontItalicDDBtn;
    QgsBlendModeComboBox *comboBlendMode;
    QgsDataDefinedButton *mFontStyleDDBtn;
    QLabel *mFontSizeLabel;
    QFrame *mFontFamilyFrame;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mFontMissingLabel;
    QFontComboBox *mFontFamilyCmbBx;
    QgsUnitSelectionWidget *mFontSizeUnitWidget;
    QSpacerItem *verticalSpacer_2;
    QWidget *mLabelPage_Formatting;
    QVBoxLayout *verticalLayout_15;
    QLabel *label;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout_35;
    QLabel *label_24;
    QFrame *mMultiLinesFrame;
    QGridLayout *gridLayout_28;
    QgsDataDefinedButton *mWrapCharDDBtn;
    QLineEdit *wrapCharacterEdit;
    QgsDataDefinedButton *mFontLineHeightDDBtn;
    QLabel *label_2;
    QLabel *mFontLineHeightLabel;
    QgsDoubleSpinBox *mFontLineHeightSpinBox;
    QLabel *mFontMultiLineLabel;
    QComboBox *mFontMultiLineAlignComboBox;
    QgsDataDefinedButton *mFontMultiLineAlignDDBtn;
    QFrame *mDirectSymbolsFrame;
    QGridLayout *gridLayout_33;
    QSpacerItem *horizontalSpacer_9;
    QgsDataDefinedButton *mDirectSymbDDBtn;
    QCheckBox *mDirectSymbChkBx;
    QFrame *mDirectSymbFrame;
    QGridLayout *gridLayout_30;
    QFrame *mDirectSymbRightFrame;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *mDirectSymbRightLineEdit;
    QToolButton *mDirectSymbRightToolBtn;
    QgsDataDefinedButton *mDirectSymbPlacementDDBtn;
    QgsDataDefinedButton *mDirectSymbLeftDDBtn;
    QLabel *mDirectSymbLeftLabel;
    QLabel *mDirectSymbRightLabel;
    QLabel *mDirectSymbPlacementLabel;
    QCheckBox *mDirectSymbRevChkBx;
    QgsDataDefinedButton *mDirectSymbRightDDBtn;
    QFrame *mDirectSymbLeftFrame;
    QHBoxLayout *horizontalLayout_21;
    QLineEdit *mDirectSymbLeftLineEdit;
    QToolButton *mDirectSymbLeftToolBtn;
    QgsDataDefinedButton *mDirectSymbRevDDBtn;
    QFrame *mDirectSymbPlacementFrame;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *mDirectSymbRadioBtnLR;
    QRadioButton *mDirectSymbRadioBtnAbove;
    QRadioButton *mDirectSymbRadioBtnBelow;
    QGridLayout *gridLayout_34;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *mFormatNumChkBx;
    QgsDataDefinedButton *mFormatNumDDBtn;
    QFrame *mFormatNumFrame;
    QGridLayout *gridLayout_31;
    QLabel *mFormatNumDecimalsLabel;
    QgsSpinBox *mFormatNumDecimalsSpnBx;
    QgsDataDefinedButton *mFormatNumDecimalsDDBtn;
    QCheckBox *mFormatNumPlusSignChkBx;
    QgsDataDefinedButton *mFormatNumPlusSignDDBtn;
    QSpacerItem *verticalSpacer_6;
    QWidget *mLabelPage_Buffer;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout_36;
    QgsDataDefinedButton *mBufferDrawDDBtn;
    QCheckBox *mBufferDrawChkBx;
    QSpacerItem *horizontalSpacer_13;
    QFrame *mBufferFrame;
    QGridLayout *gridLayout_12;
    QgsDataDefinedButton *mBufferUnitsDDBtn;
    QgsDataDefinedButton *mBufferBlendModeDDBtn;
    QgsPenJoinStyleComboBox *mBufferJoinStyleComboBox;
    QLabel *label_32;
    QLabel *label_5;
    QgsDoubleSpinBox *spinBufferSize;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_10;
    QSlider *mBufferTranspSlider;
    QgsSpinBox *mBufferTranspSpinBox;
    QLabel *mBufferTranspLabel_2;
    QLabel *labelBufferBlend;
    QgsDataDefinedButton *mBufferTranspDDBtn;
    QgsDataDefinedButton *mBufferJoinStyleDDBtn;
    QgsColorButtonV2 *btnBufferColor;
    QgsDataDefinedButton *mBufferSizeDDBtn;
    QgsDataDefinedButton *mBufferColorDDBtn;
    QLabel *label_31;
    QgsBlendModeComboBox *comboBufferBlendMode;
    QCheckBox *mBufferTranspFillChbx;
    QgsUnitSelectionWidget *mBufferUnitWidget;
    QSpacerItem *verticalSpacer;
    QWidget *mLabelPage_Background;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_11;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_21;
    QGridLayout *gridLayout_37;
    QCheckBox *mShapeDrawChkBx;
    QSpacerItem *horizontalSpacer_12;
    QgsDataDefinedButton *mShapeDrawDDBtn;
    QFrame *mShapeFrame;
    QGridLayout *gridLayout_29;
    QLabel *mShapeRadiusLabel;
    QHBoxLayout *horizontalLayout_2;
    QgsDoubleSpinBox *mShapeRadiusXDbSpnBx;
    QgsDoubleSpinBox *mShapeRadiusYDbSpnBx;
    QLabel *label_23;
    QgsDataDefinedButton *mShapeFillColorDDBtn;
    QgsColorButtonV2 *mShapeBorderColorBtn;
    QgsDataDefinedButton *mShapeSizeUnitsDDBtn;
    QgsDataDefinedButton *mShapeBorderWidthDDBtn;
    QgsDataDefinedButton *mShapeBorderColorDDBtn;
    QgsDoubleSpinBox *mShapeBorderWidthSpnBx;
    QgsDataDefinedButton *mShapeBlendModeDDBtn;
    QFrame *mShapeRotationFrame;
    QHBoxLayout *horizontalLayout_36;
    QLabel *mShapeSizeXLabel;
    QLabel *label_8;
    QLabel *label_22;
    QLabel *mShapeSizeYLabel;
    QgsDataDefinedButton *mShapePenStyleDDBtn;
    QLabel *mShapeTranspLabel;
    QHBoxLayout *horizontalLayout_38;
    QSlider *mShapeTranspSlider;
    QgsSpinBox *mShapeTranspSpinBox;
    QgsDataDefinedButton *mShapeRadiusUnitsDDBtn;
    QgsBlendModeComboBox *mShapeBlendCmbBx;
    QgsDataDefinedButton *mShapeTypeDDBtn;
    QgsDoubleSpinBox *mShapeRotationDblSpnBx;
    QLabel *mShapePenStyleLabel;
    QLabel *mShapeFillColorLabel;
    QgsDataDefinedButton *mShapeOffsetUnitsDDBtn;
    QLabel *mShapeBorderColorLabel;
    QgsDataDefinedButton *mShapeSizeYDDBtn;
    QComboBox *mShapeSizeCmbBx;
    QgsDoubleSpinBox *mShapeSizeXSpnBx;
    QgsDataDefinedButton *mShapeSizeXDDBtn;
    QPushButton *mShapeSVGParamsBtn;
    QLabel *mShapeBorderWidthLabel;
    QgsDataDefinedButton *mShapeSizeTypeDDBtn;
    QgsDoubleSpinBox *mShapeSizeYSpnBx;
    QLabel *label_18;
    QComboBox *mShapeRotationCmbBx;
    QgsDataDefinedButton *mShapeRotationTypeDDBtn;
    QFrame *mShapeSVGPathFrame;
    QHBoxLayout *horizontalLayout_26;
    QLineEdit *mShapeSVGPathLineEdit;
    QPushButton *mShapeSVGSelectorBtn;
    QgsDataDefinedButton *mShapeSVGPathDDBtn;
    QgsDataDefinedButton *mShapeTranspDDBtn;
    QgsPenJoinStyleComboBox *mShapePenStyleCmbBx;
    QgsColorButtonV2 *mShapeFillColorBtn;
    QHBoxLayout *horizontalLayout_43;
    QgsUnitSelectionWidget *mShapeBorderWidthUnitWidget;
    QLabel *mShapeSVGUnitsLabel;
    QgsDataDefinedButton *mShapeBorderUnitsDDBtn;
    QgsDataDefinedButton *mShapeRotationDDBtn;
    QHBoxLayout *horizontalLayout_42;
    QComboBox *mShapeTypeCmbBx;
    QSpacerItem *horizontalSpacer_28;
    QgsDataDefinedButton *mShapeRadiusDDBtn;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_7;
    QgsDoubleSpinBox *mShapeOffsetXSpnBx;
    QgsDoubleSpinBox *mShapeOffsetYSpnBx;
    QgsDataDefinedButton *mShapeOffsetDDBtn;
    QgsUnitSelectionWidget *mShapeSizeUnitWidget;
    QgsUnitSelectionWidget *mShapeOffsetUnitWidget;
    QgsUnitSelectionWidget *mShapeRadiusUnitWidget;
    QSpacerItem *verticalSpacer_3;
    QWidget *mLabelPage_Shadow;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_37;
    QScrollArea *scrollArea_8;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_22;
    QGridLayout *gridLayout_38;
    QCheckBox *mShadowDrawChkBx;
    QSpacerItem *horizontalSpacer_14;
    QgsDataDefinedButton *mShadowDrawDDBtn;
    QFrame *mShadowFrame;
    QGridLayout *gridLayout_7;
    QgsColorButtonV2 *mShadowColorBtn;
    QgsDoubleSpinBox *mShadowRadiusDblSpnBx;
    QLabel *label_29;
    QLabel *label_27;
    QCheckBox *mShadowRadiusAlphaChkBx;
    QgsDoubleSpinBox *mShadowOffsetSpnBx;
    QCheckBox *mShadowOffsetGlobalChkBx;
    QgsBlendModeComboBox *mShadowBlendCmbBx;
    QHBoxLayout *horizontalLayout_24;
    QDial *mShadowOffsetAngleDial;
    QgsSpinBox *mShadowOffsetAngleSpnBx;
    QComboBox *mShadowUnderCmbBx;
    QLabel *label_17;
    QgsSpinBox *mShadowScaleSpnBx;
    QLabel *label_30;
    QLabel *label_9;
    QLabel *label_33;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_28;
    QSlider *mShadowTranspSlider;
    QgsSpinBox *mShadowTranspSpnBx;
    QgsDataDefinedButton *mShadowUnderDDBtn;
    QgsDataDefinedButton *mShadowOffsetAngleDDBtn;
    QgsDataDefinedButton *mShadowOffsetDDBtn;
    QgsDataDefinedButton *mShadowOffsetUnitsDDBtn;
    QgsDataDefinedButton *mShadowRadiusDDBtn;
    QgsDataDefinedButton *mShadowRadiusUnitsDDBtn;
    QgsDataDefinedButton *mShadowTranspDDBtn;
    QgsDataDefinedButton *mShadowScaleDDBtn;
    QgsDataDefinedButton *mShadowColorDDBtn;
    QgsDataDefinedButton *mShadowBlendDDBtn;
    QgsUnitSelectionWidget *mShadowOffsetUnitWidget;
    QgsUnitSelectionWidget *mShadowRadiusUnitWidget;
    QSpacerItem *verticalSpacer_7;
    QWidget *mLabelPage_Placement;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_38;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_11;
    QFrame *mPlacementTypeFrame;
    QVBoxLayout *verticalLayout_9;
    QStackedWidget *stackedPlacement;
    QWidget *pagePoint;
    QGridLayout *gridLayout_13;
    QRadioButton *radAroundPoint;
    QRadioButton *radOverPoint;
    QRadioButton *radPredefinedOrder;
    QSpacerItem *horizontalSpacer_25;
    QWidget *pageLine;
    QGridLayout *gridLayout_14;
    QRadioButton *radLineCurved;
    QRadioButton *radLineParallel;
    QRadioButton *radLineHorizontal;
    QWidget *pagePolygon;
    QGridLayout *gridLayout_18;
    QRadioButton *radOverCentroid;
    QRadioButton *radAroundCentroid;
    QRadioButton *radPolygonHorizontal;
    QRadioButton *radPolygonFree;
    QRadioButton *radPolygonPerimeter;
    QFrame *mPlacementLineFrame;
    QGridLayout *gridLayout_10;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkLineAbove;
    QCheckBox *chkLineOn;
    QCheckBox *chkLineBelow;
    QCheckBox *chkLineOrientationDependent;
    QFrame *mPlacementCentroidFrame;
    QGridLayout *gridLayout_25;
    QLabel *mCentroidLabel;
    QRadioButton *mCentroidRadioVisible;
    QRadioButton *mCentroidRadioWhole;
    QgsDataDefinedButton *mCentroidDDBtn;
    QCheckBox *mCentroidInsideCheckBox;
    QFrame *mPlacementDistanceFrame;
    QGridLayout *gridLayout_27;
    QgsDoubleSpinBox *mLineDistanceSpnBx;
    QLabel *label_26;
    QgsDataDefinedButton *mLineDistanceDDBtn;
    QgsDataDefinedButton *mLineDistanceUnitDDBtn;
    QgsUnitSelectionWidget *mLineDistanceUnitWidget;
    QFrame *mPlacementOffsetTypeFrame;
    QGridLayout *gridLayout_40;
    QLabel *label_42;
    QComboBox *mOffsetTypeComboBox;
    QFrame *mPlacementQuadrantFrame;
    QGridLayout *gridLayout_19;
    QgsDataDefinedButton *mPointQuadOffsetDDBtn;
    QFrame *mPlacementFixedQuadrantFrame;
    QGridLayout *gridLayout_3;
    QToolButton *mPointOffsetOver;
    QToolButton *mPointOffsetAboveRight;
    QToolButton *mPointOffsetBelowLeft;
    QToolButton *mPointOffsetLeft;
    QToolButton *mPointOffsetAboveLeft;
    QToolButton *mPointOffsetRight;
    QToolButton *mPointOffsetBelow;
    QToolButton *mPointOffsetBelowRight;
    QToolButton *mPointOffsetAbove;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QFrame *mPlacementCartographicFrame;
    QGridLayout *gridLayout_39;
    QgsDataDefinedButton *mPointPositionOrderDDBtn;
    QFrame *mPlacementFixedQuadrantFrame_2;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_27;
    QLabel *label_20;
    QFrame *mPlacementOffsetFrame;
    QGridLayout *gridLayout_15;
    QgsDoubleSpinBox *mPointOffsetYSpinBox;
    QgsDataDefinedButton *mPointOffsetDDBtn;
    QgsDataDefinedButton *mPointOffsetUnitsDDBtn;
    QgsDoubleSpinBox *mPointOffsetXSpinBox;
    QLabel *label_15;
    QgsUnitSelectionWidget *mPointOffsetUnitWidget;
    QFrame *mPlacementRotationFrame;
    QGridLayout *gridLayout_26;
    QLabel *label_25;
    QgsDoubleSpinBox *mPointAngleSpinBox;
    QgsDataDefinedButton *mPointAngleDDBtn;
    QFrame *mPlacementRepeatDistanceFrame;
    QGridLayout *gridLayout_24;
    QLabel *label_7;
    QgsDoubleSpinBox *mRepeatDistanceSpinBox;
    QgsDataDefinedButton *mRepeatDistanceDDBtn;
    QgsUnitSelectionWidget *mRepeatDistanceUnitWidget;
    QgsDataDefinedButton *mRepeatDistanceUnitDDBtn;
    QFrame *mPlacementMaxCharAngleFrame;
    QGridLayout *gridLayout_22;
    QSpacerItem *horizontalSpacer_19;
    QLabel *mMaxCharAngleInLabel;
    QgsDoubleSpinBox *mMaxCharAngleInDSpinBox;
    QgsDataDefinedButton *mMaxCharAngleDDBtn;
    QLabel *mMaxCharAngleOutLabel;
    QgsDoubleSpinBox *mMaxCharAngleOutDSpinBox;
    QLabel *mMaxCharAngleLabel;
    QFrame *line;
    QgsCollapsibleGroupBox *mPlacementDDGroupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_22;
    QLabel *mCoordXLabel;
    QgsDataDefinedButton *mCoordXDDBtn;
    QLabel *mCoordYLabel;
    QgsDataDefinedButton *mCoordYDDBtn;
    QSpacerItem *horizontalSpacer_22;
    QLabel *mCoordRotationLabel;
    QLabel *mCoordLabel;
    QLabel *mCoordAlignmentLabel;
    QHBoxLayout *horizontalLayout_25;
    QgsDataDefinedButton *mCoordRotationDDBtn;
    QCheckBox *chkPreserveRotation;
    QFrame *mCoordAlignmentFrame;
    QHBoxLayout *horizontalLayout_27;
    QLabel *mCoordAlignmentHLabel;
    QgsDataDefinedButton *mCoordAlignmentHDDBtn;
    QLabel *mCoordAlignmentVLabel;
    QgsDataDefinedButton *mCoordAlignmentVDDBtn;
    QSpacerItem *horizontalSpacer_21;
    QgsCollapsibleGroupBox *mPriorityGrpBx;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_34;
    QSlider *mPrioritySlider;
    QLabel *label_35;
    QgsDataDefinedButton *mPriorityDDBtn;
    QSpacerItem *verticalSpacer_4;
    QWidget *mLabelPage_Rendering;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_39;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_8;
    QgsCollapsibleGroupBox *mRenderingLabelGrpBx;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout_9;
    QCheckBox *mScaleBasedVisibilityChkBx;
    QgsDataDefinedButton *mScaleBasedVisibilityDDBtn;
    QSpacerItem *horizontalSpacer_4;
    QFrame *mScaleBasedVisibilityFrame;
    QGridLayout *gridLayout_2;
    QgsSpinBox *mScaleBasedVisibilityMinSpnBx;
    QgsDataDefinedButton *mScaleBasedVisibilityMinDDBtn;
    QgsSpinBox *mScaleBasedVisibilityMaxSpnBx;
    QgsDataDefinedButton *mScaleBasedVisibilityMaxDDBtn;
    QGridLayout *gridLayout_16;
    QCheckBox *mFontLimitPixelChkBox;
    QgsDataDefinedButton *mFontLimitPixelDDBtn;
    QSpacerItem *horizontalSpacer_6;
    QFrame *mFontLimitPixelFrame;
    QGridLayout *gridLayout_32;
    QgsSpinBox *mFontMinPixelSpinBox;
    QgsDataDefinedButton *mFontMinPixelDDBtn;
    QgsSpinBox *mFontMaxPixelSpinBox;
    QgsDataDefinedButton *mFontMaxPixelDDBtn;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_16;
    QgsDoubleSpinBox *mZIndexSpinBox;
    QgsDataDefinedButton *mZIndexDDBtn;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *mPalShowAllLabelsForLayerChkBx;
    QFrame *mLabelRenderingDDFrame;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_23;
    QgsDataDefinedButton *mShowLabelDDBtn;
    QgsDataDefinedButton *mAlwaysShowDDBtn;
    QLabel *mAlwaysShowLabel;
    QLabel *mShowLabelLabel;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line_4;
    QLabel *label_3;
    QFrame *mUpsidedownFrame;
    QGridLayout *gridLayout;
    QRadioButton *mUpsidedownRadioAll;
    QRadioButton *mUpsidedownRadioOff;
    QRadioButton *mUpsidedownRadioDefined;
    QSpacerItem *horizontalSpacer_3;
    QLabel *mUpsidedownLabel;
    QgsCollapsibleGroupBox *mRenderingFeaturesGrpBx;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkLabelPerFeaturePart;
    QCheckBox *chkMergeLines;
    QFrame *mLimitLabelFrame;
    QGridLayout *gridLayout_20;
    QSpacerItem *verticalSpacer_8;
    QgsSpinBox *mLimitLabelSpinBox;
    QCheckBox *mLimitLabelChkBox;
    QFrame *mMinSizeFrame;
    QGridLayout *gridLayout_21;
    QSpacerItem *horizontalSpacer_20;
    QgsDoubleSpinBox *mMinSizeSpinBox;
    QLabel *label_19;
    QFrame *mPolygonFeatureOptionsFrame;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *mFitInsidePolygonCheckBox;
    QSpacerItem *verticalSpacer_5;
    QgsCollapsibleGroupBox *mObstaclesGroupBox;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *mChkNoObstacle;
    QgsDataDefinedButton *mIsObstacleDDBtn;
    QSpacerItem *horizontalSpacer_24;
    QFrame *mObstaclePriorityFrame;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_40;
    QSlider *mObstacleFactorSlider;
    QLabel *label_41;
    QgsDataDefinedButton *mObstacleFactorDDBtn;
    QFrame *mPolygonObstacleTypeFrame;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QComboBox *mObstacleTypeComboBox;
    QSpacerItem *horizontalSpacer_15;
    QFrame *frameLabelWith;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QgsFieldExpressionWidget *mFieldExpressionWidget;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *QgsLabelingGuiBase)
    {
        if (QgsLabelingGuiBase->objectName().isEmpty())
            QgsLabelingGuiBase->setObjectName(QString::fromUtf8("QgsLabelingGuiBase"));
        QgsLabelingGuiBase->resize(640, 600);
        gridLayout_8 = new QGridLayout(QgsLabelingGuiBase);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setVerticalSpacing(6);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        mLabelingFrame = new QFrame(QgsLabelingGuiBase);
        mLabelingFrame->setObjectName(QString::fromUtf8("mLabelingFrame"));
        mLabelingFrame->setMinimumSize(QSize(0, 300));
        mLabelingFrame->setFrameShape(QFrame::NoFrame);
        mLabelingFrame->setFrameShadow(QFrame::Raised);
        gridLayout_23 = new QGridLayout(mLabelingFrame);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        gridLayout_23->setContentsMargins(0, 0, 0, 0);
        mFontPreviewSplitter = new QSplitter(mLabelingFrame);
        mFontPreviewSplitter->setObjectName(QString::fromUtf8("mFontPreviewSplitter"));
        mFontPreviewSplitter->setOrientation(Qt::Vertical);
        mFontPreviewSplitter->setChildrenCollapsible(false);
        groupBox_mPreview = new QgsCollapsibleGroupBox(mFontPreviewSplitter);
        groupBox_mPreview->setObjectName(QString::fromUtf8("groupBox_mPreview"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_mPreview->sizePolicy().hasHeightForWidth());
        groupBox_mPreview->setSizePolicy(sizePolicy);
        groupBox_mPreview->setMaximumSize(QSize(16777215, 16777215));
        groupBox_mPreview->setFlat(true);
        verticalLayout_4 = new QVBoxLayout(groupBox_mPreview);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 6, 0, 0);
        scrollArea_mPreview = new QScrollArea(groupBox_mPreview);
        scrollArea_mPreview->setObjectName(QString::fromUtf8("scrollArea_mPreview"));
        scrollArea_mPreview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_mPreview->setWidgetResizable(true);
        scrollAreaWidgetContents_mPreveiw = new QWidget();
        scrollAreaWidgetContents_mPreveiw->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_mPreveiw"));
        scrollAreaWidgetContents_mPreveiw->setGeometry(QRect(0, 0, 614, 300));
        scrollAreaWidgetContents_mPreveiw->setMinimumSize(QSize(0, 300));
        scrollAreaWidgetContents_mPreveiw->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);"));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_mPreveiw);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 6, 0);
        lblFontPreview = new QgsLabelPreview(scrollAreaWidgetContents_mPreveiw);
        lblFontPreview->setObjectName(QString::fromUtf8("lblFontPreview"));
        lblFontPreview->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblFontPreview->sizePolicy().hasHeightForWidth());
        lblFontPreview->setSizePolicy(sizePolicy1);
        lblFontPreview->setMinimumSize(QSize(0, 40));
        lblFontPreview->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_5->addWidget(lblFontPreview);

        scrollArea_mPreview->setWidget(scrollAreaWidgetContents_mPreveiw);

        verticalLayout_4->addWidget(scrollArea_mPreview);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        mPreviewTextEdit = new QLineEdit(groupBox_mPreview);
        mPreviewTextEdit->setObjectName(QString::fromUtf8("mPreviewTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPreviewTextEdit->sizePolicy().hasHeightForWidth());
        mPreviewTextEdit->setSizePolicy(sizePolicy2);
        mPreviewTextEdit->setMinimumSize(QSize(0, 0));
        mPreviewTextEdit->setMaximumSize(QSize(16777215, 16777215));
        mPreviewTextEdit->setMaxLength(125);

        horizontalLayout_4->addWidget(mPreviewTextEdit);

        mPreviewTextBtn = new QToolButton(groupBox_mPreview);
        mPreviewTextBtn->setObjectName(QString::fromUtf8("mPreviewTextBtn"));
        mPreviewTextBtn->setMaximumSize(QSize(24, 22));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.png"), QSize(), QIcon::Normal, QIcon::Off);
        mPreviewTextBtn->setIcon(icon);

        horizontalLayout_4->addWidget(mPreviewTextBtn);

        horizontalSpacer = new QSpacerItem(6, 6, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        mPreviewSizeSlider = new QSlider(groupBox_mPreview);
        mPreviewSizeSlider->setObjectName(QString::fromUtf8("mPreviewSizeSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mPreviewSizeSlider->sizePolicy().hasHeightForWidth());
        mPreviewSizeSlider->setSizePolicy(sizePolicy3);
        mPreviewSizeSlider->setMinimumSize(QSize(200, 0));
        mPreviewSizeSlider->setMinimum(8);
        mPreviewSizeSlider->setMaximum(320);
        mPreviewSizeSlider->setSingleStep(4);
        mPreviewSizeSlider->setValue(24);
        mPreviewSizeSlider->setOrientation(Qt::Horizontal);
        mPreviewSizeSlider->setTickInterval(4);

        horizontalLayout_4->addWidget(mPreviewSizeSlider);

        horizontalSpacer_2 = new QSpacerItem(6, 6, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        mPreviewBackgroundBtn = new QgsColorButtonV2(groupBox_mPreview);
        mPreviewBackgroundBtn->setObjectName(QString::fromUtf8("mPreviewBackgroundBtn"));
        mPreviewBackgroundBtn->setMinimumSize(QSize(100, 0));
        mPreviewBackgroundBtn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(mPreviewBackgroundBtn);


        verticalLayout_4->addLayout(horizontalLayout_4);

        mFontPreviewSplitter->addWidget(groupBox_mPreview);
        mLabelingOptionsFrame = new QFrame(mFontPreviewSplitter);
        mLabelingOptionsFrame->setObjectName(QString::fromUtf8("mLabelingOptionsFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(5);
        sizePolicy4.setHeightForWidth(mLabelingOptionsFrame->sizePolicy().hasHeightForWidth());
        mLabelingOptionsFrame->setSizePolicy(sizePolicy4);
        mLabelingOptionsFrame->setFrameShape(QFrame::NoFrame);
        mLabelingOptionsFrame->setFrameShadow(QFrame::Raised);
        gridLayout_17 = new QGridLayout(mLabelingOptionsFrame);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setHorizontalSpacing(0);
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        mLabelingOptionsSplitter = new QSplitter(mLabelingOptionsFrame);
        mLabelingOptionsSplitter->setObjectName(QString::fromUtf8("mLabelingOptionsSplitter"));
        mLabelingOptionsSplitter->setOrientation(Qt::Horizontal);
        mLabelingOptionsSplitter->setChildrenCollapsible(false);
        mLabelingOptionsListFrame = new QFrame(mLabelingOptionsSplitter);
        mLabelingOptionsListFrame->setObjectName(QString::fromUtf8("mLabelingOptionsListFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mLabelingOptionsListFrame->sizePolicy().hasHeightForWidth());
        mLabelingOptionsListFrame->setSizePolicy(sizePolicy5);
        mLabelingOptionsListFrame->setMinimumSize(QSize(32, 0));
        mLabelingOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mLabelingOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(mLabelingOptionsListFrame);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(3, 0, 0, 0);
        mLabelingOptionsListWidget = new QListWidget(mLabelingOptionsListFrame);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labeltext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mLabelingOptionsListWidget);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelformatting.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mLabelingOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelbuffer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mLabelingOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelbackground.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mLabelingOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelshadow.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mLabelingOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labelplacement.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mLabelingOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/render.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mLabelingOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon7);
        mLabelingOptionsListWidget->setObjectName(QString::fromUtf8("mLabelingOptionsListWidget"));
        mLabelingOptionsListWidget->setMinimumSize(QSize(32, 0));
        mLabelingOptionsListWidget->setProperty("showDropIndicator", QVariant(false));
        mLabelingOptionsListWidget->setIconSize(QSize(20, 20));

        verticalLayout_23->addWidget(mLabelingOptionsListWidget);

        mLabelingOptionsSplitter->addWidget(mLabelingOptionsListFrame);
        mLabelingOptionGroupsFrame = new QFrame(mLabelingOptionsSplitter);
        mLabelingOptionGroupsFrame->setObjectName(QString::fromUtf8("mLabelingOptionGroupsFrame"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(10);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mLabelingOptionGroupsFrame->sizePolicy().hasHeightForWidth());
        mLabelingOptionGroupsFrame->setSizePolicy(sizePolicy6);
        mLabelingOptionGroupsFrame->setFrameShape(QFrame::StyledPanel);
        mLabelingOptionGroupsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mLabelingOptionGroupsFrame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 0, 6);
        mLabelStackedWidget = new QStackedWidget(mLabelingOptionGroupsFrame);
        mLabelStackedWidget->setObjectName(QString::fromUtf8("mLabelStackedWidget"));
        mLabelPage_Text = new QWidget();
        mLabelPage_Text->setObjectName(QString::fromUtf8("mLabelPage_Text"));
        verticalLayout_6 = new QVBoxLayout(mLabelPage_Text);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_36 = new QLabel(mLabelPage_Text);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_6->addWidget(label_36);

        scrollArea = new QScrollArea(mLabelPage_Text);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 594, 398));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 6, 0);
        mFontStyleGroupBox = new QFrame(scrollAreaWidgetContents);
        mFontStyleGroupBox->setObjectName(QString::fromUtf8("mFontStyleGroupBox"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(mFontStyleGroupBox->sizePolicy().hasHeightForWidth());
        mFontStyleGroupBox->setSizePolicy(sizePolicy7);
        mFontStyleGroupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_6 = new QGridLayout(mFontStyleGroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        mFontLetterSpacingLabel = new QLabel(mFontStyleGroupBox);
        mFontLetterSpacingLabel->setObjectName(QString::fromUtf8("mFontLetterSpacingLabel"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mFontLetterSpacingLabel->sizePolicy().hasHeightForWidth());
        mFontLetterSpacingLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_14->addWidget(mFontLetterSpacingLabel);

        mFontLetterSpacingSpinBox = new QgsDoubleSpinBox(mFontStyleGroupBox);
        mFontLetterSpacingSpinBox->setObjectName(QString::fromUtf8("mFontLetterSpacingSpinBox"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(mFontLetterSpacingSpinBox->sizePolicy().hasHeightForWidth());
        mFontLetterSpacingSpinBox->setSizePolicy(sizePolicy9);
        mFontLetterSpacingSpinBox->setDecimals(4);
        mFontLetterSpacingSpinBox->setMinimum(-1000);
        mFontLetterSpacingSpinBox->setMaximum(1e+09);
        mFontLetterSpacingSpinBox->setSingleStep(0.1);
        mFontLetterSpacingSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_14->addWidget(mFontLetterSpacingSpinBox);

        mFontLetterSpacingDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontLetterSpacingDDBtn->setObjectName(QString::fromUtf8("mFontLetterSpacingDDBtn"));

        horizontalLayout_14->addWidget(mFontLetterSpacingDDBtn);


        gridLayout_6->addLayout(horizontalLayout_14, 9, 1, 1, 2);

        mFontSizeSpinBox = new QgsDoubleSpinBox(mFontStyleGroupBox);
        mFontSizeSpinBox->setObjectName(QString::fromUtf8("mFontSizeSpinBox"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(mFontSizeSpinBox->sizePolicy().hasHeightForWidth());
        mFontSizeSpinBox->setSizePolicy(sizePolicy10);
        mFontSizeSpinBox->setMinimumSize(QSize(0, 0));
        mFontSizeSpinBox->setDecimals(4);
        mFontSizeSpinBox->setMaximum(1e+09);
        mFontSizeSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mFontSizeSpinBox, 4, 1, 1, 1);

        mFontStyleLabel = new QLabel(mFontStyleGroupBox);
        mFontStyleLabel->setObjectName(QString::fromUtf8("mFontStyleLabel"));
        sizePolicy8.setHeightForWidth(mFontStyleLabel->sizePolicy().hasHeightForWidth());
        mFontStyleLabel->setSizePolicy(sizePolicy8);

        gridLayout_6->addWidget(mFontStyleLabel, 2, 0, 1, 1);

        mFontCapitalsComboBox = new QComboBox(mFontStyleGroupBox);
        mFontCapitalsComboBox->setObjectName(QString::fromUtf8("mFontCapitalsComboBox"));
        mFontCapitalsComboBox->setEnabled(true);
        sizePolicy9.setHeightForWidth(mFontCapitalsComboBox->sizePolicy().hasHeightForWidth());
        mFontCapitalsComboBox->setSizePolicy(sizePolicy9);
        mFontCapitalsComboBox->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_6->addWidget(mFontCapitalsComboBox, 8, 1, 1, 1);

        mFontTranspLabel = new QLabel(mFontStyleGroupBox);
        mFontTranspLabel->setObjectName(QString::fromUtf8("mFontTranspLabel"));
        mFontTranspLabel->setEnabled(true);

        gridLayout_6->addWidget(mFontTranspLabel, 7, 0, 1, 1);

        mFontLabel = new QLabel(mFontStyleGroupBox);
        mFontLabel->setObjectName(QString::fromUtf8("mFontLabel"));
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(mFontLabel->sizePolicy().hasHeightForWidth());
        mFontLabel->setSizePolicy(sizePolicy11);
        mFontLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(mFontLabel, 0, 0, 1, 1);

        mFontStyleComboBox = new QComboBox(mFontStyleGroupBox);
        mFontStyleComboBox->setObjectName(QString::fromUtf8("mFontStyleComboBox"));
        sizePolicy10.setHeightForWidth(mFontStyleComboBox->sizePolicy().hasHeightForWidth());
        mFontStyleComboBox->setSizePolicy(sizePolicy10);
        mFontStyleComboBox->setMinimumSize(QSize(0, 0));
        mFontStyleComboBox->setMaximumSize(QSize(16777215, 16777215));
        mFontStyleComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_6->addWidget(mFontStyleComboBox, 2, 1, 1, 1);

        mFontCaseDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontCaseDDBtn->setObjectName(QString::fromUtf8("mFontCaseDDBtn"));

        gridLayout_6->addWidget(mFontCaseDDBtn, 8, 2, 1, 1);

        mFontUnitsDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontUnitsDDBtn->setObjectName(QString::fromUtf8("mFontUnitsDDBtn"));

        gridLayout_6->addWidget(mFontUnitsDDBtn, 5, 2, 1, 1);

        mFontColorDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontColorDDBtn->setObjectName(QString::fromUtf8("mFontColorDDBtn"));

        gridLayout_6->addWidget(mFontColorDDBtn, 6, 2, 1, 1);

        mFontDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontDDBtn->setObjectName(QString::fromUtf8("mFontDDBtn"));

        gridLayout_6->addWidget(mFontDDBtn, 0, 2, 1, 1);

        mFontTranspDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontTranspDDBtn->setObjectName(QString::fromUtf8("mFontTranspDDBtn"));

        gridLayout_6->addWidget(mFontTranspDDBtn, 7, 2, 1, 1);

        frame = new QFrame(mFontStyleGroupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy7.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy7);
        horizontalLayout_23 = new QHBoxLayout(frame);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        mFontTranspSlider = new QSlider(frame);
        mFontTranspSlider->setObjectName(QString::fromUtf8("mFontTranspSlider"));
        mFontTranspSlider->setEnabled(true);
        mFontTranspSlider->setMinimumSize(QSize(0, 0));
        mFontTranspSlider->setMaximumSize(QSize(16777215, 16777215));
        mFontTranspSlider->setMaximum(100);
        mFontTranspSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_23->addWidget(mFontTranspSlider);

        mFontTranspSpinBox = new QgsSpinBox(frame);
        mFontTranspSpinBox->setObjectName(QString::fromUtf8("mFontTranspSpinBox"));
        mFontTranspSpinBox->setEnabled(true);
        QSizePolicy sizePolicy12(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(mFontTranspSpinBox->sizePolicy().hasHeightForWidth());
        mFontTranspSpinBox->setSizePolicy(sizePolicy12);
        mFontTranspSpinBox->setMaximum(100);

        horizontalLayout_23->addWidget(mFontTranspSpinBox);


        gridLayout_6->addWidget(frame, 7, 1, 1, 1);

        mFontCapitalsLabel = new QLabel(mFontStyleGroupBox);
        mFontCapitalsLabel->setObjectName(QString::fromUtf8("mFontCapitalsLabel"));
        sizePolicy8.setHeightForWidth(mFontCapitalsLabel->sizePolicy().hasHeightForWidth());
        mFontCapitalsLabel->setSizePolicy(sizePolicy8);

        gridLayout_6->addWidget(mFontCapitalsLabel, 8, 0, 1, 1);

        mFontBlendModeDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontBlendModeDDBtn->setObjectName(QString::fromUtf8("mFontBlendModeDDBtn"));

        gridLayout_6->addWidget(mFontBlendModeDDBtn, 11, 2, 1, 1);

        mFontColorLabel = new QLabel(mFontStyleGroupBox);
        mFontColorLabel->setObjectName(QString::fromUtf8("mFontColorLabel"));
        sizePolicy8.setHeightForWidth(mFontColorLabel->sizePolicy().hasHeightForWidth());
        mFontColorLabel->setSizePolicy(sizePolicy8);
        mFontColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(mFontColorLabel, 6, 0, 1, 1);

        mFontSizeDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontSizeDDBtn->setObjectName(QString::fromUtf8("mFontSizeDDBtn"));

        gridLayout_6->addWidget(mFontSizeDDBtn, 4, 2, 1, 1);

        label_10 = new QLabel(mFontStyleGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 9, 0, 1, 1);

        btnTextColor = new QgsColorButtonV2(mFontStyleGroupBox);
        btnTextColor->setObjectName(QString::fromUtf8("btnTextColor"));
        sizePolicy3.setHeightForWidth(btnTextColor->sizePolicy().hasHeightForWidth());
        btnTextColor->setSizePolicy(sizePolicy3);
        btnTextColor->setMinimumSize(QSize(120, 0));
        btnTextColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_6->addWidget(btnTextColor, 6, 1, 1, 1);

        labelBlendMode = new QLabel(mFontStyleGroupBox);
        labelBlendMode->setObjectName(QString::fromUtf8("labelBlendMode"));

        gridLayout_6->addWidget(labelBlendMode, 11, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        mFontWordSpacingLabel = new QLabel(mFontStyleGroupBox);
        mFontWordSpacingLabel->setObjectName(QString::fromUtf8("mFontWordSpacingLabel"));
        sizePolicy8.setHeightForWidth(mFontWordSpacingLabel->sizePolicy().hasHeightForWidth());
        mFontWordSpacingLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_15->addWidget(mFontWordSpacingLabel);

        mFontWordSpacingSpinBox = new QgsDoubleSpinBox(mFontStyleGroupBox);
        mFontWordSpacingSpinBox->setObjectName(QString::fromUtf8("mFontWordSpacingSpinBox"));
        sizePolicy9.setHeightForWidth(mFontWordSpacingSpinBox->sizePolicy().hasHeightForWidth());
        mFontWordSpacingSpinBox->setSizePolicy(sizePolicy9);
        mFontWordSpacingSpinBox->setDecimals(4);
        mFontWordSpacingSpinBox->setMinimum(-1000);
        mFontWordSpacingSpinBox->setMaximum(1e+09);
        mFontWordSpacingSpinBox->setSingleStep(0.1);
        mFontWordSpacingSpinBox->setProperty("showClearButton", QVariant(true));

        horizontalLayout_15->addWidget(mFontWordSpacingSpinBox);

        mFontWordSpacingDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontWordSpacingDDBtn->setObjectName(QString::fromUtf8("mFontWordSpacingDDBtn"));

        horizontalLayout_15->addWidget(mFontWordSpacingDDBtn);


        gridLayout_6->addLayout(horizontalLayout_15, 10, 1, 1, 2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mFontUnderlineBtn = new QToolButton(mFontStyleGroupBox);
        mFontUnderlineBtn->setObjectName(QString::fromUtf8("mFontUnderlineBtn"));
        mFontUnderlineBtn->setEnabled(true);
        mFontUnderlineBtn->setMinimumSize(QSize(24, 24));
        mFontUnderlineBtn->setMaximumSize(QSize(24, 24));
        QFont font;
        font.setPointSize(13);
        font.setUnderline(true);
        mFontUnderlineBtn->setFont(font);
        mFontUnderlineBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontUnderlineBtn);

        mFontUnderlineDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontUnderlineDDBtn->setObjectName(QString::fromUtf8("mFontUnderlineDDBtn"));

        horizontalLayout_13->addWidget(mFontUnderlineDDBtn);

        mFontStrikethroughBtn = new QToolButton(mFontStyleGroupBox);
        mFontStrikethroughBtn->setObjectName(QString::fromUtf8("mFontStrikethroughBtn"));
        mFontStrikethroughBtn->setEnabled(true);
        mFontStrikethroughBtn->setMinimumSize(QSize(24, 24));
        mFontStrikethroughBtn->setMaximumSize(QSize(24, 24));
        QFont font1;
        font1.setPointSize(13);
        font1.setStrikeOut(true);
        mFontStrikethroughBtn->setFont(font1);
        mFontStrikethroughBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontStrikethroughBtn);

        mFontStrikeoutDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontStrikeoutDDBtn->setObjectName(QString::fromUtf8("mFontStrikeoutDDBtn"));

        horizontalLayout_13->addWidget(mFontStrikeoutDDBtn);

        horizontalSpacer_11 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);

        mFontBoldBtn = new QToolButton(mFontStyleGroupBox);
        mFontBoldBtn->setObjectName(QString::fromUtf8("mFontBoldBtn"));
        mFontBoldBtn->setEnabled(false);
        mFontBoldBtn->setMinimumSize(QSize(24, 24));
        mFontBoldBtn->setMaximumSize(QSize(24, 24));
        QFont font2;
        font2.setPointSize(13);
        mFontBoldBtn->setFont(font2);
        mFontBoldBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontBoldBtn);

        mFontBoldDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontBoldDDBtn->setObjectName(QString::fromUtf8("mFontBoldDDBtn"));

        horizontalLayout_13->addWidget(mFontBoldDDBtn);

        mFontItalicBtn = new QToolButton(mFontStyleGroupBox);
        mFontItalicBtn->setObjectName(QString::fromUtf8("mFontItalicBtn"));
        mFontItalicBtn->setEnabled(false);
        mFontItalicBtn->setMinimumSize(QSize(24, 24));
        mFontItalicBtn->setMaximumSize(QSize(24, 24));
        QFont font3;
        font3.setPointSize(13);
        font3.setItalic(true);
        mFontItalicBtn->setFont(font3);
        mFontItalicBtn->setCheckable(true);

        horizontalLayout_13->addWidget(mFontItalicBtn);

        mFontItalicDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontItalicDDBtn->setObjectName(QString::fromUtf8("mFontItalicDDBtn"));

        horizontalLayout_13->addWidget(mFontItalicDDBtn);


        gridLayout_6->addLayout(horizontalLayout_13, 3, 1, 1, 2);

        comboBlendMode = new QgsBlendModeComboBox(mFontStyleGroupBox);
        comboBlendMode->setObjectName(QString::fromUtf8("comboBlendMode"));

        gridLayout_6->addWidget(comboBlendMode, 11, 1, 1, 1);

        mFontStyleDDBtn = new QgsDataDefinedButton(mFontStyleGroupBox);
        mFontStyleDDBtn->setObjectName(QString::fromUtf8("mFontStyleDDBtn"));

        gridLayout_6->addWidget(mFontStyleDDBtn, 2, 2, 1, 1);

        mFontSizeLabel = new QLabel(mFontStyleGroupBox);
        mFontSizeLabel->setObjectName(QString::fromUtf8("mFontSizeLabel"));
        sizePolicy8.setHeightForWidth(mFontSizeLabel->sizePolicy().hasHeightForWidth());
        mFontSizeLabel->setSizePolicy(sizePolicy8);

        gridLayout_6->addWidget(mFontSizeLabel, 4, 0, 1, 1);

        mFontFamilyFrame = new QFrame(mFontStyleGroupBox);
        mFontFamilyFrame->setObjectName(QString::fromUtf8("mFontFamilyFrame"));
        horizontalLayout_5 = new QHBoxLayout(mFontFamilyFrame);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        mFontMissingLabel = new QLabel(mFontFamilyFrame);
        mFontMissingLabel->setObjectName(QString::fromUtf8("mFontMissingLabel"));
        sizePolicy1.setHeightForWidth(mFontMissingLabel->sizePolicy().hasHeightForWidth());
        mFontMissingLabel->setSizePolicy(sizePolicy1);
        mFontMissingLabel->setStyleSheet(QString::fromUtf8("color: #990000;\n"
"font-style: italic;"));
        mFontMissingLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(mFontMissingLabel);


        gridLayout_6->addWidget(mFontFamilyFrame, 1, 1, 1, 1);

        mFontFamilyCmbBx = new QFontComboBox(mFontStyleGroupBox);
        mFontFamilyCmbBx->setObjectName(QString::fromUtf8("mFontFamilyCmbBx"));
        mFontFamilyCmbBx->setEditable(false);

        gridLayout_6->addWidget(mFontFamilyCmbBx, 0, 1, 1, 1);

        mFontSizeUnitWidget = new QgsUnitSelectionWidget(mFontStyleGroupBox);
        mFontSizeUnitWidget->setObjectName(QString::fromUtf8("mFontSizeUnitWidget"));

        gridLayout_6->addWidget(mFontSizeUnitWidget, 5, 1, 1, 1);


        verticalLayout_2->addWidget(mFontStyleGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);

        mLabelStackedWidget->addWidget(mLabelPage_Text);
        mLabelPage_Formatting = new QWidget();
        mLabelPage_Formatting->setObjectName(QString::fromUtf8("mLabelPage_Formatting"));
        verticalLayout_15 = new QVBoxLayout(mLabelPage_Formatting);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(mLabelPage_Formatting);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_15->addWidget(label);

        scrollArea_5 = new QScrollArea(mLabelPage_Formatting);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 594, 398));
        verticalLayout_14 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 6, -1);
        gridLayout_35 = new QGridLayout();
        gridLayout_35->setSpacing(6);
        gridLayout_35->setObjectName(QString::fromUtf8("gridLayout_35"));
        gridLayout_35->setVerticalSpacing(6);
        label_24 = new QLabel(scrollAreaWidgetContents_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_35->addWidget(label_24, 0, 0, 1, 1);

        mMultiLinesFrame = new QFrame(scrollAreaWidgetContents_6);
        mMultiLinesFrame->setObjectName(QString::fromUtf8("mMultiLinesFrame"));
        mMultiLinesFrame->setFrameShape(QFrame::NoFrame);
        mMultiLinesFrame->setFrameShadow(QFrame::Raised);
        gridLayout_28 = new QGridLayout(mMultiLinesFrame);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        gridLayout_28->setContentsMargins(20, 0, 0, 0);
        mWrapCharDDBtn = new QgsDataDefinedButton(mMultiLinesFrame);
        mWrapCharDDBtn->setObjectName(QString::fromUtf8("mWrapCharDDBtn"));

        gridLayout_28->addWidget(mWrapCharDDBtn, 0, 2, 1, 1);

        wrapCharacterEdit = new QLineEdit(mMultiLinesFrame);
        wrapCharacterEdit->setObjectName(QString::fromUtf8("wrapCharacterEdit"));
        wrapCharacterEdit->setMinimumSize(QSize(0, 0));

        gridLayout_28->addWidget(wrapCharacterEdit, 0, 1, 1, 1);

        mFontLineHeightDDBtn = new QgsDataDefinedButton(mMultiLinesFrame);
        mFontLineHeightDDBtn->setObjectName(QString::fromUtf8("mFontLineHeightDDBtn"));

        gridLayout_28->addWidget(mFontLineHeightDDBtn, 1, 2, 1, 1);

        label_2 = new QLabel(mMultiLinesFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy8.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy8);

        gridLayout_28->addWidget(label_2, 0, 0, 1, 1);

        mFontLineHeightLabel = new QLabel(mMultiLinesFrame);
        mFontLineHeightLabel->setObjectName(QString::fromUtf8("mFontLineHeightLabel"));
        sizePolicy8.setHeightForWidth(mFontLineHeightLabel->sizePolicy().hasHeightForWidth());
        mFontLineHeightLabel->setSizePolicy(sizePolicy8);

        gridLayout_28->addWidget(mFontLineHeightLabel, 1, 0, 1, 1);

        mFontLineHeightSpinBox = new QgsDoubleSpinBox(mMultiLinesFrame);
        mFontLineHeightSpinBox->setObjectName(QString::fromUtf8("mFontLineHeightSpinBox"));
        mFontLineHeightSpinBox->setEnabled(true);
        mFontLineHeightSpinBox->setMinimumSize(QSize(0, 0));
        mFontLineHeightSpinBox->setMinimum(0);
        mFontLineHeightSpinBox->setMaximum(10);
        mFontLineHeightSpinBox->setSingleStep(0.1);
        mFontLineHeightSpinBox->setValue(1);

        gridLayout_28->addWidget(mFontLineHeightSpinBox, 1, 1, 1, 1);

        mFontMultiLineLabel = new QLabel(mMultiLinesFrame);
        mFontMultiLineLabel->setObjectName(QString::fromUtf8("mFontMultiLineLabel"));
        sizePolicy8.setHeightForWidth(mFontMultiLineLabel->sizePolicy().hasHeightForWidth());
        mFontMultiLineLabel->setSizePolicy(sizePolicy8);

        gridLayout_28->addWidget(mFontMultiLineLabel, 2, 0, 1, 1);

        mFontMultiLineAlignComboBox = new QComboBox(mMultiLinesFrame);
        mFontMultiLineAlignComboBox->setObjectName(QString::fromUtf8("mFontMultiLineAlignComboBox"));
        mFontMultiLineAlignComboBox->setEnabled(true);
        mFontMultiLineAlignComboBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_28->addWidget(mFontMultiLineAlignComboBox, 2, 1, 1, 1);

        mFontMultiLineAlignDDBtn = new QgsDataDefinedButton(mMultiLinesFrame);
        mFontMultiLineAlignDDBtn->setObjectName(QString::fromUtf8("mFontMultiLineAlignDDBtn"));

        gridLayout_28->addWidget(mFontMultiLineAlignDDBtn, 2, 2, 1, 1);


        gridLayout_35->addWidget(mMultiLinesFrame, 1, 0, 1, 1);


        verticalLayout_14->addLayout(gridLayout_35);

        mDirectSymbolsFrame = new QFrame(scrollAreaWidgetContents_6);
        mDirectSymbolsFrame->setObjectName(QString::fromUtf8("mDirectSymbolsFrame"));
        gridLayout_33 = new QGridLayout(mDirectSymbolsFrame);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName(QString::fromUtf8("gridLayout_33"));
        gridLayout_33->setVerticalSpacing(6);
        gridLayout_33->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_9 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_33->addItem(horizontalSpacer_9, 0, 2, 1, 1);

        mDirectSymbDDBtn = new QgsDataDefinedButton(mDirectSymbolsFrame);
        mDirectSymbDDBtn->setObjectName(QString::fromUtf8("mDirectSymbDDBtn"));

        gridLayout_33->addWidget(mDirectSymbDDBtn, 0, 1, 1, 1);

        mDirectSymbChkBx = new QCheckBox(mDirectSymbolsFrame);
        mDirectSymbChkBx->setObjectName(QString::fromUtf8("mDirectSymbChkBx"));
        sizePolicy12.setHeightForWidth(mDirectSymbChkBx->sizePolicy().hasHeightForWidth());
        mDirectSymbChkBx->setSizePolicy(sizePolicy12);

        gridLayout_33->addWidget(mDirectSymbChkBx, 0, 0, 1, 1);

        mDirectSymbFrame = new QFrame(mDirectSymbolsFrame);
        mDirectSymbFrame->setObjectName(QString::fromUtf8("mDirectSymbFrame"));
        mDirectSymbFrame->setFrameShape(QFrame::NoFrame);
        mDirectSymbFrame->setFrameShadow(QFrame::Raised);
        gridLayout_30 = new QGridLayout(mDirectSymbFrame);
        gridLayout_30->setSpacing(6);
        gridLayout_30->setContentsMargins(11, 11, 11, 11);
        gridLayout_30->setObjectName(QString::fromUtf8("gridLayout_30"));
        gridLayout_30->setContentsMargins(20, 0, 0, 0);
        mDirectSymbRightFrame = new QFrame(mDirectSymbFrame);
        mDirectSymbRightFrame->setObjectName(QString::fromUtf8("mDirectSymbRightFrame"));
        horizontalLayout_6 = new QHBoxLayout(mDirectSymbRightFrame);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        mDirectSymbRightLineEdit = new QLineEdit(mDirectSymbRightFrame);
        mDirectSymbRightLineEdit->setObjectName(QString::fromUtf8("mDirectSymbRightLineEdit"));
        sizePolicy9.setHeightForWidth(mDirectSymbRightLineEdit->sizePolicy().hasHeightForWidth());
        mDirectSymbRightLineEdit->setSizePolicy(sizePolicy9);
        mDirectSymbRightLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(mDirectSymbRightLineEdit);

        mDirectSymbRightToolBtn = new QToolButton(mDirectSymbRightFrame);
        mDirectSymbRightToolBtn->setObjectName(QString::fromUtf8("mDirectSymbRightToolBtn"));
        mDirectSymbRightToolBtn->setMaximumSize(QSize(16777215, 22));

        horizontalLayout_6->addWidget(mDirectSymbRightToolBtn);


        gridLayout_30->addWidget(mDirectSymbRightFrame, 1, 1, 1, 1);

        mDirectSymbPlacementDDBtn = new QgsDataDefinedButton(mDirectSymbFrame);
        mDirectSymbPlacementDDBtn->setObjectName(QString::fromUtf8("mDirectSymbPlacementDDBtn"));

        gridLayout_30->addWidget(mDirectSymbPlacementDDBtn, 2, 2, 1, 1);

        mDirectSymbLeftDDBtn = new QgsDataDefinedButton(mDirectSymbFrame);
        mDirectSymbLeftDDBtn->setObjectName(QString::fromUtf8("mDirectSymbLeftDDBtn"));

        gridLayout_30->addWidget(mDirectSymbLeftDDBtn, 0, 2, 1, 1);

        mDirectSymbLeftLabel = new QLabel(mDirectSymbFrame);
        mDirectSymbLeftLabel->setObjectName(QString::fromUtf8("mDirectSymbLeftLabel"));
        sizePolicy8.setHeightForWidth(mDirectSymbLeftLabel->sizePolicy().hasHeightForWidth());
        mDirectSymbLeftLabel->setSizePolicy(sizePolicy8);

        gridLayout_30->addWidget(mDirectSymbLeftLabel, 0, 0, 1, 1);

        mDirectSymbRightLabel = new QLabel(mDirectSymbFrame);
        mDirectSymbRightLabel->setObjectName(QString::fromUtf8("mDirectSymbRightLabel"));

        gridLayout_30->addWidget(mDirectSymbRightLabel, 1, 0, 1, 1);

        mDirectSymbPlacementLabel = new QLabel(mDirectSymbFrame);
        mDirectSymbPlacementLabel->setObjectName(QString::fromUtf8("mDirectSymbPlacementLabel"));
        sizePolicy8.setHeightForWidth(mDirectSymbPlacementLabel->sizePolicy().hasHeightForWidth());
        mDirectSymbPlacementLabel->setSizePolicy(sizePolicy8);

        gridLayout_30->addWidget(mDirectSymbPlacementLabel, 2, 0, 1, 1);

        mDirectSymbRevChkBx = new QCheckBox(mDirectSymbFrame);
        mDirectSymbRevChkBx->setObjectName(QString::fromUtf8("mDirectSymbRevChkBx"));

        gridLayout_30->addWidget(mDirectSymbRevChkBx, 3, 0, 1, 2);

        mDirectSymbRightDDBtn = new QgsDataDefinedButton(mDirectSymbFrame);
        mDirectSymbRightDDBtn->setObjectName(QString::fromUtf8("mDirectSymbRightDDBtn"));

        gridLayout_30->addWidget(mDirectSymbRightDDBtn, 1, 2, 1, 1);

        mDirectSymbLeftFrame = new QFrame(mDirectSymbFrame);
        mDirectSymbLeftFrame->setObjectName(QString::fromUtf8("mDirectSymbLeftFrame"));
        horizontalLayout_21 = new QHBoxLayout(mDirectSymbLeftFrame);
        horizontalLayout_21->setSpacing(0);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        mDirectSymbLeftLineEdit = new QLineEdit(mDirectSymbLeftFrame);
        mDirectSymbLeftLineEdit->setObjectName(QString::fromUtf8("mDirectSymbLeftLineEdit"));
        sizePolicy9.setHeightForWidth(mDirectSymbLeftLineEdit->sizePolicy().hasHeightForWidth());
        mDirectSymbLeftLineEdit->setSizePolicy(sizePolicy9);
        mDirectSymbLeftLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_21->addWidget(mDirectSymbLeftLineEdit);

        mDirectSymbLeftToolBtn = new QToolButton(mDirectSymbLeftFrame);
        mDirectSymbLeftToolBtn->setObjectName(QString::fromUtf8("mDirectSymbLeftToolBtn"));
        mDirectSymbLeftToolBtn->setMaximumSize(QSize(16777215, 22));

        horizontalLayout_21->addWidget(mDirectSymbLeftToolBtn);


        gridLayout_30->addWidget(mDirectSymbLeftFrame, 0, 1, 1, 1);

        mDirectSymbRevDDBtn = new QgsDataDefinedButton(mDirectSymbFrame);
        mDirectSymbRevDDBtn->setObjectName(QString::fromUtf8("mDirectSymbRevDDBtn"));

        gridLayout_30->addWidget(mDirectSymbRevDDBtn, 3, 2, 1, 1);

        mDirectSymbPlacementFrame = new QFrame(mDirectSymbFrame);
        mDirectSymbPlacementFrame->setObjectName(QString::fromUtf8("mDirectSymbPlacementFrame"));
        horizontalLayout_17 = new QHBoxLayout(mDirectSymbPlacementFrame);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        mDirectSymbRadioBtnLR = new QRadioButton(mDirectSymbPlacementFrame);
        mDirectSymbRadioBtnLR->setObjectName(QString::fromUtf8("mDirectSymbRadioBtnLR"));
        sizePolicy12.setHeightForWidth(mDirectSymbRadioBtnLR->sizePolicy().hasHeightForWidth());
        mDirectSymbRadioBtnLR->setSizePolicy(sizePolicy12);
        mDirectSymbRadioBtnLR->setChecked(true);

        horizontalLayout_17->addWidget(mDirectSymbRadioBtnLR);

        mDirectSymbRadioBtnAbove = new QRadioButton(mDirectSymbPlacementFrame);
        mDirectSymbRadioBtnAbove->setObjectName(QString::fromUtf8("mDirectSymbRadioBtnAbove"));
        sizePolicy12.setHeightForWidth(mDirectSymbRadioBtnAbove->sizePolicy().hasHeightForWidth());
        mDirectSymbRadioBtnAbove->setSizePolicy(sizePolicy12);

        horizontalLayout_17->addWidget(mDirectSymbRadioBtnAbove);

        mDirectSymbRadioBtnBelow = new QRadioButton(mDirectSymbPlacementFrame);
        mDirectSymbRadioBtnBelow->setObjectName(QString::fromUtf8("mDirectSymbRadioBtnBelow"));

        horizontalLayout_17->addWidget(mDirectSymbRadioBtnBelow);


        gridLayout_30->addWidget(mDirectSymbPlacementFrame, 2, 1, 1, 1);


        gridLayout_33->addWidget(mDirectSymbFrame, 1, 0, 1, 3);


        verticalLayout_14->addWidget(mDirectSymbolsFrame);

        gridLayout_34 = new QGridLayout();
        gridLayout_34->setSpacing(6);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        gridLayout_34->setVerticalSpacing(6);
        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_8, 0, 2, 1, 1);

        mFormatNumChkBx = new QCheckBox(scrollAreaWidgetContents_6);
        mFormatNumChkBx->setObjectName(QString::fromUtf8("mFormatNumChkBx"));
        sizePolicy12.setHeightForWidth(mFormatNumChkBx->sizePolicy().hasHeightForWidth());
        mFormatNumChkBx->setSizePolicy(sizePolicy12);

        gridLayout_34->addWidget(mFormatNumChkBx, 0, 0, 1, 1);

        mFormatNumDDBtn = new QgsDataDefinedButton(scrollAreaWidgetContents_6);
        mFormatNumDDBtn->setObjectName(QString::fromUtf8("mFormatNumDDBtn"));

        gridLayout_34->addWidget(mFormatNumDDBtn, 0, 1, 1, 1);

        mFormatNumFrame = new QFrame(scrollAreaWidgetContents_6);
        mFormatNumFrame->setObjectName(QString::fromUtf8("mFormatNumFrame"));
        mFormatNumFrame->setFrameShape(QFrame::NoFrame);
        mFormatNumFrame->setFrameShadow(QFrame::Raised);
        gridLayout_31 = new QGridLayout(mFormatNumFrame);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        gridLayout_31->setContentsMargins(20, 0, 0, 0);
        mFormatNumDecimalsLabel = new QLabel(mFormatNumFrame);
        mFormatNumDecimalsLabel->setObjectName(QString::fromUtf8("mFormatNumDecimalsLabel"));

        gridLayout_31->addWidget(mFormatNumDecimalsLabel, 0, 0, 1, 1);

        mFormatNumDecimalsSpnBx = new QgsSpinBox(mFormatNumFrame);
        mFormatNumDecimalsSpnBx->setObjectName(QString::fromUtf8("mFormatNumDecimalsSpnBx"));
        sizePolicy2.setHeightForWidth(mFormatNumDecimalsSpnBx->sizePolicy().hasHeightForWidth());
        mFormatNumDecimalsSpnBx->setSizePolicy(sizePolicy2);
        mFormatNumDecimalsSpnBx->setMaximum(20);

        gridLayout_31->addWidget(mFormatNumDecimalsSpnBx, 0, 1, 1, 1);

        mFormatNumDecimalsDDBtn = new QgsDataDefinedButton(mFormatNumFrame);
        mFormatNumDecimalsDDBtn->setObjectName(QString::fromUtf8("mFormatNumDecimalsDDBtn"));

        gridLayout_31->addWidget(mFormatNumDecimalsDDBtn, 0, 2, 1, 1);

        mFormatNumPlusSignChkBx = new QCheckBox(mFormatNumFrame);
        mFormatNumPlusSignChkBx->setObjectName(QString::fromUtf8("mFormatNumPlusSignChkBx"));
        mFormatNumPlusSignChkBx->setLayoutDirection(Qt::LeftToRight);

        gridLayout_31->addWidget(mFormatNumPlusSignChkBx, 1, 0, 1, 2);

        mFormatNumPlusSignDDBtn = new QgsDataDefinedButton(mFormatNumFrame);
        mFormatNumPlusSignDDBtn->setObjectName(QString::fromUtf8("mFormatNumPlusSignDDBtn"));

        gridLayout_31->addWidget(mFormatNumPlusSignDDBtn, 1, 2, 1, 1);


        gridLayout_34->addWidget(mFormatNumFrame, 1, 0, 1, 3);


        verticalLayout_14->addLayout(gridLayout_34);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_6);

        scrollArea_5->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_15->addWidget(scrollArea_5);

        mLabelStackedWidget->addWidget(mLabelPage_Formatting);
        mLabelPage_Buffer = new QWidget();
        mLabelPage_Buffer->setObjectName(QString::fromUtf8("mLabelPage_Buffer"));
        verticalLayout_7 = new QVBoxLayout(mLabelPage_Buffer);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(mLabelPage_Buffer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_7->addWidget(label_4);

        scrollArea_7 = new QScrollArea(mLabelPage_Buffer);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 594, 398));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 6, 0);
        gridLayout_36 = new QGridLayout();
        gridLayout_36->setSpacing(6);
        gridLayout_36->setObjectName(QString::fromUtf8("gridLayout_36"));
        mBufferDrawDDBtn = new QgsDataDefinedButton(scrollAreaWidgetContents_3);
        mBufferDrawDDBtn->setObjectName(QString::fromUtf8("mBufferDrawDDBtn"));

        gridLayout_36->addWidget(mBufferDrawDDBtn, 0, 1, 1, 1);

        mBufferDrawChkBx = new QCheckBox(scrollAreaWidgetContents_3);
        mBufferDrawChkBx->setObjectName(QString::fromUtf8("mBufferDrawChkBx"));
        sizePolicy12.setHeightForWidth(mBufferDrawChkBx->sizePolicy().hasHeightForWidth());
        mBufferDrawChkBx->setSizePolicy(sizePolicy12);

        gridLayout_36->addWidget(mBufferDrawChkBx, 0, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_13, 0, 2, 1, 1);

        mBufferFrame = new QFrame(scrollAreaWidgetContents_3);
        mBufferFrame->setObjectName(QString::fromUtf8("mBufferFrame"));
        gridLayout_12 = new QGridLayout(mBufferFrame);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(20, 0, 0, 0);
        mBufferUnitsDDBtn = new QgsDataDefinedButton(mBufferFrame);
        mBufferUnitsDDBtn->setObjectName(QString::fromUtf8("mBufferUnitsDDBtn"));

        gridLayout_12->addWidget(mBufferUnitsDDBtn, 1, 2, 1, 1);

        mBufferBlendModeDDBtn = new QgsDataDefinedButton(mBufferFrame);
        mBufferBlendModeDDBtn->setObjectName(QString::fromUtf8("mBufferBlendModeDDBtn"));

        gridLayout_12->addWidget(mBufferBlendModeDDBtn, 6, 2, 1, 1);

        mBufferJoinStyleComboBox = new QgsPenJoinStyleComboBox(mBufferFrame);
        mBufferJoinStyleComboBox->setObjectName(QString::fromUtf8("mBufferJoinStyleComboBox"));
        sizePolicy10.setHeightForWidth(mBufferJoinStyleComboBox->sizePolicy().hasHeightForWidth());
        mBufferJoinStyleComboBox->setSizePolicy(sizePolicy10);

        gridLayout_12->addWidget(mBufferJoinStyleComboBox, 5, 1, 1, 1);

        label_32 = new QLabel(mBufferFrame);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy8.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy8);
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(label_32, 2, 0, 1, 1);

        label_5 = new QLabel(mBufferFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_12->addWidget(label_5, 5, 0, 1, 1);

        spinBufferSize = new QgsDoubleSpinBox(mBufferFrame);
        spinBufferSize->setObjectName(QString::fromUtf8("spinBufferSize"));
        sizePolicy10.setHeightForWidth(spinBufferSize->sizePolicy().hasHeightForWidth());
        spinBufferSize->setSizePolicy(sizePolicy10);
        spinBufferSize->setMinimumSize(QSize(0, 0));
        spinBufferSize->setDecimals(4);
        spinBufferSize->setMaximum(1e+09);
        spinBufferSize->setSingleStep(0.1);
        spinBufferSize->setProperty("showClearButton", QVariant(false));

        gridLayout_12->addWidget(spinBufferSize, 0, 1, 1, 1);

        frame_5 = new QFrame(mBufferFrame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        sizePolicy7.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy7);
        horizontalLayout_10 = new QHBoxLayout(frame_5);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        mBufferTranspSlider = new QSlider(frame_5);
        mBufferTranspSlider->setObjectName(QString::fromUtf8("mBufferTranspSlider"));
        mBufferTranspSlider->setEnabled(true);
        sizePolicy10.setHeightForWidth(mBufferTranspSlider->sizePolicy().hasHeightForWidth());
        mBufferTranspSlider->setSizePolicy(sizePolicy10);
        mBufferTranspSlider->setMinimumSize(QSize(0, 0));
        mBufferTranspSlider->setMaximumSize(QSize(16777215, 16777215));
        mBufferTranspSlider->setMaximum(100);
        mBufferTranspSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(mBufferTranspSlider);

        mBufferTranspSpinBox = new QgsSpinBox(frame_5);
        mBufferTranspSpinBox->setObjectName(QString::fromUtf8("mBufferTranspSpinBox"));
        mBufferTranspSpinBox->setEnabled(true);
        mBufferTranspSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mBufferTranspSpinBox->setMaximum(100);

        horizontalLayout_10->addWidget(mBufferTranspSpinBox);


        gridLayout_12->addWidget(frame_5, 4, 1, 1, 1);

        mBufferTranspLabel_2 = new QLabel(mBufferFrame);
        mBufferTranspLabel_2->setObjectName(QString::fromUtf8("mBufferTranspLabel_2"));
        mBufferTranspLabel_2->setEnabled(true);

        gridLayout_12->addWidget(mBufferTranspLabel_2, 4, 0, 1, 1);

        labelBufferBlend = new QLabel(mBufferFrame);
        labelBufferBlend->setObjectName(QString::fromUtf8("labelBufferBlend"));

        gridLayout_12->addWidget(labelBufferBlend, 6, 0, 1, 1);

        mBufferTranspDDBtn = new QgsDataDefinedButton(mBufferFrame);
        mBufferTranspDDBtn->setObjectName(QString::fromUtf8("mBufferTranspDDBtn"));

        gridLayout_12->addWidget(mBufferTranspDDBtn, 4, 2, 1, 1);

        mBufferJoinStyleDDBtn = new QgsDataDefinedButton(mBufferFrame);
        mBufferJoinStyleDDBtn->setObjectName(QString::fromUtf8("mBufferJoinStyleDDBtn"));

        gridLayout_12->addWidget(mBufferJoinStyleDDBtn, 5, 2, 1, 1);

        btnBufferColor = new QgsColorButtonV2(mBufferFrame);
        btnBufferColor->setObjectName(QString::fromUtf8("btnBufferColor"));
        sizePolicy3.setHeightForWidth(btnBufferColor->sizePolicy().hasHeightForWidth());
        btnBufferColor->setSizePolicy(sizePolicy3);
        btnBufferColor->setMinimumSize(QSize(120, 0));
        btnBufferColor->setMaximumSize(QSize(120, 16777215));

        gridLayout_12->addWidget(btnBufferColor, 2, 1, 1, 1);

        mBufferSizeDDBtn = new QgsDataDefinedButton(mBufferFrame);
        mBufferSizeDDBtn->setObjectName(QString::fromUtf8("mBufferSizeDDBtn"));

        gridLayout_12->addWidget(mBufferSizeDDBtn, 0, 2, 1, 1);

        mBufferColorDDBtn = new QgsDataDefinedButton(mBufferFrame);
        mBufferColorDDBtn->setObjectName(QString::fromUtf8("mBufferColorDDBtn"));

        gridLayout_12->addWidget(mBufferColorDDBtn, 2, 2, 1, 1);

        label_31 = new QLabel(mBufferFrame);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy8.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy8);
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_12->addWidget(label_31, 0, 0, 1, 1);

        comboBufferBlendMode = new QgsBlendModeComboBox(mBufferFrame);
        comboBufferBlendMode->setObjectName(QString::fromUtf8("comboBufferBlendMode"));

        gridLayout_12->addWidget(comboBufferBlendMode, 6, 1, 1, 1);

        mBufferTranspFillChbx = new QCheckBox(mBufferFrame);
        mBufferTranspFillChbx->setObjectName(QString::fromUtf8("mBufferTranspFillChbx"));
        mBufferTranspFillChbx->setChecked(true);

        gridLayout_12->addWidget(mBufferTranspFillChbx, 3, 1, 1, 1);

        mBufferUnitWidget = new QgsUnitSelectionWidget(mBufferFrame);
        mBufferUnitWidget->setObjectName(QString::fromUtf8("mBufferUnitWidget"));

        gridLayout_12->addWidget(mBufferUnitWidget, 1, 1, 1, 1);


        gridLayout_36->addWidget(mBufferFrame, 1, 0, 1, 3);


        verticalLayout_12->addLayout(gridLayout_36);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);

        scrollArea_7->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_7->addWidget(scrollArea_7);

        mLabelStackedWidget->addWidget(mLabelPage_Buffer);
        mLabelPage_Background = new QWidget();
        mLabelPage_Background->setObjectName(QString::fromUtf8("mLabelPage_Background"));
        verticalLayout_20 = new QVBoxLayout(mLabelPage_Background);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(mLabelPage_Background);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_20->addWidget(label_11);

        scrollArea_2 = new QScrollArea(mLabelPage_Background);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 578, 697));
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 6, 0);
        gridLayout_37 = new QGridLayout();
        gridLayout_37->setSpacing(6);
        gridLayout_37->setObjectName(QString::fromUtf8("gridLayout_37"));
        mShapeDrawChkBx = new QCheckBox(scrollAreaWidgetContents_2);
        mShapeDrawChkBx->setObjectName(QString::fromUtf8("mShapeDrawChkBx"));
        sizePolicy12.setHeightForWidth(mShapeDrawChkBx->sizePolicy().hasHeightForWidth());
        mShapeDrawChkBx->setSizePolicy(sizePolicy12);

        gridLayout_37->addWidget(mShapeDrawChkBx, 0, 0, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_37->addItem(horizontalSpacer_12, 0, 2, 1, 1);

        mShapeDrawDDBtn = new QgsDataDefinedButton(scrollAreaWidgetContents_2);
        mShapeDrawDDBtn->setObjectName(QString::fromUtf8("mShapeDrawDDBtn"));

        gridLayout_37->addWidget(mShapeDrawDDBtn, 0, 1, 1, 1);

        mShapeFrame = new QFrame(scrollAreaWidgetContents_2);
        mShapeFrame->setObjectName(QString::fromUtf8("mShapeFrame"));
        mShapeFrame->setFrameShape(QFrame::NoFrame);
        gridLayout_29 = new QGridLayout(mShapeFrame);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        gridLayout_29->setContentsMargins(20, 0, 0, 0);
        mShapeRadiusLabel = new QLabel(mShapeFrame);
        mShapeRadiusLabel->setObjectName(QString::fromUtf8("mShapeRadiusLabel"));

        gridLayout_29->addWidget(mShapeRadiusLabel, 12, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mShapeRadiusXDbSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeRadiusXDbSpnBx->setObjectName(QString::fromUtf8("mShapeRadiusXDbSpnBx"));
        sizePolicy9.setHeightForWidth(mShapeRadiusXDbSpnBx->sizePolicy().hasHeightForWidth());
        mShapeRadiusXDbSpnBx->setSizePolicy(sizePolicy9);
        mShapeRadiusXDbSpnBx->setDecimals(4);
        mShapeRadiusXDbSpnBx->setMaximum(1e+09);
        mShapeRadiusXDbSpnBx->setSingleStep(0.1);

        horizontalLayout_2->addWidget(mShapeRadiusXDbSpnBx);

        mShapeRadiusYDbSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeRadiusYDbSpnBx->setObjectName(QString::fromUtf8("mShapeRadiusYDbSpnBx"));
        sizePolicy9.setHeightForWidth(mShapeRadiusYDbSpnBx->sizePolicy().hasHeightForWidth());
        mShapeRadiusYDbSpnBx->setSizePolicy(sizePolicy9);
        mShapeRadiusYDbSpnBx->setDecimals(4);
        mShapeRadiusYDbSpnBx->setMaximum(1e+09);
        mShapeRadiusYDbSpnBx->setSingleStep(0.1);

        horizontalLayout_2->addWidget(mShapeRadiusYDbSpnBx);


        gridLayout_29->addLayout(horizontalLayout_2, 12, 1, 1, 1);

        label_23 = new QLabel(mShapeFrame);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_29->addWidget(label_23, 7, 0, 1, 1);

        mShapeFillColorDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeFillColorDDBtn->setObjectName(QString::fromUtf8("mShapeFillColorDDBtn"));

        gridLayout_29->addWidget(mShapeFillColorDDBtn, 17, 2, 1, 1);

        mShapeBorderColorBtn = new QgsColorButtonV2(mShapeFrame);
        mShapeBorderColorBtn->setObjectName(QString::fromUtf8("mShapeBorderColorBtn"));
        sizePolicy3.setHeightForWidth(mShapeBorderColorBtn->sizePolicy().hasHeightForWidth());
        mShapeBorderColorBtn->setSizePolicy(sizePolicy3);
        mShapeBorderColorBtn->setMinimumSize(QSize(120, 0));
        mShapeBorderColorBtn->setMaximumSize(QSize(120, 16777215));

        gridLayout_29->addWidget(mShapeBorderColorBtn, 18, 1, 1, 1);

        mShapeSizeUnitsDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeSizeUnitsDDBtn->setObjectName(QString::fromUtf8("mShapeSizeUnitsDDBtn"));

        gridLayout_29->addWidget(mShapeSizeUnitsDDBtn, 5, 2, 1, 1);

        mShapeBorderWidthDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeBorderWidthDDBtn->setObjectName(QString::fromUtf8("mShapeBorderWidthDDBtn"));

        gridLayout_29->addWidget(mShapeBorderWidthDDBtn, 19, 2, 1, 1);

        mShapeBorderColorDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeBorderColorDDBtn->setObjectName(QString::fromUtf8("mShapeBorderColorDDBtn"));

        gridLayout_29->addWidget(mShapeBorderColorDDBtn, 18, 2, 1, 1);

        mShapeBorderWidthSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeBorderWidthSpnBx->setObjectName(QString::fromUtf8("mShapeBorderWidthSpnBx"));
        mShapeBorderWidthSpnBx->setDecimals(4);
        mShapeBorderWidthSpnBx->setMinimum(0);
        mShapeBorderWidthSpnBx->setMaximum(1e+07);
        mShapeBorderWidthSpnBx->setSingleStep(0.1);
        mShapeBorderWidthSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_29->addWidget(mShapeBorderWidthSpnBx, 19, 1, 1, 1);

        mShapeBlendModeDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeBlendModeDDBtn->setObjectName(QString::fromUtf8("mShapeBlendModeDDBtn"));

        gridLayout_29->addWidget(mShapeBlendModeDDBtn, 15, 2, 1, 1);

        mShapeRotationFrame = new QFrame(mShapeFrame);
        mShapeRotationFrame->setObjectName(QString::fromUtf8("mShapeRotationFrame"));
        horizontalLayout_36 = new QHBoxLayout(mShapeRotationFrame);
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(0, 0, 0, 0);

        gridLayout_29->addWidget(mShapeRotationFrame, 6, 1, 1, 2);

        mShapeSizeXLabel = new QLabel(mShapeFrame);
        mShapeSizeXLabel->setObjectName(QString::fromUtf8("mShapeSizeXLabel"));

        gridLayout_29->addWidget(mShapeSizeXLabel, 3, 0, 1, 1);

        label_8 = new QLabel(mShapeFrame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_29->addWidget(label_8, 2, 0, 1, 1);

        label_22 = new QLabel(mShapeFrame);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_29->addWidget(label_22, 0, 0, 1, 1);

        mShapeSizeYLabel = new QLabel(mShapeFrame);
        mShapeSizeYLabel->setObjectName(QString::fromUtf8("mShapeSizeYLabel"));

        gridLayout_29->addWidget(mShapeSizeYLabel, 4, 0, 1, 1);

        mShapePenStyleDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapePenStyleDDBtn->setObjectName(QString::fromUtf8("mShapePenStyleDDBtn"));

        gridLayout_29->addWidget(mShapePenStyleDDBtn, 21, 2, 1, 1);

        mShapeTranspLabel = new QLabel(mShapeFrame);
        mShapeTranspLabel->setObjectName(QString::fromUtf8("mShapeTranspLabel"));
        mShapeTranspLabel->setEnabled(true);

        gridLayout_29->addWidget(mShapeTranspLabel, 14, 0, 1, 1);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        mShapeTranspSlider = new QSlider(mShapeFrame);
        mShapeTranspSlider->setObjectName(QString::fromUtf8("mShapeTranspSlider"));
        mShapeTranspSlider->setEnabled(true);
        sizePolicy10.setHeightForWidth(mShapeTranspSlider->sizePolicy().hasHeightForWidth());
        mShapeTranspSlider->setSizePolicy(sizePolicy10);
        mShapeTranspSlider->setMinimumSize(QSize(50, 0));
        mShapeTranspSlider->setMaximum(100);
        mShapeTranspSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_38->addWidget(mShapeTranspSlider);

        mShapeTranspSpinBox = new QgsSpinBox(mShapeFrame);
        mShapeTranspSpinBox->setObjectName(QString::fromUtf8("mShapeTranspSpinBox"));
        mShapeTranspSpinBox->setEnabled(true);
        mShapeTranspSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mShapeTranspSpinBox->setMaximum(100);

        horizontalLayout_38->addWidget(mShapeTranspSpinBox);


        gridLayout_29->addLayout(horizontalLayout_38, 14, 1, 1, 1);

        mShapeRadiusUnitsDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeRadiusUnitsDDBtn->setObjectName(QString::fromUtf8("mShapeRadiusUnitsDDBtn"));

        gridLayout_29->addWidget(mShapeRadiusUnitsDDBtn, 13, 2, 1, 1);

        mShapeBlendCmbBx = new QgsBlendModeComboBox(mShapeFrame);
        mShapeBlendCmbBx->setObjectName(QString::fromUtf8("mShapeBlendCmbBx"));
        mShapeBlendCmbBx->setMinimumSize(QSize(150, 0));

        gridLayout_29->addWidget(mShapeBlendCmbBx, 15, 1, 1, 1);

        mShapeTypeDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeTypeDDBtn->setObjectName(QString::fromUtf8("mShapeTypeDDBtn"));

        gridLayout_29->addWidget(mShapeTypeDDBtn, 0, 2, 1, 1);

        mShapeRotationDblSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeRotationDblSpnBx->setObjectName(QString::fromUtf8("mShapeRotationDblSpnBx"));
        mShapeRotationDblSpnBx->setEnabled(false);
        mShapeRotationDblSpnBx->setSuffix(QString::fromUtf8("\313\232"));
        mShapeRotationDblSpnBx->setMinimum(-180);
        mShapeRotationDblSpnBx->setMaximum(180);

        gridLayout_29->addWidget(mShapeRotationDblSpnBx, 8, 1, 1, 1);

        mShapePenStyleLabel = new QLabel(mShapeFrame);
        mShapePenStyleLabel->setObjectName(QString::fromUtf8("mShapePenStyleLabel"));
        sizePolicy8.setHeightForWidth(mShapePenStyleLabel->sizePolicy().hasHeightForWidth());
        mShapePenStyleLabel->setSizePolicy(sizePolicy8);

        gridLayout_29->addWidget(mShapePenStyleLabel, 21, 0, 1, 1);

        mShapeFillColorLabel = new QLabel(mShapeFrame);
        mShapeFillColorLabel->setObjectName(QString::fromUtf8("mShapeFillColorLabel"));
        sizePolicy8.setHeightForWidth(mShapeFillColorLabel->sizePolicy().hasHeightForWidth());
        mShapeFillColorLabel->setSizePolicy(sizePolicy8);
        mShapeFillColorLabel->setMinimumSize(QSize(85, 0));

        gridLayout_29->addWidget(mShapeFillColorLabel, 17, 0, 1, 1);

        mShapeOffsetUnitsDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeOffsetUnitsDDBtn->setObjectName(QString::fromUtf8("mShapeOffsetUnitsDDBtn"));

        gridLayout_29->addWidget(mShapeOffsetUnitsDDBtn, 11, 2, 1, 1);

        mShapeBorderColorLabel = new QLabel(mShapeFrame);
        mShapeBorderColorLabel->setObjectName(QString::fromUtf8("mShapeBorderColorLabel"));
        sizePolicy8.setHeightForWidth(mShapeBorderColorLabel->sizePolicy().hasHeightForWidth());
        mShapeBorderColorLabel->setSizePolicy(sizePolicy8);

        gridLayout_29->addWidget(mShapeBorderColorLabel, 18, 0, 1, 1);

        mShapeSizeYDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeSizeYDDBtn->setObjectName(QString::fromUtf8("mShapeSizeYDDBtn"));

        gridLayout_29->addWidget(mShapeSizeYDDBtn, 4, 2, 1, 1);

        mShapeSizeCmbBx = new QComboBox(mShapeFrame);
        mShapeSizeCmbBx->setObjectName(QString::fromUtf8("mShapeSizeCmbBx"));

        gridLayout_29->addWidget(mShapeSizeCmbBx, 2, 1, 1, 1);

        mShapeSizeXSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeSizeXSpnBx->setObjectName(QString::fromUtf8("mShapeSizeXSpnBx"));
        mShapeSizeXSpnBx->setDecimals(4);
        mShapeSizeXSpnBx->setMinimum(-1e+07);
        mShapeSizeXSpnBx->setMaximum(1e+07);
        mShapeSizeXSpnBx->setSingleStep(0.1);
        mShapeSizeXSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_29->addWidget(mShapeSizeXSpnBx, 3, 1, 1, 1);

        mShapeSizeXDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeSizeXDDBtn->setObjectName(QString::fromUtf8("mShapeSizeXDDBtn"));

        gridLayout_29->addWidget(mShapeSizeXDDBtn, 3, 2, 1, 1);

        mShapeSVGParamsBtn = new QPushButton(mShapeFrame);
        mShapeSVGParamsBtn->setObjectName(QString::fromUtf8("mShapeSVGParamsBtn"));

        gridLayout_29->addWidget(mShapeSVGParamsBtn, 16, 1, 1, 1);

        mShapeBorderWidthLabel = new QLabel(mShapeFrame);
        mShapeBorderWidthLabel->setObjectName(QString::fromUtf8("mShapeBorderWidthLabel"));

        gridLayout_29->addWidget(mShapeBorderWidthLabel, 19, 0, 1, 1);

        mShapeSizeTypeDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeSizeTypeDDBtn->setObjectName(QString::fromUtf8("mShapeSizeTypeDDBtn"));

        gridLayout_29->addWidget(mShapeSizeTypeDDBtn, 2, 2, 1, 1);

        mShapeSizeYSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeSizeYSpnBx->setObjectName(QString::fromUtf8("mShapeSizeYSpnBx"));
        mShapeSizeYSpnBx->setDecimals(4);
        mShapeSizeYSpnBx->setMinimum(-1e+07);
        mShapeSizeYSpnBx->setMaximum(1e+07);
        mShapeSizeYSpnBx->setSingleStep(0.1);
        mShapeSizeYSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_29->addWidget(mShapeSizeYSpnBx, 4, 1, 1, 1);

        label_18 = new QLabel(mShapeFrame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy8.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy8);

        gridLayout_29->addWidget(label_18, 15, 0, 1, 1);

        mShapeRotationCmbBx = new QComboBox(mShapeFrame);
        mShapeRotationCmbBx->setObjectName(QString::fromUtf8("mShapeRotationCmbBx"));

        gridLayout_29->addWidget(mShapeRotationCmbBx, 7, 1, 1, 1);

        mShapeRotationTypeDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeRotationTypeDDBtn->setObjectName(QString::fromUtf8("mShapeRotationTypeDDBtn"));

        gridLayout_29->addWidget(mShapeRotationTypeDDBtn, 7, 2, 1, 1);

        mShapeSVGPathFrame = new QFrame(mShapeFrame);
        mShapeSVGPathFrame->setObjectName(QString::fromUtf8("mShapeSVGPathFrame"));
        horizontalLayout_26 = new QHBoxLayout(mShapeSVGPathFrame);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        mShapeSVGPathLineEdit = new QLineEdit(mShapeSVGPathFrame);
        mShapeSVGPathLineEdit->setObjectName(QString::fromUtf8("mShapeSVGPathLineEdit"));
        mShapeSVGPathLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_26->addWidget(mShapeSVGPathLineEdit);

        mShapeSVGSelectorBtn = new QPushButton(mShapeSVGPathFrame);
        mShapeSVGSelectorBtn->setObjectName(QString::fromUtf8("mShapeSVGSelectorBtn"));

        horizontalLayout_26->addWidget(mShapeSVGSelectorBtn);

        mShapeSVGPathDDBtn = new QgsDataDefinedButton(mShapeSVGPathFrame);
        mShapeSVGPathDDBtn->setObjectName(QString::fromUtf8("mShapeSVGPathDDBtn"));

        horizontalLayout_26->addWidget(mShapeSVGPathDDBtn);


        gridLayout_29->addWidget(mShapeSVGPathFrame, 1, 1, 1, 2);

        mShapeTranspDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeTranspDDBtn->setObjectName(QString::fromUtf8("mShapeTranspDDBtn"));

        gridLayout_29->addWidget(mShapeTranspDDBtn, 14, 2, 1, 1);

        mShapePenStyleCmbBx = new QgsPenJoinStyleComboBox(mShapeFrame);
        mShapePenStyleCmbBx->setObjectName(QString::fromUtf8("mShapePenStyleCmbBx"));

        gridLayout_29->addWidget(mShapePenStyleCmbBx, 21, 1, 1, 1);

        mShapeFillColorBtn = new QgsColorButtonV2(mShapeFrame);
        mShapeFillColorBtn->setObjectName(QString::fromUtf8("mShapeFillColorBtn"));
        sizePolicy3.setHeightForWidth(mShapeFillColorBtn->sizePolicy().hasHeightForWidth());
        mShapeFillColorBtn->setSizePolicy(sizePolicy3);
        mShapeFillColorBtn->setMinimumSize(QSize(120, 0));
        mShapeFillColorBtn->setMaximumSize(QSize(120, 16777215));

        gridLayout_29->addWidget(mShapeFillColorBtn, 17, 1, 1, 1);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        mShapeBorderWidthUnitWidget = new QgsUnitSelectionWidget(mShapeFrame);
        mShapeBorderWidthUnitWidget->setObjectName(QString::fromUtf8("mShapeBorderWidthUnitWidget"));

        horizontalLayout_43->addWidget(mShapeBorderWidthUnitWidget);

        mShapeSVGUnitsLabel = new QLabel(mShapeFrame);
        mShapeSVGUnitsLabel->setObjectName(QString::fromUtf8("mShapeSVGUnitsLabel"));

        horizontalLayout_43->addWidget(mShapeSVGUnitsLabel);


        gridLayout_29->addLayout(horizontalLayout_43, 20, 1, 1, 1);

        mShapeBorderUnitsDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeBorderUnitsDDBtn->setObjectName(QString::fromUtf8("mShapeBorderUnitsDDBtn"));

        gridLayout_29->addWidget(mShapeBorderUnitsDDBtn, 20, 2, 1, 1);

        mShapeRotationDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeRotationDDBtn->setObjectName(QString::fromUtf8("mShapeRotationDDBtn"));

        gridLayout_29->addWidget(mShapeRotationDDBtn, 8, 2, 1, 1);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        mShapeTypeCmbBx = new QComboBox(mShapeFrame);
        mShapeTypeCmbBx->setObjectName(QString::fromUtf8("mShapeTypeCmbBx"));
        mShapeTypeCmbBx->setMinimumSize(QSize(200, 0));

        horizontalLayout_42->addWidget(mShapeTypeCmbBx);

        horizontalSpacer_28 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_28);


        gridLayout_29->addLayout(horizontalLayout_42, 0, 1, 1, 1);

        mShapeRadiusDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeRadiusDDBtn->setObjectName(QString::fromUtf8("mShapeRadiusDDBtn"));

        gridLayout_29->addWidget(mShapeRadiusDDBtn, 12, 2, 1, 1);

        label_21 = new QLabel(mShapeFrame);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_29->addWidget(label_21, 9, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mShapeOffsetXSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeOffsetXSpnBx->setObjectName(QString::fromUtf8("mShapeOffsetXSpnBx"));
        sizePolicy9.setHeightForWidth(mShapeOffsetXSpnBx->sizePolicy().hasHeightForWidth());
        mShapeOffsetXSpnBx->setSizePolicy(sizePolicy9);
        mShapeOffsetXSpnBx->setDecimals(4);
        mShapeOffsetXSpnBx->setMinimum(-1e+07);
        mShapeOffsetXSpnBx->setMaximum(1e+07);
        mShapeOffsetXSpnBx->setSingleStep(0.1);

        horizontalLayout_7->addWidget(mShapeOffsetXSpnBx);

        mShapeOffsetYSpnBx = new QgsDoubleSpinBox(mShapeFrame);
        mShapeOffsetYSpnBx->setObjectName(QString::fromUtf8("mShapeOffsetYSpnBx"));
        sizePolicy9.setHeightForWidth(mShapeOffsetYSpnBx->sizePolicy().hasHeightForWidth());
        mShapeOffsetYSpnBx->setSizePolicy(sizePolicy9);
        mShapeOffsetYSpnBx->setDecimals(4);
        mShapeOffsetYSpnBx->setMinimum(-1e+07);
        mShapeOffsetYSpnBx->setMaximum(1e+07);
        mShapeOffsetYSpnBx->setSingleStep(0.1);

        horizontalLayout_7->addWidget(mShapeOffsetYSpnBx);


        gridLayout_29->addLayout(horizontalLayout_7, 9, 1, 1, 1);

        mShapeOffsetDDBtn = new QgsDataDefinedButton(mShapeFrame);
        mShapeOffsetDDBtn->setObjectName(QString::fromUtf8("mShapeOffsetDDBtn"));

        gridLayout_29->addWidget(mShapeOffsetDDBtn, 9, 2, 1, 1);

        mShapeSizeUnitWidget = new QgsUnitSelectionWidget(mShapeFrame);
        mShapeSizeUnitWidget->setObjectName(QString::fromUtf8("mShapeSizeUnitWidget"));

        gridLayout_29->addWidget(mShapeSizeUnitWidget, 5, 1, 1, 1);

        mShapeOffsetUnitWidget = new QgsUnitSelectionWidget(mShapeFrame);
        mShapeOffsetUnitWidget->setObjectName(QString::fromUtf8("mShapeOffsetUnitWidget"));

        gridLayout_29->addWidget(mShapeOffsetUnitWidget, 11, 1, 1, 1);

        mShapeRadiusUnitWidget = new QgsUnitSelectionWidget(mShapeFrame);
        mShapeRadiusUnitWidget->setObjectName(QString::fromUtf8("mShapeRadiusUnitWidget"));

        gridLayout_29->addWidget(mShapeRadiusUnitWidget, 13, 1, 1, 1);


        gridLayout_37->addWidget(mShapeFrame, 1, 0, 1, 3);


        verticalLayout_21->addLayout(gridLayout_37);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_3);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_20->addWidget(scrollArea_2);

        mLabelStackedWidget->addWidget(mLabelPage_Background);
        mLabelPage_Shadow = new QWidget();
        mLabelPage_Shadow->setObjectName(QString::fromUtf8("mLabelPage_Shadow"));
        verticalLayout_18 = new QVBoxLayout(mLabelPage_Shadow);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_37 = new QLabel(mLabelPage_Shadow);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_18->addWidget(label_37);

        scrollArea_8 = new QScrollArea(mLabelPage_Shadow);
        scrollArea_8->setObjectName(QString::fromUtf8("scrollArea_8"));
        scrollArea_8->setFrameShape(QFrame::NoFrame);
        scrollArea_8->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 578, 424));
        verticalLayout_22 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, 0, 6, 0);
        gridLayout_38 = new QGridLayout();
        gridLayout_38->setSpacing(6);
        gridLayout_38->setObjectName(QString::fromUtf8("gridLayout_38"));
        mShadowDrawChkBx = new QCheckBox(scrollAreaWidgetContents_8);
        mShadowDrawChkBx->setObjectName(QString::fromUtf8("mShadowDrawChkBx"));
        sizePolicy12.setHeightForWidth(mShadowDrawChkBx->sizePolicy().hasHeightForWidth());
        mShadowDrawChkBx->setSizePolicy(sizePolicy12);

        gridLayout_38->addWidget(mShadowDrawChkBx, 0, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_38->addItem(horizontalSpacer_14, 0, 2, 1, 1);

        mShadowDrawDDBtn = new QgsDataDefinedButton(scrollAreaWidgetContents_8);
        mShadowDrawDDBtn->setObjectName(QString::fromUtf8("mShadowDrawDDBtn"));

        gridLayout_38->addWidget(mShadowDrawDDBtn, 0, 1, 1, 1);

        mShadowFrame = new QFrame(scrollAreaWidgetContents_8);
        mShadowFrame->setObjectName(QString::fromUtf8("mShadowFrame"));
        gridLayout_7 = new QGridLayout(mShadowFrame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(20, 0, 0, 0);
        mShadowColorBtn = new QgsColorButtonV2(mShadowFrame);
        mShadowColorBtn->setObjectName(QString::fromUtf8("mShadowColorBtn"));
        sizePolicy3.setHeightForWidth(mShadowColorBtn->sizePolicy().hasHeightForWidth());
        mShadowColorBtn->setSizePolicy(sizePolicy3);
        mShadowColorBtn->setMinimumSize(QSize(120, 0));
        mShadowColorBtn->setMaximumSize(QSize(120, 16777215));

        gridLayout_7->addWidget(mShadowColorBtn, 10, 1, 1, 1);

        mShadowRadiusDblSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mShadowRadiusDblSpnBx->setObjectName(QString::fromUtf8("mShadowRadiusDblSpnBx"));
        mShadowRadiusDblSpnBx->setDecimals(6);
        mShadowRadiusDblSpnBx->setMaximum(1e+09);
        mShadowRadiusDblSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowRadiusDblSpnBx, 5, 1, 1, 1);

        label_29 = new QLabel(mShadowFrame);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_7->addWidget(label_29, 9, 0, 1, 1);

        label_27 = new QLabel(mShadowFrame);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_7->addWidget(label_27, 5, 0, 1, 1);

        mShadowRadiusAlphaChkBx = new QCheckBox(mShadowFrame);
        mShadowRadiusAlphaChkBx->setObjectName(QString::fromUtf8("mShadowRadiusAlphaChkBx"));
        sizePolicy2.setHeightForWidth(mShadowRadiusAlphaChkBx->sizePolicy().hasHeightForWidth());
        mShadowRadiusAlphaChkBx->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(mShadowRadiusAlphaChkBx, 7, 1, 1, 1);

        mShadowOffsetSpnBx = new QgsDoubleSpinBox(mShadowFrame);
        mShadowOffsetSpnBx->setObjectName(QString::fromUtf8("mShadowOffsetSpnBx"));
        mShadowOffsetSpnBx->setDecimals(4);
        mShadowOffsetSpnBx->setMinimum(0);
        mShadowOffsetSpnBx->setMaximum(1e+07);
        mShadowOffsetSpnBx->setSingleStep(0.1);
        mShadowOffsetSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowOffsetSpnBx, 2, 1, 1, 1);

        mShadowOffsetGlobalChkBx = new QCheckBox(mShadowFrame);
        mShadowOffsetGlobalChkBx->setObjectName(QString::fromUtf8("mShadowOffsetGlobalChkBx"));
        sizePolicy2.setHeightForWidth(mShadowOffsetGlobalChkBx->sizePolicy().hasHeightForWidth());
        mShadowOffsetGlobalChkBx->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(mShadowOffsetGlobalChkBx, 4, 1, 1, 1);

        mShadowBlendCmbBx = new QgsBlendModeComboBox(mShadowFrame);
        mShadowBlendCmbBx->setObjectName(QString::fromUtf8("mShadowBlendCmbBx"));

        gridLayout_7->addWidget(mShadowBlendCmbBx, 11, 1, 1, 1);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        mShadowOffsetAngleDial = new QDial(mShadowFrame);
        mShadowOffsetAngleDial->setObjectName(QString::fromUtf8("mShadowOffsetAngleDial"));
        mShadowOffsetAngleDial->setMinimumSize(QSize(32, 32));
        mShadowOffsetAngleDial->setMaximumSize(QSize(32, 32));
        mShadowOffsetAngleDial->setMinimum(-180);
        mShadowOffsetAngleDial->setMaximum(180);
        mShadowOffsetAngleDial->setValue(0);
        mShadowOffsetAngleDial->setInvertedControls(true);
        mShadowOffsetAngleDial->setWrapping(true);

        horizontalLayout_24->addWidget(mShadowOffsetAngleDial);

        mShadowOffsetAngleSpnBx = new QgsSpinBox(mShadowFrame);
        mShadowOffsetAngleSpnBx->setObjectName(QString::fromUtf8("mShadowOffsetAngleSpnBx"));
        mShadowOffsetAngleSpnBx->setMinimum(-180);
        mShadowOffsetAngleSpnBx->setMaximum(180);
        mShadowOffsetAngleSpnBx->setProperty("showClearButton", QVariant(false));

        horizontalLayout_24->addWidget(mShadowOffsetAngleSpnBx);


        gridLayout_7->addLayout(horizontalLayout_24, 1, 1, 1, 1);

        mShadowUnderCmbBx = new QComboBox(mShadowFrame);
        mShadowUnderCmbBx->setObjectName(QString::fromUtf8("mShadowUnderCmbBx"));
        mShadowUnderCmbBx->setMinimumSize(QSize(150, 0));

        gridLayout_7->addWidget(mShadowUnderCmbBx, 0, 1, 1, 1);

        label_17 = new QLabel(mShadowFrame);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_7->addWidget(label_17, 0, 0, 1, 1);

        mShadowScaleSpnBx = new QgsSpinBox(mShadowFrame);
        mShadowScaleSpnBx->setObjectName(QString::fromUtf8("mShadowScaleSpnBx"));
        mShadowScaleSpnBx->setMaximum(2000);
        mShadowScaleSpnBx->setValue(100);
        mShadowScaleSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mShadowScaleSpnBx, 9, 1, 1, 1);

        label_30 = new QLabel(mShadowFrame);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_7->addWidget(label_30, 11, 0, 1, 1);

        label_9 = new QLabel(mShadowFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_7->addWidget(label_9, 1, 0, 1, 1);

        label_33 = new QLabel(mShadowFrame);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy8.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy8);
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_33, 10, 0, 1, 1);

        label_28 = new QLabel(mShadowFrame);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_7->addWidget(label_28, 8, 0, 1, 1);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        mShadowTranspSlider = new QSlider(mShadowFrame);
        mShadowTranspSlider->setObjectName(QString::fromUtf8("mShadowTranspSlider"));
        mShadowTranspSlider->setEnabled(true);
        sizePolicy10.setHeightForWidth(mShadowTranspSlider->sizePolicy().hasHeightForWidth());
        mShadowTranspSlider->setSizePolicy(sizePolicy10);
        mShadowTranspSlider->setMinimumSize(QSize(50, 0));
        mShadowTranspSlider->setMaximum(100);
        mShadowTranspSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_28->addWidget(mShadowTranspSlider);

        mShadowTranspSpnBx = new QgsSpinBox(mShadowFrame);
        mShadowTranspSpnBx->setObjectName(QString::fromUtf8("mShadowTranspSpnBx"));
        mShadowTranspSpnBx->setEnabled(true);
        mShadowTranspSpnBx->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mShadowTranspSpnBx->setMaximum(100);

        horizontalLayout_28->addWidget(mShadowTranspSpnBx);


        gridLayout_7->addLayout(horizontalLayout_28, 8, 1, 1, 1);

        mShadowUnderDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowUnderDDBtn->setObjectName(QString::fromUtf8("mShadowUnderDDBtn"));

        gridLayout_7->addWidget(mShadowUnderDDBtn, 0, 2, 1, 1);

        mShadowOffsetAngleDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowOffsetAngleDDBtn->setObjectName(QString::fromUtf8("mShadowOffsetAngleDDBtn"));

        gridLayout_7->addWidget(mShadowOffsetAngleDDBtn, 1, 2, 1, 1);

        mShadowOffsetDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowOffsetDDBtn->setObjectName(QString::fromUtf8("mShadowOffsetDDBtn"));

        gridLayout_7->addWidget(mShadowOffsetDDBtn, 2, 2, 1, 1);

        mShadowOffsetUnitsDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowOffsetUnitsDDBtn->setObjectName(QString::fromUtf8("mShadowOffsetUnitsDDBtn"));

        gridLayout_7->addWidget(mShadowOffsetUnitsDDBtn, 3, 2, 1, 1);

        mShadowRadiusDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowRadiusDDBtn->setObjectName(QString::fromUtf8("mShadowRadiusDDBtn"));

        gridLayout_7->addWidget(mShadowRadiusDDBtn, 5, 2, 1, 1);

        mShadowRadiusUnitsDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowRadiusUnitsDDBtn->setObjectName(QString::fromUtf8("mShadowRadiusUnitsDDBtn"));

        gridLayout_7->addWidget(mShadowRadiusUnitsDDBtn, 6, 2, 1, 1);

        mShadowTranspDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowTranspDDBtn->setObjectName(QString::fromUtf8("mShadowTranspDDBtn"));

        gridLayout_7->addWidget(mShadowTranspDDBtn, 8, 2, 1, 1);

        mShadowScaleDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowScaleDDBtn->setObjectName(QString::fromUtf8("mShadowScaleDDBtn"));

        gridLayout_7->addWidget(mShadowScaleDDBtn, 9, 2, 1, 1);

        mShadowColorDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowColorDDBtn->setObjectName(QString::fromUtf8("mShadowColorDDBtn"));

        gridLayout_7->addWidget(mShadowColorDDBtn, 10, 2, 1, 1);

        mShadowBlendDDBtn = new QgsDataDefinedButton(mShadowFrame);
        mShadowBlendDDBtn->setObjectName(QString::fromUtf8("mShadowBlendDDBtn"));

        gridLayout_7->addWidget(mShadowBlendDDBtn, 11, 2, 1, 1);

        mShadowOffsetUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mShadowOffsetUnitWidget->setObjectName(QString::fromUtf8("mShadowOffsetUnitWidget"));

        gridLayout_7->addWidget(mShadowOffsetUnitWidget, 3, 1, 1, 1);

        mShadowRadiusUnitWidget = new QgsUnitSelectionWidget(mShadowFrame);
        mShadowRadiusUnitWidget->setObjectName(QString::fromUtf8("mShadowRadiusUnitWidget"));

        gridLayout_7->addWidget(mShadowRadiusUnitWidget, 6, 1, 1, 1);


        gridLayout_38->addWidget(mShadowFrame, 1, 0, 1, 3);


        verticalLayout_22->addLayout(gridLayout_38);

        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_7);

        scrollArea_8->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_18->addWidget(scrollArea_8);

        mLabelStackedWidget->addWidget(mLabelPage_Shadow);
        mLabelPage_Placement = new QWidget();
        mLabelPage_Placement->setObjectName(QString::fromUtf8("mLabelPage_Placement"));
        verticalLayout_10 = new QVBoxLayout(mLabelPage_Placement);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_38 = new QLabel(mLabelPage_Placement);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_10->addWidget(label_38);

        scrollArea_3 = new QScrollArea(mLabelPage_Placement);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 578, 899));
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 6, 0);
        mPlacementTypeFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementTypeFrame->setObjectName(QString::fromUtf8("mPlacementTypeFrame"));
        sizePolicy7.setHeightForWidth(mPlacementTypeFrame->sizePolicy().hasHeightForWidth());
        mPlacementTypeFrame->setSizePolicy(sizePolicy7);
        mPlacementTypeFrame->setFrameShape(QFrame::NoFrame);
        mPlacementTypeFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_9 = new QVBoxLayout(mPlacementTypeFrame);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        stackedPlacement = new QStackedWidget(mPlacementTypeFrame);
        stackedPlacement->setObjectName(QString::fromUtf8("stackedPlacement"));
        stackedPlacement->setFrameShape(QFrame::NoFrame);
        stackedPlacement->setFrameShadow(QFrame::Sunken);
        pagePoint = new QWidget();
        pagePoint->setObjectName(QString::fromUtf8("pagePoint"));
        gridLayout_13 = new QGridLayout(pagePoint);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        radAroundPoint = new QRadioButton(pagePoint);
        radAroundPoint->setObjectName(QString::fromUtf8("radAroundPoint"));
        radAroundPoint->setChecked(true);

        gridLayout_13->addWidget(radAroundPoint, 0, 1, 1, 1);

        radOverPoint = new QRadioButton(pagePoint);
        radOverPoint->setObjectName(QString::fromUtf8("radOverPoint"));

        gridLayout_13->addWidget(radOverPoint, 0, 2, 1, 1);

        radPredefinedOrder = new QRadioButton(pagePoint);
        radPredefinedOrder->setObjectName(QString::fromUtf8("radPredefinedOrder"));

        gridLayout_13->addWidget(radPredefinedOrder, 0, 0, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_25, 0, 3, 1, 1);

        stackedPlacement->addWidget(pagePoint);
        pageLine = new QWidget();
        pageLine->setObjectName(QString::fromUtf8("pageLine"));
        gridLayout_14 = new QGridLayout(pageLine);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        radLineCurved = new QRadioButton(pageLine);
        radLineCurved->setObjectName(QString::fromUtf8("radLineCurved"));
        sizePolicy12.setHeightForWidth(radLineCurved->sizePolicy().hasHeightForWidth());
        radLineCurved->setSizePolicy(sizePolicy12);

        gridLayout_14->addWidget(radLineCurved, 0, 1, 1, 1);

        radLineParallel = new QRadioButton(pageLine);
        radLineParallel->setObjectName(QString::fromUtf8("radLineParallel"));
        sizePolicy12.setHeightForWidth(radLineParallel->sizePolicy().hasHeightForWidth());
        radLineParallel->setSizePolicy(sizePolicy12);
        radLineParallel->setChecked(true);

        gridLayout_14->addWidget(radLineParallel, 0, 0, 1, 1);

        radLineHorizontal = new QRadioButton(pageLine);
        radLineHorizontal->setObjectName(QString::fromUtf8("radLineHorizontal"));

        gridLayout_14->addWidget(radLineHorizontal, 0, 2, 1, 1);

        stackedPlacement->addWidget(pageLine);
        pagePolygon = new QWidget();
        pagePolygon->setObjectName(QString::fromUtf8("pagePolygon"));
        gridLayout_18 = new QGridLayout(pagePolygon);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        radOverCentroid = new QRadioButton(pagePolygon);
        radOverCentroid->setObjectName(QString::fromUtf8("radOverCentroid"));
        sizePolicy12.setHeightForWidth(radOverCentroid->sizePolicy().hasHeightForWidth());
        radOverCentroid->setSizePolicy(sizePolicy12);
        radOverCentroid->setChecked(true);

        gridLayout_18->addWidget(radOverCentroid, 0, 0, 1, 1);

        radAroundCentroid = new QRadioButton(pagePolygon);
        radAroundCentroid->setObjectName(QString::fromUtf8("radAroundCentroid"));
        sizePolicy12.setHeightForWidth(radAroundCentroid->sizePolicy().hasHeightForWidth());
        radAroundCentroid->setSizePolicy(sizePolicy12);

        gridLayout_18->addWidget(radAroundCentroid, 1, 0, 1, 1);

        radPolygonHorizontal = new QRadioButton(pagePolygon);
        radPolygonHorizontal->setObjectName(QString::fromUtf8("radPolygonHorizontal"));

        gridLayout_18->addWidget(radPolygonHorizontal, 0, 1, 1, 1);

        radPolygonFree = new QRadioButton(pagePolygon);
        radPolygonFree->setObjectName(QString::fromUtf8("radPolygonFree"));

        gridLayout_18->addWidget(radPolygonFree, 1, 1, 1, 1);

        radPolygonPerimeter = new QRadioButton(pagePolygon);
        radPolygonPerimeter->setObjectName(QString::fromUtf8("radPolygonPerimeter"));
        sizePolicy2.setHeightForWidth(radPolygonPerimeter->sizePolicy().hasHeightForWidth());
        radPolygonPerimeter->setSizePolicy(sizePolicy2);

        gridLayout_18->addWidget(radPolygonPerimeter, 2, 0, 1, 2);

        stackedPlacement->addWidget(pagePolygon);

        verticalLayout_9->addWidget(stackedPlacement);


        verticalLayout_11->addWidget(mPlacementTypeFrame);

        mPlacementLineFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementLineFrame->setObjectName(QString::fromUtf8("mPlacementLineFrame"));
        mPlacementLineFrame->setMinimumSize(QSize(0, 0));
        mPlacementLineFrame->setFrameShape(QFrame::NoFrame);
        mPlacementLineFrame->setFrameShadow(QFrame::Raised);
        gridLayout_10 = new QGridLayout(mPlacementLineFrame);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(mPlacementLineFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy8.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy8);

        gridLayout_10->addWidget(label_13, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        chkLineAbove = new QCheckBox(mPlacementLineFrame);
        chkLineAbove->setObjectName(QString::fromUtf8("chkLineAbove"));
        sizePolicy12.setHeightForWidth(chkLineAbove->sizePolicy().hasHeightForWidth());
        chkLineAbove->setSizePolicy(sizePolicy12);
        chkLineAbove->setChecked(true);

        horizontalLayout->addWidget(chkLineAbove);

        chkLineOn = new QCheckBox(mPlacementLineFrame);
        chkLineOn->setObjectName(QString::fromUtf8("chkLineOn"));
        sizePolicy12.setHeightForWidth(chkLineOn->sizePolicy().hasHeightForWidth());
        chkLineOn->setSizePolicy(sizePolicy12);

        horizontalLayout->addWidget(chkLineOn);

        chkLineBelow = new QCheckBox(mPlacementLineFrame);
        chkLineBelow->setObjectName(QString::fromUtf8("chkLineBelow"));

        horizontalLayout->addWidget(chkLineBelow);


        gridLayout_10->addLayout(horizontalLayout, 0, 1, 1, 1);

        chkLineOrientationDependent = new QCheckBox(mPlacementLineFrame);
        chkLineOrientationDependent->setObjectName(QString::fromUtf8("chkLineOrientationDependent"));

        gridLayout_10->addWidget(chkLineOrientationDependent, 1, 1, 1, 1);


        verticalLayout_11->addWidget(mPlacementLineFrame);

        mPlacementCentroidFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementCentroidFrame->setObjectName(QString::fromUtf8("mPlacementCentroidFrame"));
        mPlacementCentroidFrame->setFrameShape(QFrame::NoFrame);
        mPlacementCentroidFrame->setFrameShadow(QFrame::Raised);
        gridLayout_25 = new QGridLayout(mPlacementCentroidFrame);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        gridLayout_25->setContentsMargins(0, 0, 0, 0);
        mCentroidLabel = new QLabel(mPlacementCentroidFrame);
        mCentroidLabel->setObjectName(QString::fromUtf8("mCentroidLabel"));
        sizePolicy8.setHeightForWidth(mCentroidLabel->sizePolicy().hasHeightForWidth());
        mCentroidLabel->setSizePolicy(sizePolicy8);
        mCentroidLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_25->addWidget(mCentroidLabel, 0, 0, 1, 1);

        mCentroidRadioVisible = new QRadioButton(mPlacementCentroidFrame);
        mCentroidRadioVisible->setObjectName(QString::fromUtf8("mCentroidRadioVisible"));
        sizePolicy12.setHeightForWidth(mCentroidRadioVisible->sizePolicy().hasHeightForWidth());
        mCentroidRadioVisible->setSizePolicy(sizePolicy12);
        mCentroidRadioVisible->setChecked(true);

        gridLayout_25->addWidget(mCentroidRadioVisible, 0, 1, 1, 1);

        mCentroidRadioWhole = new QRadioButton(mPlacementCentroidFrame);
        mCentroidRadioWhole->setObjectName(QString::fromUtf8("mCentroidRadioWhole"));
        sizePolicy9.setHeightForWidth(mCentroidRadioWhole->sizePolicy().hasHeightForWidth());
        mCentroidRadioWhole->setSizePolicy(sizePolicy9);

        gridLayout_25->addWidget(mCentroidRadioWhole, 0, 2, 1, 1);

        mCentroidDDBtn = new QgsDataDefinedButton(mPlacementCentroidFrame);
        mCentroidDDBtn->setObjectName(QString::fromUtf8("mCentroidDDBtn"));

        gridLayout_25->addWidget(mCentroidDDBtn, 0, 3, 1, 1);

        mCentroidInsideCheckBox = new QCheckBox(mPlacementCentroidFrame);
        mCentroidInsideCheckBox->setObjectName(QString::fromUtf8("mCentroidInsideCheckBox"));

        gridLayout_25->addWidget(mCentroidInsideCheckBox, 1, 1, 1, 3);


        verticalLayout_11->addWidget(mPlacementCentroidFrame);

        mPlacementDistanceFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementDistanceFrame->setObjectName(QString::fromUtf8("mPlacementDistanceFrame"));
        mPlacementDistanceFrame->setMinimumSize(QSize(0, 0));
        mPlacementDistanceFrame->setFrameShape(QFrame::NoFrame);
        mPlacementDistanceFrame->setFrameShadow(QFrame::Raised);
        gridLayout_27 = new QGridLayout(mPlacementDistanceFrame);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName(QString::fromUtf8("gridLayout_27"));
        gridLayout_27->setVerticalSpacing(12);
        gridLayout_27->setContentsMargins(0, 0, 0, 0);
        mLineDistanceSpnBx = new QgsDoubleSpinBox(mPlacementDistanceFrame);
        mLineDistanceSpnBx->setObjectName(QString::fromUtf8("mLineDistanceSpnBx"));
        mLineDistanceSpnBx->setDecimals(4);
        mLineDistanceSpnBx->setMaximum(1e+09);
        mLineDistanceSpnBx->setSingleStep(0.1);

        gridLayout_27->addWidget(mLineDistanceSpnBx, 0, 1, 1, 1);

        label_26 = new QLabel(mPlacementDistanceFrame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy8.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy8);
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_27->addWidget(label_26, 0, 0, 1, 1);

        mLineDistanceDDBtn = new QgsDataDefinedButton(mPlacementDistanceFrame);
        mLineDistanceDDBtn->setObjectName(QString::fromUtf8("mLineDistanceDDBtn"));

        gridLayout_27->addWidget(mLineDistanceDDBtn, 0, 2, 1, 1);

        mLineDistanceUnitDDBtn = new QgsDataDefinedButton(mPlacementDistanceFrame);
        mLineDistanceUnitDDBtn->setObjectName(QString::fromUtf8("mLineDistanceUnitDDBtn"));

        gridLayout_27->addWidget(mLineDistanceUnitDDBtn, 1, 2, 1, 1);

        mLineDistanceUnitWidget = new QgsUnitSelectionWidget(mPlacementDistanceFrame);
        mLineDistanceUnitWidget->setObjectName(QString::fromUtf8("mLineDistanceUnitWidget"));

        gridLayout_27->addWidget(mLineDistanceUnitWidget, 1, 1, 1, 1);


        verticalLayout_11->addWidget(mPlacementDistanceFrame);

        mPlacementOffsetTypeFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementOffsetTypeFrame->setObjectName(QString::fromUtf8("mPlacementOffsetTypeFrame"));
        mPlacementOffsetTypeFrame->setMinimumSize(QSize(0, 0));
        mPlacementOffsetTypeFrame->setFrameShape(QFrame::NoFrame);
        mPlacementOffsetTypeFrame->setFrameShadow(QFrame::Raised);
        gridLayout_40 = new QGridLayout(mPlacementOffsetTypeFrame);
        gridLayout_40->setSpacing(6);
        gridLayout_40->setContentsMargins(11, 11, 11, 11);
        gridLayout_40->setObjectName(QString::fromUtf8("gridLayout_40"));
        gridLayout_40->setVerticalSpacing(12);
        gridLayout_40->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(mPlacementOffsetTypeFrame);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        sizePolicy8.setHeightForWidth(label_42->sizePolicy().hasHeightForWidth());
        label_42->setSizePolicy(sizePolicy8);
        label_42->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_40->addWidget(label_42, 0, 0, 1, 1);

        mOffsetTypeComboBox = new QComboBox(mPlacementOffsetTypeFrame);
        mOffsetTypeComboBox->setObjectName(QString::fromUtf8("mOffsetTypeComboBox"));

        gridLayout_40->addWidget(mOffsetTypeComboBox, 0, 1, 1, 1);


        verticalLayout_11->addWidget(mPlacementOffsetTypeFrame);

        mPlacementQuadrantFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementQuadrantFrame->setObjectName(QString::fromUtf8("mPlacementQuadrantFrame"));
        gridLayout_19 = new QGridLayout(mPlacementQuadrantFrame);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, 0, 0);
        mPointQuadOffsetDDBtn = new QgsDataDefinedButton(mPlacementQuadrantFrame);
        mPointQuadOffsetDDBtn->setObjectName(QString::fromUtf8("mPointQuadOffsetDDBtn"));

        gridLayout_19->addWidget(mPointQuadOffsetDDBtn, 0, 2, 1, 1);

        mPlacementFixedQuadrantFrame = new QFrame(mPlacementQuadrantFrame);
        mPlacementFixedQuadrantFrame->setObjectName(QString::fromUtf8("mPlacementFixedQuadrantFrame"));
        gridLayout_3 = new QGridLayout(mPlacementFixedQuadrantFrame);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mPointOffsetOver = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetOver->setObjectName(QString::fromUtf8("mPointOffsetOver"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mIconLabelQuadrantCenter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPointOffsetOver->setIcon(icon8);
        mPointOffsetOver->setIconSize(QSize(32, 18));
        mPointOffsetOver->setCheckable(true);
        mPointOffsetOver->setChecked(true);

        gridLayout_3->addWidget(mPointOffsetOver, 1, 1, 1, 1);

        mPointOffsetAboveRight = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetAboveRight->setObjectName(QString::fromUtf8("mPointOffsetAboveRight"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/mIconLabelQuadrantOffset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mPointOffsetAboveRight->setIcon(icon9);
        mPointOffsetAboveRight->setIconSize(QSize(32, 18));
        mPointOffsetAboveRight->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetAboveRight, 0, 2, 1, 1);

        mPointOffsetBelowLeft = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetBelowLeft->setObjectName(QString::fromUtf8("mPointOffsetBelowLeft"));
        mPointOffsetBelowLeft->setIcon(icon9);
        mPointOffsetBelowLeft->setIconSize(QSize(32, 18));
        mPointOffsetBelowLeft->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetBelowLeft, 2, 0, 1, 1);

        mPointOffsetLeft = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetLeft->setObjectName(QString::fromUtf8("mPointOffsetLeft"));
        mPointOffsetLeft->setIcon(icon9);
        mPointOffsetLeft->setIconSize(QSize(32, 18));
        mPointOffsetLeft->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetLeft, 1, 0, 1, 1);

        mPointOffsetAboveLeft = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetAboveLeft->setObjectName(QString::fromUtf8("mPointOffsetAboveLeft"));
        mPointOffsetAboveLeft->setIcon(icon9);
        mPointOffsetAboveLeft->setIconSize(QSize(32, 18));
        mPointOffsetAboveLeft->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetAboveLeft, 0, 0, 1, 1);

        mPointOffsetRight = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetRight->setObjectName(QString::fromUtf8("mPointOffsetRight"));
        mPointOffsetRight->setIcon(icon9);
        mPointOffsetRight->setIconSize(QSize(32, 18));
        mPointOffsetRight->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetRight, 1, 2, 1, 1);

        mPointOffsetBelow = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetBelow->setObjectName(QString::fromUtf8("mPointOffsetBelow"));
        mPointOffsetBelow->setIcon(icon9);
        mPointOffsetBelow->setIconSize(QSize(32, 18));
        mPointOffsetBelow->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetBelow, 2, 1, 1, 1);

        mPointOffsetBelowRight = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetBelowRight->setObjectName(QString::fromUtf8("mPointOffsetBelowRight"));
        mPointOffsetBelowRight->setIcon(icon9);
        mPointOffsetBelowRight->setIconSize(QSize(32, 18));
        mPointOffsetBelowRight->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetBelowRight, 2, 2, 1, 1);

        mPointOffsetAbove = new QToolButton(mPlacementFixedQuadrantFrame);
        mPointOffsetAbove->setObjectName(QString::fromUtf8("mPointOffsetAbove"));
        mPointOffsetAbove->setIcon(icon9);
        mPointOffsetAbove->setIconSize(QSize(32, 18));
        mPointOffsetAbove->setCheckable(true);

        gridLayout_3->addWidget(mPointOffsetAbove, 0, 1, 1, 1);


        gridLayout_19->addWidget(mPlacementFixedQuadrantFrame, 0, 1, 3, 1);

        label_6 = new QLabel(mPlacementQuadrantFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy8.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy8);

        gridLayout_19->addWidget(label_6, 0, 0, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(12, 12, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_18, 2, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(0, 12, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_16, 0, 3, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(12, 12, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_17, 1, 0, 1, 1);


        verticalLayout_11->addWidget(mPlacementQuadrantFrame);

        mPlacementCartographicFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementCartographicFrame->setObjectName(QString::fromUtf8("mPlacementCartographicFrame"));
        gridLayout_39 = new QGridLayout(mPlacementCartographicFrame);
        gridLayout_39->setSpacing(6);
        gridLayout_39->setContentsMargins(11, 11, 11, 11);
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        gridLayout_39->setContentsMargins(0, 0, 0, 0);
        mPointPositionOrderDDBtn = new QgsDataDefinedButton(mPlacementCartographicFrame);
        mPointPositionOrderDDBtn->setObjectName(QString::fromUtf8("mPointPositionOrderDDBtn"));

        gridLayout_39->addWidget(mPointPositionOrderDDBtn, 0, 2, 1, 1);

        mPlacementFixedQuadrantFrame_2 = new QFrame(mPlacementCartographicFrame);
        mPlacementFixedQuadrantFrame_2->setObjectName(QString::fromUtf8("mPlacementFixedQuadrantFrame_2"));
        gridLayout_11 = new QGridLayout(mPlacementFixedQuadrantFrame_2);
        gridLayout_11->setSpacing(2);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);

        gridLayout_39->addWidget(mPlacementFixedQuadrantFrame_2, 0, 1, 2, 1);

        horizontalSpacer_27 = new QSpacerItem(0, 12, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_39->addItem(horizontalSpacer_27, 0, 3, 1, 1);

        label_20 = new QLabel(mPlacementCartographicFrame);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy8.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy8);

        gridLayout_39->addWidget(label_20, 0, 0, 1, 1);


        verticalLayout_11->addWidget(mPlacementCartographicFrame);

        mPlacementOffsetFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementOffsetFrame->setObjectName(QString::fromUtf8("mPlacementOffsetFrame"));
        mPlacementOffsetFrame->setMinimumSize(QSize(0, 0));
        mPlacementOffsetFrame->setFrameShape(QFrame::NoFrame);
        mPlacementOffsetFrame->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(mPlacementOffsetFrame);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setVerticalSpacing(12);
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        mPointOffsetYSpinBox = new QgsDoubleSpinBox(mPlacementOffsetFrame);
        mPointOffsetYSpinBox->setObjectName(QString::fromUtf8("mPointOffsetYSpinBox"));
        sizePolicy9.setHeightForWidth(mPointOffsetYSpinBox->sizePolicy().hasHeightForWidth());
        mPointOffsetYSpinBox->setSizePolicy(sizePolicy9);
        mPointOffsetYSpinBox->setDecimals(4);
        mPointOffsetYSpinBox->setMinimum(-1e+07);
        mPointOffsetYSpinBox->setMaximum(1e+07);
        mPointOffsetYSpinBox->setSingleStep(0.1);

        gridLayout_15->addWidget(mPointOffsetYSpinBox, 0, 2, 1, 1);

        mPointOffsetDDBtn = new QgsDataDefinedButton(mPlacementOffsetFrame);
        mPointOffsetDDBtn->setObjectName(QString::fromUtf8("mPointOffsetDDBtn"));

        gridLayout_15->addWidget(mPointOffsetDDBtn, 0, 3, 1, 1);

        mPointOffsetUnitsDDBtn = new QgsDataDefinedButton(mPlacementOffsetFrame);
        mPointOffsetUnitsDDBtn->setObjectName(QString::fromUtf8("mPointOffsetUnitsDDBtn"));

        gridLayout_15->addWidget(mPointOffsetUnitsDDBtn, 1, 3, 1, 1);

        mPointOffsetXSpinBox = new QgsDoubleSpinBox(mPlacementOffsetFrame);
        mPointOffsetXSpinBox->setObjectName(QString::fromUtf8("mPointOffsetXSpinBox"));
        sizePolicy9.setHeightForWidth(mPointOffsetXSpinBox->sizePolicy().hasHeightForWidth());
        mPointOffsetXSpinBox->setSizePolicy(sizePolicy9);
        mPointOffsetXSpinBox->setDecimals(4);
        mPointOffsetXSpinBox->setMinimum(-1e+07);
        mPointOffsetXSpinBox->setMaximum(1e+07);
        mPointOffsetXSpinBox->setSingleStep(0.1);

        gridLayout_15->addWidget(mPointOffsetXSpinBox, 0, 1, 1, 1);

        label_15 = new QLabel(mPlacementOffsetFrame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy8.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(label_15, 0, 0, 1, 1);

        mPointOffsetUnitWidget = new QgsUnitSelectionWidget(mPlacementOffsetFrame);
        mPointOffsetUnitWidget->setObjectName(QString::fromUtf8("mPointOffsetUnitWidget"));

        gridLayout_15->addWidget(mPointOffsetUnitWidget, 1, 1, 1, 2);


        verticalLayout_11->addWidget(mPlacementOffsetFrame);

        mPlacementRotationFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementRotationFrame->setObjectName(QString::fromUtf8("mPlacementRotationFrame"));
        mPlacementRotationFrame->setMinimumSize(QSize(0, 0));
        mPlacementRotationFrame->setFrameShape(QFrame::NoFrame);
        mPlacementRotationFrame->setFrameShadow(QFrame::Raised);
        gridLayout_26 = new QGridLayout(mPlacementRotationFrame);
        gridLayout_26->setSpacing(6);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        gridLayout_26->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(mPlacementRotationFrame);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy11.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy11);
        label_25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_26->addWidget(label_25, 0, 0, 1, 1);

        mPointAngleSpinBox = new QgsDoubleSpinBox(mPlacementRotationFrame);
        mPointAngleSpinBox->setObjectName(QString::fromUtf8("mPointAngleSpinBox"));
        mPointAngleSpinBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(mPointAngleSpinBox->sizePolicy().hasHeightForWidth());
        mPointAngleSpinBox->setSizePolicy(sizePolicy2);
        mPointAngleSpinBox->setMinimum(-360);
        mPointAngleSpinBox->setMaximum(360);

        gridLayout_26->addWidget(mPointAngleSpinBox, 0, 1, 1, 1);

        mPointAngleDDBtn = new QgsDataDefinedButton(mPlacementRotationFrame);
        mPointAngleDDBtn->setObjectName(QString::fromUtf8("mPointAngleDDBtn"));

        gridLayout_26->addWidget(mPointAngleDDBtn, 0, 2, 1, 1);


        verticalLayout_11->addWidget(mPlacementRotationFrame);

        mPlacementRepeatDistanceFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementRepeatDistanceFrame->setObjectName(QString::fromUtf8("mPlacementRepeatDistanceFrame"));
        mPlacementRepeatDistanceFrame->setFrameShape(QFrame::NoFrame);
        mPlacementRepeatDistanceFrame->setFrameShadow(QFrame::Raised);
        gridLayout_24 = new QGridLayout(mPlacementRepeatDistanceFrame);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        gridLayout_24->setVerticalSpacing(12);
        gridLayout_24->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(mPlacementRepeatDistanceFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_24->addWidget(label_7, 0, 0, 1, 1);

        mRepeatDistanceSpinBox = new QgsDoubleSpinBox(mPlacementRepeatDistanceFrame);
        mRepeatDistanceSpinBox->setObjectName(QString::fromUtf8("mRepeatDistanceSpinBox"));
        sizePolicy2.setHeightForWidth(mRepeatDistanceSpinBox->sizePolicy().hasHeightForWidth());
        mRepeatDistanceSpinBox->setSizePolicy(sizePolicy2);
        mRepeatDistanceSpinBox->setDecimals(4);
        mRepeatDistanceSpinBox->setMaximum(1e+09);

        gridLayout_24->addWidget(mRepeatDistanceSpinBox, 0, 1, 1, 1);

        mRepeatDistanceDDBtn = new QgsDataDefinedButton(mPlacementRepeatDistanceFrame);
        mRepeatDistanceDDBtn->setObjectName(QString::fromUtf8("mRepeatDistanceDDBtn"));

        gridLayout_24->addWidget(mRepeatDistanceDDBtn, 0, 2, 1, 1);

        mRepeatDistanceUnitWidget = new QgsUnitSelectionWidget(mPlacementRepeatDistanceFrame);
        mRepeatDistanceUnitWidget->setObjectName(QString::fromUtf8("mRepeatDistanceUnitWidget"));

        gridLayout_24->addWidget(mRepeatDistanceUnitWidget, 1, 1, 1, 1);

        mRepeatDistanceUnitDDBtn = new QgsDataDefinedButton(mPlacementRepeatDistanceFrame);
        mRepeatDistanceUnitDDBtn->setObjectName(QString::fromUtf8("mRepeatDistanceUnitDDBtn"));

        gridLayout_24->addWidget(mRepeatDistanceUnitDDBtn, 1, 2, 1, 1);


        verticalLayout_11->addWidget(mPlacementRepeatDistanceFrame);

        mPlacementMaxCharAngleFrame = new QFrame(scrollAreaWidgetContents_4);
        mPlacementMaxCharAngleFrame->setObjectName(QString::fromUtf8("mPlacementMaxCharAngleFrame"));
        gridLayout_22 = new QGridLayout(mPlacementMaxCharAngleFrame);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_22->setVerticalSpacing(12);
        gridLayout_22->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_19 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_22->addItem(horizontalSpacer_19, 1, 0, 1, 1);

        mMaxCharAngleInLabel = new QLabel(mPlacementMaxCharAngleFrame);
        mMaxCharAngleInLabel->setObjectName(QString::fromUtf8("mMaxCharAngleInLabel"));
        sizePolicy8.setHeightForWidth(mMaxCharAngleInLabel->sizePolicy().hasHeightForWidth());
        mMaxCharAngleInLabel->setSizePolicy(sizePolicy8);

        gridLayout_22->addWidget(mMaxCharAngleInLabel, 1, 1, 1, 1);

        mMaxCharAngleInDSpinBox = new QgsDoubleSpinBox(mPlacementMaxCharAngleFrame);
        mMaxCharAngleInDSpinBox->setObjectName(QString::fromUtf8("mMaxCharAngleInDSpinBox"));
        mMaxCharAngleInDSpinBox->setDecimals(1);
        mMaxCharAngleInDSpinBox->setMinimum(20);
        mMaxCharAngleInDSpinBox->setMaximum(60);
        mMaxCharAngleInDSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_22->addWidget(mMaxCharAngleInDSpinBox, 1, 2, 1, 1);

        mMaxCharAngleDDBtn = new QgsDataDefinedButton(mPlacementMaxCharAngleFrame);
        mMaxCharAngleDDBtn->setObjectName(QString::fromUtf8("mMaxCharAngleDDBtn"));

        gridLayout_22->addWidget(mMaxCharAngleDDBtn, 1, 5, 1, 1);

        mMaxCharAngleOutLabel = new QLabel(mPlacementMaxCharAngleFrame);
        mMaxCharAngleOutLabel->setObjectName(QString::fromUtf8("mMaxCharAngleOutLabel"));
        sizePolicy8.setHeightForWidth(mMaxCharAngleOutLabel->sizePolicy().hasHeightForWidth());
        mMaxCharAngleOutLabel->setSizePolicy(sizePolicy8);

        gridLayout_22->addWidget(mMaxCharAngleOutLabel, 1, 3, 1, 1);

        mMaxCharAngleOutDSpinBox = new QgsDoubleSpinBox(mPlacementMaxCharAngleFrame);
        mMaxCharAngleOutDSpinBox->setObjectName(QString::fromUtf8("mMaxCharAngleOutDSpinBox"));
        mMaxCharAngleOutDSpinBox->setDecimals(1);
        mMaxCharAngleOutDSpinBox->setMinimum(20);
        mMaxCharAngleOutDSpinBox->setMaximum(95);
        mMaxCharAngleOutDSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_22->addWidget(mMaxCharAngleOutDSpinBox, 1, 4, 1, 1);

        mMaxCharAngleLabel = new QLabel(mPlacementMaxCharAngleFrame);
        mMaxCharAngleLabel->setObjectName(QString::fromUtf8("mMaxCharAngleLabel"));
        sizePolicy1.setHeightForWidth(mMaxCharAngleLabel->sizePolicy().hasHeightForWidth());
        mMaxCharAngleLabel->setSizePolicy(sizePolicy1);

        gridLayout_22->addWidget(mMaxCharAngleLabel, 0, 0, 1, 6);


        verticalLayout_11->addWidget(mPlacementMaxCharAngleFrame);

        line = new QFrame(scrollAreaWidgetContents_4);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line);

        mPlacementDDGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mPlacementDDGroupBox->setObjectName(QString::fromUtf8("mPlacementDDGroupBox"));
        mPlacementDDGroupBox->setFlat(false);
        mPlacementDDGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("labelplacementgroup")));
        gridLayout_4 = new QGridLayout(mPlacementDDGroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(8, -1, 8, -1);
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        mCoordXLabel = new QLabel(mPlacementDDGroupBox);
        mCoordXLabel->setObjectName(QString::fromUtf8("mCoordXLabel"));
        sizePolicy8.setHeightForWidth(mCoordXLabel->sizePolicy().hasHeightForWidth());
        mCoordXLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_22->addWidget(mCoordXLabel);

        mCoordXDDBtn = new QgsDataDefinedButton(mPlacementDDGroupBox);
        mCoordXDDBtn->setObjectName(QString::fromUtf8("mCoordXDDBtn"));

        horizontalLayout_22->addWidget(mCoordXDDBtn);

        mCoordYLabel = new QLabel(mPlacementDDGroupBox);
        mCoordYLabel->setObjectName(QString::fromUtf8("mCoordYLabel"));
        sizePolicy8.setHeightForWidth(mCoordYLabel->sizePolicy().hasHeightForWidth());
        mCoordYLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_22->addWidget(mCoordYLabel);

        mCoordYDDBtn = new QgsDataDefinedButton(mPlacementDDGroupBox);
        mCoordYDDBtn->setObjectName(QString::fromUtf8("mCoordYDDBtn"));

        horizontalLayout_22->addWidget(mCoordYDDBtn);

        horizontalSpacer_22 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_22);


        gridLayout_4->addLayout(horizontalLayout_22, 0, 1, 1, 1);

        mCoordRotationLabel = new QLabel(mPlacementDDGroupBox);
        mCoordRotationLabel->setObjectName(QString::fromUtf8("mCoordRotationLabel"));

        gridLayout_4->addWidget(mCoordRotationLabel, 2, 0, 1, 1);

        mCoordLabel = new QLabel(mPlacementDDGroupBox);
        mCoordLabel->setObjectName(QString::fromUtf8("mCoordLabel"));

        gridLayout_4->addWidget(mCoordLabel, 0, 0, 1, 1);

        mCoordAlignmentLabel = new QLabel(mPlacementDDGroupBox);
        mCoordAlignmentLabel->setObjectName(QString::fromUtf8("mCoordAlignmentLabel"));

        gridLayout_4->addWidget(mCoordAlignmentLabel, 1, 0, 1, 1);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        mCoordRotationDDBtn = new QgsDataDefinedButton(mPlacementDDGroupBox);
        mCoordRotationDDBtn->setObjectName(QString::fromUtf8("mCoordRotationDDBtn"));

        horizontalLayout_25->addWidget(mCoordRotationDDBtn);

        chkPreserveRotation = new QCheckBox(mPlacementDDGroupBox);
        chkPreserveRotation->setObjectName(QString::fromUtf8("chkPreserveRotation"));
        chkPreserveRotation->setStyleSheet(QString::fromUtf8("margin-left: 12px; margin-top: 3px;"));
        chkPreserveRotation->setChecked(true);

        horizontalLayout_25->addWidget(chkPreserveRotation);


        gridLayout_4->addLayout(horizontalLayout_25, 2, 1, 1, 1);

        mCoordAlignmentFrame = new QFrame(mPlacementDDGroupBox);
        mCoordAlignmentFrame->setObjectName(QString::fromUtf8("mCoordAlignmentFrame"));
        horizontalLayout_27 = new QHBoxLayout(mCoordAlignmentFrame);
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        mCoordAlignmentHLabel = new QLabel(mCoordAlignmentFrame);
        mCoordAlignmentHLabel->setObjectName(QString::fromUtf8("mCoordAlignmentHLabel"));
        sizePolicy8.setHeightForWidth(mCoordAlignmentHLabel->sizePolicy().hasHeightForWidth());
        mCoordAlignmentHLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_27->addWidget(mCoordAlignmentHLabel);

        mCoordAlignmentHDDBtn = new QgsDataDefinedButton(mCoordAlignmentFrame);
        mCoordAlignmentHDDBtn->setObjectName(QString::fromUtf8("mCoordAlignmentHDDBtn"));

        horizontalLayout_27->addWidget(mCoordAlignmentHDDBtn);

        mCoordAlignmentVLabel = new QLabel(mCoordAlignmentFrame);
        mCoordAlignmentVLabel->setObjectName(QString::fromUtf8("mCoordAlignmentVLabel"));
        sizePolicy8.setHeightForWidth(mCoordAlignmentVLabel->sizePolicy().hasHeightForWidth());
        mCoordAlignmentVLabel->setSizePolicy(sizePolicy8);

        horizontalLayout_27->addWidget(mCoordAlignmentVLabel);

        mCoordAlignmentVDDBtn = new QgsDataDefinedButton(mCoordAlignmentFrame);
        mCoordAlignmentVDDBtn->setObjectName(QString::fromUtf8("mCoordAlignmentVDDBtn"));

        horizontalLayout_27->addWidget(mCoordAlignmentVDDBtn);

        horizontalSpacer_21 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_21);


        gridLayout_4->addWidget(mCoordAlignmentFrame, 1, 1, 1, 1);


        verticalLayout_11->addWidget(mPlacementDDGroupBox);

        mPriorityGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mPriorityGrpBx->setObjectName(QString::fromUtf8("mPriorityGrpBx"));
        mPriorityGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("labelplacementgroup")));
        horizontalLayout_9 = new QHBoxLayout(mPriorityGrpBx);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(8, -1, 8, -1);
        label_34 = new QLabel(mPriorityGrpBx);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_9->addWidget(label_34);

        mPrioritySlider = new QSlider(mPriorityGrpBx);
        mPrioritySlider->setObjectName(QString::fromUtf8("mPrioritySlider"));
        mPrioritySlider->setMaximum(10);
        mPrioritySlider->setValue(5);
        mPrioritySlider->setOrientation(Qt::Horizontal);
        mPrioritySlider->setTickPosition(QSlider::TicksBelow);
        mPrioritySlider->setTickInterval(1);

        horizontalLayout_9->addWidget(mPrioritySlider);

        label_35 = new QLabel(mPriorityGrpBx);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        horizontalLayout_9->addWidget(label_35);

        mPriorityDDBtn = new QgsDataDefinedButton(mPriorityGrpBx);
        mPriorityDDBtn->setObjectName(QString::fromUtf8("mPriorityDDBtn"));

        horizontalLayout_9->addWidget(mPriorityDDBtn);


        verticalLayout_11->addWidget(mPriorityGrpBx);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        scrollArea_3->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_10->addWidget(scrollArea_3);

        mLabelStackedWidget->addWidget(mLabelPage_Placement);
        mLabelPage_Rendering = new QWidget();
        mLabelPage_Rendering->setObjectName(QString::fromUtf8("mLabelPage_Rendering"));
        verticalLayout_13 = new QVBoxLayout(mLabelPage_Rendering);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_39 = new QLabel(mLabelPage_Rendering);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setStyleSheet(QString::fromUtf8("text-decoration: underline;"));

        verticalLayout_13->addWidget(label_39);

        scrollArea_4 = new QScrollArea(mLabelPage_Rendering);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, -398, 578, 799));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 6, -1);
        mRenderingLabelGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mRenderingLabelGrpBx->setObjectName(QString::fromUtf8("mRenderingLabelGrpBx"));
        mRenderingLabelGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("labelrenderinggroup")));
        verticalLayout_16 = new QVBoxLayout(mRenderingLabelGrpBx);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(8, -1, 8, -1);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(6);
        mScaleBasedVisibilityChkBx = new QCheckBox(mRenderingLabelGrpBx);
        mScaleBasedVisibilityChkBx->setObjectName(QString::fromUtf8("mScaleBasedVisibilityChkBx"));
        sizePolicy12.setHeightForWidth(mScaleBasedVisibilityChkBx->sizePolicy().hasHeightForWidth());
        mScaleBasedVisibilityChkBx->setSizePolicy(sizePolicy12);

        gridLayout_9->addWidget(mScaleBasedVisibilityChkBx, 0, 0, 1, 1);

        mScaleBasedVisibilityDDBtn = new QgsDataDefinedButton(mRenderingLabelGrpBx);
        mScaleBasedVisibilityDDBtn->setObjectName(QString::fromUtf8("mScaleBasedVisibilityDDBtn"));

        gridLayout_9->addWidget(mScaleBasedVisibilityDDBtn, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        mScaleBasedVisibilityFrame = new QFrame(mRenderingLabelGrpBx);
        mScaleBasedVisibilityFrame->setObjectName(QString::fromUtf8("mScaleBasedVisibilityFrame"));
        mScaleBasedVisibilityFrame->setFrameShape(QFrame::NoFrame);
        gridLayout_2 = new QGridLayout(mScaleBasedVisibilityFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(20, 0, 0, 0);
        mScaleBasedVisibilityMinSpnBx = new QgsSpinBox(mScaleBasedVisibilityFrame);
        mScaleBasedVisibilityMinSpnBx->setObjectName(QString::fromUtf8("mScaleBasedVisibilityMinSpnBx"));
        sizePolicy2.setHeightForWidth(mScaleBasedVisibilityMinSpnBx->sizePolicy().hasHeightForWidth());
        mScaleBasedVisibilityMinSpnBx->setSizePolicy(sizePolicy2);
        mScaleBasedVisibilityMinSpnBx->setMinimum(-999999999);
        mScaleBasedVisibilityMinSpnBx->setMaximum(999999999);
        mScaleBasedVisibilityMinSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mScaleBasedVisibilityMinSpnBx, 0, 0, 1, 1);

        mScaleBasedVisibilityMinDDBtn = new QgsDataDefinedButton(mScaleBasedVisibilityFrame);
        mScaleBasedVisibilityMinDDBtn->setObjectName(QString::fromUtf8("mScaleBasedVisibilityMinDDBtn"));

        gridLayout_2->addWidget(mScaleBasedVisibilityMinDDBtn, 0, 1, 1, 1);

        mScaleBasedVisibilityMaxSpnBx = new QgsSpinBox(mScaleBasedVisibilityFrame);
        mScaleBasedVisibilityMaxSpnBx->setObjectName(QString::fromUtf8("mScaleBasedVisibilityMaxSpnBx"));
        sizePolicy2.setHeightForWidth(mScaleBasedVisibilityMaxSpnBx->sizePolicy().hasHeightForWidth());
        mScaleBasedVisibilityMaxSpnBx->setSizePolicy(sizePolicy2);
        mScaleBasedVisibilityMaxSpnBx->setMinimum(-999999999);
        mScaleBasedVisibilityMaxSpnBx->setMaximum(999999999);
        mScaleBasedVisibilityMaxSpnBx->setValue(10000000);
        mScaleBasedVisibilityMaxSpnBx->setProperty("showClearButton", QVariant(false));

        gridLayout_2->addWidget(mScaleBasedVisibilityMaxSpnBx, 1, 0, 1, 1);

        mScaleBasedVisibilityMaxDDBtn = new QgsDataDefinedButton(mScaleBasedVisibilityFrame);
        mScaleBasedVisibilityMaxDDBtn->setObjectName(QString::fromUtf8("mScaleBasedVisibilityMaxDDBtn"));

        gridLayout_2->addWidget(mScaleBasedVisibilityMaxDDBtn, 1, 1, 1, 1);


        gridLayout_9->addWidget(mScaleBasedVisibilityFrame, 1, 0, 1, 3);


        verticalLayout_16->addLayout(gridLayout_9);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        gridLayout_16->setVerticalSpacing(6);
        mFontLimitPixelChkBox = new QCheckBox(mRenderingLabelGrpBx);
        mFontLimitPixelChkBox->setObjectName(QString::fromUtf8("mFontLimitPixelChkBox"));
        sizePolicy12.setHeightForWidth(mFontLimitPixelChkBox->sizePolicy().hasHeightForWidth());
        mFontLimitPixelChkBox->setSizePolicy(sizePolicy12);

        gridLayout_16->addWidget(mFontLimitPixelChkBox, 0, 0, 1, 1);

        mFontLimitPixelDDBtn = new QgsDataDefinedButton(mRenderingLabelGrpBx);
        mFontLimitPixelDDBtn->setObjectName(QString::fromUtf8("mFontLimitPixelDDBtn"));

        gridLayout_16->addWidget(mFontLimitPixelDDBtn, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        mFontLimitPixelFrame = new QFrame(mRenderingLabelGrpBx);
        mFontLimitPixelFrame->setObjectName(QString::fromUtf8("mFontLimitPixelFrame"));
        mFontLimitPixelFrame->setFrameShape(QFrame::NoFrame);
        gridLayout_32 = new QGridLayout(mFontLimitPixelFrame);
        gridLayout_32->setSpacing(6);
        gridLayout_32->setContentsMargins(11, 11, 11, 11);
        gridLayout_32->setObjectName(QString::fromUtf8("gridLayout_32"));
        gridLayout_32->setVerticalSpacing(6);
        gridLayout_32->setContentsMargins(20, 0, 0, 0);
        mFontMinPixelSpinBox = new QgsSpinBox(mFontLimitPixelFrame);
        mFontMinPixelSpinBox->setObjectName(QString::fromUtf8("mFontMinPixelSpinBox"));
        sizePolicy2.setHeightForWidth(mFontMinPixelSpinBox->sizePolicy().hasHeightForWidth());
        mFontMinPixelSpinBox->setSizePolicy(sizePolicy2);
        mFontMinPixelSpinBox->setMinimum(1);
        mFontMinPixelSpinBox->setMaximum(1000);
        mFontMinPixelSpinBox->setValue(3);
        mFontMinPixelSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_32->addWidget(mFontMinPixelSpinBox, 0, 0, 1, 1);

        mFontMinPixelDDBtn = new QgsDataDefinedButton(mFontLimitPixelFrame);
        mFontMinPixelDDBtn->setObjectName(QString::fromUtf8("mFontMinPixelDDBtn"));

        gridLayout_32->addWidget(mFontMinPixelDDBtn, 0, 1, 1, 1);

        mFontMaxPixelSpinBox = new QgsSpinBox(mFontLimitPixelFrame);
        mFontMaxPixelSpinBox->setObjectName(QString::fromUtf8("mFontMaxPixelSpinBox"));
        sizePolicy2.setHeightForWidth(mFontMaxPixelSpinBox->sizePolicy().hasHeightForWidth());
        mFontMaxPixelSpinBox->setSizePolicy(sizePolicy2);
        mFontMaxPixelSpinBox->setMinimum(1);
        mFontMaxPixelSpinBox->setMaximum(10000);
        mFontMaxPixelSpinBox->setValue(10000);
        mFontMaxPixelSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_32->addWidget(mFontMaxPixelSpinBox, 1, 0, 1, 1);

        mFontMaxPixelDDBtn = new QgsDataDefinedButton(mFontLimitPixelFrame);
        mFontMaxPixelDDBtn->setObjectName(QString::fromUtf8("mFontMaxPixelDDBtn"));

        gridLayout_32->addWidget(mFontMaxPixelDDBtn, 1, 1, 1, 1);


        gridLayout_16->addWidget(mFontLimitPixelFrame, 1, 0, 1, 3);


        verticalLayout_16->addLayout(gridLayout_16);

        line_2 = new QFrame(mRenderingLabelGrpBx);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_16->addWidget(line_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_16 = new QLabel(mRenderingLabelGrpBx);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_8->addWidget(label_16);

        mZIndexSpinBox = new QgsDoubleSpinBox(mRenderingLabelGrpBx);
        mZIndexSpinBox->setObjectName(QString::fromUtf8("mZIndexSpinBox"));
        mZIndexSpinBox->setMinimum(-1e+07);
        mZIndexSpinBox->setMaximum(1e+07);

        horizontalLayout_8->addWidget(mZIndexSpinBox);

        mZIndexDDBtn = new QgsDataDefinedButton(mRenderingLabelGrpBx);
        mZIndexDDBtn->setObjectName(QString::fromUtf8("mZIndexDDBtn"));

        horizontalLayout_8->addWidget(mZIndexDDBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout_16->addLayout(horizontalLayout_8);

        mPalShowAllLabelsForLayerChkBx = new QCheckBox(mRenderingLabelGrpBx);
        mPalShowAllLabelsForLayerChkBx->setObjectName(QString::fromUtf8("mPalShowAllLabelsForLayerChkBx"));

        verticalLayout_16->addWidget(mPalShowAllLabelsForLayerChkBx);

        mLabelRenderingDDFrame = new QFrame(mRenderingLabelGrpBx);
        mLabelRenderingDDFrame->setObjectName(QString::fromUtf8("mLabelRenderingDDFrame"));
        mLabelRenderingDDFrame->setFrameShape(QFrame::NoFrame);
        mLabelRenderingDDFrame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(mLabelRenderingDDFrame);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(6);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_23 = new QSpacerItem(195, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_23, 1, 6, 1, 1);

        mShowLabelDDBtn = new QgsDataDefinedButton(mLabelRenderingDDFrame);
        mShowLabelDDBtn->setObjectName(QString::fromUtf8("mShowLabelDDBtn"));

        gridLayout_5->addWidget(mShowLabelDDBtn, 1, 2, 1, 1);

        mAlwaysShowDDBtn = new QgsDataDefinedButton(mLabelRenderingDDFrame);
        mAlwaysShowDDBtn->setObjectName(QString::fromUtf8("mAlwaysShowDDBtn"));

        gridLayout_5->addWidget(mAlwaysShowDDBtn, 1, 5, 1, 1);

        mAlwaysShowLabel = new QLabel(mLabelRenderingDDFrame);
        mAlwaysShowLabel->setObjectName(QString::fromUtf8("mAlwaysShowLabel"));
        sizePolicy8.setHeightForWidth(mAlwaysShowLabel->sizePolicy().hasHeightForWidth());
        mAlwaysShowLabel->setSizePolicy(sizePolicy8);

        gridLayout_5->addWidget(mAlwaysShowLabel, 1, 4, 1, 1);

        mShowLabelLabel = new QLabel(mLabelRenderingDDFrame);
        mShowLabelLabel->setObjectName(QString::fromUtf8("mShowLabelLabel"));
        mShowLabelLabel->setEnabled(true);
        sizePolicy8.setHeightForWidth(mShowLabelLabel->sizePolicy().hasHeightForWidth());
        mShowLabelLabel->setSizePolicy(sizePolicy8);

        gridLayout_5->addWidget(mShowLabelLabel, 1, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_10, 1, 0, 1, 1);

        line_4 = new QFrame(mLabelRenderingDDFrame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_4, 1, 3, 1, 1);

        label_3 = new QLabel(mLabelRenderingDDFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 0, 0, 1, 7);


        verticalLayout_16->addWidget(mLabelRenderingDDFrame);

        mUpsidedownFrame = new QFrame(mRenderingLabelGrpBx);
        mUpsidedownFrame->setObjectName(QString::fromUtf8("mUpsidedownFrame"));
        gridLayout = new QGridLayout(mUpsidedownFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mUpsidedownRadioAll = new QRadioButton(mUpsidedownFrame);
        mUpsidedownRadioAll->setObjectName(QString::fromUtf8("mUpsidedownRadioAll"));

        gridLayout->addWidget(mUpsidedownRadioAll, 1, 3, 1, 1);

        mUpsidedownRadioOff = new QRadioButton(mUpsidedownFrame);
        mUpsidedownRadioOff->setObjectName(QString::fromUtf8("mUpsidedownRadioOff"));
        sizePolicy12.setHeightForWidth(mUpsidedownRadioOff->sizePolicy().hasHeightForWidth());
        mUpsidedownRadioOff->setSizePolicy(sizePolicy12);
        mUpsidedownRadioOff->setChecked(true);

        gridLayout->addWidget(mUpsidedownRadioOff, 1, 1, 1, 1);

        mUpsidedownRadioDefined = new QRadioButton(mUpsidedownFrame);
        mUpsidedownRadioDefined->setObjectName(QString::fromUtf8("mUpsidedownRadioDefined"));
        sizePolicy12.setHeightForWidth(mUpsidedownRadioDefined->sizePolicy().hasHeightForWidth());
        mUpsidedownRadioDefined->setSizePolicy(sizePolicy12);

        gridLayout->addWidget(mUpsidedownRadioDefined, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        mUpsidedownLabel = new QLabel(mUpsidedownFrame);
        mUpsidedownLabel->setObjectName(QString::fromUtf8("mUpsidedownLabel"));

        gridLayout->addWidget(mUpsidedownLabel, 0, 0, 1, 4);


        verticalLayout_16->addWidget(mUpsidedownFrame);


        verticalLayout_8->addWidget(mRenderingLabelGrpBx);

        mRenderingFeaturesGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mRenderingFeaturesGrpBx->setObjectName(QString::fromUtf8("mRenderingFeaturesGrpBx"));
        mRenderingFeaturesGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("labelrenderinggroup")));
        verticalLayout = new QVBoxLayout(mRenderingFeaturesGrpBx);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(8, -1, 8, -1);
        chkLabelPerFeaturePart = new QCheckBox(mRenderingFeaturesGrpBx);
        chkLabelPerFeaturePart->setObjectName(QString::fromUtf8("chkLabelPerFeaturePart"));

        verticalLayout->addWidget(chkLabelPerFeaturePart);

        chkMergeLines = new QCheckBox(mRenderingFeaturesGrpBx);
        chkMergeLines->setObjectName(QString::fromUtf8("chkMergeLines"));

        verticalLayout->addWidget(chkMergeLines);

        mLimitLabelFrame = new QFrame(mRenderingFeaturesGrpBx);
        mLimitLabelFrame->setObjectName(QString::fromUtf8("mLimitLabelFrame"));
        gridLayout_20 = new QGridLayout(mLimitLabelFrame);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setVerticalSpacing(6);
        gridLayout_20->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_8 = new QSpacerItem(8, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_20->addItem(verticalSpacer_8, 1, 0, 1, 1);

        mLimitLabelSpinBox = new QgsSpinBox(mLimitLabelFrame);
        mLimitLabelSpinBox->setObjectName(QString::fromUtf8("mLimitLabelSpinBox"));
        mLimitLabelSpinBox->setEnabled(false);
        mLimitLabelSpinBox->setMinimum(0);
        mLimitLabelSpinBox->setMaximum(999999999);
        mLimitLabelSpinBox->setValue(2000);
        mLimitLabelSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_20->addWidget(mLimitLabelSpinBox, 1, 1, 1, 1);

        mLimitLabelChkBox = new QCheckBox(mLimitLabelFrame);
        mLimitLabelChkBox->setObjectName(QString::fromUtf8("mLimitLabelChkBox"));

        gridLayout_20->addWidget(mLimitLabelChkBox, 0, 0, 1, 2);


        verticalLayout->addWidget(mLimitLabelFrame);

        mMinSizeFrame = new QFrame(mRenderingFeaturesGrpBx);
        mMinSizeFrame->setObjectName(QString::fromUtf8("mMinSizeFrame"));
        gridLayout_21 = new QGridLayout(mMinSizeFrame);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setVerticalSpacing(6);
        gridLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_20 = new QSpacerItem(8, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_20, 1, 0, 1, 1);

        mMinSizeSpinBox = new QgsDoubleSpinBox(mMinSizeFrame);
        mMinSizeSpinBox->setObjectName(QString::fromUtf8("mMinSizeSpinBox"));

        gridLayout_21->addWidget(mMinSizeSpinBox, 1, 1, 1, 1);

        label_19 = new QLabel(mMinSizeFrame);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_21->addWidget(label_19, 0, 0, 1, 2);


        verticalLayout->addWidget(mMinSizeFrame);

        mPolygonFeatureOptionsFrame = new QFrame(mRenderingFeaturesGrpBx);
        mPolygonFeatureOptionsFrame->setObjectName(QString::fromUtf8("mPolygonFeatureOptionsFrame"));
        mPolygonFeatureOptionsFrame->setFrameShape(QFrame::NoFrame);
        mPolygonFeatureOptionsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(mPolygonFeatureOptionsFrame);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        mFitInsidePolygonCheckBox = new QCheckBox(mPolygonFeatureOptionsFrame);
        mFitInsidePolygonCheckBox->setObjectName(QString::fromUtf8("mFitInsidePolygonCheckBox"));

        horizontalLayout_12->addWidget(mFitInsidePolygonCheckBox);


        verticalLayout->addWidget(mPolygonFeatureOptionsFrame);


        verticalLayout_8->addWidget(mRenderingFeaturesGrpBx);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        mObstaclesGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_5);
        mObstaclesGroupBox->setObjectName(QString::fromUtf8("mObstaclesGroupBox"));
        verticalLayout_17 = new QVBoxLayout(mObstaclesGroupBox);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        mChkNoObstacle = new QCheckBox(mObstaclesGroupBox);
        mChkNoObstacle->setObjectName(QString::fromUtf8("mChkNoObstacle"));
        mChkNoObstacle->setEnabled(true);

        horizontalLayout_16->addWidget(mChkNoObstacle);

        mIsObstacleDDBtn = new QgsDataDefinedButton(mObstaclesGroupBox);
        mIsObstacleDDBtn->setObjectName(QString::fromUtf8("mIsObstacleDDBtn"));

        horizontalLayout_16->addWidget(mIsObstacleDDBtn);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_24);


        verticalLayout_17->addLayout(horizontalLayout_16);

        mObstaclePriorityFrame = new QFrame(mObstaclesGroupBox);
        mObstaclePriorityFrame->setObjectName(QString::fromUtf8("mObstaclePriorityFrame"));
        horizontalLayout_18 = new QHBoxLayout(mObstaclePriorityFrame);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(mObstaclePriorityFrame);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_18->addWidget(label_40);

        mObstacleFactorSlider = new QSlider(mObstaclePriorityFrame);
        mObstacleFactorSlider->setObjectName(QString::fromUtf8("mObstacleFactorSlider"));
        mObstacleFactorSlider->setMinimum(0);
        mObstacleFactorSlider->setMaximum(100);
        mObstacleFactorSlider->setValue(50);
        mObstacleFactorSlider->setOrientation(Qt::Horizontal);
        mObstacleFactorSlider->setTickPosition(QSlider::TicksBelow);
        mObstacleFactorSlider->setTickInterval(10);

        horizontalLayout_18->addWidget(mObstacleFactorSlider);

        label_41 = new QLabel(mObstaclePriorityFrame);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout_18->addWidget(label_41);

        mObstacleFactorDDBtn = new QgsDataDefinedButton(mObstaclePriorityFrame);
        mObstacleFactorDDBtn->setObjectName(QString::fromUtf8("mObstacleFactorDDBtn"));

        horizontalLayout_18->addWidget(mObstacleFactorDDBtn);


        verticalLayout_17->addWidget(mObstaclePriorityFrame);

        mPolygonObstacleTypeFrame = new QFrame(mObstaclesGroupBox);
        mPolygonObstacleTypeFrame->setObjectName(QString::fromUtf8("mPolygonObstacleTypeFrame"));
        mPolygonObstacleTypeFrame->setFrameShape(QFrame::NoFrame);
        mPolygonObstacleTypeFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(mPolygonObstacleTypeFrame);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(mPolygonObstacleTypeFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_11->addWidget(label_14);

        mObstacleTypeComboBox = new QComboBox(mPolygonObstacleTypeFrame);
        mObstacleTypeComboBox->setObjectName(QString::fromUtf8("mObstacleTypeComboBox"));

        horizontalLayout_11->addWidget(mObstacleTypeComboBox);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_15);


        verticalLayout_17->addWidget(mPolygonObstacleTypeFrame);


        verticalLayout_8->addWidget(mObstaclesGroupBox);

        scrollArea_4->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_13->addWidget(scrollArea_4);

        mLabelStackedWidget->addWidget(mLabelPage_Rendering);

        verticalLayout_3->addWidget(mLabelStackedWidget);

        mLabelingOptionsSplitter->addWidget(mLabelingOptionGroupsFrame);

        gridLayout_17->addWidget(mLabelingOptionsSplitter, 0, 0, 1, 1);

        mFontPreviewSplitter->addWidget(mLabelingOptionsFrame);

        gridLayout_23->addWidget(mFontPreviewSplitter, 0, 0, 1, 1);


        gridLayout_8->addWidget(mLabelingFrame, 6, 0, 1, 1);

        frameLabelWith = new QFrame(QgsLabelingGuiBase);
        frameLabelWith->setObjectName(QString::fromUtf8("frameLabelWith"));
        horizontalLayout_3 = new QHBoxLayout(frameLabelWith);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(frameLabelWith);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);

        mFieldExpressionWidget = new QgsFieldExpressionWidget(frameLabelWith);
        mFieldExpressionWidget->setObjectName(QString::fromUtf8("mFieldExpressionWidget"));
        sizePolicy1.setHeightForWidth(mFieldExpressionWidget->sizePolicy().hasHeightForWidth());
        mFieldExpressionWidget->setSizePolicy(sizePolicy1);
        mFieldExpressionWidget->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(mFieldExpressionWidget);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout_8->addWidget(frameLabelWith, 5, 0, 1, 1);

        QWidget::setTabOrder(scrollArea_mPreview, mPreviewTextEdit);
        QWidget::setTabOrder(mPreviewTextEdit, mPreviewTextBtn);
        QWidget::setTabOrder(mPreviewTextBtn, mPreviewSizeSlider);
        QWidget::setTabOrder(mPreviewSizeSlider, mPreviewBackgroundBtn);
        QWidget::setTabOrder(mPreviewBackgroundBtn, mLabelingOptionsListWidget);
        QWidget::setTabOrder(mLabelingOptionsListWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, mFontFamilyCmbBx);
        QWidget::setTabOrder(mFontFamilyCmbBx, mFontDDBtn);
        QWidget::setTabOrder(mFontDDBtn, mFontStyleComboBox);
        QWidget::setTabOrder(mFontStyleComboBox, mFontStyleDDBtn);
        QWidget::setTabOrder(mFontStyleDDBtn, mFontUnderlineBtn);
        QWidget::setTabOrder(mFontUnderlineBtn, mFontUnderlineDDBtn);
        QWidget::setTabOrder(mFontUnderlineDDBtn, mFontStrikethroughBtn);
        QWidget::setTabOrder(mFontStrikethroughBtn, mFontStrikeoutDDBtn);
        QWidget::setTabOrder(mFontStrikeoutDDBtn, mFontBoldBtn);
        QWidget::setTabOrder(mFontBoldBtn, mFontBoldDDBtn);
        QWidget::setTabOrder(mFontBoldDDBtn, mFontItalicBtn);
        QWidget::setTabOrder(mFontItalicBtn, mFontItalicDDBtn);
        QWidget::setTabOrder(mFontItalicDDBtn, mFontSizeSpinBox);
        QWidget::setTabOrder(mFontSizeSpinBox, mFontSizeDDBtn);
        QWidget::setTabOrder(mFontSizeDDBtn, mFontUnitsDDBtn);
        QWidget::setTabOrder(mFontUnitsDDBtn, btnTextColor);
        QWidget::setTabOrder(btnTextColor, mFontColorDDBtn);
        QWidget::setTabOrder(mFontColorDDBtn, mFontTranspSlider);
        QWidget::setTabOrder(mFontTranspSlider, mFontTranspSpinBox);
        QWidget::setTabOrder(mFontTranspSpinBox, mFontTranspDDBtn);
        QWidget::setTabOrder(mFontTranspDDBtn, mFontCapitalsComboBox);
        QWidget::setTabOrder(mFontCapitalsComboBox, mFontCaseDDBtn);
        QWidget::setTabOrder(mFontCaseDDBtn, mFontLetterSpacingSpinBox);
        QWidget::setTabOrder(mFontLetterSpacingSpinBox, mFontLetterSpacingDDBtn);
        QWidget::setTabOrder(mFontLetterSpacingDDBtn, mFontWordSpacingSpinBox);
        QWidget::setTabOrder(mFontWordSpacingSpinBox, mFontWordSpacingDDBtn);
        QWidget::setTabOrder(mFontWordSpacingDDBtn, comboBlendMode);
        QWidget::setTabOrder(comboBlendMode, mFontBlendModeDDBtn);
        QWidget::setTabOrder(mFontBlendModeDDBtn, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, wrapCharacterEdit);
        QWidget::setTabOrder(wrapCharacterEdit, mWrapCharDDBtn);
        QWidget::setTabOrder(mWrapCharDDBtn, mFontLineHeightSpinBox);
        QWidget::setTabOrder(mFontLineHeightSpinBox, mFontLineHeightDDBtn);
        QWidget::setTabOrder(mFontLineHeightDDBtn, mFontMultiLineAlignComboBox);
        QWidget::setTabOrder(mFontMultiLineAlignComboBox, mFontMultiLineAlignDDBtn);
        QWidget::setTabOrder(mFontMultiLineAlignDDBtn, mDirectSymbChkBx);
        QWidget::setTabOrder(mDirectSymbChkBx, mDirectSymbDDBtn);
        QWidget::setTabOrder(mDirectSymbDDBtn, mDirectSymbLeftLineEdit);
        QWidget::setTabOrder(mDirectSymbLeftLineEdit, mDirectSymbLeftToolBtn);
        QWidget::setTabOrder(mDirectSymbLeftToolBtn, mDirectSymbLeftDDBtn);
        QWidget::setTabOrder(mDirectSymbLeftDDBtn, mDirectSymbRightLineEdit);
        QWidget::setTabOrder(mDirectSymbRightLineEdit, mDirectSymbRightToolBtn);
        QWidget::setTabOrder(mDirectSymbRightToolBtn, mDirectSymbRightDDBtn);
        QWidget::setTabOrder(mDirectSymbRightDDBtn, mDirectSymbRadioBtnLR);
        QWidget::setTabOrder(mDirectSymbRadioBtnLR, mDirectSymbRadioBtnAbove);
        QWidget::setTabOrder(mDirectSymbRadioBtnAbove, mDirectSymbRadioBtnBelow);
        QWidget::setTabOrder(mDirectSymbRadioBtnBelow, mDirectSymbPlacementDDBtn);
        QWidget::setTabOrder(mDirectSymbPlacementDDBtn, mDirectSymbRevChkBx);
        QWidget::setTabOrder(mDirectSymbRevChkBx, mDirectSymbRevDDBtn);
        QWidget::setTabOrder(mDirectSymbRevDDBtn, mFormatNumChkBx);
        QWidget::setTabOrder(mFormatNumChkBx, mFormatNumDDBtn);
        QWidget::setTabOrder(mFormatNumDDBtn, mFormatNumDecimalsSpnBx);
        QWidget::setTabOrder(mFormatNumDecimalsSpnBx, mFormatNumDecimalsDDBtn);
        QWidget::setTabOrder(mFormatNumDecimalsDDBtn, mFormatNumPlusSignChkBx);
        QWidget::setTabOrder(mFormatNumPlusSignChkBx, mFormatNumPlusSignDDBtn);
        QWidget::setTabOrder(mFormatNumPlusSignDDBtn, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, mBufferDrawChkBx);
        QWidget::setTabOrder(mBufferDrawChkBx, mBufferDrawDDBtn);
        QWidget::setTabOrder(mBufferDrawDDBtn, spinBufferSize);
        QWidget::setTabOrder(spinBufferSize, mBufferSizeDDBtn);
        QWidget::setTabOrder(mBufferSizeDDBtn, mBufferUnitsDDBtn);
        QWidget::setTabOrder(mBufferUnitsDDBtn, btnBufferColor);
        QWidget::setTabOrder(btnBufferColor, mBufferColorDDBtn);
        QWidget::setTabOrder(mBufferColorDDBtn, mBufferTranspFillChbx);
        QWidget::setTabOrder(mBufferTranspFillChbx, mBufferTranspSlider);
        QWidget::setTabOrder(mBufferTranspSlider, mBufferTranspSpinBox);
        QWidget::setTabOrder(mBufferTranspSpinBox, mBufferTranspDDBtn);
        QWidget::setTabOrder(mBufferTranspDDBtn, mBufferJoinStyleComboBox);
        QWidget::setTabOrder(mBufferJoinStyleComboBox, mBufferJoinStyleDDBtn);
        QWidget::setTabOrder(mBufferJoinStyleDDBtn, comboBufferBlendMode);
        QWidget::setTabOrder(comboBufferBlendMode, mBufferBlendModeDDBtn);
        QWidget::setTabOrder(mBufferBlendModeDDBtn, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mShapeDrawChkBx);
        QWidget::setTabOrder(mShapeDrawChkBx, mShapeDrawDDBtn);
        QWidget::setTabOrder(mShapeDrawDDBtn, mShapeTypeCmbBx);
        QWidget::setTabOrder(mShapeTypeCmbBx, mShapeTypeDDBtn);
        QWidget::setTabOrder(mShapeTypeDDBtn, mShapeSVGPathLineEdit);
        QWidget::setTabOrder(mShapeSVGPathLineEdit, mShapeSVGSelectorBtn);
        QWidget::setTabOrder(mShapeSVGSelectorBtn, mShapeSVGPathDDBtn);
        QWidget::setTabOrder(mShapeSVGPathDDBtn, mShapeSizeCmbBx);
        QWidget::setTabOrder(mShapeSizeCmbBx, mShapeSizeTypeDDBtn);
        QWidget::setTabOrder(mShapeSizeTypeDDBtn, mShapeSizeXSpnBx);
        QWidget::setTabOrder(mShapeSizeXSpnBx, mShapeSizeXDDBtn);
        QWidget::setTabOrder(mShapeSizeXDDBtn, mShapeSizeYSpnBx);
        QWidget::setTabOrder(mShapeSizeYSpnBx, mShapeSizeYDDBtn);
        QWidget::setTabOrder(mShapeSizeYDDBtn, mShapeSizeUnitsDDBtn);
        QWidget::setTabOrder(mShapeSizeUnitsDDBtn, mShapeRotationCmbBx);
        QWidget::setTabOrder(mShapeRotationCmbBx, mShapeRotationTypeDDBtn);
        QWidget::setTabOrder(mShapeRotationTypeDDBtn, mShapeRotationDblSpnBx);
        QWidget::setTabOrder(mShapeRotationDblSpnBx, mShapeRotationDDBtn);
        QWidget::setTabOrder(mShapeRotationDDBtn, mShapeOffsetXSpnBx);
        QWidget::setTabOrder(mShapeOffsetXSpnBx, mShapeOffsetYSpnBx);
        QWidget::setTabOrder(mShapeOffsetYSpnBx, mShapeOffsetDDBtn);
        QWidget::setTabOrder(mShapeOffsetDDBtn, mShapeOffsetUnitsDDBtn);
        QWidget::setTabOrder(mShapeOffsetUnitsDDBtn, mShapeRadiusXDbSpnBx);
        QWidget::setTabOrder(mShapeRadiusXDbSpnBx, mShapeRadiusYDbSpnBx);
        QWidget::setTabOrder(mShapeRadiusYDbSpnBx, mShapeRadiusDDBtn);
        QWidget::setTabOrder(mShapeRadiusDDBtn, mShapeRadiusUnitsDDBtn);
        QWidget::setTabOrder(mShapeRadiusUnitsDDBtn, mShapeTranspSlider);
        QWidget::setTabOrder(mShapeTranspSlider, mShapeTranspSpinBox);
        QWidget::setTabOrder(mShapeTranspSpinBox, mShapeTranspDDBtn);
        QWidget::setTabOrder(mShapeTranspDDBtn, mShapeBlendCmbBx);
        QWidget::setTabOrder(mShapeBlendCmbBx, mShapeBlendModeDDBtn);
        QWidget::setTabOrder(mShapeBlendModeDDBtn, mShapeSVGParamsBtn);
        QWidget::setTabOrder(mShapeSVGParamsBtn, mShapeFillColorBtn);
        QWidget::setTabOrder(mShapeFillColorBtn, mShapeFillColorDDBtn);
        QWidget::setTabOrder(mShapeFillColorDDBtn, mShapeBorderColorBtn);
        QWidget::setTabOrder(mShapeBorderColorBtn, mShapeBorderColorDDBtn);
        QWidget::setTabOrder(mShapeBorderColorDDBtn, mShapeBorderWidthSpnBx);
        QWidget::setTabOrder(mShapeBorderWidthSpnBx, mShapeBorderWidthDDBtn);
        QWidget::setTabOrder(mShapeBorderWidthDDBtn, mShapeBorderUnitsDDBtn);
        QWidget::setTabOrder(mShapeBorderUnitsDDBtn, mShapePenStyleCmbBx);
        QWidget::setTabOrder(mShapePenStyleCmbBx, mShapePenStyleDDBtn);
        QWidget::setTabOrder(mShapePenStyleDDBtn, scrollArea_8);
        QWidget::setTabOrder(scrollArea_8, mShadowDrawChkBx);
        QWidget::setTabOrder(mShadowDrawChkBx, mShadowDrawDDBtn);
        QWidget::setTabOrder(mShadowDrawDDBtn, mShadowUnderCmbBx);
        QWidget::setTabOrder(mShadowUnderCmbBx, mShadowUnderDDBtn);
        QWidget::setTabOrder(mShadowUnderDDBtn, mShadowOffsetAngleDial);
        QWidget::setTabOrder(mShadowOffsetAngleDial, mShadowOffsetAngleSpnBx);
        QWidget::setTabOrder(mShadowOffsetAngleSpnBx, mShadowOffsetAngleDDBtn);
        QWidget::setTabOrder(mShadowOffsetAngleDDBtn, mShadowOffsetSpnBx);
        QWidget::setTabOrder(mShadowOffsetSpnBx, mShadowOffsetDDBtn);
        QWidget::setTabOrder(mShadowOffsetDDBtn, mShadowOffsetUnitsDDBtn);
        QWidget::setTabOrder(mShadowOffsetUnitsDDBtn, mShadowOffsetGlobalChkBx);
        QWidget::setTabOrder(mShadowOffsetGlobalChkBx, mShadowRadiusDblSpnBx);
        QWidget::setTabOrder(mShadowRadiusDblSpnBx, mShadowRadiusDDBtn);
        QWidget::setTabOrder(mShadowRadiusDDBtn, mShadowRadiusUnitsDDBtn);
        QWidget::setTabOrder(mShadowRadiusUnitsDDBtn, mShadowRadiusAlphaChkBx);
        QWidget::setTabOrder(mShadowRadiusAlphaChkBx, mShadowTranspSlider);
        QWidget::setTabOrder(mShadowTranspSlider, mShadowTranspSpnBx);
        QWidget::setTabOrder(mShadowTranspSpnBx, mShadowTranspDDBtn);
        QWidget::setTabOrder(mShadowTranspDDBtn, mShadowScaleSpnBx);
        QWidget::setTabOrder(mShadowScaleSpnBx, mShadowScaleDDBtn);
        QWidget::setTabOrder(mShadowScaleDDBtn, mShadowColorBtn);
        QWidget::setTabOrder(mShadowColorBtn, mShadowColorDDBtn);
        QWidget::setTabOrder(mShadowColorDDBtn, mShadowBlendCmbBx);
        QWidget::setTabOrder(mShadowBlendCmbBx, mShadowBlendDDBtn);
        QWidget::setTabOrder(mShadowBlendDDBtn, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, radLineParallel);
        QWidget::setTabOrder(radLineParallel, radLineCurved);
        QWidget::setTabOrder(radLineCurved, radLineHorizontal);
        QWidget::setTabOrder(radLineHorizontal, radPredefinedOrder);
        QWidget::setTabOrder(radPredefinedOrder, radAroundPoint);
        QWidget::setTabOrder(radAroundPoint, radOverPoint);
        QWidget::setTabOrder(radOverPoint, radOverCentroid);
        QWidget::setTabOrder(radOverCentroid, radAroundCentroid);
        QWidget::setTabOrder(radAroundCentroid, radPolygonPerimeter);
        QWidget::setTabOrder(radPolygonPerimeter, radPolygonHorizontal);
        QWidget::setTabOrder(radPolygonHorizontal, radPolygonFree);
        QWidget::setTabOrder(radPolygonFree, chkLineAbove);
        QWidget::setTabOrder(chkLineAbove, chkLineOn);
        QWidget::setTabOrder(chkLineOn, chkLineBelow);
        QWidget::setTabOrder(chkLineBelow, chkLineOrientationDependent);
        QWidget::setTabOrder(chkLineOrientationDependent, mCentroidRadioVisible);
        QWidget::setTabOrder(mCentroidRadioVisible, mCentroidRadioWhole);
        QWidget::setTabOrder(mCentroidRadioWhole, mCentroidDDBtn);
        QWidget::setTabOrder(mCentroidDDBtn, mCentroidInsideCheckBox);
        QWidget::setTabOrder(mCentroidInsideCheckBox, mLineDistanceSpnBx);
        QWidget::setTabOrder(mLineDistanceSpnBx, mLineDistanceDDBtn);
        QWidget::setTabOrder(mLineDistanceDDBtn, mLineDistanceUnitDDBtn);
        QWidget::setTabOrder(mLineDistanceUnitDDBtn, mOffsetTypeComboBox);
        QWidget::setTabOrder(mOffsetTypeComboBox, mPointOffsetAboveLeft);
        QWidget::setTabOrder(mPointOffsetAboveLeft, mPointOffsetAbove);
        QWidget::setTabOrder(mPointOffsetAbove, mPointOffsetAboveRight);
        QWidget::setTabOrder(mPointOffsetAboveRight, mPointOffsetLeft);
        QWidget::setTabOrder(mPointOffsetLeft, mPointOffsetOver);
        QWidget::setTabOrder(mPointOffsetOver, mPointOffsetRight);
        QWidget::setTabOrder(mPointOffsetRight, mPointOffsetBelowLeft);
        QWidget::setTabOrder(mPointOffsetBelowLeft, mPointOffsetBelow);
        QWidget::setTabOrder(mPointOffsetBelow, mPointOffsetBelowRight);
        QWidget::setTabOrder(mPointOffsetBelowRight, mPointQuadOffsetDDBtn);
        QWidget::setTabOrder(mPointQuadOffsetDDBtn, mPointPositionOrderDDBtn);
        QWidget::setTabOrder(mPointPositionOrderDDBtn, mPointOffsetXSpinBox);
        QWidget::setTabOrder(mPointOffsetXSpinBox, mPointOffsetYSpinBox);
        QWidget::setTabOrder(mPointOffsetYSpinBox, mPointOffsetDDBtn);
        QWidget::setTabOrder(mPointOffsetDDBtn, mPointOffsetUnitsDDBtn);
        QWidget::setTabOrder(mPointOffsetUnitsDDBtn, mPointAngleSpinBox);
        QWidget::setTabOrder(mPointAngleSpinBox, mPointAngleDDBtn);
        QWidget::setTabOrder(mPointAngleDDBtn, mRepeatDistanceSpinBox);
        QWidget::setTabOrder(mRepeatDistanceSpinBox, mRepeatDistanceDDBtn);
        QWidget::setTabOrder(mRepeatDistanceDDBtn, mRepeatDistanceUnitDDBtn);
        QWidget::setTabOrder(mRepeatDistanceUnitDDBtn, mMaxCharAngleInDSpinBox);
        QWidget::setTabOrder(mMaxCharAngleInDSpinBox, mMaxCharAngleOutDSpinBox);
        QWidget::setTabOrder(mMaxCharAngleOutDSpinBox, mMaxCharAngleDDBtn);
        QWidget::setTabOrder(mMaxCharAngleDDBtn, mCoordXDDBtn);
        QWidget::setTabOrder(mCoordXDDBtn, mCoordYDDBtn);
        QWidget::setTabOrder(mCoordYDDBtn, mCoordAlignmentHDDBtn);
        QWidget::setTabOrder(mCoordAlignmentHDDBtn, mCoordAlignmentVDDBtn);
        QWidget::setTabOrder(mCoordAlignmentVDDBtn, mCoordRotationDDBtn);
        QWidget::setTabOrder(mCoordRotationDDBtn, chkPreserveRotation);
        QWidget::setTabOrder(chkPreserveRotation, mPrioritySlider);
        QWidget::setTabOrder(mPrioritySlider, mPriorityDDBtn);
        QWidget::setTabOrder(mPriorityDDBtn, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mScaleBasedVisibilityChkBx);
        QWidget::setTabOrder(mScaleBasedVisibilityChkBx, mScaleBasedVisibilityDDBtn);
        QWidget::setTabOrder(mScaleBasedVisibilityDDBtn, mScaleBasedVisibilityMinSpnBx);
        QWidget::setTabOrder(mScaleBasedVisibilityMinSpnBx, mScaleBasedVisibilityMinDDBtn);
        QWidget::setTabOrder(mScaleBasedVisibilityMinDDBtn, mScaleBasedVisibilityMaxSpnBx);
        QWidget::setTabOrder(mScaleBasedVisibilityMaxSpnBx, mScaleBasedVisibilityMaxDDBtn);
        QWidget::setTabOrder(mScaleBasedVisibilityMaxDDBtn, mFontLimitPixelChkBox);
        QWidget::setTabOrder(mFontLimitPixelChkBox, mFontLimitPixelDDBtn);
        QWidget::setTabOrder(mFontLimitPixelDDBtn, mFontMinPixelSpinBox);
        QWidget::setTabOrder(mFontMinPixelSpinBox, mFontMinPixelDDBtn);
        QWidget::setTabOrder(mFontMinPixelDDBtn, mFontMaxPixelSpinBox);
        QWidget::setTabOrder(mFontMaxPixelSpinBox, mFontMaxPixelDDBtn);
        QWidget::setTabOrder(mFontMaxPixelDDBtn, mZIndexSpinBox);
        QWidget::setTabOrder(mZIndexSpinBox, mZIndexDDBtn);
        QWidget::setTabOrder(mZIndexDDBtn, mPalShowAllLabelsForLayerChkBx);
        QWidget::setTabOrder(mPalShowAllLabelsForLayerChkBx, mShowLabelDDBtn);
        QWidget::setTabOrder(mShowLabelDDBtn, mAlwaysShowDDBtn);
        QWidget::setTabOrder(mAlwaysShowDDBtn, mUpsidedownRadioOff);
        QWidget::setTabOrder(mUpsidedownRadioOff, mUpsidedownRadioDefined);
        QWidget::setTabOrder(mUpsidedownRadioDefined, mUpsidedownRadioAll);
        QWidget::setTabOrder(mUpsidedownRadioAll, chkLabelPerFeaturePart);
        QWidget::setTabOrder(chkLabelPerFeaturePart, chkMergeLines);
        QWidget::setTabOrder(chkMergeLines, mLimitLabelChkBox);
        QWidget::setTabOrder(mLimitLabelChkBox, mLimitLabelSpinBox);
        QWidget::setTabOrder(mLimitLabelSpinBox, mMinSizeSpinBox);
        QWidget::setTabOrder(mMinSizeSpinBox, mFitInsidePolygonCheckBox);
        QWidget::setTabOrder(mFitInsidePolygonCheckBox, mChkNoObstacle);
        QWidget::setTabOrder(mChkNoObstacle, mIsObstacleDDBtn);
        QWidget::setTabOrder(mIsObstacleDDBtn, mObstacleFactorSlider);
        QWidget::setTabOrder(mObstacleFactorSlider, mObstacleFactorDDBtn);
        QWidget::setTabOrder(mObstacleFactorDDBtn, mObstacleTypeComboBox);

        retranslateUi(QgsLabelingGuiBase);
        QObject::connect(mLabelingOptionsListWidget, SIGNAL(currentRowChanged(int)), mLabelStackedWidget, SLOT(setCurrentIndex(int)));

        mLabelStackedWidget->setCurrentIndex(0);
        stackedPlacement->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsLabelingGuiBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelingGuiBase)
    {
        QgsLabelingGuiBase->setWindowTitle(QApplication::translate("QgsLabelingGuiBase", "Layer labeling settings", 0, QApplication::UnicodeUTF8));
        groupBox_mPreview->setTitle(QApplication::translate("QgsLabelingGuiBase", "Text/Buffer Sample", 0, QApplication::UnicodeUTF8));
        lblFontPreview->setText(QApplication::translate("QgsLabelingGuiBase", "Lorem Ipsum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mPreviewTextEdit->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Sample text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mPreviewTextEdit->setText(QApplication::translate("QgsLabelingGuiBase", "Lorem Ipsum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mPreviewTextBtn->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Reset sample text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mPreviewTextBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mPreviewSizeSlider->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Size for sample text in map units", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mPreviewBackgroundBtn->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Sample background color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

        const bool __sortingEnabled = mLabelingOptionsListWidget->isSortingEnabled();
        mLabelingOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mLabelingOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsLabelingGuiBase", "Text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Text style", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mLabelingOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsLabelingGuiBase", "Formatting", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Formatting", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mLabelingOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsLabelingGuiBase", "Buffer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Buffer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mLabelingOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsLabelingGuiBase", "Background", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Background", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mLabelingOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsLabelingGuiBase", "Shadow", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Shadow", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mLabelingOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsLabelingGuiBase", "Placement", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Placement", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mLabelingOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsLabelingGuiBase", "Rendering", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Rendering", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLabelingOptionsListWidget->setSortingEnabled(__sortingEnabled);

        label_36->setText(QApplication::translate("QgsLabelingGuiBase", "Text style", 0, QApplication::UnicodeUTF8));
        mFontLetterSpacingLabel->setText(QApplication::translate("QgsLabelingGuiBase", "letter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontLetterSpacingSpinBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Space in pixels or map units, relative to size unit choice", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontLetterSpacingDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontStyleLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Style", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontCapitalsComboBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Capitalization style of text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontTranspLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Transparency", 0, QApplication::UnicodeUTF8));
        mFontLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Font", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontStyleComboBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Available typeface styles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontCaseDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontColorDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontTranspDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontTranspSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", " %", 0, QApplication::UnicodeUTF8));
        mFontCapitalsLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Type case", 0, QApplication::UnicodeUTF8));
        mFontBlendModeDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontColorLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Color", 0, QApplication::UnicodeUTF8));
        mFontSizeDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsLabelingGuiBase", "Spacing", 0, QApplication::UnicodeUTF8));
        labelBlendMode->setText(QApplication::translate("QgsLabelingGuiBase", "Blend mode", 0, QApplication::UnicodeUTF8));
        mFontWordSpacingLabel->setText(QApplication::translate("QgsLabelingGuiBase", "word", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontWordSpacingSpinBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Space in pixels or map units, relative to size unit choice", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontWordSpacingDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontUnderlineBtn->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Underlined text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontUnderlineBtn->setText(QApplication::translate("QgsLabelingGuiBase", "U", 0, QApplication::UnicodeUTF8));
        mFontUnderlineDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontStrikethroughBtn->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Strikeout text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontStrikethroughBtn->setText(QApplication::translate("QgsLabelingGuiBase", "S", 0, QApplication::UnicodeUTF8));
        mFontStrikeoutDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontBoldBtn->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Bold text\n"
"(data defined only, overrides Style)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontBoldBtn->setText(QApplication::translate("QgsLabelingGuiBase", "B", 0, QApplication::UnicodeUTF8));
        mFontBoldDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontItalicBtn->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Italic text\n"
"(data defined only, overrides Style)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontItalicBtn->setText(QApplication::translate("QgsLabelingGuiBase", "I", 0, QApplication::UnicodeUTF8));
        mFontItalicDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontStyleDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontSizeLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Size", 0, QApplication::UnicodeUTF8));
        mFontMissingLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Font is missing.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsLabelingGuiBase", "Text formatting", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("QgsLabelingGuiBase", "Multiple lines", 0, QApplication::UnicodeUTF8));
        mWrapCharDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontLineHeightDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsLabelingGuiBase", "Wrap on character", 0, QApplication::UnicodeUTF8));
        mFontLineHeightLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Line height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontLineHeightSpinBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Line height spacing for multi-line text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontLineHeightSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", " line", 0, QApplication::UnicodeUTF8));
        mFontMultiLineLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Alignment", 0, QApplication::UnicodeUTF8));
        mFontMultiLineAlignComboBox->clear();
        mFontMultiLineAlignComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelingGuiBase", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Center", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Right", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        mFontMultiLineAlignComboBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Paragraph style alignment of multi-line text", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontMultiLineAlignDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mDirectSymbDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mDirectSymbChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Line direction symbol", 0, QApplication::UnicodeUTF8));
        mDirectSymbRightLineEdit->setText(QApplication::translate("QgsLabelingGuiBase", ">", 0, QApplication::UnicodeUTF8));
        mDirectSymbRightToolBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mDirectSymbPlacementDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mDirectSymbLeftDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mDirectSymbLeftLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Left", 0, QApplication::UnicodeUTF8));
        mDirectSymbRightLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Right", 0, QApplication::UnicodeUTF8));
        mDirectSymbPlacementLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Placement", 0, QApplication::UnicodeUTF8));
        mDirectSymbRevChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Reverse direction", 0, QApplication::UnicodeUTF8));
        mDirectSymbRightDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mDirectSymbLeftLineEdit->setText(QApplication::translate("QgsLabelingGuiBase", "<", 0, QApplication::UnicodeUTF8));
        mDirectSymbLeftToolBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mDirectSymbRevDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mDirectSymbRadioBtnLR->setText(QApplication::translate("QgsLabelingGuiBase", "left/right", 0, QApplication::UnicodeUTF8));
        mDirectSymbRadioBtnAbove->setText(QApplication::translate("QgsLabelingGuiBase", "above", 0, QApplication::UnicodeUTF8));
        mDirectSymbRadioBtnBelow->setText(QApplication::translate("QgsLabelingGuiBase", "below", 0, QApplication::UnicodeUTF8));
        mFormatNumChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Formatted numbers", 0, QApplication::UnicodeUTF8));
        mFormatNumDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFormatNumDecimalsLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Decimal places ", 0, QApplication::UnicodeUTF8));
        mFormatNumDecimalsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFormatNumPlusSignChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Show plus sign", 0, QApplication::UnicodeUTF8));
        mFormatNumPlusSignDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsLabelingGuiBase", "Text buffer", 0, QApplication::UnicodeUTF8));
        mBufferDrawDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mBufferDrawChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Draw text buffer", 0, QApplication::UnicodeUTF8));
        mBufferUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mBufferBlendModeDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("QgsLabelingGuiBase", "Color", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsLabelingGuiBase", "Pen join style", 0, QApplication::UnicodeUTF8));
        spinBufferSize->setSuffix(QString());
        mBufferTranspSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", " %", 0, QApplication::UnicodeUTF8));
        mBufferTranspLabel_2->setText(QApplication::translate("QgsLabelingGuiBase", "Transparency", 0, QApplication::UnicodeUTF8));
        labelBufferBlend->setText(QApplication::translate("QgsLabelingGuiBase", "Blend mode", 0, QApplication::UnicodeUTF8));
        mBufferTranspDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mBufferJoinStyleDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        btnBufferColor->setText(QString());
        mBufferSizeDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mBufferColorDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("QgsLabelingGuiBase", "Size", 0, QApplication::UnicodeUTF8));
        mBufferTranspFillChbx->setText(QApplication::translate("QgsLabelingGuiBase", "Color buffer's fill", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsLabelingGuiBase", "Background", 0, QApplication::UnicodeUTF8));
        mShapeDrawChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Draw background", 0, QApplication::UnicodeUTF8));
        mShapeDrawDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeRadiusLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Radius X,Y", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("QgsLabelingGuiBase", "Rotation", 0, QApplication::UnicodeUTF8));
        mShapeFillColorDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeSizeUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeBorderWidthDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeBorderColorDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeBlendModeDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeSizeXLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Size X", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsLabelingGuiBase", "Size type", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("QgsLabelingGuiBase", "Shape", 0, QApplication::UnicodeUTF8));
        mShapeSizeYLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Size Y", 0, QApplication::UnicodeUTF8));
        mShapePenStyleDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeTranspLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Transparency", 0, QApplication::UnicodeUTF8));
        mShapeTranspSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", " %", 0, QApplication::UnicodeUTF8));
        mShapeRadiusUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeTypeDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapePenStyleLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Pen join style", 0, QApplication::UnicodeUTF8));
        mShapeFillColorLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Fill color", 0, QApplication::UnicodeUTF8));
        mShapeOffsetUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeBorderColorLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Border color", 0, QApplication::UnicodeUTF8));
        mShapeSizeYDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeSizeCmbBx->clear();
        mShapeSizeCmbBx->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelingGuiBase", "Buffer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Fixed", 0, QApplication::UnicodeUTF8)
        );
        mShapeSizeXSpnBx->setSuffix(QString());
        mShapeSizeXDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeSVGParamsBtn->setText(QApplication::translate("QgsLabelingGuiBase", "Load symbol parameters", 0, QApplication::UnicodeUTF8));
        mShapeBorderWidthLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Border width", 0, QApplication::UnicodeUTF8));
        mShapeSizeTypeDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeSizeYSpnBx->setSuffix(QString());
        label_18->setText(QApplication::translate("QgsLabelingGuiBase", "Blend mode", 0, QApplication::UnicodeUTF8));
        mShapeRotationCmbBx->clear();
        mShapeRotationCmbBx->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelingGuiBase", "Sync with label", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Offset of label", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Fixed", 0, QApplication::UnicodeUTF8)
        );
        mShapeRotationTypeDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeSVGSelectorBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeSVGPathDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeTranspDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeSVGUnitsLabel->setText(QApplication::translate("QgsLabelingGuiBase", "symbol units", 0, QApplication::UnicodeUTF8));
        mShapeBorderUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeRotationDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShapeTypeCmbBx->clear();
        mShapeTypeCmbBx->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelingGuiBase", "Rectangle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Ellipse", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "SVG", 0, QApplication::UnicodeUTF8)
        );
        mShapeRadiusDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("QgsLabelingGuiBase", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        mShapeOffsetXSpnBx->setSuffix(QString());
        mShapeOffsetYSpnBx->setSuffix(QString());
        mShapeOffsetDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("QgsLabelingGuiBase", "Drop shadow", 0, QApplication::UnicodeUTF8));
        mShadowDrawChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Draw drop shadow", 0, QApplication::UnicodeUTF8));
        mShadowDrawDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("QgsLabelingGuiBase", "Scale", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("QgsLabelingGuiBase", "Blur radius", 0, QApplication::UnicodeUTF8));
        mShadowRadiusAlphaChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Blur only alpha pixels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mShadowOffsetGlobalChkBx->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Label's rotation is ignored", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mShadowOffsetGlobalChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Use global shadow", 0, QApplication::UnicodeUTF8));
        mShadowOffsetAngleSpnBx->setSuffix(QApplication::translate("QgsLabelingGuiBase", "\313\232", 0, QApplication::UnicodeUTF8));
        mShadowUnderCmbBx->clear();
        mShadowUnderCmbBx->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelingGuiBase", "Lowest label component", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Text", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Buffer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelingGuiBase", "Background", 0, QApplication::UnicodeUTF8)
        );
        label_17->setText(QApplication::translate("QgsLabelingGuiBase", "Draw under", 0, QApplication::UnicodeUTF8));
        mShadowScaleSpnBx->setSuffix(QApplication::translate("QgsLabelingGuiBase", " %", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("QgsLabelingGuiBase", "Blend mode", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsLabelingGuiBase", "Offset", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("QgsLabelingGuiBase", "Color", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("QgsLabelingGuiBase", "Transparency", 0, QApplication::UnicodeUTF8));
        mShadowTranspSpnBx->setSuffix(QApplication::translate("QgsLabelingGuiBase", " %", 0, QApplication::UnicodeUTF8));
        mShadowUnderDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowOffsetAngleDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowOffsetDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowOffsetUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowRadiusDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowRadiusUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowTranspDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowScaleDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowColorDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mShadowBlendDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("QgsLabelingGuiBase", "Placement", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radAroundPoint->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Labels are placed in an equal radius circle around point features.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radAroundPoint->setText(QApplication::translate("QgsLabelingGuiBase", "Around point", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radOverPoint->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Labels are placed at a fixed offset from the point.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radOverPoint->setText(QApplication::translate("QgsLabelingGuiBase", "Offset from point", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        radPredefinedOrder->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Uses cartographically 'ideal' placements, prioritising label placement with best visual relationship with the point feature", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        radPredefinedOrder->setText(QApplication::translate("QgsLabelingGuiBase", "Cartographic", 0, QApplication::UnicodeUTF8));
        radLineCurved->setText(QApplication::translate("QgsLabelingGuiBase", "Curved", 0, QApplication::UnicodeUTF8));
        radLineParallel->setText(QApplication::translate("QgsLabelingGuiBase", "Parallel", 0, QApplication::UnicodeUTF8));
        radLineHorizontal->setText(QApplication::translate("QgsLabelingGuiBase", "Horizontal", 0, QApplication::UnicodeUTF8));
        radOverCentroid->setText(QApplication::translate("QgsLabelingGuiBase", "Offset from centroid", 0, QApplication::UnicodeUTF8));
        radAroundCentroid->setText(QApplication::translate("QgsLabelingGuiBase", "Around centroid", 0, QApplication::UnicodeUTF8));
        radPolygonHorizontal->setText(QApplication::translate("QgsLabelingGuiBase", "Horizontal (slow)", 0, QApplication::UnicodeUTF8));
        radPolygonFree->setText(QApplication::translate("QgsLabelingGuiBase", "Free (slow)", 0, QApplication::UnicodeUTF8));
        radPolygonPerimeter->setText(QApplication::translate("QgsLabelingGuiBase", "Using perimeter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mPlacementLineFrame->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Allowed label placement for lines. At least one position must be selected.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("QgsLabelingGuiBase", "Allowed positions", 0, QApplication::UnicodeUTF8));
        chkLineAbove->setText(QApplication::translate("QgsLabelingGuiBase", "Above line", 0, QApplication::UnicodeUTF8));
        chkLineOn->setText(QApplication::translate("QgsLabelingGuiBase", "On line", 0, QApplication::UnicodeUTF8));
        chkLineBelow->setText(QApplication::translate("QgsLabelingGuiBase", "Below line", 0, QApplication::UnicodeUTF8));
        chkLineOrientationDependent->setText(QApplication::translate("QgsLabelingGuiBase", "Line orientation dependent position", 0, QApplication::UnicodeUTF8));
        mCentroidLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Centroid", 0, QApplication::UnicodeUTF8));
        mCentroidRadioVisible->setText(QApplication::translate("QgsLabelingGuiBase", "visible polygon", 0, QApplication::UnicodeUTF8));
        mCentroidRadioWhole->setText(QApplication::translate("QgsLabelingGuiBase", "whole polygon", 0, QApplication::UnicodeUTF8));
        mCentroidDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mCentroidInsideCheckBox->setText(QApplication::translate("QgsLabelingGuiBase", "Force point inside polygon", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("QgsLabelingGuiBase", "Distance", 0, QApplication::UnicodeUTF8));
        mLineDistanceDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mLineDistanceUnitDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("QgsLabelingGuiBase", "Distance offset from", 0, QApplication::UnicodeUTF8));
        mPointQuadOffsetDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mPointOffsetOver->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mPointOffsetAboveRight->setText(QApplication::translate("QgsLabelingGuiBase", "abc", 0, QApplication::UnicodeUTF8));
        mPointOffsetBelowLeft->setText(QApplication::translate("QgsLabelingGuiBase", "abc", 0, QApplication::UnicodeUTF8));
        mPointOffsetLeft->setText(QApplication::translate("QgsLabelingGuiBase", "abc", 0, QApplication::UnicodeUTF8));
        mPointOffsetAboveLeft->setText(QApplication::translate("QgsLabelingGuiBase", "abc", 0, QApplication::UnicodeUTF8));
        mPointOffsetRight->setText(QApplication::translate("QgsLabelingGuiBase", "abc", 0, QApplication::UnicodeUTF8));
        mPointOffsetBelow->setText(QApplication::translate("QgsLabelingGuiBase", "abc", 0, QApplication::UnicodeUTF8));
        mPointOffsetBelowRight->setText(QApplication::translate("QgsLabelingGuiBase", "abc", 0, QApplication::UnicodeUTF8));
        mPointOffsetAbove->setText(QApplication::translate("QgsLabelingGuiBase", "abc", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsLabelingGuiBase", "Quadrant", 0, QApplication::UnicodeUTF8));
        mPointPositionOrderDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("QgsLabelingGuiBase", "Position priority", 0, QApplication::UnicodeUTF8));
        mPointOffsetYSpinBox->setPrefix(QString());
        mPointOffsetYSpinBox->setSuffix(QString());
        mPointOffsetDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mPointOffsetUnitsDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mPointOffsetXSpinBox->setPrefix(QString());
        mPointOffsetXSpinBox->setSuffix(QString());
        label_15->setText(QApplication::translate("QgsLabelingGuiBase", "Offset X,Y", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("QgsLabelingGuiBase", "Rotation", 0, QApplication::UnicodeUTF8));
        mPointAngleSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", "\313\232", 0, QApplication::UnicodeUTF8));
        mPointAngleDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QgsLabelingGuiBase", "Repeat", 0, QApplication::UnicodeUTF8));
        mRepeatDistanceSpinBox->setSpecialValueText(QApplication::translate("QgsLabelingGuiBase", "No repeat", 0, QApplication::UnicodeUTF8));
        mRepeatDistanceDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mRepeatDistanceUnitDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mMaxCharAngleInLabel->setText(QApplication::translate("QgsLabelingGuiBase", "inside", 0, QApplication::UnicodeUTF8));
        mMaxCharAngleDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mMaxCharAngleOutLabel->setText(QApplication::translate("QgsLabelingGuiBase", "outside", 0, QApplication::UnicodeUTF8));
        mMaxCharAngleLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Maximum angle between curved characters", 0, QApplication::UnicodeUTF8));
        mPlacementDDGroupBox->setTitle(QApplication::translate("QgsLabelingGuiBase", "Data defined", 0, QApplication::UnicodeUTF8));
        mCoordXLabel->setText(QApplication::translate("QgsLabelingGuiBase", "X", 0, QApplication::UnicodeUTF8));
        mCoordXDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mCoordYLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Y", 0, QApplication::UnicodeUTF8));
        mCoordYDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mCoordRotationLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Rotation", 0, QApplication::UnicodeUTF8));
        mCoordLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Coordinate", 0, QApplication::UnicodeUTF8));
        mCoordAlignmentLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Alignment", 0, QApplication::UnicodeUTF8));
        mCoordRotationDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        chkPreserveRotation->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Uncheck to write labeling engine derived rotation on pin and NULL on unpin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        chkPreserveRotation->setText(QApplication::translate("QgsLabelingGuiBase", "Preserve data rotation values", 0, QApplication::UnicodeUTF8));
        mCoordAlignmentHLabel->setText(QApplication::translate("QgsLabelingGuiBase", "horizontal", 0, QApplication::UnicodeUTF8));
        mCoordAlignmentHDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mCoordAlignmentVLabel->setText(QApplication::translate("QgsLabelingGuiBase", "vertical", 0, QApplication::UnicodeUTF8));
        mCoordAlignmentVDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mPriorityGrpBx->setTitle(QApplication::translate("QgsLabelingGuiBase", "Priority", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("QgsLabelingGuiBase", "Low", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("QgsLabelingGuiBase", "High", 0, QApplication::UnicodeUTF8));
        mPriorityDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("QgsLabelingGuiBase", "Rendering", 0, QApplication::UnicodeUTF8));
        mRenderingLabelGrpBx->setTitle(QApplication::translate("QgsLabelingGuiBase", "Label options", 0, QApplication::UnicodeUTF8));
        mScaleBasedVisibilityChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Scale-based visibility", 0, QApplication::UnicodeUTF8));
        mScaleBasedVisibilityDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mScaleBasedVisibilityMinSpnBx->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Value &lt; 0 represents a scale closer than 1:1, e.g. -10 = 10:1.<br>Value of 0 disables the specific limit.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mScaleBasedVisibilityMinSpnBx->setPrefix(QApplication::translate("QgsLabelingGuiBase", "Minimum ", 0, QApplication::UnicodeUTF8));
        mScaleBasedVisibilityMinDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mScaleBasedVisibilityMaxSpnBx->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Value &lt; 0 represents a scale closer than 1:1, e.g. -10 = 10:1.<br>Value of 0 disables the specific limit.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mScaleBasedVisibilityMaxSpnBx->setPrefix(QApplication::translate("QgsLabelingGuiBase", "Maximum ", 0, QApplication::UnicodeUTF8));
        mScaleBasedVisibilityMaxDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mFontLimitPixelChkBox->setText(QApplication::translate("QgsLabelingGuiBase", "Pixel size-based visibility (labels in map units)", 0, QApplication::UnicodeUTF8));
        mFontLimitPixelDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontMinPixelSpinBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Labels will not show if smaller than this on screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontMinPixelSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", " px", 0, QApplication::UnicodeUTF8));
        mFontMinPixelSpinBox->setPrefix(QApplication::translate("QgsLabelingGuiBase", "Minimum ", 0, QApplication::UnicodeUTF8));
        mFontMinPixelDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mFontMaxPixelSpinBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Labels will not show if larger than this on screen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mFontMaxPixelSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", " px", 0, QApplication::UnicodeUTF8));
        mFontMaxPixelSpinBox->setPrefix(QApplication::translate("QgsLabelingGuiBase", "Maximum ", 0, QApplication::UnicodeUTF8));
        mFontMaxPixelDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("QgsLabelingGuiBase", "Label z-index", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mZIndexSpinBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Controls how labels are drawn on top of each other. Labels with a higher z-index are drawn above labels with a lower z-index.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mZIndexDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mPalShowAllLabelsForLayerChkBx->setText(QApplication::translate("QgsLabelingGuiBase", "Show all labels for this layer (including colliding labels)", 0, QApplication::UnicodeUTF8));
        mShowLabelDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mAlwaysShowDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        mAlwaysShowLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Always show", 0, QApplication::UnicodeUTF8));
        mShowLabelLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Show label", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsLabelingGuiBase", "Data defined", 0, QApplication::UnicodeUTF8));
        mUpsidedownRadioAll->setText(QApplication::translate("QgsLabelingGuiBase", "always", 0, QApplication::UnicodeUTF8));
        mUpsidedownRadioOff->setText(QApplication::translate("QgsLabelingGuiBase", "never", 0, QApplication::UnicodeUTF8));
        mUpsidedownRadioDefined->setText(QApplication::translate("QgsLabelingGuiBase", "when rotation defined", 0, QApplication::UnicodeUTF8));
        mUpsidedownLabel->setText(QApplication::translate("QgsLabelingGuiBase", "Show upside-down labels", 0, QApplication::UnicodeUTF8));
        mRenderingFeaturesGrpBx->setTitle(QApplication::translate("QgsLabelingGuiBase", "Feature options", 0, QApplication::UnicodeUTF8));
        chkLabelPerFeaturePart->setText(QApplication::translate("QgsLabelingGuiBase", "Label every part of multi-part features", 0, QApplication::UnicodeUTF8));
        chkMergeLines->setText(QApplication::translate("QgsLabelingGuiBase", "Merge connected lines to avoid duplicate labels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLimitLabelSpinBox->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Number of features sent to labeling engine, though not all may be labeled", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLimitLabelChkBox->setText(QApplication::translate("QgsLabelingGuiBase", "Limit number of features to be labeled to", 0, QApplication::UnicodeUTF8));
        mMinSizeSpinBox->setSuffix(QApplication::translate("QgsLabelingGuiBase", " mm", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("QgsLabelingGuiBase", "Suppress labeling of features smaller than", 0, QApplication::UnicodeUTF8));
        mFitInsidePolygonCheckBox->setText(QApplication::translate("QgsLabelingGuiBase", "Only draw labels which fit completely within feature", 0, QApplication::UnicodeUTF8));
        mObstaclesGroupBox->setTitle(QApplication::translate("QgsLabelingGuiBase", "Obstacles", 0, QApplication::UnicodeUTF8));
        mChkNoObstacle->setText(QApplication::translate("QgsLabelingGuiBase", "Discourage labels from covering features", 0, QApplication::UnicodeUTF8));
        mIsObstacleDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("QgsLabelingGuiBase", "Low weight", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mObstacleFactorSlider->setToolTip(QApplication::translate("QgsLabelingGuiBase", "Controls how likely labels are to cover features in this layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_41->setText(QApplication::translate("QgsLabelingGuiBase", "High weight", 0, QApplication::UnicodeUTF8));
        mObstacleFactorDDBtn->setText(QApplication::translate("QgsLabelingGuiBase", "...", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("QgsLabelingGuiBase", "Minimise placing labels", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsLabelingGuiBase", "Label with", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingGuiBase: public Ui_QgsLabelingGuiBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGGUIBASE_H
