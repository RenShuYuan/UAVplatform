/********************************************************************************
** Form generated from reading UI file 'qgseffectstackpropertieswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H
#define UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsEffectStackPropertiesWidgetBase
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lblPreview;
    QListView *mEffectsList;
    QHBoxLayout *pushBtnBox;
    QPushButton *mAddButton;
    QPushButton *mRemoveButton;
    QPushButton *mUpButton;
    QPushButton *mDownButton;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;

    void setupUi(QWidget *QgsEffectStackPropertiesWidgetBase)
    {
        if (QgsEffectStackPropertiesWidgetBase->objectName().isEmpty())
            QgsEffectStackPropertiesWidgetBase->setObjectName(QString::fromUtf8("QgsEffectStackPropertiesWidgetBase"));
        QgsEffectStackPropertiesWidgetBase->resize(566, 476);
        gridLayout = new QGridLayout(QgsEffectStackPropertiesWidgetBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblPreview = new QLabel(QgsEffectStackPropertiesWidgetBase);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setMinimumSize(QSize(150, 150));
        lblPreview->setMaximumSize(QSize(16777215, 150));
        lblPreview->setFrameShape(QFrame::StyledPanel);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setLineWidth(1);
        lblPreview->setMidLineWidth(0);
        lblPreview->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(lblPreview);

        mEffectsList = new QListView(QgsEffectStackPropertiesWidgetBase);
        mEffectsList->setObjectName(QString::fromUtf8("mEffectsList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mEffectsList->sizePolicy().hasHeightForWidth());
        mEffectsList->setSizePolicy(sizePolicy1);
        mEffectsList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(mEffectsList);

        pushBtnBox = new QHBoxLayout();
        pushBtnBox->setSpacing(6);
        pushBtnBox->setObjectName(QString::fromUtf8("pushBtnBox"));
        mAddButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mAddButton->setObjectName(QString::fromUtf8("mAddButton"));
        mAddButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(mAddButton);

        mRemoveButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mRemoveButton->setObjectName(QString::fromUtf8("mRemoveButton"));
        mRemoveButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(mRemoveButton);

        mUpButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mUpButton->setObjectName(QString::fromUtf8("mUpButton"));
        mUpButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(mUpButton);

        mDownButton = new QPushButton(QgsEffectStackPropertiesWidgetBase);
        mDownButton->setObjectName(QString::fromUtf8("mDownButton"));
        mDownButton->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(mDownButton);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pushBtnBox->addItem(horizontalSpacer);


        verticalLayout->addLayout(pushBtnBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        frame = new QFrame(QgsEffectStackPropertiesWidgetBase);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(4);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        gridLayout->addWidget(frame, 0, 1, 1, 2);


        retranslateUi(QgsEffectStackPropertiesWidgetBase);

        QMetaObject::connectSlotsByName(QgsEffectStackPropertiesWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsEffectStackPropertiesWidgetBase)
    {
        QgsEffectStackPropertiesWidgetBase->setWindowTitle(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Effects", 0, QApplication::UnicodeUTF8));
        lblPreview->setText(QString());
#ifndef QT_NO_TOOLTIP
        mAddButton->setToolTip(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Add new effect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mRemoveButton->setToolTip(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Remove effect", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mUpButton->setToolTip(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Move up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mDownButton->setToolTip(QApplication::translate("QgsEffectStackPropertiesWidgetBase", "Move down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsEffectStackPropertiesWidgetBase: public Ui_QgsEffectStackPropertiesWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSEFFECTSTACKPROPERTIESWIDGETBASE_H
