/********************************************************************************
** Form generated from reading UI file 'qgsmeasurebase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMEASUREBASE_H
#define UI_QGSMEASUREBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMeasureBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel2;
    QLineEdit *editTotal;
    QSpacerItem *spacerItem;
    QComboBox *mUnitsCombo;
    QTreeWidget *mTable;
    QDialogButtonBox *buttonBox;
    QgsCollapsibleGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *mNotesLabel;

    void setupUi(QDialog *QgsMeasureBase)
    {
        if (QgsMeasureBase->objectName().isEmpty())
            QgsMeasureBase->setObjectName(QString::fromUtf8("QgsMeasureBase"));
        QgsMeasureBase->resize(359, 301);
        QgsMeasureBase->setBaseSize(QSize(150, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsMeasureBase->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsMeasureBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        textLabel2 = new QLabel(QgsMeasureBase);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        gridLayout->addWidget(textLabel2, 4, 0, 1, 1);

        editTotal = new QLineEdit(QgsMeasureBase);
        editTotal->setObjectName(QString::fromUtf8("editTotal"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        editTotal->setFont(font);
        editTotal->setAlignment(Qt::AlignRight);
        editTotal->setReadOnly(true);

        gridLayout->addWidget(editTotal, 4, 2, 1, 1);

        spacerItem = new QSpacerItem(41, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 4, 1, 1, 1);

        mUnitsCombo = new QComboBox(QgsMeasureBase);
        mUnitsCombo->setObjectName(QString::fromUtf8("mUnitsCombo"));

        gridLayout->addWidget(mUnitsCombo, 4, 3, 1, 1);

        mTable = new QTreeWidget(QgsMeasureBase);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignRight|Qt::AlignVCenter);
        mTable->setHeaderItem(__qtreewidgetitem);
        mTable->setObjectName(QString::fromUtf8("mTable"));
        mTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mTable->setRootIsDecorated(false);
        mTable->setColumnCount(1);

        gridLayout->addWidget(mTable, 2, 0, 1, 4);

        buttonBox = new QDialogButtonBox(QgsMeasureBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 4);

        groupBox = new QgsCollapsibleGroupBox(QgsMeasureBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        mNotesLabel = new QLabel(groupBox);
        mNotesLabel->setObjectName(QString::fromUtf8("mNotesLabel"));
        mNotesLabel->setWordWrap(true);

        verticalLayout->addWidget(mNotesLabel);


        gridLayout->addWidget(groupBox, 5, 0, 1, 4);

#ifndef QT_NO_SHORTCUT
        textLabel2->setBuddy(editTotal);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mTable, editTotal);

        retranslateUi(QgsMeasureBase);

        QMetaObject::connectSlotsByName(QgsMeasureBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeasureBase)
    {
        QgsMeasureBase->setWindowTitle(QApplication::translate("QgsMeasureBase", "Measure", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("QgsMeasureBase", "Total", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mTable->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsMeasureBase", "Segments", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsMeasureBase", "Info", 0, QApplication::UnicodeUTF8));
        mNotesLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QgsMeasureBase: public Ui_QgsMeasureBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMEASUREBASE_H
