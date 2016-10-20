/********************************************************************************
** Form generated from reading UI file 'qgscomposeritemwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERITEMWIDGETBASE_H
#define UI_QGSCOMPOSERITEMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgsvariableeditorwidget.h>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbuttonv2.h"
#include "qgsdatadefinedbutton.h"
#include "qgsdoublespinbox.h"
#include "qgspenstylecombobox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerItemWidgetBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QgsCollapsibleGroupBoxBasic *mGeneralOptionsGroupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QLabel *mWidthLabel;
    QLabel *mXLabel;
    QLabel *mHeightLabel;
    QLabel *mYLabel;
    QLabel *mPageLabel;
    QgsDataDefinedButton *mXPositionDDBtn;
    QgsDataDefinedButton *mYPositionDDBtn;
    QgsDataDefinedButton *mWidthDDBtn;
    QgsDataDefinedButton *mHeightDDBtn;
    QgsSpinBox *mPageSpinBox;
    QgsDoubleSpinBox *mWidthSpin;
    QgsDoubleSpinBox *mHeightSpin;
    QgsDoubleSpinBox *mYPosSpin;
    QgsDoubleSpinBox *mXPosSpin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QGridLayout *gridLayout;
    QCheckBox *mUpperMiddleCheckBox;
    QCheckBox *mMiddleRightCheckBox;
    QCheckBox *mMiddleCheckBox;
    QCheckBox *mUpperRightCheckBox;
    QCheckBox *mLowerMiddleCheckBox;
    QCheckBox *mLowerRightCheckBox;
    QCheckBox *mUpperLeftCheckBox;
    QCheckBox *mLowerLeftCheckBox;
    QCheckBox *mMiddleLeftCheckBox;
    QSpacerItem *horizontalSpacer_3;
    QgsCollapsibleGroupBoxBasic *mTransformsGroupBox;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QgsDoubleSpinBox *mItemRotationSpinBox;
    QgsDataDefinedButton *mItemRotationDDBtn;
    QgsCollapsibleGroupBoxBasic *mFrameGroupBox;
    QGridLayout *gridLayout_6;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QgsColorButtonV2 *mFrameColorButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mOutlineWidthLabel;
    QgsDoubleSpinBox *mOutlineWidthSpinBox;
    QLabel *label_8;
    QgsPenJoinStyleComboBox *mFrameJoinStyleCombo;
    QgsCollapsibleGroupBoxBasic *mBackgroundGroupBox;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QgsColorButtonV2 *mBackgroundColorButton;
    QSpacerItem *horizontalSpacer;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_8;
    QLabel *mItemIdLabel;
    QLineEdit *mItemIdLineEdit;
    QgsCollapsibleGroupBoxBasic *groupRendering;
    QGridLayout *gridLayout_4;
    QLabel *labelBlendMode;
    QHBoxLayout *horizontalLayout_3;
    QgsBlendModeComboBox *mBlendModeCombo;
    QgsDataDefinedButton *mBlendModeDDBtn;
    QLabel *labelTransparency;
    QHBoxLayout *horizontalLayout_2;
    QSlider *mTransparencySlider;
    QgsSpinBox *mTransparencySpnBx;
    QgsDataDefinedButton *mTransparencyDDBtn;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mExcludeFromPrintsCheckBox;
    QgsDataDefinedButton *mExcludePrintsDDBtn;
    QgsCollapsibleGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QgsVariableEditorWidget *mVariableEditor;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsComposerItemWidgetBase)
    {
        if (QgsComposerItemWidgetBase->objectName().isEmpty())
            QgsComposerItemWidgetBase->setObjectName(QString::fromUtf8("QgsComposerItemWidgetBase"));
        QgsComposerItemWidgetBase->resize(290, 847);
        verticalLayout_2 = new QVBoxLayout(QgsComposerItemWidgetBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mGeneralOptionsGroupBox = new QgsCollapsibleGroupBoxBasic(QgsComposerItemWidgetBase);
        mGeneralOptionsGroupBox->setObjectName(QString::fromUtf8("mGeneralOptionsGroupBox"));
        mGeneralOptionsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mGeneralOptionsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mGeneralOptionsGroupBox->setProperty("collapsed", QVariant(true));
        verticalLayout = new QVBoxLayout(mGeneralOptionsGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mWidthLabel = new QLabel(mGeneralOptionsGroupBox);
        mWidthLabel->setObjectName(QString::fromUtf8("mWidthLabel"));

        gridLayout_3->addWidget(mWidthLabel, 3, 0, 1, 1);

        mXLabel = new QLabel(mGeneralOptionsGroupBox);
        mXLabel->setObjectName(QString::fromUtf8("mXLabel"));

        gridLayout_3->addWidget(mXLabel, 1, 0, 1, 1);

        mHeightLabel = new QLabel(mGeneralOptionsGroupBox);
        mHeightLabel->setObjectName(QString::fromUtf8("mHeightLabel"));

        gridLayout_3->addWidget(mHeightLabel, 4, 0, 1, 1);

        mYLabel = new QLabel(mGeneralOptionsGroupBox);
        mYLabel->setObjectName(QString::fromUtf8("mYLabel"));

        gridLayout_3->addWidget(mYLabel, 2, 0, 1, 1);

        mPageLabel = new QLabel(mGeneralOptionsGroupBox);
        mPageLabel->setObjectName(QString::fromUtf8("mPageLabel"));

        gridLayout_3->addWidget(mPageLabel, 0, 0, 1, 1);

        mXPositionDDBtn = new QgsDataDefinedButton(mGeneralOptionsGroupBox);
        mXPositionDDBtn->setObjectName(QString::fromUtf8("mXPositionDDBtn"));

        gridLayout_3->addWidget(mXPositionDDBtn, 1, 3, 1, 1);

        mYPositionDDBtn = new QgsDataDefinedButton(mGeneralOptionsGroupBox);
        mYPositionDDBtn->setObjectName(QString::fromUtf8("mYPositionDDBtn"));

        gridLayout_3->addWidget(mYPositionDDBtn, 2, 3, 1, 1);

        mWidthDDBtn = new QgsDataDefinedButton(mGeneralOptionsGroupBox);
        mWidthDDBtn->setObjectName(QString::fromUtf8("mWidthDDBtn"));

        gridLayout_3->addWidget(mWidthDDBtn, 3, 3, 1, 1);

        mHeightDDBtn = new QgsDataDefinedButton(mGeneralOptionsGroupBox);
        mHeightDDBtn->setObjectName(QString::fromUtf8("mHeightDDBtn"));

        gridLayout_3->addWidget(mHeightDDBtn, 4, 3, 1, 1);

        mPageSpinBox = new QgsSpinBox(mGeneralOptionsGroupBox);
        mPageSpinBox->setObjectName(QString::fromUtf8("mPageSpinBox"));
        mPageSpinBox->setMinimum(1);
        mPageSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mPageSpinBox, 0, 1, 1, 3);

        mWidthSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mWidthSpin->setObjectName(QString::fromUtf8("mWidthSpin"));
        mWidthSpin->setDecimals(3);
        mWidthSpin->setMaximum(1e+07);
        mWidthSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mWidthSpin, 3, 1, 1, 2);

        mHeightSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mHeightSpin->setObjectName(QString::fromUtf8("mHeightSpin"));
        mHeightSpin->setDecimals(3);
        mHeightSpin->setMaximum(1e+07);
        mHeightSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mHeightSpin, 4, 1, 1, 2);

        mYPosSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mYPosSpin->setObjectName(QString::fromUtf8("mYPosSpin"));
        mYPosSpin->setDecimals(3);
        mYPosSpin->setMinimum(-1e+07);
        mYPosSpin->setMaximum(1e+07);
        mYPosSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mYPosSpin, 2, 1, 1, 2);

        mXPosSpin = new QgsDoubleSpinBox(mGeneralOptionsGroupBox);
        mXPosSpin->setObjectName(QString::fromUtf8("mXPosSpin"));
        mXPosSpin->setDecimals(3);
        mXPosSpin->setMinimum(-1e+07);
        mXPosSpin->setMaximum(1e+07);
        mXPosSpin->setProperty("showClearButton", QVariant(false));

        gridLayout_3->addWidget(mXPosSpin, 1, 1, 1, 2);

        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 1);
        gridLayout_3->setColumnStretch(3, 1);

        verticalLayout->addLayout(gridLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(mGeneralOptionsGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mUpperMiddleCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mUpperMiddleCheckBox->setObjectName(QString::fromUtf8("mUpperMiddleCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mUpperMiddleCheckBox->sizePolicy().hasHeightForWidth());
        mUpperMiddleCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mUpperMiddleCheckBox, 0, 1, 1, 1);

        mMiddleRightCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mMiddleRightCheckBox->setObjectName(QString::fromUtf8("mMiddleRightCheckBox"));
        sizePolicy.setHeightForWidth(mMiddleRightCheckBox->sizePolicy().hasHeightForWidth());
        mMiddleRightCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mMiddleRightCheckBox, 1, 2, 1, 1);

        mMiddleCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mMiddleCheckBox->setObjectName(QString::fromUtf8("mMiddleCheckBox"));
        sizePolicy.setHeightForWidth(mMiddleCheckBox->sizePolicy().hasHeightForWidth());
        mMiddleCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mMiddleCheckBox, 1, 1, 1, 1);

        mUpperRightCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mUpperRightCheckBox->setObjectName(QString::fromUtf8("mUpperRightCheckBox"));
        sizePolicy.setHeightForWidth(mUpperRightCheckBox->sizePolicy().hasHeightForWidth());
        mUpperRightCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mUpperRightCheckBox, 0, 2, 1, 1);

        mLowerMiddleCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mLowerMiddleCheckBox->setObjectName(QString::fromUtf8("mLowerMiddleCheckBox"));
        sizePolicy.setHeightForWidth(mLowerMiddleCheckBox->sizePolicy().hasHeightForWidth());
        mLowerMiddleCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLowerMiddleCheckBox, 2, 1, 1, 1);

        mLowerRightCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mLowerRightCheckBox->setObjectName(QString::fromUtf8("mLowerRightCheckBox"));
        sizePolicy.setHeightForWidth(mLowerRightCheckBox->sizePolicy().hasHeightForWidth());
        mLowerRightCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLowerRightCheckBox, 2, 2, 1, 1);

        mUpperLeftCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mUpperLeftCheckBox->setObjectName(QString::fromUtf8("mUpperLeftCheckBox"));
        sizePolicy.setHeightForWidth(mUpperLeftCheckBox->sizePolicy().hasHeightForWidth());
        mUpperLeftCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mUpperLeftCheckBox, 0, 0, 1, 1);

        mLowerLeftCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mLowerLeftCheckBox->setObjectName(QString::fromUtf8("mLowerLeftCheckBox"));
        sizePolicy.setHeightForWidth(mLowerLeftCheckBox->sizePolicy().hasHeightForWidth());
        mLowerLeftCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mLowerLeftCheckBox, 2, 0, 1, 1);

        mMiddleLeftCheckBox = new QCheckBox(mGeneralOptionsGroupBox);
        mMiddleLeftCheckBox->setObjectName(QString::fromUtf8("mMiddleLeftCheckBox"));
        sizePolicy.setHeightForWidth(mMiddleLeftCheckBox->sizePolicy().hasHeightForWidth());
        mMiddleLeftCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mMiddleLeftCheckBox, 1, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(mGeneralOptionsGroupBox);

        mTransformsGroupBox = new QgsCollapsibleGroupBoxBasic(QgsComposerItemWidgetBase);
        mTransformsGroupBox->setObjectName(QString::fromUtf8("mTransformsGroupBox"));
        mTransformsGroupBox->setFocusPolicy(Qt::StrongFocus);
        mTransformsGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mTransformsGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_5 = new QGridLayout(mTransformsGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(mTransformsGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mItemRotationSpinBox = new QgsDoubleSpinBox(mTransformsGroupBox);
        mItemRotationSpinBox->setObjectName(QString::fromUtf8("mItemRotationSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mItemRotationSpinBox->sizePolicy().hasHeightForWidth());
        mItemRotationSpinBox->setSizePolicy(sizePolicy1);
        mItemRotationSpinBox->setMaximum(360);

        horizontalLayout_4->addWidget(mItemRotationSpinBox);

        mItemRotationDDBtn = new QgsDataDefinedButton(mTransformsGroupBox);
        mItemRotationDDBtn->setObjectName(QString::fromUtf8("mItemRotationDDBtn"));

        horizontalLayout_4->addWidget(mItemRotationDDBtn);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_2->addWidget(mTransformsGroupBox);

        mFrameGroupBox = new QgsCollapsibleGroupBoxBasic(QgsComposerItemWidgetBase);
        mFrameGroupBox->setObjectName(QString::fromUtf8("mFrameGroupBox"));
        mFrameGroupBox->setCheckable(true);
        mFrameGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mFrameGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_6 = new QGridLayout(mFrameGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_3 = new QLabel(mFrameGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mFrameColorButton = new QgsColorButtonV2(mFrameGroupBox);
        mFrameColorButton->setObjectName(QString::fromUtf8("mFrameColorButton"));
        sizePolicy.setHeightForWidth(mFrameColorButton->sizePolicy().hasHeightForWidth());
        mFrameColorButton->setSizePolicy(sizePolicy);
        mFrameColorButton->setMinimumSize(QSize(120, 0));
        mFrameColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_6->addWidget(mFrameColorButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout_6->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        mOutlineWidthLabel = new QLabel(mFrameGroupBox);
        mOutlineWidthLabel->setObjectName(QString::fromUtf8("mOutlineWidthLabel"));
        mOutlineWidthLabel->setWordWrap(true);

        gridLayout_6->addWidget(mOutlineWidthLabel, 1, 0, 1, 1);

        mOutlineWidthSpinBox = new QgsDoubleSpinBox(mFrameGroupBox);
        mOutlineWidthSpinBox->setObjectName(QString::fromUtf8("mOutlineWidthSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mOutlineWidthSpinBox->sizePolicy().hasHeightForWidth());
        mOutlineWidthSpinBox->setSizePolicy(sizePolicy2);
        mOutlineWidthSpinBox->setSingleStep(0.1);
        mOutlineWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout_6->addWidget(mOutlineWidthSpinBox, 1, 1, 1, 1);

        label_8 = new QLabel(mFrameGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_6->addWidget(label_8, 2, 0, 1, 1);

        mFrameJoinStyleCombo = new QgsPenJoinStyleComboBox(mFrameGroupBox);
        mFrameJoinStyleCombo->setObjectName(QString::fromUtf8("mFrameJoinStyleCombo"));
        sizePolicy2.setHeightForWidth(mFrameJoinStyleCombo->sizePolicy().hasHeightForWidth());
        mFrameJoinStyleCombo->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(mFrameJoinStyleCombo, 2, 1, 1, 1);


        verticalLayout_2->addWidget(mFrameGroupBox);

        mBackgroundGroupBox = new QgsCollapsibleGroupBoxBasic(QgsComposerItemWidgetBase);
        mBackgroundGroupBox->setObjectName(QString::fromUtf8("mBackgroundGroupBox"));
        mBackgroundGroupBox->setCheckable(true);
        mBackgroundGroupBox->setChecked(true);
        mBackgroundGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mBackgroundGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_7 = new QGridLayout(mBackgroundGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_4 = new QLabel(mBackgroundGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mBackgroundColorButton = new QgsColorButtonV2(mBackgroundGroupBox);
        mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));
        sizePolicy.setHeightForWidth(mBackgroundColorButton->sizePolicy().hasHeightForWidth());
        mBackgroundColorButton->setSizePolicy(sizePolicy);
        mBackgroundColorButton->setMinimumSize(QSize(120, 0));
        mBackgroundColorButton->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_5->addWidget(mBackgroundColorButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        gridLayout_7->addLayout(horizontalLayout_5, 0, 1, 1, 1);


        verticalLayout_2->addWidget(mBackgroundGroupBox);

        groupBox = new QgsCollapsibleGroupBoxBasic(QgsComposerItemWidgetBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(true));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        mItemIdLabel = new QLabel(groupBox);
        mItemIdLabel->setObjectName(QString::fromUtf8("mItemIdLabel"));

        gridLayout_8->addWidget(mItemIdLabel, 0, 0, 1, 1);

        mItemIdLineEdit = new QLineEdit(groupBox);
        mItemIdLineEdit->setObjectName(QString::fromUtf8("mItemIdLineEdit"));

        gridLayout_8->addWidget(mItemIdLineEdit, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupRendering = new QgsCollapsibleGroupBoxBasic(QgsComposerItemWidgetBase);
        groupRendering->setObjectName(QString::fromUtf8("groupRendering"));
        groupRendering->setFocusPolicy(Qt::StrongFocus);
        groupRendering->setProperty("collapsed", QVariant(true));
        groupRendering->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_4 = new QGridLayout(groupRendering);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        labelBlendMode = new QLabel(groupRendering);
        labelBlendMode->setObjectName(QString::fromUtf8("labelBlendMode"));

        gridLayout_4->addWidget(labelBlendMode, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mBlendModeCombo = new QgsBlendModeComboBox(groupRendering);
        mBlendModeCombo->setObjectName(QString::fromUtf8("mBlendModeCombo"));

        horizontalLayout_3->addWidget(mBlendModeCombo);

        mBlendModeDDBtn = new QgsDataDefinedButton(groupRendering);
        mBlendModeDDBtn->setObjectName(QString::fromUtf8("mBlendModeDDBtn"));

        horizontalLayout_3->addWidget(mBlendModeDDBtn);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        labelTransparency = new QLabel(groupRendering);
        labelTransparency->setObjectName(QString::fromUtf8("labelTransparency"));

        gridLayout_4->addWidget(labelTransparency, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mTransparencySlider = new QSlider(groupRendering);
        mTransparencySlider->setObjectName(QString::fromUtf8("mTransparencySlider"));
        mTransparencySlider->setMaximum(100);
        mTransparencySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(mTransparencySlider);

        mTransparencySpnBx = new QgsSpinBox(groupRendering);
        mTransparencySpnBx->setObjectName(QString::fromUtf8("mTransparencySpnBx"));
        mTransparencySpnBx->setMinimumSize(QSize(80, 25));
        mTransparencySpnBx->setMaximum(100);

        horizontalLayout_2->addWidget(mTransparencySpnBx);

        mTransparencyDDBtn = new QgsDataDefinedButton(groupRendering);
        mTransparencyDDBtn->setObjectName(QString::fromUtf8("mTransparencyDDBtn"));

        horizontalLayout_2->addWidget(mTransparencyDDBtn);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mExcludeFromPrintsCheckBox = new QCheckBox(groupRendering);
        mExcludeFromPrintsCheckBox->setObjectName(QString::fromUtf8("mExcludeFromPrintsCheckBox"));

        horizontalLayout->addWidget(mExcludeFromPrintsCheckBox);

        mExcludePrintsDDBtn = new QgsDataDefinedButton(groupRendering);
        mExcludePrintsDDBtn->setObjectName(QString::fromUtf8("mExcludePrintsDDBtn"));

        horizontalLayout->addWidget(mExcludePrintsDDBtn);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 2);


        verticalLayout_2->addWidget(groupRendering);

        groupBox_3 = new QgsCollapsibleGroupBox(QgsComposerItemWidgetBase);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_3);
        mVariableEditor->setObjectName(QString::fromUtf8("mVariableEditor"));
        mVariableEditor->setMinimumSize(QSize(0, 200));

        verticalLayout_4->addWidget(mVariableEditor);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        mOutlineWidthLabel->setBuddy(mOutlineWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mGeneralOptionsGroupBox, mPageSpinBox);
        QWidget::setTabOrder(mPageSpinBox, mXPosSpin);
        QWidget::setTabOrder(mXPosSpin, mXPositionDDBtn);
        QWidget::setTabOrder(mXPositionDDBtn, mYPosSpin);
        QWidget::setTabOrder(mYPosSpin, mYPositionDDBtn);
        QWidget::setTabOrder(mYPositionDDBtn, mWidthSpin);
        QWidget::setTabOrder(mWidthSpin, mWidthDDBtn);
        QWidget::setTabOrder(mWidthDDBtn, mHeightSpin);
        QWidget::setTabOrder(mHeightSpin, mHeightDDBtn);
        QWidget::setTabOrder(mHeightDDBtn, mUpperLeftCheckBox);
        QWidget::setTabOrder(mUpperLeftCheckBox, mUpperMiddleCheckBox);
        QWidget::setTabOrder(mUpperMiddleCheckBox, mUpperRightCheckBox);
        QWidget::setTabOrder(mUpperRightCheckBox, mMiddleLeftCheckBox);
        QWidget::setTabOrder(mMiddleLeftCheckBox, mMiddleCheckBox);
        QWidget::setTabOrder(mMiddleCheckBox, mMiddleRightCheckBox);
        QWidget::setTabOrder(mMiddleRightCheckBox, mLowerLeftCheckBox);
        QWidget::setTabOrder(mLowerLeftCheckBox, mLowerMiddleCheckBox);
        QWidget::setTabOrder(mLowerMiddleCheckBox, mLowerRightCheckBox);
        QWidget::setTabOrder(mLowerRightCheckBox, mTransformsGroupBox);
        QWidget::setTabOrder(mTransformsGroupBox, mItemRotationSpinBox);
        QWidget::setTabOrder(mItemRotationSpinBox, mItemRotationDDBtn);
        QWidget::setTabOrder(mItemRotationDDBtn, mFrameGroupBox);
        QWidget::setTabOrder(mFrameGroupBox, mFrameColorButton);
        QWidget::setTabOrder(mFrameColorButton, mOutlineWidthSpinBox);
        QWidget::setTabOrder(mOutlineWidthSpinBox, mFrameJoinStyleCombo);
        QWidget::setTabOrder(mFrameJoinStyleCombo, mBackgroundGroupBox);
        QWidget::setTabOrder(mBackgroundGroupBox, mBackgroundColorButton);
        QWidget::setTabOrder(mBackgroundColorButton, groupBox);
        QWidget::setTabOrder(groupBox, mItemIdLineEdit);
        QWidget::setTabOrder(mItemIdLineEdit, groupRendering);
        QWidget::setTabOrder(groupRendering, mBlendModeCombo);
        QWidget::setTabOrder(mBlendModeCombo, mBlendModeDDBtn);
        QWidget::setTabOrder(mBlendModeDDBtn, mTransparencySlider);
        QWidget::setTabOrder(mTransparencySlider, mTransparencySpnBx);
        QWidget::setTabOrder(mTransparencySpnBx, mTransparencyDDBtn);
        QWidget::setTabOrder(mTransparencyDDBtn, mExcludeFromPrintsCheckBox);
        QWidget::setTabOrder(mExcludeFromPrintsCheckBox, mExcludePrintsDDBtn);

        retranslateUi(QgsComposerItemWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerItemWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerItemWidgetBase)
    {
        QgsComposerItemWidgetBase->setWindowTitle(QApplication::translate("QgsComposerItemWidgetBase", "Global Options", 0, QApplication::UnicodeUTF8));
        mGeneralOptionsGroupBox->setTitle(QApplication::translate("QgsComposerItemWidgetBase", "Position and size", 0, QApplication::UnicodeUTF8));
        mWidthLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Width", 0, QApplication::UnicodeUTF8));
        mXLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "X", 0, QApplication::UnicodeUTF8));
        mHeightLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Height", 0, QApplication::UnicodeUTF8));
        mYLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Y", 0, QApplication::UnicodeUTF8));
        mPageLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Page", 0, QApplication::UnicodeUTF8));
        mXPositionDDBtn->setText(QApplication::translate("QgsComposerItemWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mYPositionDDBtn->setText(QApplication::translate("QgsComposerItemWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mWidthDDBtn->setText(QApplication::translate("QgsComposerItemWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mHeightDDBtn->setText(QApplication::translate("QgsComposerItemWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mWidthSpin->setSuffix(QApplication::translate("QgsComposerItemWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mHeightSpin->setSuffix(QApplication::translate("QgsComposerItemWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mYPosSpin->setSuffix(QApplication::translate("QgsComposerItemWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mXPosSpin->setSuffix(QApplication::translate("QgsComposerItemWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerItemWidgetBase", "Reference point", 0, QApplication::UnicodeUTF8));
        mUpperMiddleCheckBox->setText(QString());
        mMiddleRightCheckBox->setText(QString());
        mMiddleCheckBox->setText(QString());
        mUpperRightCheckBox->setText(QString());
        mLowerMiddleCheckBox->setText(QString());
        mLowerRightCheckBox->setText(QString());
        mUpperLeftCheckBox->setText(QString());
        mLowerLeftCheckBox->setText(QString());
        mMiddleLeftCheckBox->setText(QString());
        mTransformsGroupBox->setTitle(QApplication::translate("QgsComposerItemWidgetBase", "Rotation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerItemWidgetBase", "Rotation", 0, QApplication::UnicodeUTF8));
        mItemRotationSpinBox->setSuffix(QApplication::translate("QgsComposerItemWidgetBase", " \302\260", 0, QApplication::UnicodeUTF8));
        mItemRotationDDBtn->setText(QApplication::translate("QgsComposerItemWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mFrameGroupBox->setTitle(QApplication::translate("QgsComposerItemWidgetBase", "Frame", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerItemWidgetBase", "Frame color", 0, QApplication::UnicodeUTF8));
        mFrameColorButton->setText(QString());
        mOutlineWidthLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Thickness", 0, QApplication::UnicodeUTF8));
        mOutlineWidthSpinBox->setSuffix(QApplication::translate("QgsComposerItemWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsComposerItemWidgetBase", "Join style", 0, QApplication::UnicodeUTF8));
        mBackgroundGroupBox->setTitle(QApplication::translate("QgsComposerItemWidgetBase", "Background", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsComposerItemWidgetBase", "Background color", 0, QApplication::UnicodeUTF8));
        mBackgroundColorButton->setText(QString());
        groupBox->setTitle(QApplication::translate("QgsComposerItemWidgetBase", "Item ID", 0, QApplication::UnicodeUTF8));
        mItemIdLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Id", 0, QApplication::UnicodeUTF8));
        groupRendering->setTitle(QApplication::translate("QgsComposerItemWidgetBase", "Rendering", 0, QApplication::UnicodeUTF8));
        labelBlendMode->setText(QApplication::translate("QgsComposerItemWidgetBase", "Blending mode", 0, QApplication::UnicodeUTF8));
        mBlendModeDDBtn->setText(QApplication::translate("QgsComposerItemWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        labelTransparency->setText(QApplication::translate("QgsComposerItemWidgetBase", "Transparency", 0, QApplication::UnicodeUTF8));
        mTransparencyDDBtn->setText(QApplication::translate("QgsComposerItemWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mExcludeFromPrintsCheckBox->setText(QApplication::translate("QgsComposerItemWidgetBase", "Exclude item from exports", 0, QApplication::UnicodeUTF8));
        mExcludePrintsDDBtn->setText(QApplication::translate("QgsComposerItemWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QgsComposerItemWidgetBase", "Variables", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerItemWidgetBase: public Ui_QgsComposerItemWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERITEMWIDGETBASE_H
