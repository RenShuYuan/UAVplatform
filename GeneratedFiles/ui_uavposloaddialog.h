/********************************************************************************
** Form generated from reading UI file 'uavposloaddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UAVPOSLOADDIALOG_H
#define UI_UAVPOSLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_uavposdialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lePosFile;
    QPushButton *btnOpenPos;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_10;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *chkClipSpace;
    QCheckBox *cbxSkipEmptyFields;
    QCheckBox *chkDMSformat;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkComma;
    QCheckBox *chkTab;
    QCheckBox *chkSpace;
    QCheckBox *chkColon;
    QCheckBox *chkSemicolon;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_16;
    QSpinBox *rowCounter;
    QCheckBox *cbxUseHeader;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *cmb_1;
    QComboBox *cmb_2;
    QComboBox *cmb_3;
    QComboBox *cmb_4;
    QComboBox *cmb_5;
    QComboBox *cmb_6;
    QComboBox *cmb_7;
    QComboBox *cmb_8;
    QComboBox *cmb_9;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *uavposdialog)
    {
        if (uavposdialog->objectName().isEmpty())
            uavposdialog->setObjectName(QString::fromUtf8("uavposdialog"));
        uavposdialog->resize(887, 413);
        verticalLayout_2 = new QVBoxLayout(uavposdialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(uavposdialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lePosFile = new QLineEdit(groupBox);
        lePosFile->setObjectName(QString::fromUtf8("lePosFile"));

        horizontalLayout->addWidget(lePosFile);

        btnOpenPos = new QPushButton(groupBox);
        btnOpenPos->setObjectName(QString::fromUtf8("btnOpenPos"));

        horizontalLayout->addWidget(btnOpenPos);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_4 = new QGroupBox(uavposdialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_4);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(7);
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        chkClipSpace = new QCheckBox(groupBox_4);
        chkClipSpace->setObjectName(QString::fromUtf8("chkClipSpace"));

        horizontalLayout_8->addWidget(chkClipSpace);

        cbxSkipEmptyFields = new QCheckBox(groupBox_4);
        cbxSkipEmptyFields->setObjectName(QString::fromUtf8("cbxSkipEmptyFields"));

        horizontalLayout_8->addWidget(cbxSkipEmptyFields);

        chkDMSformat = new QCheckBox(groupBox_4);
        chkDMSformat->setObjectName(QString::fromUtf8("chkDMSformat"));

        horizontalLayout_8->addWidget(chkDMSformat);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_8, 2, 1, 1, 2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));

        gridLayout->addLayout(horizontalLayout_9, 3, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        chkComma = new QCheckBox(groupBox_4);
        chkComma->setObjectName(QString::fromUtf8("chkComma"));

        horizontalLayout_3->addWidget(chkComma);

        chkTab = new QCheckBox(groupBox_4);
        chkTab->setObjectName(QString::fromUtf8("chkTab"));

        horizontalLayout_3->addWidget(chkTab);

        chkSpace = new QCheckBox(groupBox_4);
        chkSpace->setObjectName(QString::fromUtf8("chkSpace"));

        horizontalLayout_3->addWidget(chkSpace);

        chkColon = new QCheckBox(groupBox_4);
        chkColon->setObjectName(QString::fromUtf8("chkColon"));

        horizontalLayout_3->addWidget(chkColon);

        chkSemicolon = new QCheckBox(groupBox_4);
        chkSemicolon->setObjectName(QString::fromUtf8("chkSemicolon"));

        horizontalLayout_3->addWidget(chkSemicolon);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 9, -1);
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_16);

        rowCounter = new QSpinBox(groupBox_4);
        rowCounter->setObjectName(QString::fromUtf8("rowCounter"));
        rowCounter->setMinimumSize(QSize(0, 0));
        rowCounter->setMaximumSize(QSize(16777215, 16777215));
        rowCounter->setWrapping(false);
        rowCounter->setMaximum(9999);
        rowCounter->setValue(0);

        horizontalLayout_4->addWidget(rowCounter);

        cbxUseHeader = new QCheckBox(groupBox_4);
        cbxUseHeader->setObjectName(QString::fromUtf8("cbxUseHeader"));
        cbxUseHeader->setChecked(true);

        horizontalLayout_4->addWidget(cbxUseHeader);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);


        horizontalLayout_10->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(uavposdialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_8);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_12);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_13);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        cmb_1 = new QComboBox(groupBox_2);
        cmb_1->setObjectName(QString::fromUtf8("cmb_1"));

        horizontalLayout_6->addWidget(cmb_1);

        cmb_2 = new QComboBox(groupBox_2);
        cmb_2->setObjectName(QString::fromUtf8("cmb_2"));

        horizontalLayout_6->addWidget(cmb_2);

        cmb_3 = new QComboBox(groupBox_2);
        cmb_3->setObjectName(QString::fromUtf8("cmb_3"));

        horizontalLayout_6->addWidget(cmb_3);

        cmb_4 = new QComboBox(groupBox_2);
        cmb_4->setObjectName(QString::fromUtf8("cmb_4"));

        horizontalLayout_6->addWidget(cmb_4);

        cmb_5 = new QComboBox(groupBox_2);
        cmb_5->setObjectName(QString::fromUtf8("cmb_5"));

        horizontalLayout_6->addWidget(cmb_5);

        cmb_6 = new QComboBox(groupBox_2);
        cmb_6->setObjectName(QString::fromUtf8("cmb_6"));

        horizontalLayout_6->addWidget(cmb_6);

        cmb_7 = new QComboBox(groupBox_2);
        cmb_7->setObjectName(QString::fromUtf8("cmb_7"));

        horizontalLayout_6->addWidget(cmb_7);

        cmb_8 = new QComboBox(groupBox_2);
        cmb_8->setObjectName(QString::fromUtf8("cmb_8"));

        horizontalLayout_6->addWidget(cmb_8);

        cmb_9 = new QComboBox(groupBox_2);
        cmb_9->setObjectName(QString::fromUtf8("cmb_9"));

        horizontalLayout_6->addWidget(cmb_9);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(uavposdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(uavposdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), uavposdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), uavposdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(uavposdialog);
    } // setupUi

    void retranslateUi(QDialog *uavposdialog)
    {
        uavposdialog->setWindowTitle(QApplication::translate("uavposdialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("uavposdialog", "\346\226\207\344\273\266\350\267\257\345\276\204", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("uavposdialog", "\350\275\275\345\205\245\346\233\235\345\205\211\347\202\271\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnOpenPos->setText(QApplication::translate("uavposdialog", "\346\265\217\350\247\210...", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("uavposdialog", "\346\226\207\344\273\266\346\240\274\345\274\217", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("uavposdialog", "\347\233\270\347\211\207\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("uavposdialog", "\350\256\260\345\275\225\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("uavposdialog", "\345\255\227\346\256\265\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        chkClipSpace->setText(QApplication::translate("uavposdialog", "\350\243\201\345\211\252\345\255\227\346\256\265\345\211\215\345\220\216\347\232\204\347\251\272\346\240\274", 0, QApplication::UnicodeUTF8));
        cbxSkipEmptyFields->setText(QApplication::translate("uavposdialog", "\345\277\275\347\225\245\347\251\272\345\255\227\346\256\265", 0, QApplication::UnicodeUTF8));
        chkDMSformat->setText(QApplication::translate("uavposdialog", "\345\272\246\345\210\206\347\247\222\346\240\274\345\274\217\345\235\220\346\240\207", 0, QApplication::UnicodeUTF8));
        chkComma->setText(QApplication::translate("uavposdialog", "\351\200\227\345\217\267", 0, QApplication::UnicodeUTF8));
        chkTab->setText(QApplication::translate("uavposdialog", "\345\210\266\350\241\250\347\254\246", 0, QApplication::UnicodeUTF8));
        chkSpace->setText(QApplication::translate("uavposdialog", "\347\251\272\346\240\274", 0, QApplication::UnicodeUTF8));
        chkColon->setText(QApplication::translate("uavposdialog", "\345\206\222\345\217\267", 0, QApplication::UnicodeUTF8));
        chkSemicolon->setText(QApplication::translate("uavposdialog", "\345\210\206\345\217\267", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("uavposdialog", "\344\273\216\346\226\207\344\273\266\345\274\200\345\244\264\350\265\267\345\277\275\347\225\245\347\232\204\350\241\214\346\225\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        rowCounter->setToolTip(QApplication::translate("uavposdialog", "The number of lines to discard from the beginning of the file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rowCounter->setStatusTip(QApplication::translate("uavposdialog", "The number of lines to discard from the beginning of the file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        rowCounter->setWhatsThis(QApplication::translate("uavposdialog", "The number of lines to discard from the beginning of the file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        cbxUseHeader->setToolTip(QApplication::translate("uavposdialog", "Field names are read from the first record. If not selected then fields are numbered", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cbxUseHeader->setStatusTip(QApplication::translate("uavposdialog", "Field names are read from the first record. If not selected then fields are numbered", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        cbxUseHeader->setWhatsThis(QApplication::translate("uavposdialog", "Field names are read from the first record. If not selected then fields are numbered", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbxUseHeader->setText(QApplication::translate("uavposdialog", "\351\246\226\350\241\214\345\214\205\345\220\253\345\255\227\346\256\265\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("uavposdialog", "\346\240\274\345\274\217\345\256\232\344\271\211", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("uavposdialog", "\347\233\270\347\211\207\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("uavposdialog", "\346\250\252\345\235\220\346\240\207", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("uavposdialog", "\347\272\265\345\235\220\346\240\207", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("uavposdialog", "\347\233\270\345\257\271\350\241\214\351\253\230", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("uavposdialog", "Omega", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("uavposdialog", "Phi", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("uavposdialog", "Kappa", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("uavposdialog", "\347\273\235\345\257\271\350\241\214\351\253\230", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("uavposdialog", "\347\233\270\346\234\272\346\240\207\350\257\206", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class uavposdialog: public Ui_uavposdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UAVPOSLOADDIALOG_H
