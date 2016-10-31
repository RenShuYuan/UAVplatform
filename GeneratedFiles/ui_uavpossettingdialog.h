/********************************************************************************
** Form generated from reading UI file 'uavpossettingdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UAVPOSSETTINGDIALOG_H
#define UI_UAVPOSSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_uavpossettingdialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkFormat;
    QCheckBox *chkTransform;
    QCheckBox *chkSketchMap;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkLinkPhoto;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_14;
    QLineEdit *lepPhotoName;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *uavpossettingdialog)
    {
        if (uavpossettingdialog->objectName().isEmpty())
            uavpossettingdialog->setObjectName(QString::fromUtf8("uavpossettingdialog"));
        uavpossettingdialog->resize(405, 402);
        verticalLayout_4 = new QVBoxLayout(uavpossettingdialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(uavpossettingdialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 3, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout->addWidget(lineEdit_6, 4, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(uavpossettingdialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        chkFormat = new QCheckBox(groupBox_3);
        chkFormat->setObjectName(QString::fromUtf8("chkFormat"));

        horizontalLayout_3->addWidget(chkFormat);

        chkTransform = new QCheckBox(groupBox_3);
        chkTransform->setObjectName(QString::fromUtf8("chkTransform"));

        horizontalLayout_3->addWidget(chkTransform);

        chkSketchMap = new QCheckBox(groupBox_3);
        chkSketchMap->setObjectName(QString::fromUtf8("chkSketchMap"));

        horizontalLayout_3->addWidget(chkSketchMap);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        chkLinkPhoto = new QCheckBox(groupBox_4);
        chkLinkPhoto->setObjectName(QString::fromUtf8("chkLinkPhoto"));

        horizontalLayout_2->addWidget(chkLinkPhoto);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_14);

        lepPhotoName = new QLineEdit(groupBox_4);
        lepPhotoName->setObjectName(QString::fromUtf8("lepPhotoName"));

        horizontalLayout->addWidget(lepPhotoName);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_4);


        verticalLayout_4->addWidget(groupBox_2);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(uavpossettingdialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        verticalLayout_4->addLayout(hboxLayout);

        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, chkFormat);
        QWidget::setTabOrder(chkFormat, chkTransform);
        QWidget::setTabOrder(chkTransform, chkSketchMap);
        QWidget::setTabOrder(chkSketchMap, chkLinkPhoto);
        QWidget::setTabOrder(chkLinkPhoto, lepPhotoName);
        QWidget::setTabOrder(lepPhotoName, buttonBox);

        retranslateUi(uavpossettingdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), uavpossettingdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), uavpossettingdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(uavpossettingdialog);
    } // setupUi

    void retranslateUi(QDialog *uavpossettingdialog)
    {
        uavpossettingdialog->setWindowTitle(QApplication::translate("uavpossettingdialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("uavpossettingdialog", "\345\217\202\346\225\260\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("uavpossettingdialog", "\345\235\220\346\240\207\345\217\202\347\205\247\347\263\273", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("uavpossettingdialog", "\347\233\270\346\234\272\347\204\246\350\267\235\357\274\210mm\357\274\211", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("uavpossettingdialog", "\345\203\217\345\205\203\345\244\247\345\260\217\357\274\210um\357\274\211 ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("uavpossettingdialog", "\347\233\270\345\271\205\345\244\247\345\260\217\357\274\210\351\253\230\345\256\275\357\274\211", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("uavpossettingdialog", "\346\265\213\345\214\272\345\271\263\345\235\207\351\253\230\347\250\213\357\274\210m\357\274\211", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("uavpossettingdialog", "\346\233\235\345\205\211\347\202\271\344\270\200\351\224\256\345\244\204\347\220\206", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QString());
        chkFormat->setText(QApplication::translate("uavpossettingdialog", "\346\240\274\345\274\217\346\225\264\347\220\206", 0, QApplication::UnicodeUTF8));
        chkTransform->setText(QApplication::translate("uavpossettingdialog", "\350\275\254\346\215\242\345\235\220\346\240\207", 0, QApplication::UnicodeUTF8));
        chkSketchMap->setText(QApplication::translate("uavpossettingdialog", "\347\224\237\346\210\220\347\225\245\345\233\276", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QString());
        chkLinkPhoto->setText(QApplication::translate("uavpossettingdialog", "\345\212\250\346\200\201\350\201\224\345\212\250", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("uavpossettingdialog", "\347\233\270\347\211\207\346\226\207\344\273\266\345\244\271\351\273\230\350\256\244\346\220\234\347\264\242\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class uavpossettingdialog: public Ui_uavpossettingdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UAVPOSSETTINGDIALOG_H
