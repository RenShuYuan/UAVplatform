/********************************************************************************
** Form generated from reading UI file 'qgscustomprojectiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
#define UI_QGSCUSTOMPROJECTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsCustomProjectionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *leNameList;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pbnAdd;
    QPushButton *pbnRemove;
    QSpacerItem *verticalSpacer;
    QPushButton *pbnCopyCRS;
    QLabel *label_3;
    QLineEdit *leName;
    QLabel *label_4;
    QPlainTextEdit *teParameters;
    QgsCollapsibleGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QLabel *textLabel2_2_2;
    QLabel *label_2;
    QLabel *textLabel1_3;
    QLabel *textLabel2_3;
    QLabel *textLabel2_2;
    QLineEdit *northWGS84;
    QLabel *projectedX;
    QLineEdit *eastWGS84;
    QLabel *projectedY;
    QPushButton *pbnCalculate;

    void setupUi(QDialog *QgsCustomProjectionDialogBase)
    {
        if (QgsCustomProjectionDialogBase->objectName().isEmpty())
            QgsCustomProjectionDialogBase->setObjectName(QString::fromUtf8("QgsCustomProjectionDialogBase"));
        QgsCustomProjectionDialogBase->resize(542, 650);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsCustomProjectionDialogBase->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(QgsCustomProjectionDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsCustomProjectionDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 1);

        scrollArea = new QScrollArea(QgsCustomProjectionDialogBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -35, 520, 646));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leNameList = new QTreeWidget(groupBox);
        leNameList->setObjectName(QString::fromUtf8("leNameList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leNameList->sizePolicy().hasHeightForWidth());
        leNameList->setSizePolicy(sizePolicy);
        leNameList->setAlternatingRowColors(true);
        leNameList->setSortingEnabled(false);
        leNameList->header()->setProperty("showSortIndicator", QVariant(false));

        horizontalLayout->addWidget(leNameList);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pbnAdd = new QPushButton(groupBox);
        pbnAdd->setObjectName(QString::fromUtf8("pbnAdd"));

        verticalLayout_2->addWidget(pbnAdd);

        pbnRemove = new QPushButton(groupBox);
        pbnRemove->setObjectName(QString::fromUtf8("pbnRemove"));

        verticalLayout_2->addWidget(pbnRemove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pbnCopyCRS = new QPushButton(groupBox);
        pbnCopyCRS->setObjectName(QString::fromUtf8("pbnCopyCRS"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionCopySelected.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnCopyCRS->setIcon(icon1);

        verticalLayout_2->addWidget(pbnCopyCRS);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout_3->addWidget(leName, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        teParameters = new QPlainTextEdit(groupBox);
        teParameters->setObjectName(QString::fromUtf8("teParameters"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teParameters->sizePolicy().hasHeightForWidth());
        teParameters->setSizePolicy(sizePolicy1);
        teParameters->setMaximumSize(QSize(16777215, 70));

        gridLayout_3->addWidget(teParameters, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setProperty("collapsed", QVariant(true));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel2_2_2 = new QLabel(groupBox_2);
        textLabel2_2_2->setObjectName(QString::fromUtf8("textLabel2_2_2"));

        gridLayout1->addWidget(textLabel2_2_2, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout1->addWidget(label_2, 0, 0, 1, 3);

        textLabel1_3 = new QLabel(groupBox_2);
        textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

        gridLayout1->addWidget(textLabel1_3, 1, 1, 1, 1);

        textLabel2_3 = new QLabel(groupBox_2);
        textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));

        gridLayout1->addWidget(textLabel2_3, 1, 2, 1, 1);

        textLabel2_2 = new QLabel(groupBox_2);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

        gridLayout1->addWidget(textLabel2_2, 2, 0, 1, 1);

        northWGS84 = new QLineEdit(groupBox_2);
        northWGS84->setObjectName(QString::fromUtf8("northWGS84"));
        northWGS84->setEnabled(true);

        gridLayout1->addWidget(northWGS84, 2, 1, 1, 1);

        projectedX = new QLabel(groupBox_2);
        projectedX->setObjectName(QString::fromUtf8("projectedX"));
        projectedX->setEnabled(true);
        projectedX->setFrameShape(QFrame::Box);

        gridLayout1->addWidget(projectedX, 2, 2, 1, 1);

        eastWGS84 = new QLineEdit(groupBox_2);
        eastWGS84->setObjectName(QString::fromUtf8("eastWGS84"));

        gridLayout1->addWidget(eastWGS84, 3, 1, 1, 1);

        projectedY = new QLabel(groupBox_2);
        projectedY->setObjectName(QString::fromUtf8("projectedY"));
        projectedY->setEnabled(true);
        projectedY->setFrameShape(QFrame::Box);
        projectedY->setMargin(1);

        gridLayout1->addWidget(projectedY, 3, 2, 1, 1);

        pbnCalculate = new QPushButton(groupBox_2);
        pbnCalculate->setObjectName(QString::fromUtf8("pbnCalculate"));

        gridLayout1->addWidget(pbnCalculate, 4, 0, 1, 3);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel2_2_2->setBuddy(eastWGS84);
        textLabel2_2->setBuddy(northWGS84);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, leNameList);
        QWidget::setTabOrder(leNameList, pbnAdd);
        QWidget::setTabOrder(pbnAdd, pbnRemove);
        QWidget::setTabOrder(pbnRemove, pbnCopyCRS);
        QWidget::setTabOrder(pbnCopyCRS, leName);
        QWidget::setTabOrder(leName, teParameters);
        QWidget::setTabOrder(teParameters, northWGS84);
        QWidget::setTabOrder(northWGS84, eastWGS84);
        QWidget::setTabOrder(eastWGS84, pbnCalculate);
        QWidget::setTabOrder(pbnCalculate, buttonBox);

        retranslateUi(QgsCustomProjectionDialogBase);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsCustomProjectionDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsCustomProjectionDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCustomProjectionDialogBase)
    {
        QgsCustomProjectionDialogBase->setWindowTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Custom Coordinate Reference System Definition", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Define", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsCustomProjectionDialogBase", "You can define your own custom Coordinate Reference System (CRS) here. The definition must conform to the proj4 format for specifying a CRS.", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = leNameList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsCustomProjectionDialogBase", "Parameters", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsCustomProjectionDialogBase", "ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsCustomProjectionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnAdd->setToolTip(QApplication::translate("QgsCustomProjectionDialogBase", "Add new CRS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnAdd->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbnRemove->setToolTip(QApplication::translate("QgsCustomProjectionDialogBase", "Remove CRS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnRemove->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbnCopyCRS->setToolTip(QApplication::translate("QgsCustomProjectionDialogBase", "Copy existing CRS", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnCopyCRS->setText(QString());
        label_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Parameters", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsCustomProjectionDialogBase", "Test", 0, QApplication::UnicodeUTF8));
        textLabel2_2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "East", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Use the text boxes below to test the CRS definition you are creating. Enter a coordinate where both the lat/long and the transformed result are known (for example by reading off a map). Then press the calculate button to see if the CRS definition you are creating is accurate.", 0, QApplication::UnicodeUTF8));
        textLabel1_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Geographic / WGS84", 0, QApplication::UnicodeUTF8));
        textLabel2_3->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Destination CRS        ", 0, QApplication::UnicodeUTF8));
        textLabel2_2->setText(QApplication::translate("QgsCustomProjectionDialogBase", "North", 0, QApplication::UnicodeUTF8));
        projectedX->setText(QString());
        projectedY->setText(QString());
        pbnCalculate->setText(QApplication::translate("QgsCustomProjectionDialogBase", "Calculate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsCustomProjectionDialogBase: public Ui_QgsCustomProjectionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCUSTOMPROJECTIONDIALOGBASE_H
