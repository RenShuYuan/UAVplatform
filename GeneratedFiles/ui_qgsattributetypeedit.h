/********************************************************************************
** Form generated from reading UI file 'qgsattributetypeedit.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTETYPEEDIT_H
#define UI_QGSATTRIBUTETYPEEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QStackedWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeTypeDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QStackedWidget *stackedWidget;
    QCheckBox *isFieldEditableCheckBox;
    QCheckBox *labelOnTopCheckBox;
    QListWidget *selectionListWidget;

    void setupUi(QDialog *QgsAttributeTypeDialog)
    {
        if (QgsAttributeTypeDialog->objectName().isEmpty())
            QgsAttributeTypeDialog->setObjectName(QString::fromUtf8("QgsAttributeTypeDialog"));
        QgsAttributeTypeDialog->resize(751, 487);
        gridLayout = new QGridLayout(QgsAttributeTypeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(QgsAttributeTypeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 1);

        stackedWidget = new QStackedWidget(QgsAttributeTypeDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        gridLayout->addWidget(stackedWidget, 2, 1, 1, 1);

        isFieldEditableCheckBox = new QCheckBox(QgsAttributeTypeDialog);
        isFieldEditableCheckBox->setObjectName(QString::fromUtf8("isFieldEditableCheckBox"));
        isFieldEditableCheckBox->setChecked(true);

        gridLayout->addWidget(isFieldEditableCheckBox, 0, 1, 1, 1);

        labelOnTopCheckBox = new QCheckBox(QgsAttributeTypeDialog);
        labelOnTopCheckBox->setObjectName(QString::fromUtf8("labelOnTopCheckBox"));
        labelOnTopCheckBox->setChecked(false);

        gridLayout->addWidget(labelOnTopCheckBox, 1, 1, 1, 1);

        selectionListWidget = new QListWidget(QgsAttributeTypeDialog);
        selectionListWidget->setObjectName(QString::fromUtf8("selectionListWidget"));

        gridLayout->addWidget(selectionListWidget, 0, 0, 7, 1);

        QWidget::setTabOrder(selectionListWidget, isFieldEditableCheckBox);
        QWidget::setTabOrder(isFieldEditableCheckBox, labelOnTopCheckBox);
        QWidget::setTabOrder(labelOnTopCheckBox, buttonBox);

        retranslateUi(QgsAttributeTypeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeTypeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributeTypeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAttributeTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeTypeDialog)
    {
        QgsAttributeTypeDialog->setWindowTitle(QApplication::translate("QgsAttributeTypeDialog", "Edit Widget Properties", 0, QApplication::UnicodeUTF8));
        isFieldEditableCheckBox->setText(QApplication::translate("QgsAttributeTypeDialog", "Editable", 0, QApplication::UnicodeUTF8));
        labelOnTopCheckBox->setText(QApplication::translate("QgsAttributeTypeDialog", "Label on top", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeTypeDialog: public Ui_QgsAttributeTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTETYPEEDIT_H
