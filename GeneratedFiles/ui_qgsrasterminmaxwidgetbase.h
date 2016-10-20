/********************************************************************************
** Form generated from reading UI file 'qgsrasterminmaxwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERMINMAXWIDGETBASE_H
#define UI_QGSRASTERMINMAXWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRasterMinMaxWidgetBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *mLoadMinMaxValuesGroupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mCumulativeCutRadioButton;
    QDoubleSpinBox *mCumulativeCutLowerDoubleSpinBox;
    QLabel *label;
    QDoubleSpinBox *mCumulativeCutUpperDoubleSpinBox;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *mMinMaxRadioButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mStdDevRadioButton;
    QDoubleSpinBox *mStdDevSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *mExtentGroupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *mFullExtentRadioButton;
    QRadioButton *mCurrentExtentRadioButton;
    QGroupBox *mAccuracyGroupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *mEstimateRadioButton;
    QRadioButton *mActualRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mLoadPushButton;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *QgsRasterMinMaxWidgetBase)
    {
        if (QgsRasterMinMaxWidgetBase->objectName().isEmpty())
            QgsRasterMinMaxWidgetBase->setObjectName(QString::fromUtf8("QgsRasterMinMaxWidgetBase"));
        QgsRasterMinMaxWidgetBase->resize(308, 334);
        verticalLayout_3 = new QVBoxLayout(QgsRasterMinMaxWidgetBase);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mLoadMinMaxValuesGroupBox = new QGroupBox(QgsRasterMinMaxWidgetBase);
        mLoadMinMaxValuesGroupBox->setObjectName(QString::fromUtf8("mLoadMinMaxValuesGroupBox"));
        verticalLayout_4 = new QVBoxLayout(mLoadMinMaxValuesGroupBox);
        verticalLayout_4->setContentsMargins(6, 6, 6, 6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mCumulativeCutRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        buttonGroup = new QButtonGroup(QgsRasterMinMaxWidgetBase);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(mCumulativeCutRadioButton);
        mCumulativeCutRadioButton->setObjectName(QString::fromUtf8("mCumulativeCutRadioButton"));
        mCumulativeCutRadioButton->setChecked(true);

        horizontalLayout->addWidget(mCumulativeCutRadioButton);

        mCumulativeCutLowerDoubleSpinBox = new QDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mCumulativeCutLowerDoubleSpinBox->setObjectName(QString::fromUtf8("mCumulativeCutLowerDoubleSpinBox"));
        mCumulativeCutLowerDoubleSpinBox->setDecimals(1);

        horizontalLayout->addWidget(mCumulativeCutLowerDoubleSpinBox);

        label = new QLabel(mLoadMinMaxValuesGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        mCumulativeCutUpperDoubleSpinBox = new QDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mCumulativeCutUpperDoubleSpinBox->setObjectName(QString::fromUtf8("mCumulativeCutUpperDoubleSpinBox"));
        mCumulativeCutUpperDoubleSpinBox->setDecimals(1);

        horizontalLayout->addWidget(mCumulativeCutUpperDoubleSpinBox);

        label_2 = new QLabel(mLoadMinMaxValuesGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_6 = new QSpacerItem(123, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        mMinMaxRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        buttonGroup->addButton(mMinMaxRadioButton);
        mMinMaxRadioButton->setObjectName(QString::fromUtf8("mMinMaxRadioButton"));

        horizontalLayout_5->addWidget(mMinMaxRadioButton);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mStdDevRadioButton = new QRadioButton(mLoadMinMaxValuesGroupBox);
        buttonGroup->addButton(mStdDevRadioButton);
        mStdDevRadioButton->setObjectName(QString::fromUtf8("mStdDevRadioButton"));

        horizontalLayout_3->addWidget(mStdDevRadioButton);

        mStdDevSpinBox = new QDoubleSpinBox(mLoadMinMaxValuesGroupBox);
        mStdDevSpinBox->setObjectName(QString::fromUtf8("mStdDevSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mStdDevSpinBox->sizePolicy().hasHeightForWidth());
        mStdDevSpinBox->setSizePolicy(sizePolicy);
        mStdDevSpinBox->setValue(1);

        horizontalLayout_3->addWidget(mStdDevSpinBox);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mExtentGroupBox = new QGroupBox(mLoadMinMaxValuesGroupBox);
        mExtentGroupBox->setObjectName(QString::fromUtf8("mExtentGroupBox"));
        verticalLayout_2 = new QVBoxLayout(mExtentGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mFullExtentRadioButton = new QRadioButton(mExtentGroupBox);
        mFullExtentRadioButton->setObjectName(QString::fromUtf8("mFullExtentRadioButton"));
        mFullExtentRadioButton->setChecked(true);

        verticalLayout_2->addWidget(mFullExtentRadioButton);

        mCurrentExtentRadioButton = new QRadioButton(mExtentGroupBox);
        mCurrentExtentRadioButton->setObjectName(QString::fromUtf8("mCurrentExtentRadioButton"));

        verticalLayout_2->addWidget(mCurrentExtentRadioButton);


        horizontalLayout_2->addWidget(mExtentGroupBox);

        mAccuracyGroupBox = new QGroupBox(mLoadMinMaxValuesGroupBox);
        mAccuracyGroupBox->setObjectName(QString::fromUtf8("mAccuracyGroupBox"));
        verticalLayout = new QVBoxLayout(mAccuracyGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mEstimateRadioButton = new QRadioButton(mAccuracyGroupBox);
        mEstimateRadioButton->setObjectName(QString::fromUtf8("mEstimateRadioButton"));
        mEstimateRadioButton->setChecked(true);

        verticalLayout->addWidget(mEstimateRadioButton);

        mActualRadioButton = new QRadioButton(mAccuracyGroupBox);
        mActualRadioButton->setObjectName(QString::fromUtf8("mActualRadioButton"));

        verticalLayout->addWidget(mActualRadioButton);


        horizontalLayout_2->addWidget(mAccuracyGroupBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        mLoadPushButton = new QPushButton(mLoadMinMaxValuesGroupBox);
        mLoadPushButton->setObjectName(QString::fromUtf8("mLoadPushButton"));

        horizontalLayout_4->addWidget(mLoadPushButton);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(mLoadMinMaxValuesGroupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(QgsRasterMinMaxWidgetBase);

        QMetaObject::connectSlotsByName(QgsRasterMinMaxWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterMinMaxWidgetBase)
    {
        QgsRasterMinMaxWidgetBase->setWindowTitle(QApplication::translate("QgsRasterMinMaxWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mLoadMinMaxValuesGroupBox->setTitle(QApplication::translate("QgsRasterMinMaxWidgetBase", "Load min/max values", 0, QApplication::UnicodeUTF8));
        mCumulativeCutRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Cumulative\n"
"count cut", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "-", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "%", 0, QApplication::UnicodeUTF8));
        mMinMaxRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Min / max", 0, QApplication::UnicodeUTF8));
        mStdDevRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Mean +/-\n"
"standard deviation \303\227", 0, QApplication::UnicodeUTF8));
        mExtentGroupBox->setTitle(QApplication::translate("QgsRasterMinMaxWidgetBase", "Extent", 0, QApplication::UnicodeUTF8));
        mFullExtentRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Full", 0, QApplication::UnicodeUTF8));
        mCurrentExtentRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Current", 0, QApplication::UnicodeUTF8));
        mAccuracyGroupBox->setTitle(QApplication::translate("QgsRasterMinMaxWidgetBase", "Accuracy", 0, QApplication::UnicodeUTF8));
        mEstimateRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Estimate (faster)", 0, QApplication::UnicodeUTF8));
        mActualRadioButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Actual (slower)", 0, QApplication::UnicodeUTF8));
        mLoadPushButton->setText(QApplication::translate("QgsRasterMinMaxWidgetBase", "Load", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterMinMaxWidgetBase: public Ui_QgsRasterMinMaxWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERMINMAXWIDGETBASE_H
