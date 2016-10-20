/********************************************************************************
** Form generated from reading UI file 'qgsauthmethodplugins.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSAUTHMETHODPLUGINS_H
#define UI_QGSAUTHMETHODPLUGINS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsAuthMethodPlugins
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tblAuthPlugins;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAuthMethodPlugins)
    {
        if (QgsAuthMethodPlugins->objectName().isEmpty())
            QgsAuthMethodPlugins->setObjectName(QString::fromUtf8("QgsAuthMethodPlugins"));
        QgsAuthMethodPlugins->resize(400, 300);
        verticalLayout = new QVBoxLayout(QgsAuthMethodPlugins);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(QgsAuthMethodPlugins);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tblAuthPlugins = new QTableWidget(QgsAuthMethodPlugins);
        tblAuthPlugins->setObjectName(QString::fromUtf8("tblAuthPlugins"));

        verticalLayout->addWidget(tblAuthPlugins);

        buttonBox = new QDialogButtonBox(QgsAuthMethodPlugins);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QgsAuthMethodPlugins);

        QMetaObject::connectSlotsByName(QgsAuthMethodPlugins);
    } // setupUi

    void retranslateUi(QDialog *QgsAuthMethodPlugins)
    {
        QgsAuthMethodPlugins->setWindowTitle(QApplication::translate("QgsAuthMethodPlugins", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsAuthMethodPlugins", "Installed authentication method plugins", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsAuthMethodPlugins: public Ui_QgsAuthMethodPlugins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSAUTHMETHODPLUGINS_H
