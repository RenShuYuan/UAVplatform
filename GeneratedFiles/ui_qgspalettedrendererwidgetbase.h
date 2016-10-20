/********************************************************************************
** Form generated from reading UI file 'qgspalettedrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSPALETTEDRENDERERWIDGETBASE_H
#define UI_QGSPALETTEDRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsPalettedRendererWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mBandLabel;
    QComboBox *mBandComboBox;
    QTreeWidget *mTreeWidget;

    void setupUi(QWidget *QgsPalettedRendererWidgetBase)
    {
        if (QgsPalettedRendererWidgetBase->objectName().isEmpty())
            QgsPalettedRendererWidgetBase->setObjectName(QString::fromUtf8("QgsPalettedRendererWidgetBase"));
        QgsPalettedRendererWidgetBase->resize(263, 340);
        gridLayout = new QGridLayout(QgsPalettedRendererWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mBandLabel = new QLabel(QgsPalettedRendererWidgetBase);
        mBandLabel->setObjectName(QString::fromUtf8("mBandLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mBandLabel->sizePolicy().hasHeightForWidth());
        mBandLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mBandLabel);

        mBandComboBox = new QComboBox(QgsPalettedRendererWidgetBase);
        mBandComboBox->setObjectName(QString::fromUtf8("mBandComboBox"));

        horizontalLayout->addWidget(mBandComboBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        mTreeWidget = new QTreeWidget(QgsPalettedRendererWidgetBase);
        mTreeWidget->setObjectName(QString::fromUtf8("mTreeWidget"));
        mTreeWidget->setMinimumSize(QSize(0, 280));
        mTreeWidget->setColumnCount(3);

        gridLayout->addWidget(mTreeWidget, 1, 0, 1, 1);

        QWidget::setTabOrder(mBandComboBox, mTreeWidget);

        retranslateUi(QgsPalettedRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsPalettedRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPalettedRendererWidgetBase)
    {
        QgsPalettedRendererWidgetBase->setWindowTitle(QApplication::translate("QgsPalettedRendererWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mBandLabel->setText(QApplication::translate("QgsPalettedRendererWidgetBase", "Band", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsPalettedRendererWidgetBase", "Label", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsPalettedRendererWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsPalettedRendererWidgetBase", "Value", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsPalettedRendererWidgetBase: public Ui_QgsPalettedRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSPALETTEDRENDERERWIDGETBASE_H
