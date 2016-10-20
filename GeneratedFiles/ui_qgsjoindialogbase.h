/********************************************************************************
** Form generated from reading UI file 'qgsjoindialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSJOINDIALOGBASE_H
#define UI_QGSJOINDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include "qgscollapsiblegroupbox.h"
#include "qgsfieldcombobox.h"
#include "qgsmaplayercombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsJoinDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mJoinLayerLabel;
    QgsMapLayerComboBox *mJoinLayerComboBox;
    QLabel *mJoinFieldLabel;
    QgsFieldComboBox *mJoinFieldComboBox;
    QLabel *mTargetFieldLabel;
    QgsFieldComboBox *mTargetFieldComboBox;
    QgsCollapsibleGroupBox *mUseJoinFieldsSubset;
    QGridLayout *gridLayout_2;
    QListView *mJoinFieldsSubsetView;
    QgsCollapsibleGroupBox *mUseCustomPrefix;
    QGridLayout *gridLayout_3;
    QLineEdit *mCustomPrefix;
    QSpacerItem *verticalSpacer;
    QCheckBox *mCacheInMemoryCheckBox;
    QCheckBox *mCreateIndexCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsJoinDialogBase)
    {
        if (QgsJoinDialogBase->objectName().isEmpty())
            QgsJoinDialogBase->setObjectName(QString::fromUtf8("QgsJoinDialogBase"));
        QgsJoinDialogBase->resize(505, 395);
        gridLayout = new QGridLayout(QgsJoinDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mJoinLayerLabel = new QLabel(QgsJoinDialogBase);
        mJoinLayerLabel->setObjectName(QString::fromUtf8("mJoinLayerLabel"));

        gridLayout->addWidget(mJoinLayerLabel, 0, 0, 1, 1);

        mJoinLayerComboBox = new QgsMapLayerComboBox(QgsJoinDialogBase);
        mJoinLayerComboBox->setObjectName(QString::fromUtf8("mJoinLayerComboBox"));

        gridLayout->addWidget(mJoinLayerComboBox, 0, 1, 1, 1);

        mJoinFieldLabel = new QLabel(QgsJoinDialogBase);
        mJoinFieldLabel->setObjectName(QString::fromUtf8("mJoinFieldLabel"));

        gridLayout->addWidget(mJoinFieldLabel, 1, 0, 1, 1);

        mJoinFieldComboBox = new QgsFieldComboBox(QgsJoinDialogBase);
        mJoinFieldComboBox->setObjectName(QString::fromUtf8("mJoinFieldComboBox"));

        gridLayout->addWidget(mJoinFieldComboBox, 1, 1, 1, 1);

        mTargetFieldLabel = new QLabel(QgsJoinDialogBase);
        mTargetFieldLabel->setObjectName(QString::fromUtf8("mTargetFieldLabel"));

        gridLayout->addWidget(mTargetFieldLabel, 2, 0, 1, 1);

        mTargetFieldComboBox = new QgsFieldComboBox(QgsJoinDialogBase);
        mTargetFieldComboBox->setObjectName(QString::fromUtf8("mTargetFieldComboBox"));

        gridLayout->addWidget(mTargetFieldComboBox, 2, 1, 1, 1);

        mUseJoinFieldsSubset = new QgsCollapsibleGroupBox(QgsJoinDialogBase);
        mUseJoinFieldsSubset->setObjectName(QString::fromUtf8("mUseJoinFieldsSubset"));
        mUseJoinFieldsSubset->setCheckable(true);
        mUseJoinFieldsSubset->setChecked(false);
        mUseJoinFieldsSubset->setProperty("collapsed", QVariant(true));
        gridLayout_2 = new QGridLayout(mUseJoinFieldsSubset);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mJoinFieldsSubsetView = new QListView(mUseJoinFieldsSubset);
        mJoinFieldsSubsetView->setObjectName(QString::fromUtf8("mJoinFieldsSubsetView"));

        gridLayout_2->addWidget(mJoinFieldsSubsetView, 0, 0, 1, 1);


        gridLayout->addWidget(mUseJoinFieldsSubset, 5, 0, 1, 2);

        mUseCustomPrefix = new QgsCollapsibleGroupBox(QgsJoinDialogBase);
        mUseCustomPrefix->setObjectName(QString::fromUtf8("mUseCustomPrefix"));
        mUseCustomPrefix->setCheckable(true);
        mUseCustomPrefix->setChecked(false);
        mUseCustomPrefix->setProperty("collapsed", QVariant(true));
        gridLayout_3 = new QGridLayout(mUseCustomPrefix);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mCustomPrefix = new QLineEdit(mUseCustomPrefix);
        mCustomPrefix->setObjectName(QString::fromUtf8("mCustomPrefix"));

        gridLayout_3->addWidget(mCustomPrefix, 0, 0, 1, 1);


        gridLayout->addWidget(mUseCustomPrefix, 6, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        mCacheInMemoryCheckBox = new QCheckBox(QgsJoinDialogBase);
        mCacheInMemoryCheckBox->setObjectName(QString::fromUtf8("mCacheInMemoryCheckBox"));

        gridLayout->addWidget(mCacheInMemoryCheckBox, 3, 0, 1, 2);

        mCreateIndexCheckBox = new QCheckBox(QgsJoinDialogBase);
        mCreateIndexCheckBox->setObjectName(QString::fromUtf8("mCreateIndexCheckBox"));

        gridLayout->addWidget(mCreateIndexCheckBox, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(QgsJoinDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 2);

        QWidget::setTabOrder(mJoinLayerComboBox, mJoinFieldComboBox);
        QWidget::setTabOrder(mJoinFieldComboBox, mTargetFieldComboBox);
        QWidget::setTabOrder(mTargetFieldComboBox, mCacheInMemoryCheckBox);
        QWidget::setTabOrder(mCacheInMemoryCheckBox, mCreateIndexCheckBox);
        QWidget::setTabOrder(mCreateIndexCheckBox, mUseJoinFieldsSubset);
        QWidget::setTabOrder(mUseJoinFieldsSubset, mJoinFieldsSubsetView);
        QWidget::setTabOrder(mJoinFieldsSubsetView, mUseCustomPrefix);
        QWidget::setTabOrder(mUseCustomPrefix, mCustomPrefix);

        retranslateUi(QgsJoinDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsJoinDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsJoinDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsJoinDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsJoinDialogBase)
    {
        QgsJoinDialogBase->setWindowTitle(QApplication::translate("QgsJoinDialogBase", "Add vector join", 0, QApplication::UnicodeUTF8));
        mJoinLayerLabel->setText(QApplication::translate("QgsJoinDialogBase", "Join layer", 0, QApplication::UnicodeUTF8));
        mJoinFieldLabel->setText(QApplication::translate("QgsJoinDialogBase", "Join field", 0, QApplication::UnicodeUTF8));
        mTargetFieldLabel->setText(QApplication::translate("QgsJoinDialogBase", "Target field", 0, QApplication::UnicodeUTF8));
        mUseJoinFieldsSubset->setTitle(QApplication::translate("QgsJoinDialogBase", "Choose which fields are joined", 0, QApplication::UnicodeUTF8));
        mUseCustomPrefix->setTitle(QApplication::translate("QgsJoinDialogBase", "Custom field name prefix", 0, QApplication::UnicodeUTF8));
        mCacheInMemoryCheckBox->setText(QApplication::translate("QgsJoinDialogBase", "Cache join layer in virtual memory", 0, QApplication::UnicodeUTF8));
        mCreateIndexCheckBox->setText(QApplication::translate("QgsJoinDialogBase", "Create attribute index on join field", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsJoinDialogBase: public Ui_QgsJoinDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSJOINDIALOGBASE_H
