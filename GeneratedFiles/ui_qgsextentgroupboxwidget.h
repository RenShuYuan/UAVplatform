/********************************************************************************
** Form generated from reading UI file 'qgsextentgroupboxwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEXTENTGROUPBOXWIDGET_H
#define UI_QGSEXTENTGROUPBOXWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsExtentGroupBoxWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *mXMinLabel;
    QLineEdit *mXMinLineEdit;
    QLabel *mXMaxLabel;
    QLineEdit *mXMaxLineEdit;
    QLabel *mYMaxLabel;
    QLineEdit *mYMaxLineEdit;
    QLabel *mYMinLabel;
    QLineEdit *mYMinLineEdit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mOriginalExtentButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mCurrentExtentButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QgsExtentGroupBoxWidget)
    {
        if (QgsExtentGroupBoxWidget->objectName().isEmpty())
            QgsExtentGroupBoxWidget->setObjectName(QString::fromUtf8("QgsExtentGroupBoxWidget"));
        QgsExtentGroupBoxWidget->resize(388, 164);
        verticalLayout = new QVBoxLayout(QgsExtentGroupBoxWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mXMinLabel = new QLabel(QgsExtentGroupBoxWidget);
        mXMinLabel->setObjectName(QString::fromUtf8("mXMinLabel"));
        mXMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mXMinLabel, 1, 0, 1, 1);

        mXMinLineEdit = new QLineEdit(QgsExtentGroupBoxWidget);
        mXMinLineEdit->setObjectName(QString::fromUtf8("mXMinLineEdit"));

        gridLayout_4->addWidget(mXMinLineEdit, 1, 1, 1, 1);

        mXMaxLabel = new QLabel(QgsExtentGroupBoxWidget);
        mXMaxLabel->setObjectName(QString::fromUtf8("mXMaxLabel"));
        mXMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mXMaxLabel, 1, 2, 1, 1);

        mXMaxLineEdit = new QLineEdit(QgsExtentGroupBoxWidget);
        mXMaxLineEdit->setObjectName(QString::fromUtf8("mXMaxLineEdit"));

        gridLayout_4->addWidget(mXMaxLineEdit, 1, 3, 1, 1);

        mYMaxLabel = new QLabel(QgsExtentGroupBoxWidget);
        mYMaxLabel->setObjectName(QString::fromUtf8("mYMaxLabel"));
        mYMaxLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mYMaxLabel, 0, 1, 1, 1);

        mYMaxLineEdit = new QLineEdit(QgsExtentGroupBoxWidget);
        mYMaxLineEdit->setObjectName(QString::fromUtf8("mYMaxLineEdit"));

        gridLayout_4->addWidget(mYMaxLineEdit, 0, 2, 1, 1);

        mYMinLabel = new QLabel(QgsExtentGroupBoxWidget);
        mYMinLabel->setObjectName(QString::fromUtf8("mYMinLabel"));
        mYMinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(mYMinLabel, 2, 1, 1, 1);

        mYMinLineEdit = new QLineEdit(QgsExtentGroupBoxWidget);
        mYMinLineEdit->setObjectName(QString::fromUtf8("mYMinLineEdit"));

        gridLayout_4->addWidget(mYMinLineEdit, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        widget_2 = new QWidget(QgsExtentGroupBoxWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_8 = new QHBoxLayout(widget_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        mOriginalExtentButton = new QPushButton(widget_2);
        mOriginalExtentButton->setObjectName(QString::fromUtf8("mOriginalExtentButton"));
        mOriginalExtentButton->setMinimumSize(QSize(150, 0));

        horizontalLayout_8->addWidget(mOriginalExtentButton);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        mCurrentExtentButton = new QPushButton(widget_2);
        mCurrentExtentButton->setObjectName(QString::fromUtf8("mCurrentExtentButton"));
        mCurrentExtentButton->setMinimumSize(QSize(150, 0));

        horizontalLayout_8->addWidget(mCurrentExtentButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        QWidget::setTabOrder(mYMaxLineEdit, mXMinLineEdit);
        QWidget::setTabOrder(mXMinLineEdit, mXMaxLineEdit);
        QWidget::setTabOrder(mXMaxLineEdit, mYMinLineEdit);
        QWidget::setTabOrder(mYMinLineEdit, mOriginalExtentButton);
        QWidget::setTabOrder(mOriginalExtentButton, mCurrentExtentButton);

        retranslateUi(QgsExtentGroupBoxWidget);

        QMetaObject::connectSlotsByName(QgsExtentGroupBoxWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsExtentGroupBoxWidget)
    {
        QgsExtentGroupBoxWidget->setWindowTitle(QApplication::translate("QgsExtentGroupBoxWidget", "Form", 0, QApplication::UnicodeUTF8));
        mXMinLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "West", 0, QApplication::UnicodeUTF8));
        mXMaxLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "East", 0, QApplication::UnicodeUTF8));
        mYMaxLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "North", 0, QApplication::UnicodeUTF8));
        mYMaxLineEdit->setText(QString());
        mYMinLabel->setText(QApplication::translate("QgsExtentGroupBoxWidget", "South", 0, QApplication::UnicodeUTF8));
        mOriginalExtentButton->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Layer extent", 0, QApplication::UnicodeUTF8));
        mCurrentExtentButton->setText(QApplication::translate("QgsExtentGroupBoxWidget", "Map view extent", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsExtentGroupBoxWidget: public Ui_QgsExtentGroupBoxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEXTENTGROUPBOXWIDGET_H
