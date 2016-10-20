/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayersaveasdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERSAVEASDIALOGBASE_H
#define UI_QGSVECTORLAYERSAVEASDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"
#include "qgsextentgroupbox.h"
#include "qgsprojectionselectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerSaveAsDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLineEdit *leFilename;
    QPushButton *browseFilename;
    QLabel *label_2;
    QComboBox *mFormatComboBox;
    QLabel *label;
    QgsProjectionSelectionWidget *mCrsSelector;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *mEncodingComboBox;
    QCheckBox *mSelectedOnly;
    QCheckBox *mSkipAttributeCreation;
    QCheckBox *mAddToCanvas;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mSymbologyExportLabel;
    QComboBox *mSymbologyExportComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mScaleLabel;
    QSpinBox *mScaleSpinBox;
    QgsCollapsibleGroupBox *mGeometryGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mSymbologyExportLabel_2;
    QComboBox *mGeometryTypeComboBox;
    QCheckBox *mForceMultiCheckBox;
    QCheckBox *mIncludeZCheckBox;
    QgsExtentGroupBox *mExtentGroupBox;
    QgsCollapsibleGroupBox *mDatasourceOptionsGroupBox;
    QFormLayout *formLayout;
    QgsCollapsibleGroupBox *mLayerOptionsGroupBox;
    QFormLayout *formLayout_2;
    QgsCollapsibleGroupBox *mOgrOptionsGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QTextEdit *mOgrDatasourceOptions;
    QLabel *label_6;
    QTextEdit *mOgrLayerOptions;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorLayerSaveAsDialogBase)
    {
        if (QgsVectorLayerSaveAsDialogBase->objectName().isEmpty())
            QgsVectorLayerSaveAsDialogBase->setObjectName(QString::fromUtf8("QgsVectorLayerSaveAsDialogBase"));
        QgsVectorLayerSaveAsDialogBase->resize(591, 632);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsVectorLayerSaveAsDialogBase->sizePolicy().hasHeightForWidth());
        QgsVectorLayerSaveAsDialogBase->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(QgsVectorLayerSaveAsDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(QgsVectorLayerSaveAsDialogBase);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        leFilename = new QLineEdit(widget);
        leFilename->setObjectName(QString::fromUtf8("leFilename"));
        leFilename->setEnabled(false);

        gridLayout_4->addWidget(leFilename, 1, 1, 1, 1);

        browseFilename = new QPushButton(widget);
        browseFilename->setObjectName(QString::fromUtf8("browseFilename"));
        browseFilename->setEnabled(false);

        gridLayout_4->addWidget(browseFilename, 1, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        mFormatComboBox = new QComboBox(widget);
        mFormatComboBox->setObjectName(QString::fromUtf8("mFormatComboBox"));

        gridLayout_4->addWidget(mFormatComboBox, 0, 1, 1, 2);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 1, 0, 1, 1);

        mCrsSelector = new QgsProjectionSelectionWidget(widget);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        gridLayout_4->addWidget(mCrsSelector, 2, 1, 1, 2);


        verticalLayout_2->addWidget(widget);

        scrollArea = new QScrollArea(QgsVectorLayerSaveAsDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 555, 650));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        mEncodingComboBox = new QComboBox(scrollAreaWidgetContents);
        mEncodingComboBox->setObjectName(QString::fromUtf8("mEncodingComboBox"));

        horizontalLayout_3->addWidget(mEncodingComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        mSelectedOnly = new QCheckBox(scrollAreaWidgetContents);
        mSelectedOnly->setObjectName(QString::fromUtf8("mSelectedOnly"));

        verticalLayout->addWidget(mSelectedOnly);

        mSkipAttributeCreation = new QCheckBox(scrollAreaWidgetContents);
        mSkipAttributeCreation->setObjectName(QString::fromUtf8("mSkipAttributeCreation"));

        verticalLayout->addWidget(mSkipAttributeCreation);

        mAddToCanvas = new QCheckBox(scrollAreaWidgetContents);
        mAddToCanvas->setObjectName(QString::fromUtf8("mAddToCanvas"));
        mAddToCanvas->setChecked(true);

        verticalLayout->addWidget(mAddToCanvas);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mSymbologyExportLabel = new QLabel(scrollAreaWidgetContents);
        mSymbologyExportLabel->setObjectName(QString::fromUtf8("mSymbologyExportLabel"));

        horizontalLayout_2->addWidget(mSymbologyExportLabel);

        mSymbologyExportComboBox = new QComboBox(scrollAreaWidgetContents);
        mSymbologyExportComboBox->setObjectName(QString::fromUtf8("mSymbologyExportComboBox"));

        horizontalLayout_2->addWidget(mSymbologyExportComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mScaleLabel = new QLabel(scrollAreaWidgetContents);
        mScaleLabel->setObjectName(QString::fromUtf8("mScaleLabel"));

        horizontalLayout->addWidget(mScaleLabel);

        mScaleSpinBox = new QSpinBox(scrollAreaWidgetContents);
        mScaleSpinBox->setObjectName(QString::fromUtf8("mScaleSpinBox"));
        mScaleSpinBox->setMaximum(999999999);
        mScaleSpinBox->setValue(50000);

        horizontalLayout->addWidget(mScaleSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        mGeometryGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mGeometryGroupBox->setObjectName(QString::fromUtf8("mGeometryGroupBox"));
        verticalLayout_3 = new QVBoxLayout(mGeometryGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mSymbologyExportLabel_2 = new QLabel(mGeometryGroupBox);
        mSymbologyExportLabel_2->setObjectName(QString::fromUtf8("mSymbologyExportLabel_2"));

        horizontalLayout_4->addWidget(mSymbologyExportLabel_2);

        mGeometryTypeComboBox = new QComboBox(mGeometryGroupBox);
        mGeometryTypeComboBox->setObjectName(QString::fromUtf8("mGeometryTypeComboBox"));

        horizontalLayout_4->addWidget(mGeometryTypeComboBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        mForceMultiCheckBox = new QCheckBox(mGeometryGroupBox);
        mForceMultiCheckBox->setObjectName(QString::fromUtf8("mForceMultiCheckBox"));

        verticalLayout_3->addWidget(mForceMultiCheckBox);

        mIncludeZCheckBox = new QCheckBox(mGeometryGroupBox);
        mIncludeZCheckBox->setObjectName(QString::fromUtf8("mIncludeZCheckBox"));

        verticalLayout_3->addWidget(mIncludeZCheckBox);


        verticalLayout->addWidget(mGeometryGroupBox);

        mExtentGroupBox = new QgsExtentGroupBox(scrollAreaWidgetContents);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));

        verticalLayout->addWidget(mExtentGroupBox);

        mDatasourceOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mDatasourceOptionsGroupBox->setObjectName(QString::fromUtf8("mDatasourceOptionsGroupBox"));
        formLayout = new QFormLayout(mDatasourceOptionsGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        verticalLayout->addWidget(mDatasourceOptionsGroupBox);

        mLayerOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mLayerOptionsGroupBox->setObjectName(QString::fromUtf8("mLayerOptionsGroupBox"));
        formLayout_2 = new QFormLayout(mLayerOptionsGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);

        verticalLayout->addWidget(mLayerOptionsGroupBox);

        mOgrOptionsGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mOgrOptionsGroupBox->setObjectName(QString::fromUtf8("mOgrOptionsGroupBox"));
        mOgrOptionsGroupBox->setProperty("collapsed", QVariant(true));
        gridLayout_3 = new QGridLayout(mOgrOptionsGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(mOgrOptionsGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        mOgrDatasourceOptions = new QTextEdit(mOgrOptionsGroupBox);
        mOgrDatasourceOptions->setObjectName(QString::fromUtf8("mOgrDatasourceOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOgrDatasourceOptions->sizePolicy().hasHeightForWidth());
        mOgrDatasourceOptions->setSizePolicy(sizePolicy1);
        mOgrDatasourceOptions->setMinimumSize(QSize(0, 0));
        mOgrDatasourceOptions->setMaximumSize(QSize(16777215, 16777215));
        mOgrDatasourceOptions->setBaseSize(QSize(0, 0));

        gridLayout_3->addWidget(mOgrDatasourceOptions, 0, 1, 1, 1);

        label_6 = new QLabel(mOgrOptionsGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        mOgrLayerOptions = new QTextEdit(mOgrOptionsGroupBox);
        mOgrLayerOptions->setObjectName(QString::fromUtf8("mOgrLayerOptions"));
        sizePolicy1.setHeightForWidth(mOgrLayerOptions->sizePolicy().hasHeightForWidth());
        mOgrLayerOptions->setSizePolicy(sizePolicy1);
        mOgrLayerOptions->setMinimumSize(QSize(0, 0));
        mOgrLayerOptions->setMaximumSize(QSize(16777215, 16777215));
        mOgrLayerOptions->setBaseSize(QSize(0, 0));

        gridLayout_3->addWidget(mOgrLayerOptions, 1, 1, 1, 1);

        label_6->raise();
        label_5->raise();
        mOgrDatasourceOptions->raise();
        mOgrLayerOptions->raise();

        verticalLayout->addWidget(mOgrOptionsGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(QgsVectorLayerSaveAsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(mFormatComboBox);
        label->setBuddy(leFilename);
        label_4->setBuddy(mEncodingComboBox);
        label_5->setBuddy(mOgrDatasourceOptions);
        label_6->setBuddy(mOgrLayerOptions);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mFormatComboBox, leFilename);
        QWidget::setTabOrder(leFilename, browseFilename);
        QWidget::setTabOrder(browseFilename, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, scrollArea);
        QWidget::setTabOrder(scrollArea, mEncodingComboBox);
        QWidget::setTabOrder(mEncodingComboBox, mSelectedOnly);
        QWidget::setTabOrder(mSelectedOnly, mSkipAttributeCreation);
        QWidget::setTabOrder(mSkipAttributeCreation, mAddToCanvas);
        QWidget::setTabOrder(mAddToCanvas, mSymbologyExportComboBox);
        QWidget::setTabOrder(mSymbologyExportComboBox, mScaleSpinBox);
        QWidget::setTabOrder(mScaleSpinBox, mGeometryTypeComboBox);
        QWidget::setTabOrder(mGeometryTypeComboBox, mForceMultiCheckBox);
        QWidget::setTabOrder(mForceMultiCheckBox, mIncludeZCheckBox);
        QWidget::setTabOrder(mIncludeZCheckBox, mOgrDatasourceOptions);
        QWidget::setTabOrder(mOgrDatasourceOptions, mOgrLayerOptions);
        QWidget::setTabOrder(mOgrLayerOptions, buttonBox);

        retranslateUi(QgsVectorLayerSaveAsDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsVectorLayerSaveAsDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsVectorLayerSaveAsDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsVectorLayerSaveAsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerSaveAsDialogBase)
    {
        QgsVectorLayerSaveAsDialogBase->setWindowTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save vector layer as...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "CRS", 0, QApplication::UnicodeUTF8));
        browseFilename->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Browse", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Format", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save as", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Encoding", 0, QApplication::UnicodeUTF8));
        mSelectedOnly->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Save only selected features", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSkipAttributeCreation->setToolTip(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "This allows one to suppress attribute creation as some OGR drivers (eg. DGN, DXF) don't support it.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSkipAttributeCreation->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Skip attribute creation", 0, QApplication::UnicodeUTF8));
        mAddToCanvas->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Add saved file to map", 0, QApplication::UnicodeUTF8));
        mSymbologyExportLabel->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Symbology export", 0, QApplication::UnicodeUTF8));
        mScaleLabel->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Scale", 0, QApplication::UnicodeUTF8));
        mScaleSpinBox->setPrefix(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "1:", 0, QApplication::UnicodeUTF8));
        mGeometryGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Geometry", 0, QApplication::UnicodeUTF8));
        mSymbologyExportLabel_2->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Geometry type", 0, QApplication::UnicodeUTF8));
        mForceMultiCheckBox->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Force multi-type", 0, QApplication::UnicodeUTF8));
        mIncludeZCheckBox->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Include z-dimension", 0, QApplication::UnicodeUTF8));
        mDatasourceOptionsGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Datasource Options", 0, QApplication::UnicodeUTF8));
        mLayerOptionsGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer Options", 0, QApplication::UnicodeUTF8));
        mOgrOptionsGroupBox->setTitle(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Custom Options", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Data source", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsVectorLayerSaveAsDialogBase", "Layer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerSaveAsDialogBase: public Ui_QgsVectorLayerSaveAsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERSAVEASDIALOGBASE_H
