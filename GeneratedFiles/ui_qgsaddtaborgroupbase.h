/********************************************************************************
** Form generated from reading UI file 'qgsaddtaborgroupbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSADDTABORGROUPBASE_H
#define UI_QGSADDTABORGROUPBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QgsAddTabOrGroupBase
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *mName;
    QLabel *label_2;
    QRadioButton *mTabButton;
    QRadioButton *mGroupButton;
    QComboBox *mTabList;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *QgsAddTabOrGroupBase)
    {
        if (QgsAddTabOrGroupBase->objectName().isEmpty())
            QgsAddTabOrGroupBase->setObjectName(QString::fromUtf8("QgsAddTabOrGroupBase"));
        QgsAddTabOrGroupBase->resize(447, 164);
        gridLayout_2 = new QGridLayout(QgsAddTabOrGroupBase);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonBox = new QDialogButtonBox(QgsAddTabOrGroupBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(QgsAddTabOrGroupBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mName = new QLineEdit(QgsAddTabOrGroupBase);
        mName->setObjectName(QString::fromUtf8("mName"));

        gridLayout->addWidget(mName, 0, 1, 1, 2);

        label_2 = new QLabel(QgsAddTabOrGroupBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        mTabButton = new QRadioButton(QgsAddTabOrGroupBase);
        buttonGroup = new QButtonGroup(QgsAddTabOrGroupBase);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(mTabButton);
        mTabButton->setObjectName(QString::fromUtf8("mTabButton"));
        mTabButton->setChecked(true);

        gridLayout->addWidget(mTabButton, 1, 0, 1, 2);

        mGroupButton = new QRadioButton(QgsAddTabOrGroupBase);
        buttonGroup->addButton(mGroupButton);
        mGroupButton->setObjectName(QString::fromUtf8("mGroupButton"));
        mGroupButton->setChecked(false);

        gridLayout->addWidget(mGroupButton, 2, 0, 1, 2);

        mTabList = new QComboBox(QgsAddTabOrGroupBase);
        mTabList->setObjectName(QString::fromUtf8("mTabList"));
        mTabList->setEnabled(true);

        gridLayout->addWidget(mTabList, 2, 2, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 3, 2);

        QWidget::setTabOrder(mName, mTabButton);
        QWidget::setTabOrder(mTabButton, mGroupButton);
        QWidget::setTabOrder(mGroupButton, mTabList);
        QWidget::setTabOrder(mTabList, buttonBox);

        retranslateUi(QgsAddTabOrGroupBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsAddTabOrGroupBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsAddTabOrGroupBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsAddTabOrGroupBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddTabOrGroupBase)
    {
        QgsAddTabOrGroupBase->setWindowTitle(QApplication::translate("QgsAddTabOrGroupBase", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsAddTabOrGroupBase", "Create category", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsAddTabOrGroupBase", "as", 0, QApplication::UnicodeUTF8));
        mTabButton->setText(QApplication::translate("QgsAddTabOrGroupBase", "a tab", 0, QApplication::UnicodeUTF8));
        mGroupButton->setText(QApplication::translate("QgsAddTabOrGroupBase", "a group in container", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsAddTabOrGroupBase: public Ui_QgsAddTabOrGroupBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSADDTABORGROUPBASE_H
