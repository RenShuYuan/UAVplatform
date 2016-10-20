/********************************************************************************
** Form generated from reading UI file 'qgsnewogrconnectionbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSNEWOGRCONNECTIONBASE_H
#define UI_QGSNEWOGRCONNECTIONBASE_H

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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QgsNewOgrConnectionBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout_1;
    QLabel *label;
    QComboBox *cmbDatabaseTypes;
    QLabel *TextLabel1_2;
    QLineEdit *txtName;
    QLabel *TextLabel1;
    QLineEdit *txtHost;
    QLabel *TextLabel2;
    QLineEdit *txtDatabase;
    QLabel *TextLabel2_2;
    QLineEdit *txtPort;
    QLabel *TextLabel3;
    QLineEdit *txtUsername;
    QLabel *TextLabel3_2;
    QLineEdit *txtPassword;
    QCheckBox *chkStorePassword;
    QPushButton *btnConnect;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewOgrConnectionBase)
    {
        if (QgsNewOgrConnectionBase->objectName().isEmpty())
            QgsNewOgrConnectionBase->setObjectName(QString::fromUtf8("QgsNewOgrConnectionBase"));
        QgsNewOgrConnectionBase->resize(404, 348);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsNewOgrConnectionBase->sizePolicy().hasHeightForWidth());
        QgsNewOgrConnectionBase->setSizePolicy(sizePolicy);
        QgsNewOgrConnectionBase->setSizeGripEnabled(true);
        QgsNewOgrConnectionBase->setModal(true);
        gridLayout = new QGridLayout(QgsNewOgrConnectionBase);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        GroupBox1 = new QGroupBox(QgsNewOgrConnectionBase);
        GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
        gridLayout_1 = new QGridLayout(GroupBox1);
        gridLayout_1->setSpacing(6);
        gridLayout_1->setContentsMargins(11, 11, 11, 11);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        label = new QLabel(GroupBox1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_1->addWidget(label, 0, 0, 1, 1);

        cmbDatabaseTypes = new QComboBox(GroupBox1);
        cmbDatabaseTypes->setObjectName(QString::fromUtf8("cmbDatabaseTypes"));

        gridLayout_1->addWidget(cmbDatabaseTypes, 0, 1, 1, 2);

        TextLabel1_2 = new QLabel(GroupBox1);
        TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

        gridLayout_1->addWidget(TextLabel1_2, 1, 0, 1, 1);

        txtName = new QLineEdit(GroupBox1);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        gridLayout_1->addWidget(txtName, 1, 1, 1, 2);

        TextLabel1 = new QLabel(GroupBox1);
        TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

        gridLayout_1->addWidget(TextLabel1, 2, 0, 1, 1);

        txtHost = new QLineEdit(GroupBox1);
        txtHost->setObjectName(QString::fromUtf8("txtHost"));

        gridLayout_1->addWidget(txtHost, 2, 1, 1, 2);

        TextLabel2 = new QLabel(GroupBox1);
        TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

        gridLayout_1->addWidget(TextLabel2, 3, 0, 1, 1);

        txtDatabase = new QLineEdit(GroupBox1);
        txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

        gridLayout_1->addWidget(txtDatabase, 3, 1, 1, 2);

        TextLabel2_2 = new QLabel(GroupBox1);
        TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

        gridLayout_1->addWidget(TextLabel2_2, 4, 0, 1, 1);

        txtPort = new QLineEdit(GroupBox1);
        txtPort->setObjectName(QString::fromUtf8("txtPort"));

        gridLayout_1->addWidget(txtPort, 4, 1, 1, 2);

        TextLabel3 = new QLabel(GroupBox1);
        TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

        gridLayout_1->addWidget(TextLabel3, 5, 0, 1, 1);

        txtUsername = new QLineEdit(GroupBox1);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));

        gridLayout_1->addWidget(txtUsername, 5, 1, 1, 2);

        TextLabel3_2 = new QLabel(GroupBox1);
        TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));

        gridLayout_1->addWidget(TextLabel3_2, 6, 0, 1, 1);

        txtPassword = new QLineEdit(GroupBox1);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setEchoMode(QLineEdit::Password);

        gridLayout_1->addWidget(txtPassword, 6, 1, 1, 2);

        chkStorePassword = new QCheckBox(GroupBox1);
        chkStorePassword->setObjectName(QString::fromUtf8("chkStorePassword"));

        gridLayout_1->addWidget(chkStorePassword, 7, 0, 1, 1);

        btnConnect = new QPushButton(GroupBox1);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        gridLayout_1->addWidget(btnConnect, 7, 2, 1, 1);


        gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsNewOgrConnectionBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(cmbDatabaseTypes);
        TextLabel1_2->setBuddy(txtName);
        TextLabel1->setBuddy(txtHost);
        TextLabel2->setBuddy(txtDatabase);
        TextLabel2_2->setBuddy(txtPort);
        TextLabel3->setBuddy(txtUsername);
        TextLabel3_2->setBuddy(txtPassword);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cmbDatabaseTypes, txtName);
        QWidget::setTabOrder(txtName, txtHost);
        QWidget::setTabOrder(txtHost, txtDatabase);
        QWidget::setTabOrder(txtDatabase, txtPort);
        QWidget::setTabOrder(txtPort, txtUsername);
        QWidget::setTabOrder(txtUsername, txtPassword);
        QWidget::setTabOrder(txtPassword, chkStorePassword);
        QWidget::setTabOrder(chkStorePassword, btnConnect);
        QWidget::setTabOrder(btnConnect, buttonBox);

        retranslateUi(QgsNewOgrConnectionBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewOgrConnectionBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewOgrConnectionBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsNewOgrConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewOgrConnectionBase)
    {
        QgsNewOgrConnectionBase->setWindowTitle(QApplication::translate("QgsNewOgrConnectionBase", "Create a New OGR Database connection", 0, QApplication::UnicodeUTF8));
        GroupBox1->setTitle(QApplication::translate("QgsNewOgrConnectionBase", "Connection Information", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsNewOgrConnectionBase", "Type", 0, QApplication::UnicodeUTF8));
        TextLabel1_2->setText(QApplication::translate("QgsNewOgrConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        txtName->setToolTip(QApplication::translate("QgsNewOgrConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TextLabel1->setText(QApplication::translate("QgsNewOgrConnectionBase", "Host", 0, QApplication::UnicodeUTF8));
        TextLabel2->setText(QApplication::translate("QgsNewOgrConnectionBase", "Database", 0, QApplication::UnicodeUTF8));
        TextLabel2_2->setText(QApplication::translate("QgsNewOgrConnectionBase", "Port", 0, QApplication::UnicodeUTF8));
        txtPort->setText(QString());
        TextLabel3->setText(QApplication::translate("QgsNewOgrConnectionBase", "Username", 0, QApplication::UnicodeUTF8));
        TextLabel3_2->setText(QApplication::translate("QgsNewOgrConnectionBase", "Password", 0, QApplication::UnicodeUTF8));
        chkStorePassword->setText(QApplication::translate("QgsNewOgrConnectionBase", "Save Password", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("QgsNewOgrConnectionBase", "&Test Connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsNewOgrConnectionBase: public Ui_QgsNewOgrConnectionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSNEWOGRCONNECTIONBASE_H
