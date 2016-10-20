/********************************************************************************
** Form generated from reading UI file 'qgssavetodbdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSAVETODBDIALOG_H
#define UI_QGSSAVETODBDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_QgsSaveToDBDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *descriptionLabel;
    QPlainTextEdit *mDescriptionEdit;
    QLabel *mUILabel;
    QLabel *nameLabel;
    QLineEdit *mNameEdit;
    QDialogButtonBox *buttonBox;
    QCheckBox *mUseAsDefault;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mFileNameLabel;
    QToolButton *mFilePickButton;
    QLabel *label;

    void setupUi(QDialog *QgsSaveToDBDialog)
    {
        if (QgsSaveToDBDialog->objectName().isEmpty())
            QgsSaveToDBDialog->setObjectName(QString::fromUtf8("QgsSaveToDBDialog"));
        QgsSaveToDBDialog->resize(355, 246);
        QgsSaveToDBDialog->setModal(true);
        gridLayout = new QGridLayout(QgsSaveToDBDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        descriptionLabel = new QLabel(QgsSaveToDBDialog);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        gridLayout->addWidget(descriptionLabel, 1, 0, 1, 1);

        mDescriptionEdit = new QPlainTextEdit(QgsSaveToDBDialog);
        mDescriptionEdit->setObjectName(QString::fromUtf8("mDescriptionEdit"));

        gridLayout->addWidget(mDescriptionEdit, 1, 1, 1, 1);

        mUILabel = new QLabel(QgsSaveToDBDialog);
        mUILabel->setObjectName(QString::fromUtf8("mUILabel"));

        gridLayout->addWidget(mUILabel, 4, 0, 1, 1);

        nameLabel = new QLabel(QgsSaveToDBDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        mNameEdit = new QLineEdit(QgsSaveToDBDialog);
        mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

        gridLayout->addWidget(mNameEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QgsSaveToDBDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 1);

        mUseAsDefault = new QCheckBox(QgsSaveToDBDialog);
        mUseAsDefault->setObjectName(QString::fromUtf8("mUseAsDefault"));

        gridLayout->addWidget(mUseAsDefault, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mFileNameLabel = new QLabel(QgsSaveToDBDialog);
        mFileNameLabel->setObjectName(QString::fromUtf8("mFileNameLabel"));

        horizontalLayout_2->addWidget(mFileNameLabel);

        mFilePickButton = new QToolButton(QgsSaveToDBDialog);
        mFilePickButton->setObjectName(QString::fromUtf8("mFilePickButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mFilePickButton->sizePolicy().hasHeightForWidth());
        mFilePickButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(mFilePickButton);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        label = new QLabel(QgsSaveToDBDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::PlainText);
        label->setScaledContents(false);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 2, 0, 2, 2);

#ifndef QT_NO_SHORTCUT
        mUILabel->setBuddy(mNameEdit);
        nameLabel->setBuddy(mNameEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(mNameEdit, mDescriptionEdit);
        QWidget::setTabOrder(mDescriptionEdit, mFilePickButton);
        QWidget::setTabOrder(mFilePickButton, mUseAsDefault);
        QWidget::setTabOrder(mUseAsDefault, buttonBox);

        retranslateUi(QgsSaveToDBDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSaveToDBDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSaveToDBDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSaveToDBDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsSaveToDBDialog)
    {
        QgsSaveToDBDialog->setWindowTitle(QApplication::translate("QgsSaveToDBDialog", "Save style", 0, QApplication::UnicodeUTF8));
        descriptionLabel->setText(QApplication::translate("QgsSaveToDBDialog", "Description", 0, QApplication::UnicodeUTF8));
        mUILabel->setText(QApplication::translate("QgsSaveToDBDialog", "UI", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("QgsSaveToDBDialog", "Style Name", 0, QApplication::UnicodeUTF8));
        mUseAsDefault->setText(QApplication::translate("QgsSaveToDBDialog", "Use as default style for this layer", 0, QApplication::UnicodeUTF8));
        mFileNameLabel->setText(QString());
        mFilePickButton->setText(QApplication::translate("QgsSaveToDBDialog", "Open...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsSaveToDBDialog", "Optionally pick an input form for attribute editing (QT Designer UI format), it will be stored in the database", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsSaveToDBDialog: public Ui_QgsSaveToDBDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSAVETODBDIALOG_H
