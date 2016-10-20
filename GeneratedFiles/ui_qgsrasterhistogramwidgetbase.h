/********************************************************************************
** Form generated from reading UI file 'qgsrasterhistogramwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERHISTOGRAMWIDGETBASE_H
#define UI_QGSRASTERHISTOGRAMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterHistogramWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QwtPlot *mpPlot;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget2;
    QWidget *page1_2;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_9;
    QComboBox *cboHistoBand;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *leHistoMin;
    QToolButton *btnHistoMin;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *leHistoMax;
    QToolButton *btnHistoMax;
    QFrame *line_6;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *btnHistoActions;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QToolButton *mSaveAsImageButton;
    QWidget *page2_2;
    QHBoxLayout *horizontalLayout_12;
    QProgressBar *mHistogramProgress;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btnHistoCompute;
    QSpacerItem *horizontalSpacer_19;

    void setupUi(QWidget *QgsRasterHistogramWidgetBase)
    {
        if (QgsRasterHistogramWidgetBase->objectName().isEmpty())
            QgsRasterHistogramWidgetBase->setObjectName(QString::fromUtf8("QgsRasterHistogramWidgetBase"));
        QgsRasterHistogramWidgetBase->resize(697, 311);
        verticalLayout = new QVBoxLayout(QgsRasterHistogramWidgetBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpPlot = new QwtPlot(QgsRasterHistogramWidgetBase);
        mpPlot->setObjectName(QString::fromUtf8("mpPlot"));

        verticalLayout->addWidget(mpPlot);

        verticalSpacer = new QSpacerItem(0, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        stackedWidget2 = new QStackedWidget(QgsRasterHistogramWidgetBase);
        stackedWidget2->setObjectName(QString::fromUtf8("stackedWidget2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget2->sizePolicy().hasHeightForWidth());
        stackedWidget2->setSizePolicy(sizePolicy);
        page1_2 = new QWidget();
        page1_2->setObjectName(QString::fromUtf8("page1_2"));
        horizontalLayout_8 = new QHBoxLayout(page1_2);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        frame_2 = new QFrame(page1_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_9 = new QHBoxLayout(frame_2);
        horizontalLayout_9->setSpacing(5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_9->setContentsMargins(5, 1, 5, 1);
        horizontalSpacer_13 = new QSpacerItem(5, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_13);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(label_9);

        cboHistoBand = new QComboBox(frame_2);
        cboHistoBand->setObjectName(QString::fromUtf8("cboHistoBand"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cboHistoBand->sizePolicy().hasHeightForWidth());
        cboHistoBand->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(cboHistoBand);

        horizontalSpacer_7 = new QSpacerItem(10, 1, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(1);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);

        horizontalLayout_10->addWidget(label_10);

        leHistoMin = new QLineEdit(frame_2);
        leHistoMin->setObjectName(QString::fromUtf8("leHistoMin"));
        sizePolicy2.setHeightForWidth(leHistoMin->sizePolicy().hasHeightForWidth());
        leHistoMin->setSizePolicy(sizePolicy2);
        leHistoMin->setMinimumSize(QSize(50, 0));

        horizontalLayout_10->addWidget(leHistoMin);

        btnHistoMin = new QToolButton(frame_2);
        btnHistoMin->setObjectName(QString::fromUtf8("btnHistoMin"));
        btnHistoMin->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionTouch2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHistoMin->setIcon(icon);
        btnHistoMin->setCheckable(true);
        btnHistoMin->setAutoRaise(true);

        horizontalLayout_10->addWidget(btnHistoMin);


        horizontalLayout_9->addLayout(horizontalLayout_10);

        horizontalSpacer_15 = new QSpacerItem(5, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(1);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        horizontalLayout_11->addWidget(label_11);

        leHistoMax = new QLineEdit(frame_2);
        leHistoMax->setObjectName(QString::fromUtf8("leHistoMax"));
        sizePolicy2.setHeightForWidth(leHistoMax->sizePolicy().hasHeightForWidth());
        leHistoMax->setSizePolicy(sizePolicy2);
        leHistoMax->setMinimumSize(QSize(50, 0));

        horizontalLayout_11->addWidget(leHistoMax);

        btnHistoMax = new QToolButton(frame_2);
        btnHistoMax->setObjectName(QString::fromUtf8("btnHistoMax"));
        btnHistoMax->setEnabled(true);
        btnHistoMax->setIcon(icon);
        btnHistoMax->setCheckable(true);
        btnHistoMax->setAutoRaise(true);

        horizontalLayout_11->addWidget(btnHistoMax);


        horizontalLayout_9->addLayout(horizontalLayout_11);

        line_6 = new QFrame(frame_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShadow(QFrame::Sunken);
        line_6->setLineWidth(1);
        line_6->setFrameShape(QFrame::VLine);

        horizontalLayout_9->addWidget(line_6);

        horizontalSpacer_10 = new QSpacerItem(5, 1, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        btnHistoActions = new QToolButton(frame_2);
        btnHistoActions->setObjectName(QString::fromUtf8("btnHistoActions"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mAction.svg"), QSize(), QIcon::Normal, QIcon::Off);
        btnHistoActions->setIcon(icon1);
        btnHistoActions->setPopupMode(QToolButton::InstantPopup);
        btnHistoActions->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnHistoActions->setAutoRaise(true);

        horizontalLayout_9->addWidget(btnHistoActions);

        horizontalSpacer_16 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_16);


        horizontalLayout_8->addWidget(frame_2);

        horizontalSpacer_17 = new QSpacerItem(5, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);

        mSaveAsImageButton = new QToolButton(page1_2);
        mSaveAsImageButton->setObjectName(QString::fromUtf8("mSaveAsImageButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mSaveAsImageButton->setIcon(icon2);

        horizontalLayout_8->addWidget(mSaveAsImageButton);

        stackedWidget2->addWidget(page1_2);
        page2_2 = new QWidget();
        page2_2->setObjectName(QString::fromUtf8("page2_2"));
        horizontalLayout_12 = new QHBoxLayout(page2_2);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mHistogramProgress = new QProgressBar(page2_2);
        mHistogramProgress->setObjectName(QString::fromUtf8("mHistogramProgress"));
        mHistogramProgress->setValue(0);

        horizontalLayout_12->addWidget(mHistogramProgress);

        stackedWidget2->addWidget(page2_2);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_20);

        btnHistoCompute = new QPushButton(page);
        btnHistoCompute->setObjectName(QString::fromUtf8("btnHistoCompute"));

        horizontalLayout->addWidget(btnHistoCompute);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_19);

        stackedWidget2->addWidget(page);

        verticalLayout->addWidget(stackedWidget2);


        retranslateUi(QgsRasterHistogramWidgetBase);

        stackedWidget2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterHistogramWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterHistogramWidgetBase)
    {
        QgsRasterHistogramWidgetBase->setWindowTitle(QApplication::translate("QgsRasterHistogramWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsRasterHistogramWidgetBase", "Set min/max style for", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QgsRasterHistogramWidgetBase", "Min", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnHistoMin->setToolTip(QApplication::translate("QgsRasterHistogramWidgetBase", "Pick Min value on graph", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnHistoMin->setText(QApplication::translate("QgsRasterHistogramWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsRasterHistogramWidgetBase", "Max", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnHistoMax->setToolTip(QApplication::translate("QgsRasterHistogramWidgetBase", "Pick Max value on graph", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnHistoMax->setText(QApplication::translate("QgsRasterHistogramWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnHistoActions->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btnHistoActions->setText(QApplication::translate("QgsRasterHistogramWidgetBase", "Prefs/Actions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSaveAsImageButton->setToolTip(QApplication::translate("QgsRasterHistogramWidgetBase", "Save plot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSaveAsImageButton->setText(QApplication::translate("QgsRasterHistogramWidgetBase", "Save as image...", 0, QApplication::UnicodeUTF8));
        btnHistoCompute->setText(QApplication::translate("QgsRasterHistogramWidgetBase", "Compute Histogram", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterHistogramWidgetBase: public Ui_QgsRasterHistogramWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERHISTOGRAMWIDGETBASE_H
