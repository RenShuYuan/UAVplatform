/********************************************************************************
** Form generated from reading UI file 'widget_svgselector.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SVGSELECTOR_H
#define UI_WIDGET_SVGSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetSvgSelector
{
public:
    QGridLayout *gridLayout;
    QLabel *mImagesLabel;
    QLabel *mGroupsLabel;
    QTreeView *mGroupsTreeView;
    QListView *mImagesListView;
    QHBoxLayout *mFileLayout;
    QLineEdit *mFileLineEdit;
    QPushButton *mFilePushButton;
    QCheckBox *mRelativePathChkBx;

    void setupUi(QWidget *WidgetSvgSelector)
    {
        if (WidgetSvgSelector->objectName().isEmpty())
            WidgetSvgSelector->setObjectName(QString::fromUtf8("WidgetSvgSelector"));
        WidgetSvgSelector->resize(499, 490);
        gridLayout = new QGridLayout(WidgetSvgSelector);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mImagesLabel = new QLabel(WidgetSvgSelector);
        mImagesLabel->setObjectName(QString::fromUtf8("mImagesLabel"));

        gridLayout->addWidget(mImagesLabel, 1, 1, 1, 1);

        mGroupsLabel = new QLabel(WidgetSvgSelector);
        mGroupsLabel->setObjectName(QString::fromUtf8("mGroupsLabel"));

        gridLayout->addWidget(mGroupsLabel, 1, 0, 1, 1);

        mGroupsTreeView = new QTreeView(WidgetSvgSelector);
        mGroupsTreeView->setObjectName(QString::fromUtf8("mGroupsTreeView"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGroupsTreeView->sizePolicy().hasHeightForWidth());
        mGroupsTreeView->setSizePolicy(sizePolicy);
        mGroupsTreeView->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(mGroupsTreeView, 2, 0, 1, 1);

        mImagesListView = new QListView(WidgetSvgSelector);
        mImagesListView->setObjectName(QString::fromUtf8("mImagesListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mImagesListView->sizePolicy().hasHeightForWidth());
        mImagesListView->setSizePolicy(sizePolicy1);
        mImagesListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mImagesListView->setIconSize(QSize(32, 32));
        mImagesListView->setMovement(QListView::Static);
        mImagesListView->setResizeMode(QListView::Adjust);
        mImagesListView->setLayoutMode(QListView::Batched);
        mImagesListView->setSpacing(2);
        mImagesListView->setGridSize(QSize(36, 36));
        mImagesListView->setViewMode(QListView::IconMode);
        mImagesListView->setUniformItemSizes(true);
        mImagesListView->setWordWrap(true);

        gridLayout->addWidget(mImagesListView, 2, 1, 1, 1);

        mFileLayout = new QHBoxLayout();
        mFileLayout->setObjectName(QString::fromUtf8("mFileLayout"));
        mFileLineEdit = new QLineEdit(WidgetSvgSelector);
        mFileLineEdit->setObjectName(QString::fromUtf8("mFileLineEdit"));

        mFileLayout->addWidget(mFileLineEdit);

        mFilePushButton = new QPushButton(WidgetSvgSelector);
        mFilePushButton->setObjectName(QString::fromUtf8("mFilePushButton"));
        mFilePushButton->setMaximumSize(QSize(50, 16777215));

        mFileLayout->addWidget(mFilePushButton);

        mRelativePathChkBx = new QCheckBox(WidgetSvgSelector);
        mRelativePathChkBx->setObjectName(QString::fromUtf8("mRelativePathChkBx"));

        mFileLayout->addWidget(mRelativePathChkBx);


        gridLayout->addLayout(mFileLayout, 3, 0, 1, 2);

        QWidget::setTabOrder(mGroupsTreeView, mImagesListView);
        QWidget::setTabOrder(mImagesListView, mFileLineEdit);
        QWidget::setTabOrder(mFileLineEdit, mFilePushButton);
        QWidget::setTabOrder(mFilePushButton, mRelativePathChkBx);

        retranslateUi(WidgetSvgSelector);

        QMetaObject::connectSlotsByName(WidgetSvgSelector);
    } // setupUi

    void retranslateUi(QWidget *WidgetSvgSelector)
    {
        WidgetSvgSelector->setWindowTitle(QApplication::translate("WidgetSvgSelector", "Form", 0, QApplication::UnicodeUTF8));
        mImagesLabel->setText(QApplication::translate("WidgetSvgSelector", "SVG Images", 0, QApplication::UnicodeUTF8));
        mGroupsLabel->setText(QApplication::translate("WidgetSvgSelector", "SVG Groups", 0, QApplication::UnicodeUTF8));
        mFilePushButton->setText(QApplication::translate("WidgetSvgSelector", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mRelativePathChkBx->setToolTip(QApplication::translate("WidgetSvgSelector", "Generated path will be relative to current SVG search directories or to Project file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mRelativePathChkBx->setText(QApplication::translate("WidgetSvgSelector", "Relative path", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetSvgSelector: public Ui_WidgetSvgSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SVGSELECTOR_H
