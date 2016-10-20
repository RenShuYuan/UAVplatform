/********************************************************************************
** Form generated from reading UI file 'qgsunitselectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSUNITSELECTIONWIDGET_H
#define UI_QGSUNITSELECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsUnitSelectionWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *mUnitCombo;
    QPushButton *mMapScaleButton;

    void setupUi(QWidget *QgsUnitSelectionWidget)
    {
        if (QgsUnitSelectionWidget->objectName().isEmpty())
            QgsUnitSelectionWidget->setObjectName(QString::fromUtf8("QgsUnitSelectionWidget"));
        QgsUnitSelectionWidget->resize(109, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsUnitSelectionWidget->sizePolicy().hasHeightForWidth());
        QgsUnitSelectionWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(QgsUnitSelectionWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mUnitCombo = new QComboBox(QgsUnitSelectionWidget);
        mUnitCombo->setObjectName(QString::fromUtf8("mUnitCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mUnitCombo->sizePolicy().hasHeightForWidth());
        mUnitCombo->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(mUnitCombo);

        mMapScaleButton = new QPushButton(QgsUnitSelectionWidget);
        mMapScaleButton->setObjectName(QString::fromUtf8("mMapScaleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMapScaleButton->sizePolicy().hasHeightForWidth());
        mMapScaleButton->setSizePolicy(sizePolicy2);
        mMapScaleButton->setStyleSheet(QString::fromUtf8("QPushButton {margin: 0s; }"));
        mMapScaleButton->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/options.png"), QSize(), QIcon::Normal, QIcon::Off);
        mMapScaleButton->setIcon(icon);

        horizontalLayout->addWidget(mMapScaleButton);


        retranslateUi(QgsUnitSelectionWidget);

        QMetaObject::connectSlotsByName(QgsUnitSelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsUnitSelectionWidget)
    {
        QgsUnitSelectionWidget->setWindowTitle(QApplication::translate("QgsUnitSelectionWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsUnitSelectionWidget: public Ui_QgsUnitSelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSUNITSELECTIONWIDGET_H
