/********************************************************************************
** Form generated from reading UI file 'qgssymbolv2selectordialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSYMBOLV2SELECTORDIALOGBASE_H
#define UI_QGSSYMBOLV2SELECTORDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsSymbolV2SelectorDialogBase
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lblPreview;
    QTreeView *layersTree;
    QHBoxLayout *pushBtnBox;
    QPushButton *btnAddLayer;
    QPushButton *btnRemoveLayer;
    QPushButton *btnLock;
    QPushButton *btnDuplicate;
    QPushButton *btnUp;
    QPushButton *btnDown;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;

    void setupUi(QDialog *QgsSymbolV2SelectorDialogBase)
    {
        if (QgsSymbolV2SelectorDialogBase->objectName().isEmpty())
            QgsSymbolV2SelectorDialogBase->setObjectName(QString::fromUtf8("QgsSymbolV2SelectorDialogBase"));
        QgsSymbolV2SelectorDialogBase->resize(670, 359);
        gridLayout = new QGridLayout(QgsSymbolV2SelectorDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblPreview = new QLabel(QgsSymbolV2SelectorDialogBase);
        lblPreview->setObjectName(QString::fromUtf8("lblPreview"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblPreview->sizePolicy().hasHeightForWidth());
        lblPreview->setSizePolicy(sizePolicy);
        lblPreview->setMinimumSize(QSize(100, 100));
        lblPreview->setFrameShape(QFrame::StyledPanel);
        lblPreview->setFrameShadow(QFrame::Sunken);
        lblPreview->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblPreview);

        layersTree = new QTreeView(QgsSymbolV2SelectorDialogBase);
        layersTree->setObjectName(QString::fromUtf8("layersTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(layersTree->sizePolicy().hasHeightForWidth());
        layersTree->setSizePolicy(sizePolicy1);
        layersTree->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(layersTree);

        pushBtnBox = new QHBoxLayout();
        pushBtnBox->setSpacing(6);
        pushBtnBox->setObjectName(QString::fromUtf8("pushBtnBox"));
        btnAddLayer = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnAddLayer->setObjectName(QString::fromUtf8("btnAddLayer"));
        btnAddLayer->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnAddLayer);

        btnRemoveLayer = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnRemoveLayer->setObjectName(QString::fromUtf8("btnRemoveLayer"));
        btnRemoveLayer->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnRemoveLayer);

        btnLock = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnLock->setObjectName(QString::fromUtf8("btnLock"));
        btnLock->setMaximumSize(QSize(50, 16777215));
        btnLock->setCheckable(true);

        pushBtnBox->addWidget(btnLock);

        btnDuplicate = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnDuplicate->setObjectName(QString::fromUtf8("btnDuplicate"));
        btnDuplicate->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnDuplicate);

        btnUp = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnUp);

        btnDown = new QPushButton(QgsSymbolV2SelectorDialogBase);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        btnDown->setMaximumSize(QSize(50, 16777215));

        pushBtnBox->addWidget(btnDown);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pushBtnBox->addItem(horizontalSpacer);


        verticalLayout->addLayout(pushBtnBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSymbolV2SelectorDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 2, 1, 1);

        frame = new QFrame(QgsSymbolV2SelectorDialogBase);
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
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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


        retranslateUi(QgsSymbolV2SelectorDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSymbolV2SelectorDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSymbolV2SelectorDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSymbolV2SelectorDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSymbolV2SelectorDialogBase)
    {
        QgsSymbolV2SelectorDialogBase->setWindowTitle(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Symbol selector", 0, QApplication::UnicodeUTF8));
        lblPreview->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnAddLayer->setToolTip(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Add symbol layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnRemoveLayer->setToolTip(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Remove symbol layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnLock->setToolTip(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Lock layer's color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnDuplicate->setToolTip(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Duplicates the current layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnDuplicate->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnUp->setToolTip(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Move up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnDown->setToolTip(QApplication::translate("QgsSymbolV2SelectorDialogBase", "Move down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsSymbolV2SelectorDialogBase: public Ui_QgsSymbolV2SelectorDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSYMBOLV2SELECTORDIALOGBASE_H
