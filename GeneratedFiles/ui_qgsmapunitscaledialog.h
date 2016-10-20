/********************************************************************************
** Form generated from reading UI file 'qgsmapunitscaledialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMAPUNITSCALEDIALOG_H
#define UI_QGSMAPUNITSCALEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include "qgsdoublespinbox.h"
#include "qgsscalewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsMapUnitScaleDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *mCheckBoxMinSize;
    QCheckBox *mCheckBoxMaxSize;
    QgsDoubleSpinBox *mSpinBoxMinSize;
    QgsDoubleSpinBox *mSpinBoxMaxSize;
    QLabel *label_2;
    QDialogButtonBox *mButtonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QgsScaleWidget *mComboBoxMinScale;
    QLabel *label;
    QCheckBox *mCheckBoxMinScale;
    QgsScaleWidget *mComboBoxMaxScale;
    QCheckBox *mCheckBoxMaxScale;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *QgsMapUnitScaleDialog)
    {
        if (QgsMapUnitScaleDialog->objectName().isEmpty())
            QgsMapUnitScaleDialog->setObjectName(QString::fromUtf8("QgsMapUnitScaleDialog"));
        QgsMapUnitScaleDialog->resize(443, 291);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsMapUnitScaleDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(QgsMapUnitScaleDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(QgsMapUnitScaleDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mCheckBoxMinSize = new QCheckBox(groupBox_2);
        mCheckBoxMinSize->setObjectName(QString::fromUtf8("mCheckBoxMinSize"));

        gridLayout_3->addWidget(mCheckBoxMinSize, 1, 0, 1, 1);

        mCheckBoxMaxSize = new QCheckBox(groupBox_2);
        mCheckBoxMaxSize->setObjectName(QString::fromUtf8("mCheckBoxMaxSize"));

        gridLayout_3->addWidget(mCheckBoxMaxSize, 2, 0, 1, 1);

        mSpinBoxMinSize = new QgsDoubleSpinBox(groupBox_2);
        mSpinBoxMinSize->setObjectName(QString::fromUtf8("mSpinBoxMinSize"));
        mSpinBoxMinSize->setMaximum(1e+07);

        gridLayout_3->addWidget(mSpinBoxMinSize, 1, 1, 1, 1);

        mSpinBoxMaxSize = new QgsDoubleSpinBox(groupBox_2);
        mSpinBoxMaxSize->setObjectName(QString::fromUtf8("mSpinBoxMaxSize"));
        mSpinBoxMaxSize->setMaximum(999999);

        gridLayout_3->addWidget(mSpinBoxMaxSize, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 3);

        mButtonBox = new QDialogButtonBox(QgsMapUnitScaleDialog);
        mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
        mButtonBox->setOrientation(Qt::Horizontal);
        mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(mButtonBox, 5, 0, 1, 3);

        groupBox = new QGroupBox(QgsMapUnitScaleDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mComboBoxMinScale = new QgsScaleWidget(groupBox);
        mComboBoxMinScale->setObjectName(QString::fromUtf8("mComboBoxMinScale"));
        mComboBoxMinScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mComboBoxMinScale, 1, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        mCheckBoxMinScale = new QCheckBox(groupBox);
        mCheckBoxMinScale->setObjectName(QString::fromUtf8("mCheckBoxMinScale"));

        gridLayout_2->addWidget(mCheckBoxMinScale, 1, 0, 1, 1);

        mComboBoxMaxScale = new QgsScaleWidget(groupBox);
        mComboBoxMaxScale->setObjectName(QString::fromUtf8("mComboBoxMaxScale"));
        mComboBoxMaxScale->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(mComboBoxMaxScale, 3, 1, 1, 1);

        mCheckBoxMaxScale = new QCheckBox(groupBox);
        mCheckBoxMaxScale->setObjectName(QString::fromUtf8("mCheckBoxMaxScale"));

        gridLayout_2->addWidget(mCheckBoxMaxScale, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        QWidget::setTabOrder(mCheckBoxMinScale, mComboBoxMinScale);
        QWidget::setTabOrder(mComboBoxMinScale, mCheckBoxMaxScale);
        QWidget::setTabOrder(mCheckBoxMaxScale, mComboBoxMaxScale);
        QWidget::setTabOrder(mComboBoxMaxScale, mCheckBoxMinSize);
        QWidget::setTabOrder(mCheckBoxMinSize, mSpinBoxMinSize);
        QWidget::setTabOrder(mSpinBoxMinSize, mCheckBoxMaxSize);
        QWidget::setTabOrder(mCheckBoxMaxSize, mSpinBoxMaxSize);

        retranslateUi(QgsMapUnitScaleDialog);
        QObject::connect(mButtonBox, SIGNAL(accepted()), QgsMapUnitScaleDialog, SLOT(accept()));
        QObject::connect(mButtonBox, SIGNAL(rejected()), QgsMapUnitScaleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsMapUnitScaleDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsMapUnitScaleDialog)
    {
        QgsMapUnitScaleDialog->setWindowTitle(QApplication::translate("QgsMapUnitScaleDialog", "Adjust scaling range", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsMapUnitScaleDialog", "Size range", 0, QApplication::UnicodeUTF8));
        mCheckBoxMinSize->setText(QApplication::translate("QgsMapUnitScaleDialog", "Minimum size:", 0, QApplication::UnicodeUTF8));
        mCheckBoxMaxSize->setText(QApplication::translate("QgsMapUnitScaleDialog", "Maximum size:", 0, QApplication::UnicodeUTF8));
        mSpinBoxMinSize->setSuffix(QApplication::translate("QgsMapUnitScaleDialog", " mm", 0, QApplication::UnicodeUTF8));
        mSpinBoxMaxSize->setSuffix(QApplication::translate("QgsMapUnitScaleDialog", " mm", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsMapUnitScaleDialog", "Scale only within the following size range:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsMapUnitScaleDialog", "Scale range", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsMapUnitScaleDialog", "Scale only within the following map unit scale range:", 0, QApplication::UnicodeUTF8));
        mCheckBoxMinScale->setText(QApplication::translate("QgsMapUnitScaleDialog", "Minimum scale:", 0, QApplication::UnicodeUTF8));
        mCheckBoxMaxScale->setText(QApplication::translate("QgsMapUnitScaleDialog", "Maximum scale:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsMapUnitScaleDialog: public Ui_QgsMapUnitScaleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMAPUNITSCALEDIALOG_H
