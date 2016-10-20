/********************************************************************************
** Form generated from reading UI file 'qgscomposerattributetablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERATTRIBUTETABLEWIDGETBASE_H
#define UI_QGSCOMPOSERATTRIBUTETABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgsmaplayercombobox.h>
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbuttonv2.h"
#include "qgsdoublespinbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerAttributeTableWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QComboBox *mSourceComboBox;
    QLabel *mLayerLabel;
    QgsMapLayerComboBox *mLayerComboBox;
    QLabel *mRelationLabel;
    QComboBox *mRelationsComboBox;
    QPushButton *mRefreshPushButton;
    QPushButton *mAttributesPushButton;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *mMaxNumFeaturesLabel;
    QgsSpinBox *mMaximumRowsSpinBox;
    QCheckBox *mUniqueOnlyCheckBox;
    QCheckBox *mShowOnlyVisibleFeaturesCheckBox;
    QLabel *mComposerMapLabel;
    QComboBox *mComposerMapComboBox;
    QCheckBox *mIntersectAtlasCheckBox;
    QCheckBox *mFeatureFilterCheckBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mFeatureFilterEdit;
    QToolButton *mFeatureFilterButton;
    QgsCollapsibleGroupBoxBasic *groupBox_6;
    QGridLayout *gridLayout_6;
    QLabel *label_12;
    QLabel *label_11;
    QComboBox *mHeaderModeComboBox;
    QLabel *label_7;
    QLineEdit *mWrapStringLineEdit;
    QLabel *mEmptyMessageLabel;
    QLabel *label_9;
    QgsDoubleSpinBox *mMarginSpinBox;
    QLineEdit *mEmptyMessageLineEdit;
    QCheckBox *mDrawEmptyCheckBox;
    QLabel *label_10;
    QComboBox *mEmptyModeComboBox;
    QComboBox *mWrapBehaviourComboBox;
    QLabel *mMarginLabel;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButtonV2 *mBackgroundColorButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mAdvancedCustomisationButton;
    QgsCollapsibleGroupBoxBasic *mShowGridGroupCheckBox;
    QGridLayout *gridLayout_7;
    QLabel *mGridStrokeWidthLabel;
    QgsDoubleSpinBox *mGridStrokeWidthSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QgsColorButtonV2 *mGridColorButton;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBoxBasic *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QPushButton *mHeaderFontPushButton;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QgsColorButtonV2 *mHeaderFontColorButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QComboBox *mHeaderHAlignmentComboBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLabel *lblContentsFont;
    QPushButton *mContentFontPushButton;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QgsColorButtonV2 *mContentFontColorButton;
    QSpacerItem *horizontalSpacer_3;
    QgsCollapsibleGroupBoxBasic *frameGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *mResizeModeLabel;
    QComboBox *mResizeModeComboBox;
    QPushButton *mAddFramePushButton;
    QCheckBox *mEmptyFrameCheckBox;
    QCheckBox *mHideEmptyBgCheckBox;

    void setupUi(QWidget *QgsComposerAttributeTableWidgetBase)
    {
        if (QgsComposerAttributeTableWidgetBase->objectName().isEmpty())
            QgsComposerAttributeTableWidgetBase->setObjectName(QString::fromUtf8("QgsComposerAttributeTableWidgetBase"));
        QgsComposerAttributeTableWidgetBase->resize(410, 815);
        verticalLayout = new QVBoxLayout(QgsComposerAttributeTableWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsComposerAttributeTableWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(QgsComposerAttributeTableWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -499, 392, 1291));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        mSourceComboBox = new QComboBox(groupBox);
        mSourceComboBox->setObjectName(QString::fromUtf8("mSourceComboBox"));

        gridLayout_4->addWidget(mSourceComboBox, 0, 1, 1, 1);

        mLayerLabel = new QLabel(groupBox);
        mLayerLabel->setObjectName(QString::fromUtf8("mLayerLabel"));
        mLayerLabel->setWordWrap(true);

        gridLayout_4->addWidget(mLayerLabel, 1, 0, 1, 1);

        mLayerComboBox = new QgsMapLayerComboBox(groupBox);
        mLayerComboBox->setObjectName(QString::fromUtf8("mLayerComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLayerComboBox->sizePolicy().hasHeightForWidth());
        mLayerComboBox->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(mLayerComboBox, 1, 1, 1, 1);

        mRelationLabel = new QLabel(groupBox);
        mRelationLabel->setObjectName(QString::fromUtf8("mRelationLabel"));

        gridLayout_4->addWidget(mRelationLabel, 2, 0, 1, 1);

        mRelationsComboBox = new QComboBox(groupBox);
        mRelationsComboBox->setObjectName(QString::fromUtf8("mRelationsComboBox"));

        gridLayout_4->addWidget(mRelationsComboBox, 2, 1, 1, 1);

        mRefreshPushButton = new QPushButton(groupBox);
        mRefreshPushButton->setObjectName(QString::fromUtf8("mRefreshPushButton"));

        gridLayout_4->addWidget(mRefreshPushButton, 3, 0, 1, 2);

        mAttributesPushButton = new QPushButton(groupBox);
        mAttributesPushButton->setObjectName(QString::fromUtf8("mAttributesPushButton"));

        gridLayout_4->addWidget(mAttributesPushButton, 4, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFocusPolicy(Qt::StrongFocus);
        groupBox_5->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_5->setProperty("collapsed", QVariant(false));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mMaxNumFeaturesLabel = new QLabel(groupBox_5);
        mMaxNumFeaturesLabel->setObjectName(QString::fromUtf8("mMaxNumFeaturesLabel"));
        mMaxNumFeaturesLabel->setWordWrap(true);

        gridLayout_5->addWidget(mMaxNumFeaturesLabel, 0, 0, 1, 1);

        mMaximumRowsSpinBox = new QgsSpinBox(groupBox_5);
        mMaximumRowsSpinBox->setObjectName(QString::fromUtf8("mMaximumRowsSpinBox"));
        mMaximumRowsSpinBox->setMaximum(99999);
        mMaximumRowsSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_5->addWidget(mMaximumRowsSpinBox, 0, 1, 1, 1);

        mUniqueOnlyCheckBox = new QCheckBox(groupBox_5);
        mUniqueOnlyCheckBox->setObjectName(QString::fromUtf8("mUniqueOnlyCheckBox"));

        gridLayout_5->addWidget(mUniqueOnlyCheckBox, 1, 0, 1, 2);

        mShowOnlyVisibleFeaturesCheckBox = new QCheckBox(groupBox_5);
        mShowOnlyVisibleFeaturesCheckBox->setObjectName(QString::fromUtf8("mShowOnlyVisibleFeaturesCheckBox"));

        gridLayout_5->addWidget(mShowOnlyVisibleFeaturesCheckBox, 2, 0, 1, 2);

        mComposerMapLabel = new QLabel(groupBox_5);
        mComposerMapLabel->setObjectName(QString::fromUtf8("mComposerMapLabel"));
        mComposerMapLabel->setWordWrap(true);

        gridLayout_5->addWidget(mComposerMapLabel, 3, 0, 1, 1);

        mComposerMapComboBox = new QComboBox(groupBox_5);
        mComposerMapComboBox->setObjectName(QString::fromUtf8("mComposerMapComboBox"));

        gridLayout_5->addWidget(mComposerMapComboBox, 3, 1, 1, 1);

        mIntersectAtlasCheckBox = new QCheckBox(groupBox_5);
        mIntersectAtlasCheckBox->setObjectName(QString::fromUtf8("mIntersectAtlasCheckBox"));

        gridLayout_5->addWidget(mIntersectAtlasCheckBox, 4, 0, 1, 2);

        mFeatureFilterCheckBox = new QCheckBox(groupBox_5);
        mFeatureFilterCheckBox->setObjectName(QString::fromUtf8("mFeatureFilterCheckBox"));

        gridLayout_5->addWidget(mFeatureFilterCheckBox, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFeatureFilterEdit = new QLineEdit(groupBox_5);
        mFeatureFilterEdit->setObjectName(QString::fromUtf8("mFeatureFilterEdit"));

        horizontalLayout->addWidget(mFeatureFilterEdit);

        mFeatureFilterButton = new QToolButton(groupBox_5);
        mFeatureFilterButton->setObjectName(QString::fromUtf8("mFeatureFilterButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFeatureFilterButton->setIcon(icon);

        horizontalLayout->addWidget(mFeatureFilterButton);


        gridLayout_5->addLayout(horizontalLayout, 5, 1, 1, 1);

        mShowOnlyVisibleFeaturesCheckBox->raise();
        mComposerMapLabel->raise();
        mComposerMapComboBox->raise();
        mFeatureFilterCheckBox->raise();
        mMaximumRowsSpinBox->raise();
        mMaxNumFeaturesLabel->raise();
        mIntersectAtlasCheckBox->raise();
        mUniqueOnlyCheckBox->raise();

        mainLayout->addWidget(groupBox_5);

        groupBox_6 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setFocusPolicy(Qt::StrongFocus);
        groupBox_6->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_6->setProperty("collapsed", QVariant(false));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 10, 0, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_6->addWidget(label_11, 9, 0, 1, 1);

        mHeaderModeComboBox = new QComboBox(groupBox_6);
        mHeaderModeComboBox->setObjectName(QString::fromUtf8("mHeaderModeComboBox"));

        gridLayout_6->addWidget(mHeaderModeComboBox, 3, 1, 1, 1);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_6->addWidget(label_7, 3, 0, 1, 1);

        mWrapStringLineEdit = new QLineEdit(groupBox_6);
        mWrapStringLineEdit->setObjectName(QString::fromUtf8("mWrapStringLineEdit"));
        mWrapStringLineEdit->setFrame(true);

        gridLayout_6->addWidget(mWrapStringLineEdit, 9, 1, 1, 1);

        mEmptyMessageLabel = new QLabel(groupBox_6);
        mEmptyMessageLabel->setObjectName(QString::fromUtf8("mEmptyMessageLabel"));

        gridLayout_6->addWidget(mEmptyMessageLabel, 6, 0, 1, 1);

        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 5, 0, 1, 1);

        mMarginSpinBox = new QgsDoubleSpinBox(groupBox_6);
        mMarginSpinBox->setObjectName(QString::fromUtf8("mMarginSpinBox"));
        mMarginSpinBox->setSingleStep(0.1);
        mMarginSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mMarginSpinBox, 2, 1, 1, 1);

        mEmptyMessageLineEdit = new QLineEdit(groupBox_6);
        mEmptyMessageLineEdit->setObjectName(QString::fromUtf8("mEmptyMessageLineEdit"));

        gridLayout_6->addWidget(mEmptyMessageLineEdit, 6, 1, 1, 1);

        mDrawEmptyCheckBox = new QCheckBox(groupBox_6);
        mDrawEmptyCheckBox->setObjectName(QString::fromUtf8("mDrawEmptyCheckBox"));

        gridLayout_6->addWidget(mDrawEmptyCheckBox, 1, 0, 1, 2);

        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 7, 0, 1, 1);

        mEmptyModeComboBox = new QComboBox(groupBox_6);
        mEmptyModeComboBox->setObjectName(QString::fromUtf8("mEmptyModeComboBox"));

        gridLayout_6->addWidget(mEmptyModeComboBox, 5, 1, 1, 1);

        mWrapBehaviourComboBox = new QComboBox(groupBox_6);
        mWrapBehaviourComboBox->setObjectName(QString::fromUtf8("mWrapBehaviourComboBox"));

        gridLayout_6->addWidget(mWrapBehaviourComboBox, 10, 1, 1, 1);

        mMarginLabel = new QLabel(groupBox_6);
        mMarginLabel->setObjectName(QString::fromUtf8("mMarginLabel"));
        mMarginLabel->setWordWrap(true);

        gridLayout_6->addWidget(mMarginLabel, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mBackgroundColorButton = new QgsColorButtonV2(groupBox_6);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(mBackgroundColorButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout_5, 7, 1, 1, 1);

        mAdvancedCustomisationButton = new QPushButton(groupBox_6);
        mAdvancedCustomisationButton->setObjectName(QString::fromUtf8("mAdvancedCustomisationButton"));

        gridLayout_6->addWidget(mAdvancedCustomisationButton, 8, 1, 1, 1);


        mainLayout->addWidget(groupBox_6);

        mShowGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mShowGridGroupCheckBox->setObjectName(QString::fromUtf8("mShowGridGroupCheckBox"));
        mShowGridGroupCheckBox->setFocusPolicy(Qt::StrongFocus);
        mShowGridGroupCheckBox->setCheckable(true);
        mShowGridGroupCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mShowGridGroupCheckBox->setProperty("collapsed", QVariant(false));
        gridLayout_7 = new QGridLayout(mShowGridGroupCheckBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mGridStrokeWidthLabel = new QLabel(mShowGridGroupCheckBox);
        mGridStrokeWidthLabel->setObjectName(QString::fromUtf8("mGridStrokeWidthLabel"));
        mGridStrokeWidthLabel->setWordWrap(true);

        gridLayout_7->addWidget(mGridStrokeWidthLabel, 0, 0, 1, 1);

        mGridStrokeWidthSpinBox = new QgsDoubleSpinBox(mShowGridGroupCheckBox);
        mGridStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mGridStrokeWidthSpinBox"));
        mGridStrokeWidthSpinBox->setSingleStep(0.1);
        mGridStrokeWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_7->addWidget(mGridStrokeWidthSpinBox, 0, 1, 1, 1);

        label_6 = new QLabel(mShowGridGroupCheckBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mGridColorButton = new QgsColorButtonV2(mShowGridGroupCheckBox);
        mGridColorButton->setObjectName(QString::fromUtf8("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_2->addWidget(mGridColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_7->addLayout(horizontalLayout_2, 1, 1, 1, 1);


        mainLayout->addWidget(mShowGridGroupCheckBox);

        groupBox_3 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFocusPolicy(Qt::StrongFocus);
        groupBox_3->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_3->setProperty("collapsed", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        mHeaderFontPushButton = new QPushButton(groupBox_2);
        mHeaderFontPushButton->setObjectName(QString::fromUtf8("mHeaderFontPushButton"));

        gridLayout->addWidget(mHeaderFontPushButton, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mHeaderFontColorButton = new QgsColorButtonV2(groupBox_2);
        mHeaderFontColorButton->setObjectName(QString::fromUtf8("mHeaderFontColorButton"));
        mHeaderFontColorButton->setMinimumSize(QSize(120, 0));
        mHeaderFontColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(mHeaderFontColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mHeaderHAlignmentComboBox = new QComboBox(groupBox_2);
        mHeaderHAlignmentComboBox->setObjectName(QString::fromUtf8("mHeaderHAlignmentComboBox"));
        sizePolicy1.setHeightForWidth(mHeaderHAlignmentComboBox->sizePolicy().hasHeightForWidth());
        mHeaderHAlignmentComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderHAlignmentComboBox, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblContentsFont = new QLabel(groupBox_4);
        lblContentsFont->setObjectName(QString::fromUtf8("lblContentsFont"));

        gridLayout_2->addWidget(lblContentsFont, 0, 0, 1, 1);

        mContentFontPushButton = new QPushButton(groupBox_4);
        mContentFontPushButton->setObjectName(QString::fromUtf8("mContentFontPushButton"));

        gridLayout_2->addWidget(mContentFontPushButton, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mContentFontColorButton = new QgsColorButtonV2(groupBox_4);
        mContentFontColorButton->setObjectName(QString::fromUtf8("mContentFontColorButton"));
        mContentFontColorButton->setMinimumSize(QSize(120, 0));
        mContentFontColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(mContentFontColorButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);


        mainLayout->addWidget(groupBox_3);

        frameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        frameGroupBox->setObjectName(QString::fromUtf8("frameGroupBox"));
        frameGroupBox->setFocusPolicy(Qt::StrongFocus);
        frameGroupBox->setCheckable(false);
        frameGroupBox->setChecked(false);
        frameGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout_3 = new QGridLayout(frameGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mResizeModeLabel = new QLabel(frameGroupBox);
        mResizeModeLabel->setObjectName(QString::fromUtf8("mResizeModeLabel"));
        mResizeModeLabel->setWordWrap(true);

        gridLayout_3->addWidget(mResizeModeLabel, 0, 0, 1, 1);

        mResizeModeComboBox = new QComboBox(frameGroupBox);
        mResizeModeComboBox->setObjectName(QString::fromUtf8("mResizeModeComboBox"));
        sizePolicy1.setHeightForWidth(mResizeModeComboBox->sizePolicy().hasHeightForWidth());
        mResizeModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(mResizeModeComboBox, 0, 1, 1, 1);

        mAddFramePushButton = new QPushButton(frameGroupBox);
        mAddFramePushButton->setObjectName(QString::fromUtf8("mAddFramePushButton"));

        gridLayout_3->addWidget(mAddFramePushButton, 1, 0, 1, 2);

        mEmptyFrameCheckBox = new QCheckBox(frameGroupBox);
        mEmptyFrameCheckBox->setObjectName(QString::fromUtf8("mEmptyFrameCheckBox"));

        gridLayout_3->addWidget(mEmptyFrameCheckBox, 2, 0, 1, 2);

        mHideEmptyBgCheckBox = new QCheckBox(frameGroupBox);
        mHideEmptyBgCheckBox->setObjectName(QString::fromUtf8("mHideEmptyBgCheckBox"));

        gridLayout_3->addWidget(mHideEmptyBgCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(frameGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mMaxNumFeaturesLabel->setBuddy(mMaximumRowsSpinBox);
        mComposerMapLabel->setBuddy(mComposerMapComboBox);
        mMarginLabel->setBuddy(mMarginSpinBox);
        mGridStrokeWidthLabel->setBuddy(mGridStrokeWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mSourceComboBox);
        QWidget::setTabOrder(mSourceComboBox, mLayerComboBox);
        QWidget::setTabOrder(mLayerComboBox, mRelationsComboBox);
        QWidget::setTabOrder(mRelationsComboBox, mRefreshPushButton);
        QWidget::setTabOrder(mRefreshPushButton, mAttributesPushButton);
        QWidget::setTabOrder(mAttributesPushButton, groupBox_5);
        QWidget::setTabOrder(groupBox_5, mMaximumRowsSpinBox);
        QWidget::setTabOrder(mMaximumRowsSpinBox, mUniqueOnlyCheckBox);
        QWidget::setTabOrder(mUniqueOnlyCheckBox, mShowOnlyVisibleFeaturesCheckBox);
        QWidget::setTabOrder(mShowOnlyVisibleFeaturesCheckBox, mComposerMapComboBox);
        QWidget::setTabOrder(mComposerMapComboBox, mIntersectAtlasCheckBox);
        QWidget::setTabOrder(mIntersectAtlasCheckBox, mFeatureFilterCheckBox);
        QWidget::setTabOrder(mFeatureFilterCheckBox, mFeatureFilterEdit);
        QWidget::setTabOrder(mFeatureFilterEdit, mFeatureFilterButton);
        QWidget::setTabOrder(mFeatureFilterButton, groupBox_6);
        QWidget::setTabOrder(groupBox_6, mDrawEmptyCheckBox);
        QWidget::setTabOrder(mDrawEmptyCheckBox, mMarginSpinBox);
        QWidget::setTabOrder(mMarginSpinBox, mHeaderModeComboBox);
        QWidget::setTabOrder(mHeaderModeComboBox, mEmptyModeComboBox);
        QWidget::setTabOrder(mEmptyModeComboBox, mEmptyMessageLineEdit);
        QWidget::setTabOrder(mEmptyMessageLineEdit, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, mAdvancedCustomisationButton);
        QWidget::setTabOrder(mAdvancedCustomisationButton, mWrapStringLineEdit);
        QWidget::setTabOrder(mWrapStringLineEdit, mWrapBehaviourComboBox);
        QWidget::setTabOrder(mWrapBehaviourComboBox, mShowGridGroupCheckBox);
        QWidget::setTabOrder(mShowGridGroupCheckBox, mGridStrokeWidthSpinBox);
        QWidget::setTabOrder(mGridStrokeWidthSpinBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, groupBox_3);
        QWidget::setTabOrder(groupBox_3, mHeaderFontPushButton);
        QWidget::setTabOrder(mHeaderFontPushButton, mHeaderFontColorButton);
        QWidget::setTabOrder(mHeaderFontColorButton, mHeaderHAlignmentComboBox);
        QWidget::setTabOrder(mHeaderHAlignmentComboBox, mContentFontPushButton);
        QWidget::setTabOrder(mContentFontPushButton, mContentFontColorButton);
        QWidget::setTabOrder(mContentFontColorButton, frameGroupBox);
        QWidget::setTabOrder(frameGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAddFramePushButton);
        QWidget::setTabOrder(mAddFramePushButton, mEmptyFrameCheckBox);
        QWidget::setTabOrder(mEmptyFrameCheckBox, mHideEmptyBgCheckBox);

        retranslateUi(QgsComposerAttributeTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerAttributeTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerAttributeTableWidgetBase)
    {
        QgsComposerAttributeTableWidgetBase->setWindowTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Attribute Table", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Attribute table", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Source", 0, QApplication::UnicodeUTF8));
        mLayerLabel->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Layer", 0, QApplication::UnicodeUTF8));
        mRelationLabel->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Relation", 0, QApplication::UnicodeUTF8));
        mRefreshPushButton->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Refresh table data", 0, QApplication::UnicodeUTF8));
        mAttributesPushButton->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Attributes...", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Feature filtering", 0, QApplication::UnicodeUTF8));
        mMaxNumFeaturesLabel->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Maximum rows", 0, QApplication::UnicodeUTF8));
        mUniqueOnlyCheckBox->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Remove duplicate rows from table", 0, QApplication::UnicodeUTF8));
        mShowOnlyVisibleFeaturesCheckBox->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Show only features visible within a map", 0, QApplication::UnicodeUTF8));
        mComposerMapLabel->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Composer map", 0, QApplication::UnicodeUTF8));
        mIntersectAtlasCheckBox->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Show only features intersecting atlas feature", 0, QApplication::UnicodeUTF8));
        mFeatureFilterCheckBox->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Filter with", 0, QApplication::UnicodeUTF8));
        mFeatureFilterButton->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Appearance", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Oversized text", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Wrap text on", 0, QApplication::UnicodeUTF8));
        mHeaderModeComboBox->clear();
        mHeaderModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsComposerAttributeTableWidgetBase", "On first frame", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerAttributeTableWidgetBase", "On all frames", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerAttributeTableWidgetBase", "No header", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Display header", 0, QApplication::UnicodeUTF8));
        mEmptyMessageLabel->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Message to display", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Empty tables", 0, QApplication::UnicodeUTF8));
        mMarginSpinBox->setSuffix(QApplication::translate("QgsComposerAttributeTableWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mDrawEmptyCheckBox->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Show empty rows", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Background color", 0, QApplication::UnicodeUTF8));
        mMarginLabel->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Cell margins", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QString());
        mAdvancedCustomisationButton->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Advanced customisation...", 0, QApplication::UnicodeUTF8));
        mShowGridGroupCheckBox->setTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Show grid", 0, QApplication::UnicodeUTF8));
        mGridStrokeWidthLabel->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Line width", 0, QApplication::UnicodeUTF8));
        mGridStrokeWidthSpinBox->setSuffix(QApplication::translate("QgsComposerAttributeTableWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        mGridColorButton->setText(QString());
        groupBox_3->setTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Fonts and text styling", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Table heading", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Font", 0, QApplication::UnicodeUTF8));
        mHeaderFontPushButton->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Choose font...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        mHeaderFontColorButton->setText(QString());
        label_2->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Alignment", 0, QApplication::UnicodeUTF8));
        mHeaderHAlignmentComboBox->clear();
        mHeaderHAlignmentComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsComposerAttributeTableWidgetBase", "Follow column alignment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerAttributeTableWidgetBase", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerAttributeTableWidgetBase", "Center", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerAttributeTableWidgetBase", "Right", 0, QApplication::UnicodeUTF8)
        );
        groupBox_4->setTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Table contents", 0, QApplication::UnicodeUTF8));
        lblContentsFont->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Font", 0, QApplication::UnicodeUTF8));
        mContentFontPushButton->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Choose font...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        mContentFontColorButton->setText(QString());
        frameGroupBox->setTitle(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Frames", 0, QApplication::UnicodeUTF8));
        mResizeModeLabel->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Resize mode", 0, QApplication::UnicodeUTF8));
        mAddFramePushButton->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Add Frame", 0, QApplication::UnicodeUTF8));
        mEmptyFrameCheckBox->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Don't export page if frame is empty", 0, QApplication::UnicodeUTF8));
        mHideEmptyBgCheckBox->setText(QApplication::translate("QgsComposerAttributeTableWidgetBase", "Don't draw background if frame is empty", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerAttributeTableWidgetBase: public Ui_QgsComposerAttributeTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERATTRIBUTETABLEWIDGETBASE_H
