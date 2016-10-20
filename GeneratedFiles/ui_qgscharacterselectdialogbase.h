/********************************************************************************
** Form generated from reading UI file 'qgscharacterselectdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCHARACTERSELECTDIALOGBASE_H
#define UI_QGSCHARACTERSELECTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsCharacterSelectorBase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *mCharSelectLabel;
    QLabel *mCharSelectLabelFont;
    QScrollArea *mCharSelectScrollArea;
    QWidget *scrollAreaWidgetContents;
    QDialogButtonBox *mCharSelectButtonBox;

    void setupUi(QDialog *QgsCharacterSelectorBase)
    {
        if (QgsCharacterSelectorBase->objectName().isEmpty())
            QgsCharacterSelectorBase->setObjectName(QString::fromUtf8("QgsCharacterSelectorBase"));
        QgsCharacterSelectorBase->resize(640, 480);
        QgsCharacterSelectorBase->setMinimumSize(QSize(640, 480));
        verticalLayout = new QVBoxLayout(QgsCharacterSelectorBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mCharSelectLabel = new QLabel(QgsCharacterSelectorBase);
        mCharSelectLabel->setObjectName(QString::fromUtf8("mCharSelectLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mCharSelectLabel->sizePolicy().hasHeightForWidth());
        mCharSelectLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mCharSelectLabel);

        mCharSelectLabelFont = new QLabel(QgsCharacterSelectorBase);
        mCharSelectLabelFont->setObjectName(QString::fromUtf8("mCharSelectLabelFont"));

        horizontalLayout->addWidget(mCharSelectLabelFont);


        verticalLayout->addLayout(horizontalLayout);

        mCharSelectScrollArea = new QScrollArea(QgsCharacterSelectorBase);
        mCharSelectScrollArea->setObjectName(QString::fromUtf8("mCharSelectScrollArea"));
        mCharSelectScrollArea->setMinimumSize(QSize(0, 0));
        mCharSelectScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mCharSelectScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mCharSelectScrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 359, 371));
        mCharSelectScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(mCharSelectScrollArea);

        mCharSelectButtonBox = new QDialogButtonBox(QgsCharacterSelectorBase);
        mCharSelectButtonBox->setObjectName(QString::fromUtf8("mCharSelectButtonBox"));
        mCharSelectButtonBox->setOrientation(Qt::Horizontal);
        mCharSelectButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mCharSelectButtonBox);


        retranslateUi(QgsCharacterSelectorBase);
        QObject::connect(mCharSelectButtonBox, SIGNAL(accepted()), QgsCharacterSelectorBase, SLOT(accept()));
        QObject::connect(mCharSelectButtonBox, SIGNAL(rejected()), QgsCharacterSelectorBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsCharacterSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCharacterSelectorBase)
    {
        QgsCharacterSelectorBase->setWindowTitle(QApplication::translate("QgsCharacterSelectorBase", "Character Selector", 0, QApplication::UnicodeUTF8));
        mCharSelectLabel->setText(QApplication::translate("QgsCharacterSelectorBase", "Font:", 0, QApplication::UnicodeUTF8));
        mCharSelectLabelFont->setText(QApplication::translate("QgsCharacterSelectorBase", "Current font family and style", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsCharacterSelectorBase: public Ui_QgsCharacterSelectorBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCHARACTERSELECTDIALOGBASE_H
