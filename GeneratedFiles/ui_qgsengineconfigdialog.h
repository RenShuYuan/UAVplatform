/********************************************************************************
** Form generated from reading UI file 'qgsengineconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSENGINECONFIGDIALOG_H
#define UI_QGSENGINECONFIGDIALOG_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QgsEngineConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cboSearchMethod;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *spinCandPoint;
    QLabel *label_3;
    QSpinBox *spinCandLine;
    QLabel *label_4;
    QSpinBox *spinCandPolygon;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QCheckBox *chkShowPartialsLabels;
    QCheckBox *mShadowDebugRectChkBox;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *chkShowCandidates;
    QLabel *label_6;
    QCheckBox *chkShowAllLabels;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *mDrawOutlinesChkBox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsEngineConfigDialog)
    {
        if (QgsEngineConfigDialog->objectName().isEmpty())
            QgsEngineConfigDialog->setObjectName(QString::fromUtf8("QgsEngineConfigDialog"));
        QgsEngineConfigDialog->resize(336, 430);
        QgsEngineConfigDialog->setMinimumSize(QSize(336, 0));
        verticalLayout = new QVBoxLayout(QgsEngineConfigDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QgsEngineConfigDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        cboSearchMethod = new QComboBox(QgsEngineConfigDialog);
        cboSearchMethod->setObjectName(QString::fromUtf8("cboSearchMethod"));

        horizontalLayout->addWidget(cboSearchMethod);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        groupBox = new QGroupBox(QgsEngineConfigDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spinCandPoint = new QSpinBox(groupBox);
        spinCandPoint->setObjectName(QString::fromUtf8("spinCandPoint"));
        spinCandPoint->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandPoint->setMinimum(1);
        spinCandPoint->setMaximum(999);

        gridLayout->addWidget(spinCandPoint, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        spinCandLine = new QSpinBox(groupBox);
        spinCandLine->setObjectName(QString::fromUtf8("spinCandLine"));
        spinCandLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandLine->setMinimum(1);
        spinCandLine->setMaximum(999);

        gridLayout->addWidget(spinCandLine, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spinCandPolygon = new QSpinBox(groupBox);
        spinCandPolygon->setObjectName(QString::fromUtf8("spinCandPolygon"));
        spinCandPolygon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinCandPolygon->setMinimum(1);
        spinCandPolygon->setMaximum(999);

        gridLayout->addWidget(spinCandPolygon, 2, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(6);
        chkShowPartialsLabels = new QCheckBox(QgsEngineConfigDialog);
        chkShowPartialsLabels->setObjectName(QString::fromUtf8("chkShowPartialsLabels"));

        gridLayout_2->addWidget(chkShowPartialsLabels, 1, 0, 1, 3);

        mShadowDebugRectChkBox = new QCheckBox(QgsEngineConfigDialog);
        mShadowDebugRectChkBox->setObjectName(QString::fromUtf8("mShadowDebugRectChkBox"));

        gridLayout_2->addWidget(mShadowDebugRectChkBox, 5, 0, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        chkShowCandidates = new QCheckBox(QgsEngineConfigDialog);
        chkShowCandidates->setObjectName(QString::fromUtf8("chkShowCandidates"));

        gridLayout_2->addWidget(chkShowCandidates, 4, 0, 1, 3);

        label_6 = new QLabel(QgsEngineConfigDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_6, 3, 1, 1, 1);

        chkShowAllLabels = new QCheckBox(QgsEngineConfigDialog);
        chkShowAllLabels->setObjectName(QString::fromUtf8("chkShowAllLabels"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(chkShowAllLabels->sizePolicy().hasHeightForWidth());
        chkShowAllLabels->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(chkShowAllLabels, 2, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(8, 8, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        mDrawOutlinesChkBox = new QCheckBox(QgsEngineConfigDialog);
        mDrawOutlinesChkBox->setObjectName(QString::fromUtf8("mDrawOutlinesChkBox"));

        gridLayout_2->addWidget(mDrawOutlinesChkBox, 0, 0, 1, 3);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(QgsEngineConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(cboSearchMethod, spinCandPoint);
        QWidget::setTabOrder(spinCandPoint, spinCandLine);
        QWidget::setTabOrder(spinCandLine, spinCandPolygon);
        QWidget::setTabOrder(spinCandPolygon, mDrawOutlinesChkBox);
        QWidget::setTabOrder(mDrawOutlinesChkBox, chkShowPartialsLabels);
        QWidget::setTabOrder(chkShowPartialsLabels, chkShowAllLabels);
        QWidget::setTabOrder(chkShowAllLabels, chkShowCandidates);
        QWidget::setTabOrder(chkShowCandidates, mShadowDebugRectChkBox);
        QWidget::setTabOrder(mShadowDebugRectChkBox, buttonBox);

        retranslateUi(QgsEngineConfigDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsEngineConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsEngineConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsEngineConfigDialog)
    {
        QgsEngineConfigDialog->setWindowTitle(QApplication::translate("QgsEngineConfigDialog", "Automated Placement Engine", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsEngineConfigDialog", "Search method", 0, QApplication::UnicodeUTF8));
        cboSearchMethod->clear();
        cboSearchMethod->insertItems(0, QStringList()
         << QApplication::translate("QgsEngineConfigDialog", "Chain (fast)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsEngineConfigDialog", "Popmusic Tabu", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsEngineConfigDialog", "Popmusic Chain", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsEngineConfigDialog", "Popmusic Tabu Chain", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsEngineConfigDialog", "FALP (fastest)", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("QgsEngineConfigDialog", "Number of candidates", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsEngineConfigDialog", "Point", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsEngineConfigDialog", "Line", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsEngineConfigDialog", "Polygon", 0, QApplication::UnicodeUTF8));
        chkShowPartialsLabels->setText(QApplication::translate("QgsEngineConfigDialog", "Show partials labels", 0, QApplication::UnicodeUTF8));
        mShadowDebugRectChkBox->setText(QApplication::translate("QgsEngineConfigDialog", "Show shadow rectangles (for debugging)", 0, QApplication::UnicodeUTF8));
        chkShowCandidates->setText(QApplication::translate("QgsEngineConfigDialog", "Show candidates (for debugging)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsEngineConfigDialog", "(i.e. including colliding objects)", 0, QApplication::UnicodeUTF8));
        chkShowAllLabels->setText(QApplication::translate("QgsEngineConfigDialog", "Show all labels and features for all layers", 0, QApplication::UnicodeUTF8));
        mDrawOutlinesChkBox->setText(QApplication::translate("QgsEngineConfigDialog", "Draw text as outlines (recommended)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsEngineConfigDialog: public Ui_QgsEngineConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSENGINECONFIGDIALOG_H
