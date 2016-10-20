/********************************************************************************
** Form generated from reading UI file 'qgsidentifyresultsbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSIDENTIFYRESULTSBASE_H
#define UI_QGSIDENTIFYRESULTSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsIdentifyResultsBase
{
public:
    QAction *mExpandAction;
    QAction *mCollapseAction;
    QAction *mExpandNewAction;
    QAction *mOpenFormAction;
    QAction *mClearResultsAction;
    QAction *mActionCopy;
    QAction *mActionPrint;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout;
    QToolBar *mIdentifyToolbar;
    QTreeWidget *lstResults;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblIdentifyMode;
    QComboBox *cmbIdentifyMode;
    QSpacerItem *horizontalSpacer_43;
    QCheckBox *cbxAutoFeatureForm;
    QWidget *stackedWidgetPage2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tblResults;
    QWidget *stackedWidgetPage3;
    QVBoxLayout *verticalLayout_3;
    QwtPlot *mPlot;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblViewMode;
    QComboBox *cmbViewMode;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *mHelpToolButton;

    void setupUi(QDialog *QgsIdentifyResultsBase)
    {
        if (QgsIdentifyResultsBase->objectName().isEmpty())
            QgsIdentifyResultsBase->setObjectName(QString::fromUtf8("QgsIdentifyResultsBase"));
        QgsIdentifyResultsBase->resize(355, 390);
        mExpandAction = new QAction(QgsIdentifyResultsBase);
        mExpandAction->setObjectName(QString::fromUtf8("mExpandAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionExpandTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandAction->setIcon(icon);
        mCollapseAction = new QAction(QgsIdentifyResultsBase);
        mCollapseAction->setObjectName(QString::fromUtf8("mCollapseAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionCollapseTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mCollapseAction->setIcon(icon1);
        mExpandNewAction = new QAction(QgsIdentifyResultsBase);
        mExpandNewAction->setObjectName(QString::fromUtf8("mExpandNewAction"));
        mExpandNewAction->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionExpandNewTree.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExpandNewAction->setIcon(icon2);
        mOpenFormAction = new QAction(QgsIdentifyResultsBase);
        mOpenFormAction->setObjectName(QString::fromUtf8("mOpenFormAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionPropertyItem.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mOpenFormAction->setIcon(icon3);
        mClearResultsAction = new QAction(QgsIdentifyResultsBase);
        mClearResultsAction->setObjectName(QString::fromUtf8("mClearResultsAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionDeselectAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mClearResultsAction->setIcon(icon4);
        mActionCopy = new QAction(QgsIdentifyResultsBase);
        mActionCopy->setObjectName(QString::fromUtf8("mActionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionEditCopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCopy->setIcon(icon5);
        mActionPrint = new QAction(QgsIdentifyResultsBase);
        mActionPrint->setObjectName(QString::fromUtf8("mActionPrint"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionFilePrint.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionPrint->setIcon(icon6);
        verticalLayout_4 = new QVBoxLayout(QgsIdentifyResultsBase);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(QgsIdentifyResultsBase);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        verticalLayout = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mIdentifyToolbar = new QToolBar(stackedWidgetPage1);
        mIdentifyToolbar->setObjectName(QString::fromUtf8("mIdentifyToolbar"));
        mIdentifyToolbar->setIconSize(QSize(16, 16));
        mIdentifyToolbar->setFloatable(false);

        verticalLayout->addWidget(mIdentifyToolbar);

        lstResults = new QTreeWidget(stackedWidgetPage1);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        lstResults->setHeaderItem(__qtreewidgetitem);
        lstResults->setObjectName(QString::fromUtf8("lstResults"));
        lstResults->setLineWidth(2);
        lstResults->setAlternatingRowColors(true);
        lstResults->setSortingEnabled(true);

        verticalLayout->addWidget(lstResults);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, -1);
        lblIdentifyMode = new QLabel(stackedWidgetPage1);
        lblIdentifyMode->setObjectName(QString::fromUtf8("lblIdentifyMode"));

        horizontalLayout_2->addWidget(lblIdentifyMode);

        cmbIdentifyMode = new QComboBox(stackedWidgetPage1);
        cmbIdentifyMode->setObjectName(QString::fromUtf8("cmbIdentifyMode"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbIdentifyMode->sizePolicy().hasHeightForWidth());
        cmbIdentifyMode->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(cmbIdentifyMode);

        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_43);

        cbxAutoFeatureForm = new QCheckBox(stackedWidgetPage1);
        cbxAutoFeatureForm->setObjectName(QString::fromUtf8("cbxAutoFeatureForm"));

        horizontalLayout_2->addWidget(cbxAutoFeatureForm);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QString::fromUtf8("stackedWidgetPage2"));
        verticalLayout_2 = new QVBoxLayout(stackedWidgetPage2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tblResults = new QTableWidget(stackedWidgetPage2);
        if (tblResults->columnCount() < 4)
            tblResults->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblResults->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tblResults->setObjectName(QString::fromUtf8("tblResults"));
        tblResults->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tblResults->setSortingEnabled(false);

        verticalLayout_2->addWidget(tblResults);

        stackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QString::fromUtf8("stackedWidgetPage3"));
        verticalLayout_3 = new QVBoxLayout(stackedWidgetPage3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mPlot = new QwtPlot(stackedWidgetPage3);
        mPlot->setObjectName(QString::fromUtf8("mPlot"));

        verticalLayout_3->addWidget(mPlot);

        stackedWidget->addWidget(stackedWidgetPage3);

        verticalLayout_4->addWidget(stackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, -1, 5, -1);
        lblViewMode = new QLabel(QgsIdentifyResultsBase);
        lblViewMode->setObjectName(QString::fromUtf8("lblViewMode"));

        horizontalLayout_3->addWidget(lblViewMode);

        cmbViewMode = new QComboBox(QgsIdentifyResultsBase);
        cmbViewMode->setObjectName(QString::fromUtf8("cmbViewMode"));

        horizontalLayout_3->addWidget(cmbViewMode);

        horizontalSpacer_2 = new QSpacerItem(58, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        mHelpToolButton = new QToolButton(QgsIdentifyResultsBase);
        mHelpToolButton->setObjectName(QString::fromUtf8("mHelpToolButton"));
        mHelpToolButton->setEnabled(true);
        mHelpToolButton->setCheckable(false);

        horizontalLayout_3->addWidget(mHelpToolButton);


        verticalLayout_4->addLayout(horizontalLayout_3);


        mIdentifyToolbar->addAction(mExpandAction);
        mIdentifyToolbar->addAction(mCollapseAction);
        mIdentifyToolbar->addAction(mExpandNewAction);
        mIdentifyToolbar->addAction(mOpenFormAction);
        mIdentifyToolbar->addAction(mClearResultsAction);
        mIdentifyToolbar->addAction(mActionCopy);
        mIdentifyToolbar->addAction(mActionPrint);

        retranslateUi(QgsIdentifyResultsBase);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsIdentifyResultsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsIdentifyResultsBase)
    {
        QgsIdentifyResultsBase->setWindowTitle(QApplication::translate("QgsIdentifyResultsBase", "Identify Results", 0, QApplication::UnicodeUTF8));
        mExpandAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Expand Tree", 0, QApplication::UnicodeUTF8));
        mCollapseAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Collapse Tree", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mCollapseAction->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Collapse Tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mExpandNewAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Expand New Results", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mExpandNewAction->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "New results will be expanded by default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOpenFormAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Open Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mOpenFormAction->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Open Form", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mClearResultsAction->setText(QApplication::translate("QgsIdentifyResultsBase", "Clear Results", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mClearResultsAction->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Clear Results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionCopy->setText(QApplication::translate("QgsIdentifyResultsBase", "Copy Feature", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionCopy->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Copy selected feature to clipboard.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mActionPrint->setText(QApplication::translate("QgsIdentifyResultsBase", "Print Response", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mActionPrint->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Print selected HTML response.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lblIdentifyMode->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Select identify mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblIdentifyMode->setText(QApplication::translate("QgsIdentifyResultsBase", "Mode", 0, QApplication::UnicodeUTF8));
        cbxAutoFeatureForm->setText(QApplication::translate("QgsIdentifyResultsBase", "Auto open form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tblResults->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsIdentifyResultsBase", "Layer", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tblResults->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsIdentifyResultsBase", "FID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tblResults->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsIdentifyResultsBase", "Attribute", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tblResults->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsIdentifyResultsBase", "Value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblViewMode->setToolTip(QApplication::translate("QgsIdentifyResultsBase", "Select view mode for raster layers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblViewMode->setText(QApplication::translate("QgsIdentifyResultsBase", "View", 0, QApplication::UnicodeUTF8));
        mHelpToolButton->setText(QApplication::translate("QgsIdentifyResultsBase", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsIdentifyResultsBase: public Ui_QgsIdentifyResultsBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSIDENTIFYRESULTSBASE_H
