/********************************************************************************
** Form generated from reading UI file 'qgsrasterpyramidsoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERPYRAMIDSOPTIONSWIDGETBASE_H
#define UI_QGSRASTERPYRAMIDSOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "qgsrasterformatsaveoptionswidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterPyramidsOptionsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lePyramidsLevels;
    QHBoxLayout *layoutPyramidsLevels;
    QComboBox *cbxPyramidsFormat;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *textLabel4_2;
    QComboBox *cboResamplingMethod;
    QCheckBox *cbxPyramidsLevelsCustom;
    QFrame *line;
    QgsRasterFormatSaveOptionsWidget *mSaveOptionsWidget;
    QLabel *label_2;

    void setupUi(QWidget *QgsRasterPyramidsOptionsWidgetBase)
    {
        if (QgsRasterPyramidsOptionsWidgetBase->objectName().isEmpty())
            QgsRasterPyramidsOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsRasterPyramidsOptionsWidgetBase"));
        QgsRasterPyramidsOptionsWidgetBase->resize(388, 166);
        gridLayout = new QGridLayout(QgsRasterPyramidsOptionsWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        lePyramidsLevels = new QLineEdit(QgsRasterPyramidsOptionsWidgetBase);
        lePyramidsLevels->setObjectName(QString::fromUtf8("lePyramidsLevels"));

        gridLayout->addWidget(lePyramidsLevels, 4, 2, 1, 1);

        layoutPyramidsLevels = new QHBoxLayout();
        layoutPyramidsLevels->setObjectName(QString::fromUtf8("layoutPyramidsLevels"));

        gridLayout->addLayout(layoutPyramidsLevels, 3, 2, 1, 1);

        cbxPyramidsFormat = new QComboBox(QgsRasterPyramidsOptionsWidgetBase);
        cbxPyramidsFormat->setObjectName(QString::fromUtf8("cbxPyramidsFormat"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbxPyramidsFormat->sizePolicy().hasHeightForWidth());
        cbxPyramidsFormat->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cbxPyramidsFormat, 1, 2, 1, 1);

        label_5 = new QLabel(QgsRasterPyramidsOptionsWidgetBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(QgsRasterPyramidsOptionsWidgetBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 8, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 1, 1, 1);

        textLabel4_2 = new QLabel(QgsRasterPyramidsOptionsWidgetBase);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));

        gridLayout->addWidget(textLabel4_2, 2, 0, 1, 1);

        cboResamplingMethod = new QComboBox(QgsRasterPyramidsOptionsWidgetBase);
        cboResamplingMethod->setObjectName(QString::fromUtf8("cboResamplingMethod"));

        gridLayout->addWidget(cboResamplingMethod, 2, 2, 1, 1);

        cbxPyramidsLevelsCustom = new QCheckBox(QgsRasterPyramidsOptionsWidgetBase);
        cbxPyramidsLevelsCustom->setObjectName(QString::fromUtf8("cbxPyramidsLevelsCustom"));

        gridLayout->addWidget(cbxPyramidsLevelsCustom, 4, 0, 1, 1);

        line = new QFrame(QgsRasterPyramidsOptionsWidgetBase);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 7, 0, 1, 3);

        mSaveOptionsWidget = new QgsRasterFormatSaveOptionsWidget(QgsRasterPyramidsOptionsWidgetBase);
        mSaveOptionsWidget->setObjectName(QString::fromUtf8("mSaveOptionsWidget"));

        gridLayout->addWidget(mSaveOptionsWidget, 9, 0, 1, 3);

        label_2 = new QLabel(QgsRasterPyramidsOptionsWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        QWidget::setTabOrder(cbxPyramidsFormat, cboResamplingMethod);
        QWidget::setTabOrder(cboResamplingMethod, cbxPyramidsLevelsCustom);
        QWidget::setTabOrder(cbxPyramidsLevelsCustom, lePyramidsLevels);

        retranslateUi(QgsRasterPyramidsOptionsWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterPyramidsOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterPyramidsOptionsWidgetBase)
    {
        QgsRasterPyramidsOptionsWidgetBase->setWindowTitle(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lePyramidsLevels->setToolTip(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Insert positive integer values separated by spaces", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbxPyramidsFormat->clear();
        cbxPyramidsFormat->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "External (GTiff .ovr)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Internal (if possible)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "External (Erdas Imagine .aux)", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Levels", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Create Options", 0, QApplication::UnicodeUTF8));
        textLabel4_2->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Resampling method", 0, QApplication::UnicodeUTF8));
        cboResamplingMethod->clear();
        cboResamplingMethod->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Average", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Nearest Neighbour", 0, QApplication::UnicodeUTF8)
        );
        cbxPyramidsLevelsCustom->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Custom levels", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRasterPyramidsOptionsWidgetBase", "Overview format", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterPyramidsOptionsWidgetBase: public Ui_QgsRasterPyramidsOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERPYRAMIDSOPTIONSWIDGETBASE_H
