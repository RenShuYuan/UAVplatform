/********************************************************************************
** Form generated from reading UI file 'qgscolordialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOLORDIALOG_H
#define UI_QGSCOLORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscolorbuttonv2.h>
#include <qgscolorschemelist.h>
#include <qgscolorwidgets.h>

QT_BEGIN_NAMESPACE

class Ui_QgsColorDialogBase
{
public:
    QAction *mActionImportColors;
    QAction *mActionExportColors;
    QAction *mActionPasteColors;
    QAction *mActionImportPalette;
    QAction *mActionRemovePalette;
    QAction *mActionNewPalette;
    QAction *mActionCopyColors;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *mGridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *mHueRadio;
    QLabel *label_5;
    QgsColorSliderWidget *mHueSlider;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *mSaturationRadio;
    QLabel *label_6;
    QgsColorSliderWidget *mSaturationSlider;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mValueRadio;
    QLabel *label_7;
    QgsColorSliderWidget *mValueSlider;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mRedRadio;
    QLabel *label_8;
    QgsColorSliderWidget *mRedSlider;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *mGreenRadio;
    QLabel *label_9;
    QgsColorSliderWidget *mGreenSlider;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mBlueRadio;
    QLabel *label_10;
    QgsColorSliderWidget *mBlueSlider;
    QHBoxLayout *mAlphaLayout;
    QLabel *mAlphaLabel;
    QgsColorSliderWidget *mAlphaSlider;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QgsColorTextWidget *mColorText;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    QgsColorButtonV2 *mSwatchButton9;
    QgsColorButtonV2 *mSwatchButton11;
    QgsColorButtonV2 *mSwatchButton12;
    QgsColorButtonV2 *mSwatchButton5;
    QgsColorButtonV2 *mSwatchButton2;
    QgsColorButtonV2 *mSwatchButton3;
    QgsColorButtonV2 *mSwatchButton1;
    QgsColorButtonV2 *mSwatchButton13;
    QgsColorButtonV2 *mSwatchButton6;
    QgsColorButtonV2 *mSwatchButton7;
    QgsColorButtonV2 *mSwatchButton14;
    QgsColorButtonV2 *mSwatchButton15;
    QgsColorButtonV2 *mSwatchButton8;
    QgsColorButtonV2 *mSwatchButton16;
    QgsColorButtonV2 *mSwatchButton4;
    QgsColorButtonV2 *mSwatchButton10;
    QTabWidget *mTabWidget;
    QWidget *iconColorBox;
    QHBoxLayout *horizontalLayout_9;
    QgsColorBox *mColorBox;
    QgsColorRampWidget *mVerticalRamp;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QgsColorWheel *mColorWheel;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *mSchemeComboBox;
    QToolButton *mSchemeToolButton;
    QgsColorSchemeList *mSchemeList;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *mAddColorToSchemeButton;
    QPushButton *mRemoveColorsFromSchemeButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QSpinBox *mSpinBoxRadius;
    QPushButton *mSampleButton;
    QLabel *label_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QgsColorPreviewWidget *mSamplePreview;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *mOldColorLabel;
    QPushButton *mAddCustomColorButton;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_13;
    QgsColorPreviewWidget *mColorPreview;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsColorDialogBase)
    {
        if (QgsColorDialogBase->objectName().isEmpty())
            QgsColorDialogBase->setObjectName(QString::fromUtf8("QgsColorDialogBase"));
        QgsColorDialogBase->resize(620, 402);
        QgsColorDialogBase->setSizeGripEnabled(true);
        mActionImportColors = new QAction(QgsColorDialogBase);
        mActionImportColors->setObjectName(QString::fromUtf8("mActionImportColors"));
        mActionExportColors = new QAction(QgsColorDialogBase);
        mActionExportColors->setObjectName(QString::fromUtf8("mActionExportColors"));
        mActionPasteColors = new QAction(QgsColorDialogBase);
        mActionPasteColors->setObjectName(QString::fromUtf8("mActionPasteColors"));
        mActionImportPalette = new QAction(QgsColorDialogBase);
        mActionImportPalette->setObjectName(QString::fromUtf8("mActionImportPalette"));
        mActionRemovePalette = new QAction(QgsColorDialogBase);
        mActionRemovePalette->setObjectName(QString::fromUtf8("mActionRemovePalette"));
        mActionNewPalette = new QAction(QgsColorDialogBase);
        mActionNewPalette->setObjectName(QString::fromUtf8("mActionNewPalette"));
        mActionCopyColors = new QAction(QgsColorDialogBase);
        mActionCopyColors->setObjectName(QString::fromUtf8("mActionCopyColors"));
        verticalLayout_2 = new QVBoxLayout(QgsColorDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mGridLayout = new QGridLayout();
        mGridLayout->setObjectName(QString::fromUtf8("mGridLayout"));
        mGridLayout->setHorizontalSpacing(6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mHueRadio = new QRadioButton(QgsColorDialogBase);
        mHueRadio->setObjectName(QString::fromUtf8("mHueRadio"));

        horizontalLayout_4->addWidget(mHueRadio);

        label_5 = new QLabel(QgsColorDialogBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        mHueSlider = new QgsColorSliderWidget(QgsColorDialogBase);
        mHueSlider->setObjectName(QString::fromUtf8("mHueSlider"));

        horizontalLayout_4->addWidget(mHueSlider);

        horizontalLayout_4->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mSaturationRadio = new QRadioButton(QgsColorDialogBase);
        mSaturationRadio->setObjectName(QString::fromUtf8("mSaturationRadio"));

        horizontalLayout_5->addWidget(mSaturationRadio);

        label_6 = new QLabel(QgsColorDialogBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        mSaturationSlider = new QgsColorSliderWidget(QgsColorDialogBase);
        mSaturationSlider->setObjectName(QString::fromUtf8("mSaturationSlider"));

        horizontalLayout_5->addWidget(mSaturationSlider);

        horizontalLayout_5->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mValueRadio = new QRadioButton(QgsColorDialogBase);
        mValueRadio->setObjectName(QString::fromUtf8("mValueRadio"));

        horizontalLayout_6->addWidget(mValueRadio);

        label_7 = new QLabel(QgsColorDialogBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        mValueSlider = new QgsColorSliderWidget(QgsColorDialogBase);
        mValueSlider->setObjectName(QString::fromUtf8("mValueSlider"));

        horizontalLayout_6->addWidget(mValueSlider);

        horizontalLayout_6->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mRedRadio = new QRadioButton(QgsColorDialogBase);
        mRedRadio->setObjectName(QString::fromUtf8("mRedRadio"));

        horizontalLayout->addWidget(mRedRadio);

        label_8 = new QLabel(QgsColorDialogBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        mRedSlider = new QgsColorSliderWidget(QgsColorDialogBase);
        mRedSlider->setObjectName(QString::fromUtf8("mRedSlider"));

        horizontalLayout->addWidget(mRedSlider);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mGreenRadio = new QRadioButton(QgsColorDialogBase);
        mGreenRadio->setObjectName(QString::fromUtf8("mGreenRadio"));

        horizontalLayout_2->addWidget(mGreenRadio);

        label_9 = new QLabel(QgsColorDialogBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        mGreenSlider = new QgsColorSliderWidget(QgsColorDialogBase);
        mGreenSlider->setObjectName(QString::fromUtf8("mGreenSlider"));

        horizontalLayout_2->addWidget(mGreenSlider);

        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mBlueRadio = new QRadioButton(QgsColorDialogBase);
        mBlueRadio->setObjectName(QString::fromUtf8("mBlueRadio"));

        horizontalLayout_3->addWidget(mBlueRadio);

        label_10 = new QLabel(QgsColorDialogBase);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_3->addWidget(label_10);

        mBlueSlider = new QgsColorSliderWidget(QgsColorDialogBase);
        mBlueSlider->setObjectName(QString::fromUtf8("mBlueSlider"));

        horizontalLayout_3->addWidget(mBlueSlider);

        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        mAlphaLayout = new QHBoxLayout();
        mAlphaLayout->setObjectName(QString::fromUtf8("mAlphaLayout"));
        mAlphaLabel = new QLabel(QgsColorDialogBase);
        mAlphaLabel->setObjectName(QString::fromUtf8("mAlphaLabel"));

        mAlphaLayout->addWidget(mAlphaLabel);

        mAlphaSlider = new QgsColorSliderWidget(QgsColorDialogBase);
        mAlphaSlider->setObjectName(QString::fromUtf8("mAlphaSlider"));

        mAlphaLayout->addWidget(mAlphaSlider);


        verticalLayout->addLayout(mAlphaLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(QgsColorDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        mColorText = new QgsColorTextWidget(QgsColorDialogBase);
        mColorText->setObjectName(QString::fromUtf8("mColorText"));

        horizontalLayout_8->addWidget(mColorText);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        mGridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mSwatchButton9 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton9->setObjectName(QString::fromUtf8("mSwatchButton9"));
        mSwatchButton9->setMinimumSize(QSize(38, 30));
        mSwatchButton9->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton9, 1, 0, 1, 1);

        mSwatchButton11 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton11->setObjectName(QString::fromUtf8("mSwatchButton11"));
        mSwatchButton11->setMinimumSize(QSize(38, 30));
        mSwatchButton11->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton11, 1, 2, 1, 1);

        mSwatchButton12 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton12->setObjectName(QString::fromUtf8("mSwatchButton12"));
        mSwatchButton12->setMinimumSize(QSize(38, 30));
        mSwatchButton12->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton12, 1, 3, 1, 1);

        mSwatchButton5 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton5->setObjectName(QString::fromUtf8("mSwatchButton5"));
        mSwatchButton5->setMinimumSize(QSize(38, 30));
        mSwatchButton5->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton5, 0, 4, 1, 1);

        mSwatchButton2 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton2->setObjectName(QString::fromUtf8("mSwatchButton2"));
        mSwatchButton2->setMinimumSize(QSize(38, 30));
        mSwatchButton2->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton2, 0, 1, 1, 1);

        mSwatchButton3 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton3->setObjectName(QString::fromUtf8("mSwatchButton3"));
        mSwatchButton3->setMinimumSize(QSize(38, 30));
        mSwatchButton3->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton3, 0, 2, 1, 1);

        mSwatchButton1 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton1->setObjectName(QString::fromUtf8("mSwatchButton1"));
        mSwatchButton1->setMinimumSize(QSize(38, 30));
        mSwatchButton1->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton1, 0, 0, 1, 1);

        mSwatchButton13 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton13->setObjectName(QString::fromUtf8("mSwatchButton13"));
        mSwatchButton13->setMinimumSize(QSize(38, 30));
        mSwatchButton13->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton13, 1, 4, 1, 1);

        mSwatchButton6 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton6->setObjectName(QString::fromUtf8("mSwatchButton6"));
        mSwatchButton6->setMinimumSize(QSize(38, 30));
        mSwatchButton6->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton6, 0, 5, 1, 1);

        mSwatchButton7 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton7->setObjectName(QString::fromUtf8("mSwatchButton7"));
        mSwatchButton7->setMinimumSize(QSize(38, 30));
        mSwatchButton7->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton7, 0, 6, 1, 1);

        mSwatchButton14 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton14->setObjectName(QString::fromUtf8("mSwatchButton14"));
        mSwatchButton14->setMinimumSize(QSize(38, 30));
        mSwatchButton14->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton14, 1, 5, 1, 1);

        mSwatchButton15 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton15->setObjectName(QString::fromUtf8("mSwatchButton15"));
        mSwatchButton15->setMinimumSize(QSize(38, 30));
        mSwatchButton15->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton15, 1, 6, 1, 1);

        mSwatchButton8 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton8->setObjectName(QString::fromUtf8("mSwatchButton8"));
        mSwatchButton8->setMinimumSize(QSize(38, 30));
        mSwatchButton8->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton8, 0, 7, 1, 1);

        mSwatchButton16 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton16->setObjectName(QString::fromUtf8("mSwatchButton16"));
        mSwatchButton16->setMinimumSize(QSize(38, 30));
        mSwatchButton16->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton16, 1, 7, 1, 1);

        mSwatchButton4 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton4->setObjectName(QString::fromUtf8("mSwatchButton4"));
        mSwatchButton4->setMinimumSize(QSize(38, 30));
        mSwatchButton4->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton4, 0, 3, 1, 1);

        mSwatchButton10 = new QgsColorButtonV2(QgsColorDialogBase);
        mSwatchButton10->setObjectName(QString::fromUtf8("mSwatchButton10"));
        mSwatchButton10->setMinimumSize(QSize(38, 30));
        mSwatchButton10->setMaximumSize(QSize(38, 30));

        gridLayout_4->addWidget(mSwatchButton10, 1, 1, 1, 1);


        mGridLayout->addLayout(gridLayout_4, 1, 1, 1, 1);

        mTabWidget = new QTabWidget(QgsColorDialogBase);
        mTabWidget->setObjectName(QString::fromUtf8("mTabWidget"));
        mTabWidget->setIconSize(QSize(16, 16));
        iconColorBox = new QWidget();
        iconColorBox->setObjectName(QString::fromUtf8("iconColorBox"));
        horizontalLayout_9 = new QHBoxLayout(iconColorBox);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mColorBox = new QgsColorBox(iconColorBox);
        mColorBox->setObjectName(QString::fromUtf8("mColorBox"));

        horizontalLayout_9->addWidget(mColorBox);

        mVerticalRamp = new QgsColorRampWidget(iconColorBox);
        mVerticalRamp->setObjectName(QString::fromUtf8("mVerticalRamp"));

        horizontalLayout_9->addWidget(mVerticalRamp);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconColorBox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(iconColorBox, icon, QString());
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mColorWheel = new QgsColorWheel(widget);
        mColorWheel->setObjectName(QString::fromUtf8("mColorWheel"));

        horizontalLayout_10->addWidget(mColorWheel);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mIconColorWheel.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(widget, icon1, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mSchemeComboBox = new QComboBox(tab);
        mSchemeComboBox->setObjectName(QString::fromUtf8("mSchemeComboBox"));

        horizontalLayout_7->addWidget(mSchemeComboBox);

        mSchemeToolButton = new QToolButton(tab);
        mSchemeToolButton->setObjectName(QString::fromUtf8("mSchemeToolButton"));
        mSchemeToolButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout_7->addWidget(mSchemeToolButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        mSchemeList = new QgsColorSchemeList(tab);
        mSchemeList->setObjectName(QString::fromUtf8("mSchemeList"));

        verticalLayout_3->addWidget(mSchemeList);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(1);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        mAddColorToSchemeButton = new QPushButton(tab);
        mAddColorToSchemeButton->setObjectName(QString::fromUtf8("mAddColorToSchemeButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddColorToSchemeButton->setIcon(icon2);

        horizontalLayout_11->addWidget(mAddColorToSchemeButton);

        mRemoveColorsFromSchemeButton = new QPushButton(tab);
        mRemoveColorsFromSchemeButton->setObjectName(QString::fromUtf8("mRemoveColorsFromSchemeButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mRemoveColorsFromSchemeButton->setIcon(icon3);

        horizontalLayout_11->addWidget(mRemoveColorsFromSchemeButton);


        verticalLayout_3->addLayout(horizontalLayout_11);

        verticalLayout_3->setStretch(1, 1);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mIconColorSwatches.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab, icon4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_12->addWidget(label_2);

        mSpinBoxRadius = new QSpinBox(tab_2);
        mSpinBoxRadius->setObjectName(QString::fromUtf8("mSpinBoxRadius"));
        mSpinBoxRadius->setMinimum(1);
        mSpinBoxRadius->setMaximum(100);

        horizontalLayout_12->addWidget(mSpinBoxRadius);


        verticalLayout_4->addLayout(horizontalLayout_12);

        mSampleButton = new QPushButton(tab_2);
        mSampleButton->setObjectName(QString::fromUtf8("mSampleButton"));

        verticalLayout_4->addWidget(mSampleButton);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::AutoText);
        label_4->setWordWrap(true);

        verticalLayout_4->addWidget(label_4);

        frame = new QFrame(tab_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mSamplePreview = new QgsColorPreviewWidget(frame);
        mSamplePreview->setObjectName(QString::fromUtf8("mSamplePreview"));
        mSamplePreview->setMinimumSize(QSize(0, 40));

        verticalLayout_5->addWidget(mSamplePreview);


        verticalLayout_4->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mIconColorPicker.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mTabWidget->addTab(tab_2, icon5, QString());

        mGridLayout->addWidget(mTabWidget, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(QgsColorDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mOldColorLabel = new QLabel(QgsColorDialogBase);
        mOldColorLabel->setObjectName(QString::fromUtf8("mOldColorLabel"));
        mOldColorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(mOldColorLabel, 1, 0, 1, 1);

        mAddCustomColorButton = new QPushButton(QgsColorDialogBase);
        mAddCustomColorButton->setObjectName(QString::fromUtf8("mAddCustomColorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mAddCustomColorButton->sizePolicy().hasHeightForWidth());
        mAddCustomColorButton->setSizePolicy(sizePolicy);
        mAddCustomColorButton->setMinimumSize(QSize(28, 0));
        mAddCustomColorButton->setMaximumSize(QSize(28, 16777215));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionAtlasNext.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddCustomColorButton->setIcon(icon6);
        mAddCustomColorButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(mAddCustomColorButton, 0, 2, 2, 1);

        frame_2 = new QFrame(QgsColorDialogBase);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_2);
        horizontalLayout_13->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mColorPreview = new QgsColorPreviewWidget(frame_2);
        mColorPreview->setObjectName(QString::fromUtf8("mColorPreview"));
        mColorPreview->setMinimumSize(QSize(0, 40));

        horizontalLayout_13->addWidget(mColorPreview);


        gridLayout->addWidget(frame_2, 0, 1, 2, 1);

        gridLayout->setColumnStretch(1, 1);

        mGridLayout->addLayout(gridLayout, 1, 0, 1, 1);

        mGridLayout->setRowStretch(0, 1);
        mGridLayout->setColumnStretch(0, 1);

        verticalLayout_2->addLayout(mGridLayout);

        mButtonBox = new QDialogButtonBox(QgsColorDialogBase);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(mButtonBox);


        retranslateUi(QgsColorDialogBase);

        mTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsColorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsColorDialogBase)
    {
        QgsColorDialogBase->setWindowTitle(QApplication::translate("QgsColorDialogBase", "Color picker", 0, QApplication::UnicodeUTF8));
        mActionImportColors->setText(QApplication::translate("QgsColorDialogBase", "Import Colors...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionImportColors->setToolTip(QApplication::translate("QgsColorDialogBase", "Import colors from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionExportColors->setText(QApplication::translate("QgsColorDialogBase", "Export Colors...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionExportColors->setToolTip(QApplication::translate("QgsColorDialogBase", "Export colors to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionPasteColors->setText(QApplication::translate("QgsColorDialogBase", "Paste Colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionPasteColors->setToolTip(QApplication::translate("QgsColorDialogBase", "Paste colors from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionImportPalette->setText(QApplication::translate("QgsColorDialogBase", "Import Palette...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionImportPalette->setToolTip(QApplication::translate("QgsColorDialogBase", "Import palette from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionRemovePalette->setText(QApplication::translate("QgsColorDialogBase", "Remove Palette", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionRemovePalette->setToolTip(QApplication::translate("QgsColorDialogBase", "Remove current palette", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionNewPalette->setText(QApplication::translate("QgsColorDialogBase", "New Palette...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionNewPalette->setToolTip(QApplication::translate("QgsColorDialogBase", "Create a new palette", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionCopyColors->setText(QApplication::translate("QgsColorDialogBase", "Copy Colors", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionCopyColors->setToolTip(QApplication::translate("QgsColorDialogBase", "Copy selected colors", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mHueRadio->setText(QString());
        label_5->setText(QApplication::translate("QgsColorDialogBase", "H", 0, QApplication::UnicodeUTF8));
        mSaturationRadio->setText(QString());
        label_6->setText(QApplication::translate("QgsColorDialogBase", "S", 0, QApplication::UnicodeUTF8));
        mValueRadio->setText(QString());
        label_7->setText(QApplication::translate("QgsColorDialogBase", "V", 0, QApplication::UnicodeUTF8));
        mRedRadio->setText(QString());
        label_8->setText(QApplication::translate("QgsColorDialogBase", "R", 0, QApplication::UnicodeUTF8));
        mGreenRadio->setText(QString());
        label_9->setText(QApplication::translate("QgsColorDialogBase", "G", 0, QApplication::UnicodeUTF8));
        mBlueRadio->setText(QString());
        label_10->setText(QApplication::translate("QgsColorDialogBase", "B", 0, QApplication::UnicodeUTF8));
        mAlphaLabel->setText(QApplication::translate("QgsColorDialogBase", "Opacity", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsColorDialogBase", "HTML notation", 0, QApplication::UnicodeUTF8));
        mSwatchButton9->setText(QString());
        mSwatchButton11->setText(QString());
        mSwatchButton12->setText(QString());
        mSwatchButton5->setText(QString());
        mSwatchButton2->setText(QString());
        mSwatchButton3->setText(QString());
        mSwatchButton1->setText(QString());
        mSwatchButton13->setText(QString());
        mSwatchButton6->setText(QString());
        mSwatchButton7->setText(QString());
        mSwatchButton14->setText(QString());
        mSwatchButton15->setText(QString());
        mSwatchButton8->setText(QString());
        mSwatchButton16->setText(QString());
        mSwatchButton4->setText(QString());
        mSwatchButton10->setText(QString());
        mTabWidget->setTabText(mTabWidget->indexOf(iconColorBox), QString());
        mTabWidget->setTabToolTip(mTabWidget->indexOf(iconColorBox), QApplication::translate("QgsColorDialogBase", "Color ramp", 0, QApplication::UnicodeUTF8));
        mTabWidget->setTabText(mTabWidget->indexOf(widget), QString());
        mTabWidget->setTabToolTip(mTabWidget->indexOf(widget), QApplication::translate("QgsColorDialogBase", "Color wheel", 0, QApplication::UnicodeUTF8));
        mSchemeToolButton->setText(QApplication::translate("QgsColorDialogBase", "...", 0, QApplication::UnicodeUTF8));
        mAddColorToSchemeButton->setText(QString());
        mRemoveColorsFromSchemeButton->setText(QString());
        mTabWidget->setTabText(mTabWidget->indexOf(tab), QString());
        mTabWidget->setTabToolTip(mTabWidget->indexOf(tab), QApplication::translate("QgsColorDialogBase", "Color swatches", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsColorDialogBase", "Sample average radius", 0, QApplication::UnicodeUTF8));
        mSpinBoxRadius->setSuffix(QApplication::translate("QgsColorDialogBase", " px", 0, QApplication::UnicodeUTF8));
        mSampleButton->setText(QApplication::translate("QgsColorDialogBase", "Sample color", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsColorDialogBase", "<i>Press space to sample a color from under the mouse cursor</i>", 0, QApplication::UnicodeUTF8));
        mTabWidget->setTabText(mTabWidget->indexOf(tab_2), QString());
        mTabWidget->setTabToolTip(mTabWidget->indexOf(tab_2), QApplication::translate("QgsColorDialogBase", "Color picker", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsColorDialogBase", "Current", 0, QApplication::UnicodeUTF8));
        mOldColorLabel->setText(QApplication::translate("QgsColorDialogBase", "Old", 0, QApplication::UnicodeUTF8));
        mAddCustomColorButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsColorDialogBase: public Ui_QgsColorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOLORDIALOG_H
