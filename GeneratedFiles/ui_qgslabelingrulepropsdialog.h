/********************************************************************************
** Form generated from reading UI file 'qgslabelingrulepropsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGRULEPROPSDIALOG_H
#define UI_QGSLABELINGRULEPROPSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include "qgsscalerangewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingRulePropsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLineEdit *editDescription;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editFilter;
    QPushButton *btnExpressionBuilder;
    QPushButton *btnTestFilter;
    QGroupBox *groupScale;
    QHBoxLayout *horizontalLayout_2;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QGroupBox *groupSettings;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLabelingRulePropsDialog)
    {
        if (QgsLabelingRulePropsDialog->objectName().isEmpty())
            QgsLabelingRulePropsDialog->setObjectName(QString::fromUtf8("QgsLabelingRulePropsDialog"));
        QgsLabelingRulePropsDialog->resize(666, 573);
        verticalLayout = new QVBoxLayout(QgsLabelingRulePropsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_1 = new QLabel(QgsLabelingRulePropsDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        editDescription = new QLineEdit(QgsLabelingRulePropsDialog);
        editDescription->setObjectName(QString::fromUtf8("editDescription"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editDescription);

        label_5 = new QLabel(QgsLabelingRulePropsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editFilter = new QLineEdit(QgsLabelingRulePropsDialog);
        editFilter->setObjectName(QString::fromUtf8("editFilter"));

        horizontalLayout->addWidget(editFilter);

        btnExpressionBuilder = new QPushButton(QgsLabelingRulePropsDialog);
        btnExpressionBuilder->setObjectName(QString::fromUtf8("btnExpressionBuilder"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnExpressionBuilder->sizePolicy().hasHeightForWidth());
        btnExpressionBuilder->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(btnExpressionBuilder);

        btnTestFilter = new QPushButton(QgsLabelingRulePropsDialog);
        btnTestFilter->setObjectName(QString::fromUtf8("btnTestFilter"));

        horizontalLayout->addWidget(btnTestFilter);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addLayout(formLayout);

        groupScale = new QGroupBox(QgsLabelingRulePropsDialog);
        groupScale->setObjectName(QString::fromUtf8("groupScale"));
        groupScale->setCheckable(true);
        groupScale->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(groupScale);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mScaleRangeWidget = new QgsScaleRangeWidget(groupScale);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        horizontalLayout_2->addWidget(mScaleRangeWidget);


        verticalLayout->addWidget(groupScale);

        groupSettings = new QGroupBox(QgsLabelingRulePropsDialog);
        groupSettings->setObjectName(QString::fromUtf8("groupSettings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSettings->sizePolicy().hasHeightForWidth());
        groupSettings->setSizePolicy(sizePolicy1);
        groupSettings->setCheckable(true);

        verticalLayout->addWidget(groupSettings);

        buttonBox = new QDialogButtonBox(QgsLabelingRulePropsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(editDescription, editFilter);
        QWidget::setTabOrder(editFilter, btnExpressionBuilder);
        QWidget::setTabOrder(btnExpressionBuilder, btnTestFilter);
        QWidget::setTabOrder(btnTestFilter, groupScale);
        QWidget::setTabOrder(groupScale, groupSettings);
        QWidget::setTabOrder(groupSettings, buttonBox);

        retranslateUi(QgsLabelingRulePropsDialog);

        QMetaObject::connectSlotsByName(QgsLabelingRulePropsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsLabelingRulePropsDialog)
    {
        QgsLabelingRulePropsDialog->setWindowTitle(QApplication::translate("QgsLabelingRulePropsDialog", "Rule properties", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("QgsLabelingRulePropsDialog", "Description", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsLabelingRulePropsDialog", "Filter", 0, QApplication::UnicodeUTF8));
        btnExpressionBuilder->setText(QApplication::translate("QgsLabelingRulePropsDialog", "...", 0, QApplication::UnicodeUTF8));
        btnTestFilter->setText(QApplication::translate("QgsLabelingRulePropsDialog", "Test", 0, QApplication::UnicodeUTF8));
        groupScale->setTitle(QApplication::translate("QgsLabelingRulePropsDialog", "Scale range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mScaleRangeWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupSettings->setTitle(QApplication::translate("QgsLabelingRulePropsDialog", "Labels", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingRulePropsDialog: public Ui_QgsLabelingRulePropsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGRULEPROPSDIALOG_H
