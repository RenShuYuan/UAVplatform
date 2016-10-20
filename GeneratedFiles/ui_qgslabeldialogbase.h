/********************************************************************************
** Form generated from reading UI file 'qgslabeldialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELDIALOGBASE_H
#define UI_QGSLABELDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsLabelDialogBase
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *_5;
    QRadioButton *radioBelowRight;
    QRadioButton *radioRight;
    QRadioButton *radioBelow;
    QRadioButton *radioOver;
    QRadioButton *radioAbove;
    QRadioButton *radioLeft;
    QRadioButton *radioBelowLeft;
    QRadioButton *radioAboveRight;
    QRadioButton *radioAboveLeft;
    QGroupBox *chkUseScaleDependentRendering;
    QGridLayout *_2;
    QLabel *textLabel1_2_2_1;
    QLabel *textLabel1_1;
    QLineEdit *leMinimumScale;
    QLineEdit *leMaximumScale;
    QGroupBox *chkUseBuffer;
    QGridLayout *gridLayout_9;
    QLabel *textLabel4_3_2_2;
    QDoubleSpinBox *spinBufferSize;
    QComboBox *cboBufferSizeUnits;
    QPushButton *pbnDefaultBufferColor;
    QSpinBox *spinBufferTransparency;
    QGroupBox *buttonGroup10;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *spinXOffset;
    QDoubleSpinBox *spinYOffset;
    QComboBox *cboOffsetUnits;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QLabel *textLabel5;
    QComboBox *cboLabelField;
    QLabel *textLabel1;
    QLineEdit *leDefaultLabel;
    QLabel *textLabel5_2_2_3_2;
    QLabel *textLabel1_2_2_2_2_2;
    QDoubleSpinBox *spinFontSize;
    QSpinBox *spinAngle;
    QComboBox *cboFontSizeUnits;
    QPushButton *btnDefaultFont;
    QPushButton *pbnDefaultFontColor;
    QCheckBox *chkUseMultiline;
    QCheckBox *chkSelectedOnly;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *textLabel1_2_2_2_2_3;
    QComboBox *cboAlignmentField;
    QLabel *textLabel1_2_2_2_2;
    QComboBox *cboAngleField;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_10;
    QLabel *lblFont;
    QComboBox *cboFontField;
    QLabel *textLabel4;
    QComboBox *cboBoldField;
    QLabel *textLabel4_2_4;
    QComboBox *cboItalicField;
    QLabel *textLabel4_3;
    QComboBox *cboUnderlineField;
    QLabel *textLabel4_3_2;
    QComboBox *cboFontSizeField;
    QLabel *textLabel4_3_2_4;
    QComboBox *cboFontSizeTypeField;
    QLabel *textLabel4_3_2_5;
    QComboBox *cboFontColorField;
    QComboBox *cboStrikeOutField;
    QLabel *label;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_11;
    QLabel *textLabel1_3_2_2_2;
    QComboBox *cboBufferTransparencyField;
    QLabel *textLabel4_3_2_2_2;
    QComboBox *cboBufferSizeField;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QLabel *textLabel1_2;
    QComboBox *cboXCoordinateField;
    QLabel *textLabel1_2_2;
    QComboBox *cboYCoordinateField;
    QLabel *textLabel1_2_3;
    QComboBox *cboXOffsetField;
    QLabel *textLabel1_2_2_2;
    QComboBox *cboYOffsetField;
    QGroupBox *groupBox5;
    QGridLayout *gridLayout1;
    QLabel *lblSample;

    void setupUi(QWidget *QgsLabelDialogBase)
    {
        if (QgsLabelDialogBase->objectName().isEmpty())
            QgsLabelDialogBase->setObjectName(QString::fromUtf8("QgsLabelDialogBase"));
        QgsLabelDialogBase->resize(567, 479);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLabelDialogBase->sizePolicy().hasHeightForWidth());
        QgsLabelDialogBase->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QgsLabelDialogBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(QgsLabelDialogBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 527, 543));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        _5 = new QGridLayout(groupBox_2);
        _5->setSpacing(6);
        _5->setContentsMargins(11, 11, 11, 11);
        _5->setObjectName(QString::fromUtf8("_5"));
        radioBelowRight = new QRadioButton(groupBox_2);
        radioBelowRight->setObjectName(QString::fromUtf8("radioBelowRight"));

        _5->addWidget(radioBelowRight, 2, 2, 1, 1);

        radioRight = new QRadioButton(groupBox_2);
        radioRight->setObjectName(QString::fromUtf8("radioRight"));

        _5->addWidget(radioRight, 1, 2, 1, 1);

        radioBelow = new QRadioButton(groupBox_2);
        radioBelow->setObjectName(QString::fromUtf8("radioBelow"));

        _5->addWidget(radioBelow, 2, 1, 1, 1);

        radioOver = new QRadioButton(groupBox_2);
        radioOver->setObjectName(QString::fromUtf8("radioOver"));
        radioOver->setChecked(true);

        _5->addWidget(radioOver, 1, 1, 1, 1);

        radioAbove = new QRadioButton(groupBox_2);
        radioAbove->setObjectName(QString::fromUtf8("radioAbove"));

        _5->addWidget(radioAbove, 0, 1, 1, 1);

        radioLeft = new QRadioButton(groupBox_2);
        radioLeft->setObjectName(QString::fromUtf8("radioLeft"));

        _5->addWidget(radioLeft, 1, 0, 1, 1);

        radioBelowLeft = new QRadioButton(groupBox_2);
        radioBelowLeft->setObjectName(QString::fromUtf8("radioBelowLeft"));

        _5->addWidget(radioBelowLeft, 2, 0, 1, 1);

        radioAboveRight = new QRadioButton(groupBox_2);
        radioAboveRight->setObjectName(QString::fromUtf8("radioAboveRight"));

        _5->addWidget(radioAboveRight, 0, 2, 1, 1);

        radioAboveLeft = new QRadioButton(groupBox_2);
        radioAboveLeft->setObjectName(QString::fromUtf8("radioAboveLeft"));

        _5->addWidget(radioAboveLeft, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        chkUseScaleDependentRendering = new QGroupBox(scrollAreaWidgetContents);
        chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
        chkUseScaleDependentRendering->setCheckable(true);
        _2 = new QGridLayout(chkUseScaleDependentRendering);
        _2->setSpacing(6);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QString::fromUtf8("_2"));
        textLabel1_2_2_1 = new QLabel(chkUseScaleDependentRendering);
        textLabel1_2_2_1->setObjectName(QString::fromUtf8("textLabel1_2_2_1"));

        _2->addWidget(textLabel1_2_2_1, 0, 2, 1, 1);

        textLabel1_1 = new QLabel(chkUseScaleDependentRendering);
        textLabel1_1->setObjectName(QString::fromUtf8("textLabel1_1"));

        _2->addWidget(textLabel1_1, 0, 0, 1, 1);

        leMinimumScale = new QLineEdit(chkUseScaleDependentRendering);
        leMinimumScale->setObjectName(QString::fromUtf8("leMinimumScale"));

        _2->addWidget(leMinimumScale, 0, 1, 1, 1);

        leMaximumScale = new QLineEdit(chkUseScaleDependentRendering);
        leMaximumScale->setObjectName(QString::fromUtf8("leMaximumScale"));

        _2->addWidget(leMaximumScale, 0, 3, 1, 1);


        gridLayout_2->addWidget(chkUseScaleDependentRendering, 2, 0, 1, 1);

        chkUseBuffer = new QGroupBox(scrollAreaWidgetContents);
        chkUseBuffer->setObjectName(QString::fromUtf8("chkUseBuffer"));
        chkUseBuffer->setEnabled(true);
        chkUseBuffer->setCheckable(true);
        chkUseBuffer->setChecked(false);
        gridLayout_9 = new QGridLayout(chkUseBuffer);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        textLabel4_3_2_2 = new QLabel(chkUseBuffer);
        textLabel4_3_2_2->setObjectName(QString::fromUtf8("textLabel4_3_2_2"));

        gridLayout_9->addWidget(textLabel4_3_2_2, 1, 0, 1, 1);

        spinBufferSize = new QDoubleSpinBox(chkUseBuffer);
        spinBufferSize->setObjectName(QString::fromUtf8("spinBufferSize"));

        gridLayout_9->addWidget(spinBufferSize, 1, 1, 1, 1);

        cboBufferSizeUnits = new QComboBox(chkUseBuffer);
        cboBufferSizeUnits->setObjectName(QString::fromUtf8("cboBufferSizeUnits"));

        gridLayout_9->addWidget(cboBufferSizeUnits, 1, 2, 1, 1);

        pbnDefaultBufferColor = new QPushButton(chkUseBuffer);
        pbnDefaultBufferColor->setObjectName(QString::fromUtf8("pbnDefaultBufferColor"));

        gridLayout_9->addWidget(pbnDefaultBufferColor, 1, 3, 1, 1);

        spinBufferTransparency = new QSpinBox(chkUseBuffer);
        spinBufferTransparency->setObjectName(QString::fromUtf8("spinBufferTransparency"));
        spinBufferTransparency->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBufferTransparency->sizePolicy().hasHeightForWidth());
        spinBufferTransparency->setSizePolicy(sizePolicy1);
        spinBufferTransparency->setMinimumSize(QSize(50, 0));
        spinBufferTransparency->setMaximum(100);
        spinBufferTransparency->setValue(0);

        gridLayout_9->addWidget(spinBufferTransparency, 1, 4, 1, 1);


        gridLayout_2->addWidget(chkUseBuffer, 3, 0, 1, 1);

        buttonGroup10 = new QGroupBox(scrollAreaWidgetContents);
        buttonGroup10->setObjectName(QString::fromUtf8("buttonGroup10"));
        gridLayout_4 = new QGridLayout(buttonGroup10);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        spinXOffset = new QDoubleSpinBox(buttonGroup10);
        spinXOffset->setObjectName(QString::fromUtf8("spinXOffset"));
        spinXOffset->setMinimum(-99);

        gridLayout_4->addWidget(spinXOffset, 0, 0, 1, 1);

        spinYOffset = new QDoubleSpinBox(buttonGroup10);
        spinYOffset->setObjectName(QString::fromUtf8("spinYOffset"));
        spinYOffset->setMinimum(-99);

        gridLayout_4->addWidget(spinYOffset, 0, 1, 1, 1);

        cboOffsetUnits = new QComboBox(buttonGroup10);
        cboOffsetUnits->setObjectName(QString::fromUtf8("cboOffsetUnits"));

        gridLayout_4->addWidget(cboOffsetUnits, 0, 2, 1, 1);


        gridLayout_2->addWidget(buttonGroup10, 4, 0, 1, 1);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        textLabel5 = new QLabel(groupBox_8);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout_8->addWidget(textLabel5, 0, 0, 1, 1);

        cboLabelField = new QComboBox(groupBox_8);
        cboLabelField->setObjectName(QString::fromUtf8("cboLabelField"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cboLabelField->sizePolicy().hasHeightForWidth());
        cboLabelField->setSizePolicy(sizePolicy2);

        gridLayout_8->addWidget(cboLabelField, 0, 1, 1, 3);

        textLabel1 = new QLabel(groupBox_8);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        gridLayout_8->addWidget(textLabel1, 1, 0, 1, 1);

        leDefaultLabel = new QLineEdit(groupBox_8);
        leDefaultLabel->setObjectName(QString::fromUtf8("leDefaultLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leDefaultLabel->sizePolicy().hasHeightForWidth());
        leDefaultLabel->setSizePolicy(sizePolicy3);

        gridLayout_8->addWidget(leDefaultLabel, 1, 1, 1, 3);

        textLabel5_2_2_3_2 = new QLabel(groupBox_8);
        textLabel5_2_2_3_2->setObjectName(QString::fromUtf8("textLabel5_2_2_3_2"));
        textLabel5_2_2_3_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(textLabel5_2_2_3_2, 3, 0, 1, 1);

        textLabel1_2_2_2_2_2 = new QLabel(groupBox_8);
        textLabel1_2_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_2"));

        gridLayout_8->addWidget(textLabel1_2_2_2_2_2, 6, 0, 1, 1);

        spinFontSize = new QDoubleSpinBox(groupBox_8);
        spinFontSize->setObjectName(QString::fromUtf8("spinFontSize"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinFontSize->sizePolicy().hasHeightForWidth());
        spinFontSize->setSizePolicy(sizePolicy4);
        spinFontSize->setMinimumSize(QSize(50, 0));
        spinFontSize->setDecimals(6);
        spinFontSize->setMaximum(1e+06);
        spinFontSize->setValue(0);

        gridLayout_8->addWidget(spinFontSize, 3, 1, 1, 1);

        spinAngle = new QSpinBox(groupBox_8);
        spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
        spinAngle->setMaximum(360);
        spinAngle->setValue(0);

        gridLayout_8->addWidget(spinAngle, 6, 1, 1, 1);

        cboFontSizeUnits = new QComboBox(groupBox_8);
        cboFontSizeUnits->setObjectName(QString::fromUtf8("cboFontSizeUnits"));

        gridLayout_8->addWidget(cboFontSizeUnits, 3, 2, 1, 1);

        btnDefaultFont = new QPushButton(groupBox_8);
        btnDefaultFont->setObjectName(QString::fromUtf8("btnDefaultFont"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnDefaultFont->sizePolicy().hasHeightForWidth());
        btnDefaultFont->setSizePolicy(sizePolicy5);

        gridLayout_8->addWidget(btnDefaultFont, 3, 3, 1, 1);

        pbnDefaultFontColor = new QPushButton(groupBox_8);
        pbnDefaultFontColor->setObjectName(QString::fromUtf8("pbnDefaultFontColor"));
        sizePolicy5.setHeightForWidth(pbnDefaultFontColor->sizePolicy().hasHeightForWidth());
        pbnDefaultFontColor->setSizePolicy(sizePolicy5);

        gridLayout_8->addWidget(pbnDefaultFontColor, 6, 3, 1, 1);

        chkUseMultiline = new QCheckBox(groupBox_8);
        chkUseMultiline->setObjectName(QString::fromUtf8("chkUseMultiline"));
        chkUseMultiline->setChecked(true);

        gridLayout_8->addWidget(chkUseMultiline, 7, 0, 1, 2);

        chkSelectedOnly = new QCheckBox(groupBox_8);
        chkSelectedOnly->setObjectName(QString::fromUtf8("chkSelectedOnly"));

        gridLayout_8->addWidget(chkSelectedOnly, 7, 2, 1, 2);


        gridLayout_2->addWidget(groupBox_8, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea_2 = new QScrollArea(tab_2);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -321, 527, 684));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_5 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        textLabel1_2_2_2_2_3 = new QLabel(groupBox_5);
        textLabel1_2_2_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3"));
        sizePolicy4.setHeightForWidth(textLabel1_2_2_2_2_3->sizePolicy().hasHeightForWidth());
        textLabel1_2_2_2_2_3->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(textLabel1_2_2_2_2_3, 0, 0, 1, 1);

        cboAlignmentField = new QComboBox(groupBox_5);
        cboAlignmentField->setObjectName(QString::fromUtf8("cboAlignmentField"));

        gridLayout_6->addWidget(cboAlignmentField, 0, 1, 1, 1);

        textLabel1_2_2_2_2 = new QLabel(groupBox_5);
        textLabel1_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2"));
        sizePolicy4.setHeightForWidth(textLabel1_2_2_2_2->sizePolicy().hasHeightForWidth());
        textLabel1_2_2_2_2->setSizePolicy(sizePolicy4);

        gridLayout_6->addWidget(textLabel1_2_2_2_2, 1, 0, 1, 1);

        cboAngleField = new QComboBox(groupBox_5);
        cboAngleField->setObjectName(QString::fromUtf8("cboAngleField"));

        gridLayout_6->addWidget(cboAngleField, 1, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_10 = new QGridLayout(groupBox);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        lblFont = new QLabel(groupBox);
        lblFont->setObjectName(QString::fromUtf8("lblFont"));
        sizePolicy4.setHeightForWidth(lblFont->sizePolicy().hasHeightForWidth());
        lblFont->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(lblFont, 0, 0, 1, 1);

        cboFontField = new QComboBox(groupBox);
        cboFontField->setObjectName(QString::fromUtf8("cboFontField"));

        gridLayout_10->addWidget(cboFontField, 0, 1, 1, 1);

        textLabel4 = new QLabel(groupBox);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
        sizePolicy4.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
        textLabel4->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(textLabel4, 1, 0, 1, 1);

        cboBoldField = new QComboBox(groupBox);
        cboBoldField->setObjectName(QString::fromUtf8("cboBoldField"));

        gridLayout_10->addWidget(cboBoldField, 1, 1, 1, 1);

        textLabel4_2_4 = new QLabel(groupBox);
        textLabel4_2_4->setObjectName(QString::fromUtf8("textLabel4_2_4"));
        sizePolicy4.setHeightForWidth(textLabel4_2_4->sizePolicy().hasHeightForWidth());
        textLabel4_2_4->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(textLabel4_2_4, 2, 0, 1, 1);

        cboItalicField = new QComboBox(groupBox);
        cboItalicField->setObjectName(QString::fromUtf8("cboItalicField"));

        gridLayout_10->addWidget(cboItalicField, 2, 1, 1, 1);

        textLabel4_3 = new QLabel(groupBox);
        textLabel4_3->setObjectName(QString::fromUtf8("textLabel4_3"));
        sizePolicy4.setHeightForWidth(textLabel4_3->sizePolicy().hasHeightForWidth());
        textLabel4_3->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(textLabel4_3, 3, 0, 1, 1);

        cboUnderlineField = new QComboBox(groupBox);
        cboUnderlineField->setObjectName(QString::fromUtf8("cboUnderlineField"));

        gridLayout_10->addWidget(cboUnderlineField, 3, 1, 1, 1);

        textLabel4_3_2 = new QLabel(groupBox);
        textLabel4_3_2->setObjectName(QString::fromUtf8("textLabel4_3_2"));
        sizePolicy4.setHeightForWidth(textLabel4_3_2->sizePolicy().hasHeightForWidth());
        textLabel4_3_2->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(textLabel4_3_2, 6, 0, 1, 1);

        cboFontSizeField = new QComboBox(groupBox);
        cboFontSizeField->setObjectName(QString::fromUtf8("cboFontSizeField"));

        gridLayout_10->addWidget(cboFontSizeField, 6, 1, 1, 1);

        textLabel4_3_2_4 = new QLabel(groupBox);
        textLabel4_3_2_4->setObjectName(QString::fromUtf8("textLabel4_3_2_4"));
        sizePolicy4.setHeightForWidth(textLabel4_3_2_4->sizePolicy().hasHeightForWidth());
        textLabel4_3_2_4->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(textLabel4_3_2_4, 7, 0, 1, 1);

        cboFontSizeTypeField = new QComboBox(groupBox);
        cboFontSizeTypeField->setObjectName(QString::fromUtf8("cboFontSizeTypeField"));

        gridLayout_10->addWidget(cboFontSizeTypeField, 7, 1, 1, 1);

        textLabel4_3_2_5 = new QLabel(groupBox);
        textLabel4_3_2_5->setObjectName(QString::fromUtf8("textLabel4_3_2_5"));
        sizePolicy4.setHeightForWidth(textLabel4_3_2_5->sizePolicy().hasHeightForWidth());
        textLabel4_3_2_5->setSizePolicy(sizePolicy4);

        gridLayout_10->addWidget(textLabel4_3_2_5, 8, 0, 1, 1);

        cboFontColorField = new QComboBox(groupBox);
        cboFontColorField->setObjectName(QString::fromUtf8("cboFontColorField"));

        gridLayout_10->addWidget(cboFontColorField, 8, 1, 1, 1);

        cboStrikeOutField = new QComboBox(groupBox);
        cboStrikeOutField->setObjectName(QString::fromUtf8("cboStrikeOutField"));

        gridLayout_10->addWidget(cboStrikeOutField, 4, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_10->addWidget(label, 4, 0, 1, 1);


        gridLayout_7->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_11 = new QGridLayout(groupBox_6);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        textLabel1_3_2_2_2 = new QLabel(groupBox_6);
        textLabel1_3_2_2_2->setObjectName(QString::fromUtf8("textLabel1_3_2_2_2"));
        textLabel1_3_2_2_2->setEnabled(false);
        sizePolicy4.setHeightForWidth(textLabel1_3_2_2_2->sizePolicy().hasHeightForWidth());
        textLabel1_3_2_2_2->setSizePolicy(sizePolicy4);
        textLabel1_3_2_2_2->setMinimumSize(QSize(70, 0));

        gridLayout_11->addWidget(textLabel1_3_2_2_2, 0, 0, 1, 1);

        cboBufferTransparencyField = new QComboBox(groupBox_6);
        cboBufferTransparencyField->setObjectName(QString::fromUtf8("cboBufferTransparencyField"));
        cboBufferTransparencyField->setEnabled(false);

        gridLayout_11->addWidget(cboBufferTransparencyField, 0, 1, 1, 1);

        textLabel4_3_2_2_2 = new QLabel(groupBox_6);
        textLabel4_3_2_2_2->setObjectName(QString::fromUtf8("textLabel4_3_2_2_2"));
        sizePolicy4.setHeightForWidth(textLabel4_3_2_2_2->sizePolicy().hasHeightForWidth());
        textLabel4_3_2_2_2->setSizePolicy(sizePolicy4);

        gridLayout_11->addWidget(textLabel4_3_2_2_2, 1, 0, 1, 1);

        cboBufferSizeField = new QComboBox(groupBox_6);
        cboBufferSizeField->setObjectName(QString::fromUtf8("cboBufferSizeField"));

        gridLayout_11->addWidget(cboBufferSizeField, 1, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_6, 2, 0, 1, 1);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        textLabel1_2 = new QLabel(groupBox_7);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        sizePolicy4.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
        textLabel1_2->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(textLabel1_2, 0, 0, 1, 1);

        cboXCoordinateField = new QComboBox(groupBox_7);
        cboXCoordinateField->setObjectName(QString::fromUtf8("cboXCoordinateField"));

        gridLayout_12->addWidget(cboXCoordinateField, 0, 1, 1, 1);

        textLabel1_2_2 = new QLabel(groupBox_7);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
        sizePolicy4.setHeightForWidth(textLabel1_2_2->sizePolicy().hasHeightForWidth());
        textLabel1_2_2->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(textLabel1_2_2, 1, 0, 1, 1);

        cboYCoordinateField = new QComboBox(groupBox_7);
        cboYCoordinateField->setObjectName(QString::fromUtf8("cboYCoordinateField"));

        gridLayout_12->addWidget(cboYCoordinateField, 1, 1, 1, 1);

        textLabel1_2_3 = new QLabel(groupBox_7);
        textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));
        sizePolicy4.setHeightForWidth(textLabel1_2_3->sizePolicy().hasHeightForWidth());
        textLabel1_2_3->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(textLabel1_2_3, 2, 0, 1, 1);

        cboXOffsetField = new QComboBox(groupBox_7);
        cboXOffsetField->setObjectName(QString::fromUtf8("cboXOffsetField"));

        gridLayout_12->addWidget(cboXOffsetField, 2, 1, 1, 1);

        textLabel1_2_2_2 = new QLabel(groupBox_7);
        textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
        sizePolicy4.setHeightForWidth(textLabel1_2_2_2->sizePolicy().hasHeightForWidth());
        textLabel1_2_2_2->setSizePolicy(sizePolicy4);

        gridLayout_12->addWidget(textLabel1_2_2_2, 3, 0, 1, 1);

        cboYOffsetField = new QComboBox(groupBox_7);
        cboYOffsetField->setObjectName(QString::fromUtf8("cboYOffsetField"));

        gridLayout_12->addWidget(cboYOffsetField, 3, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_7, 3, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_5->addWidget(scrollArea_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        groupBox5 = new QGroupBox(QgsLabelDialogBase);
        groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
        sizePolicy1.setHeightForWidth(groupBox5->sizePolicy().hasHeightForWidth());
        groupBox5->setSizePolicy(sizePolicy1);
        groupBox5->setMaximumSize(QSize(800, 200));
        gridLayout1 = new QGridLayout(groupBox5);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        lblSample = new QLabel(groupBox5);
        lblSample->setObjectName(QString::fromUtf8("lblSample"));

        gridLayout1->addWidget(lblSample, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox5);

#ifndef QT_NO_SHORTCUT
        textLabel1_2_2_1->setBuddy(leMaximumScale);
        textLabel1_1->setBuddy(leMinimumScale);
        textLabel4_3_2_2->setBuddy(spinBufferSize);
        textLabel5->setBuddy(cboLabelField);
        textLabel1->setBuddy(leDefaultLabel);
        textLabel5_2_2_3_2->setBuddy(spinFontSize);
        textLabel1_2_2_2_2_2->setBuddy(spinAngle);
        textLabel1_2_2_2_2_3->setBuddy(cboAlignmentField);
        textLabel1_2_2_2_2->setBuddy(cboAngleField);
        lblFont->setBuddy(cboFontField);
        textLabel4->setBuddy(cboBoldField);
        textLabel4_2_4->setBuddy(cboItalicField);
        textLabel4_3->setBuddy(cboUnderlineField);
        textLabel4_3_2->setBuddy(cboFontSizeField);
        textLabel4_3_2_4->setBuddy(cboFontSizeTypeField);
        textLabel4_3_2_5->setBuddy(cboFontColorField);
        label->setBuddy(cboStrikeOutField);
        textLabel1_3_2_2_2->setBuddy(cboBufferTransparencyField);
        textLabel4_3_2_2_2->setBuddy(cboBufferSizeField);
        textLabel1_2->setBuddy(cboXCoordinateField);
        textLabel1_2_2->setBuddy(cboYCoordinateField);
        textLabel1_2_3->setBuddy(cboXOffsetField);
        textLabel1_2_2_2->setBuddy(cboYOffsetField);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, cboLabelField);
        QWidget::setTabOrder(cboLabelField, leDefaultLabel);
        QWidget::setTabOrder(leDefaultLabel, spinFontSize);
        QWidget::setTabOrder(spinFontSize, cboFontSizeUnits);
        QWidget::setTabOrder(cboFontSizeUnits, btnDefaultFont);
        QWidget::setTabOrder(btnDefaultFont, spinAngle);
        QWidget::setTabOrder(spinAngle, pbnDefaultFontColor);
        QWidget::setTabOrder(pbnDefaultFontColor, chkUseMultiline);
        QWidget::setTabOrder(chkUseMultiline, chkSelectedOnly);
        QWidget::setTabOrder(chkSelectedOnly, radioAboveLeft);
        QWidget::setTabOrder(radioAboveLeft, radioAbove);
        QWidget::setTabOrder(radioAbove, radioAboveRight);
        QWidget::setTabOrder(radioAboveRight, radioLeft);
        QWidget::setTabOrder(radioLeft, radioOver);
        QWidget::setTabOrder(radioOver, radioRight);
        QWidget::setTabOrder(radioRight, radioBelowLeft);
        QWidget::setTabOrder(radioBelowLeft, radioBelow);
        QWidget::setTabOrder(radioBelow, radioBelowRight);
        QWidget::setTabOrder(radioBelowRight, chkUseScaleDependentRendering);
        QWidget::setTabOrder(chkUseScaleDependentRendering, leMinimumScale);
        QWidget::setTabOrder(leMinimumScale, leMaximumScale);
        QWidget::setTabOrder(leMaximumScale, chkUseBuffer);
        QWidget::setTabOrder(chkUseBuffer, spinBufferSize);
        QWidget::setTabOrder(spinBufferSize, cboBufferSizeUnits);
        QWidget::setTabOrder(cboBufferSizeUnits, pbnDefaultBufferColor);
        QWidget::setTabOrder(pbnDefaultBufferColor, spinBufferTransparency);
        QWidget::setTabOrder(spinBufferTransparency, spinXOffset);
        QWidget::setTabOrder(spinXOffset, spinYOffset);
        QWidget::setTabOrder(spinYOffset, cboOffsetUnits);
        QWidget::setTabOrder(cboOffsetUnits, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, cboAlignmentField);
        QWidget::setTabOrder(cboAlignmentField, cboAngleField);
        QWidget::setTabOrder(cboAngleField, cboFontField);
        QWidget::setTabOrder(cboFontField, cboBoldField);
        QWidget::setTabOrder(cboBoldField, cboItalicField);
        QWidget::setTabOrder(cboItalicField, cboUnderlineField);
        QWidget::setTabOrder(cboUnderlineField, cboStrikeOutField);
        QWidget::setTabOrder(cboStrikeOutField, cboFontSizeField);
        QWidget::setTabOrder(cboFontSizeField, cboFontSizeTypeField);
        QWidget::setTabOrder(cboFontSizeTypeField, cboFontColorField);
        QWidget::setTabOrder(cboFontColorField, cboBufferTransparencyField);
        QWidget::setTabOrder(cboBufferTransparencyField, cboBufferSizeField);
        QWidget::setTabOrder(cboBufferSizeField, cboXCoordinateField);
        QWidget::setTabOrder(cboXCoordinateField, cboYCoordinateField);
        QWidget::setTabOrder(cboYCoordinateField, cboXOffsetField);
        QWidget::setTabOrder(cboXOffsetField, cboYOffsetField);

        retranslateUi(QgsLabelDialogBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsLabelDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelDialogBase)
    {
        QgsLabelDialogBase->setWindowTitle(QApplication::translate("QgsLabelDialogBase", "Form1", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsLabelDialogBase", "Placement", 0, QApplication::UnicodeUTF8));
        radioBelowRight->setText(QApplication::translate("QgsLabelDialogBase", "Below Right", 0, QApplication::UnicodeUTF8));
        radioRight->setText(QApplication::translate("QgsLabelDialogBase", "Right", 0, QApplication::UnicodeUTF8));
        radioBelow->setText(QApplication::translate("QgsLabelDialogBase", "Below", 0, QApplication::UnicodeUTF8));
        radioOver->setText(QApplication::translate("QgsLabelDialogBase", "Over", 0, QApplication::UnicodeUTF8));
        radioAbove->setText(QApplication::translate("QgsLabelDialogBase", "Above", 0, QApplication::UnicodeUTF8));
        radioLeft->setText(QApplication::translate("QgsLabelDialogBase", "Left", 0, QApplication::UnicodeUTF8));
        radioBelowLeft->setText(QApplication::translate("QgsLabelDialogBase", "Below Left", 0, QApplication::UnicodeUTF8));
        radioAboveRight->setText(QApplication::translate("QgsLabelDialogBase", "Above Right", 0, QApplication::UnicodeUTF8));
        radioAboveLeft->setText(QApplication::translate("QgsLabelDialogBase", "Above Left", 0, QApplication::UnicodeUTF8));
        chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsLabelDialogBase", "Use scale dependent rendering", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2_1->setText(QApplication::translate("QgsLabelDialogBase", "Maximum", 0, QApplication::UnicodeUTF8));
        textLabel1_1->setText(QApplication::translate("QgsLabelDialogBase", "Minimum", 0, QApplication::UnicodeUTF8));
        chkUseBuffer->setTitle(QApplication::translate("QgsLabelDialogBase", "Buffer labels", 0, QApplication::UnicodeUTF8));
        textLabel4_3_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Buffer size", 0, QApplication::UnicodeUTF8));
        cboBufferSizeUnits->clear();
        cboBufferSizeUnits->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelDialogBase", "In points", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelDialogBase", "In map units", 0, QApplication::UnicodeUTF8)
        );
        pbnDefaultBufferColor->setText(QApplication::translate("QgsLabelDialogBase", "Color", 0, QApplication::UnicodeUTF8));
        spinBufferTransparency->setSuffix(QApplication::translate("QgsLabelDialogBase", "%", 0, QApplication::UnicodeUTF8));
        spinBufferTransparency->setPrefix(QApplication::translate("QgsLabelDialogBase", "Transparency ", 0, QApplication::UnicodeUTF8));
        buttonGroup10->setTitle(QApplication::translate("QgsLabelDialogBase", "Offset", 0, QApplication::UnicodeUTF8));
        spinXOffset->setPrefix(QApplication::translate("QgsLabelDialogBase", "X offset ", 0, QApplication::UnicodeUTF8));
        spinXOffset->setSuffix(QString());
        spinYOffset->setPrefix(QApplication::translate("QgsLabelDialogBase", "Y offset ", 0, QApplication::UnicodeUTF8));
        spinYOffset->setSuffix(QString());
        cboOffsetUnits->clear();
        cboOffsetUnits->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelDialogBase", "In points", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelDialogBase", "In map units", 0, QApplication::UnicodeUTF8)
        );
        groupBox_8->setTitle(QApplication::translate("QgsLabelDialogBase", "Basic label options", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("QgsLabelDialogBase", "Field containing label", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("QgsLabelDialogBase", "Default label", 0, QApplication::UnicodeUTF8));
        textLabel5_2_2_3_2->setText(QApplication::translate("QgsLabelDialogBase", "Font size", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Angle (deg)", 0, QApplication::UnicodeUTF8));
        spinAngle->setSuffix(QApplication::translate("QgsLabelDialogBase", "\302\260", 0, QApplication::UnicodeUTF8));
        cboFontSizeUnits->clear();
        cboFontSizeUnits->insertItems(0, QStringList()
         << QApplication::translate("QgsLabelDialogBase", "In points", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsLabelDialogBase", "In map units", 0, QApplication::UnicodeUTF8)
        );
        btnDefaultFont->setText(QApplication::translate("QgsLabelDialogBase", "Font", 0, QApplication::UnicodeUTF8));
        pbnDefaultFontColor->setText(QApplication::translate("QgsLabelDialogBase", "Color", 0, QApplication::UnicodeUTF8));
        chkUseMultiline->setText(QApplication::translate("QgsLabelDialogBase", "Multiline labels?", 0, QApplication::UnicodeUTF8));
        chkSelectedOnly->setText(QApplication::translate("QgsLabelDialogBase", "Label only selected features", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsLabelDialogBase", "Label Properties", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("QgsLabelDialogBase", "Data defined placement", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2_2_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Placement", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Angle (deg)", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsLabelDialogBase", "Data defined properties", 0, QApplication::UnicodeUTF8));
        lblFont->setText(QApplication::translate("QgsLabelDialogBase", "&Font family", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("QgsLabelDialogBase", "&Bold", 0, QApplication::UnicodeUTF8));
        textLabel4_2_4->setText(QApplication::translate("QgsLabelDialogBase", "&Italic", 0, QApplication::UnicodeUTF8));
        textLabel4_3->setText(QApplication::translate("QgsLabelDialogBase", "&Underline", 0, QApplication::UnicodeUTF8));
        textLabel4_3_2->setText(QApplication::translate("QgsLabelDialogBase", "&Size", 0, QApplication::UnicodeUTF8));
        textLabel4_3_2_4->setText(QApplication::translate("QgsLabelDialogBase", "Size units", 0, QApplication::UnicodeUTF8));
        textLabel4_3_2_5->setText(QApplication::translate("QgsLabelDialogBase", "&Color", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsLabelDialogBase", "Strikeout", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("QgsLabelDialogBase", "Data defined buffer", 0, QApplication::UnicodeUTF8));
        textLabel1_3_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Transparency:", 0, QApplication::UnicodeUTF8));
        textLabel4_3_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Size:", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("QgsLabelDialogBase", "Data defined position", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("QgsLabelDialogBase", "X Coordinate", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Y Coordinate", 0, QApplication::UnicodeUTF8));
        textLabel1_2_3->setText(QApplication::translate("QgsLabelDialogBase", "X Offset (pts)", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Y Offset (pts)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QgsLabelDialogBase", "Advanced", 0, QApplication::UnicodeUTF8));
        groupBox5->setTitle(QApplication::translate("QgsLabelDialogBase", "Preview:", 0, QApplication::UnicodeUTF8));
        lblSample->setText(QApplication::translate("QgsLabelDialogBase", "QGIS Rocks!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelDialogBase: public Ui_QgsLabelDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELDIALOGBASE_H
