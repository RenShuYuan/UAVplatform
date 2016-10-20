/********************************************************************************
** Form generated from reading UI file 'qgsloadstylefromdbdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLOADSTYLEFROMDBDIALOG_H
#define UI_QGSLOADSTYLEFROMDBDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsLoadStyleFromDBDialogLayout
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *mRelatedTable;
    QLabel *label_2;
    QTableWidget *mOthersTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mCancelButton;
    QPushButton *mLoadButton;

    void setupUi(QDialog *QgsLoadStyleFromDBDialogLayout)
    {
        if (QgsLoadStyleFromDBDialogLayout->objectName().isEmpty())
            QgsLoadStyleFromDBDialogLayout->setObjectName(QString::fromUtf8("QgsLoadStyleFromDBDialogLayout"));
        QgsLoadStyleFromDBDialogLayout->resize(475, 390);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsLoadStyleFromDBDialogLayout->sizePolicy().hasHeightForWidth());
        QgsLoadStyleFromDBDialogLayout->setSizePolicy(sizePolicy);
        QgsLoadStyleFromDBDialogLayout->setModal(true);
        gridLayout = new QGridLayout(QgsLoadStyleFromDBDialogLayout);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsLoadStyleFromDBDialogLayout);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        mRelatedTable = new QTableWidget(QgsLoadStyleFromDBDialogLayout);
        mRelatedTable->setObjectName(QString::fromUtf8("mRelatedTable"));
        mRelatedTable->setSortingEnabled(true);

        verticalLayout->addWidget(mRelatedTable);

        label_2 = new QLabel(QgsLoadStyleFromDBDialogLayout);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        mOthersTable = new QTableWidget(QgsLoadStyleFromDBDialogLayout);
        mOthersTable->setObjectName(QString::fromUtf8("mOthersTable"));
        mOthersTable->setSortingEnabled(true);

        verticalLayout->addWidget(mOthersTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mCancelButton = new QPushButton(QgsLoadStyleFromDBDialogLayout);
        mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCancelButton->sizePolicy().hasHeightForWidth());
        mCancelButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mCancelButton);

        mLoadButton = new QPushButton(QgsLoadStyleFromDBDialogLayout);
        mLoadButton->setObjectName(QString::fromUtf8("mLoadButton"));
        sizePolicy1.setHeightForWidth(mLoadButton->sizePolicy().hasHeightForWidth());
        mLoadButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mLoadButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(QgsLoadStyleFromDBDialogLayout);

        QMetaObject::connectSlotsByName(QgsLoadStyleFromDBDialogLayout);
    } // setupUi

    void retranslateUi(QDialog *QgsLoadStyleFromDBDialogLayout)
    {
        QgsLoadStyleFromDBDialogLayout->setWindowTitle(QApplication::translate("QgsLoadStyleFromDBDialogLayout", "Load Style", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsLoadStyleFromDBDialogLayout", "Styles related to the layer", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsLoadStyleFromDBDialogLayout", "Other styles on the database", 0, QApplication::UnicodeUTF8));
        mCancelButton->setText(QApplication::translate("QgsLoadStyleFromDBDialogLayout", "Cancel", 0, QApplication::UnicodeUTF8));
        mLoadButton->setText(QApplication::translate("QgsLoadStyleFromDBDialogLayout", "Load Style", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsLoadStyleFromDBDialogLayout: public Ui_QgsLoadStyleFromDBDialogLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLOADSTYLEFROMDBDIALOG_H
