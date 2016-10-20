/********************************************************************************
** Form generated from reading UI file 'qgscomposershapewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERSHAPEWIDGETBASE_H
#define UI_QGSCOMPOSERSHAPEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerShapeWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QgsDoubleSpinBox *mCornerRadiusSpinBox;
    QLabel *label;
    QPushButton *mShapeStyleButton;
    QComboBox *mShapeComboBox;

    void setupUi(QWidget *QgsComposerShapeWidgetBase)
    {
        if (QgsComposerShapeWidgetBase->objectName().isEmpty())
            QgsComposerShapeWidgetBase->setObjectName(QString::fromUtf8("QgsComposerShapeWidgetBase"));
        QgsComposerShapeWidgetBase->resize(285, 148);
        verticalLayout = new QVBoxLayout(QgsComposerShapeWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(QgsComposerShapeWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_2);

        scrollArea = new QScrollArea(QgsComposerShapeWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -22, 267, 147));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        mCornerRadiusSpinBox = new QgsDoubleSpinBox(groupBox);
        mCornerRadiusSpinBox->setObjectName(QString::fromUtf8("mCornerRadiusSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mCornerRadiusSpinBox->sizePolicy().hasHeightForWidth());
        mCornerRadiusSpinBox->setSizePolicy(sizePolicy1);
        mCornerRadiusSpinBox->setMaximum(999);

        gridLayout->addWidget(mCornerRadiusSpinBox, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        mShapeStyleButton = new QPushButton(groupBox);
        mShapeStyleButton->setObjectName(QString::fromUtf8("mShapeStyleButton"));
        sizePolicy1.setHeightForWidth(mShapeStyleButton->sizePolicy().hasHeightForWidth());
        mShapeStyleButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mShapeStyleButton, 2, 1, 1, 1);

        mShapeComboBox = new QComboBox(groupBox);
        mShapeComboBox->setObjectName(QString::fromUtf8("mShapeComboBox"));

        gridLayout->addWidget(mShapeComboBox, 0, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(groupBox, scrollArea);
        QWidget::setTabOrder(scrollArea, mShapeComboBox);
        QWidget::setTabOrder(mShapeComboBox, mCornerRadiusSpinBox);
        QWidget::setTabOrder(mCornerRadiusSpinBox, mShapeStyleButton);

        retranslateUi(QgsComposerShapeWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerShapeWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerShapeWidgetBase)
    {
        QgsComposerShapeWidgetBase->setWindowTitle(QApplication::translate("QgsComposerShapeWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerShapeWidgetBase", "Shape", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerShapeWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerShapeWidgetBase", "Corner radius", 0, QApplication::UnicodeUTF8));
        mCornerRadiusSpinBox->setSuffix(QApplication::translate("QgsComposerShapeWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerShapeWidgetBase", "Style", 0, QApplication::UnicodeUTF8));
        mShapeStyleButton->setText(QApplication::translate("QgsComposerShapeWidgetBase", "Change...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerShapeWidgetBase: public Ui_QgsComposerShapeWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERSHAPEWIDGETBASE_H
