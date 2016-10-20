/********************************************************************************
** Form generated from reading UI file 'qgsmultibandcolorrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H
#define UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsMultiBandColorRendererWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLineEdit *mGreenMaxLineEdit;
    QComboBox *mRedBandComboBox;
    QLineEdit *mRedMinLineEdit;
    QComboBox *mBlueBandComboBox;
    QLineEdit *mRedMaxLineEdit;
    QLineEdit *mBlueMaxLineEdit;
    QComboBox *mGreenBandComboBox;
    QComboBox *mContrastEnhancementAlgorithmComboBox;
    QLabel *mContrastEnhancementAlgorithmLabel;
    QLabel *mBlueBandLabel;
    QLabel *mGreenBandLabel;
    QLineEdit *mBlueMinLineEdit;
    QLineEdit *mGreenMinLineEdit;
    QLabel *mMinLabel;
    QSpacerItem *verticalSpacer;
    QLabel *mRedBandLabel;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *QgsMultiBandColorRendererWidgetBase)
    {
        if (QgsMultiBandColorRendererWidgetBase->objectName().isEmpty())
            QgsMultiBandColorRendererWidgetBase->setObjectName(QString::fromUtf8("QgsMultiBandColorRendererWidgetBase"));
        QgsMultiBandColorRendererWidgetBase->resize(350, 321);
        horizontalLayout = new QHBoxLayout(QgsMultiBandColorRendererWidgetBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mGreenMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mGreenMaxLineEdit->setObjectName(QString::fromUtf8("mGreenMaxLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGreenMaxLineEdit->sizePolicy().hasHeightForWidth());
        mGreenMaxLineEdit->setSizePolicy(sizePolicy);
        mGreenMaxLineEdit->setMaximumSize(QSize(75, 16777215));
        mGreenMaxLineEdit->setBaseSize(QSize(0, 0));
        mGreenMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMaxLineEdit, 3, 3, 1, 1);

        mRedBandComboBox = new QComboBox(QgsMultiBandColorRendererWidgetBase);
        mRedBandComboBox->setObjectName(QString::fromUtf8("mRedBandComboBox"));

        gridLayout->addWidget(mRedBandComboBox, 0, 1, 1, 3);

        mRedMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mRedMinLineEdit->setObjectName(QString::fromUtf8("mRedMinLineEdit"));
        sizePolicy.setHeightForWidth(mRedMinLineEdit->sizePolicy().hasHeightForWidth());
        mRedMinLineEdit->setSizePolicy(sizePolicy);
        mRedMinLineEdit->setMaximumSize(QSize(75, 16777215));
        mRedMinLineEdit->setBaseSize(QSize(0, 0));
        mRedMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMinLineEdit, 1, 2, 1, 1);

        mBlueBandComboBox = new QComboBox(QgsMultiBandColorRendererWidgetBase);
        mBlueBandComboBox->setObjectName(QString::fromUtf8("mBlueBandComboBox"));

        gridLayout->addWidget(mBlueBandComboBox, 4, 1, 1, 3);

        mRedMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mRedMaxLineEdit->setObjectName(QString::fromUtf8("mRedMaxLineEdit"));
        sizePolicy.setHeightForWidth(mRedMaxLineEdit->sizePolicy().hasHeightForWidth());
        mRedMaxLineEdit->setSizePolicy(sizePolicy);
        mRedMaxLineEdit->setMaximumSize(QSize(75, 16777215));
        mRedMaxLineEdit->setBaseSize(QSize(0, 0));
        mRedMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mRedMaxLineEdit, 1, 3, 1, 1);

        mBlueMaxLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mBlueMaxLineEdit->setObjectName(QString::fromUtf8("mBlueMaxLineEdit"));
        sizePolicy.setHeightForWidth(mBlueMaxLineEdit->sizePolicy().hasHeightForWidth());
        mBlueMaxLineEdit->setSizePolicy(sizePolicy);
        mBlueMaxLineEdit->setMaximumSize(QSize(75, 16777215));
        mBlueMaxLineEdit->setBaseSize(QSize(0, 0));
        mBlueMaxLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMaxLineEdit, 5, 3, 1, 1);

        mGreenBandComboBox = new QComboBox(QgsMultiBandColorRendererWidgetBase);
        mGreenBandComboBox->setObjectName(QString::fromUtf8("mGreenBandComboBox"));

        gridLayout->addWidget(mGreenBandComboBox, 2, 1, 1, 3);

        mContrastEnhancementAlgorithmComboBox = new QComboBox(QgsMultiBandColorRendererWidgetBase);
        mContrastEnhancementAlgorithmComboBox->setObjectName(QString::fromUtf8("mContrastEnhancementAlgorithmComboBox"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmComboBox, 6, 1, 1, 3);

        mContrastEnhancementAlgorithmLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mContrastEnhancementAlgorithmLabel->setObjectName(QString::fromUtf8("mContrastEnhancementAlgorithmLabel"));

        gridLayout->addWidget(mContrastEnhancementAlgorithmLabel, 6, 0, 1, 1);

        mBlueBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mBlueBandLabel->setObjectName(QString::fromUtf8("mBlueBandLabel"));

        gridLayout->addWidget(mBlueBandLabel, 4, 0, 1, 1);

        mGreenBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mGreenBandLabel->setObjectName(QString::fromUtf8("mGreenBandLabel"));

        gridLayout->addWidget(mGreenBandLabel, 2, 0, 1, 1);

        mBlueMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mBlueMinLineEdit->setObjectName(QString::fromUtf8("mBlueMinLineEdit"));
        sizePolicy.setHeightForWidth(mBlueMinLineEdit->sizePolicy().hasHeightForWidth());
        mBlueMinLineEdit->setSizePolicy(sizePolicy);
        mBlueMinLineEdit->setMaximumSize(QSize(75, 16777215));
        mBlueMinLineEdit->setBaseSize(QSize(0, 0));
        mBlueMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mBlueMinLineEdit, 5, 2, 1, 1);

        mGreenMinLineEdit = new QLineEdit(QgsMultiBandColorRendererWidgetBase);
        mGreenMinLineEdit->setObjectName(QString::fromUtf8("mGreenMinLineEdit"));
        sizePolicy.setHeightForWidth(mGreenMinLineEdit->sizePolicy().hasHeightForWidth());
        mGreenMinLineEdit->setSizePolicy(sizePolicy);
        mGreenMinLineEdit->setMaximumSize(QSize(75, 16777215));
        mGreenMinLineEdit->setBaseSize(QSize(0, 0));
        mGreenMinLineEdit->setMaxLength(16);

        gridLayout->addWidget(mGreenMinLineEdit, 3, 2, 1, 1);

        mMinLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mMinLabel->setObjectName(QString::fromUtf8("mMinLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mMinLabel->sizePolicy().hasHeightForWidth());
        mMinLabel->setSizePolicy(sizePolicy1);
        mMinLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(mMinLabel, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        mRedBandLabel = new QLabel(QgsMultiBandColorRendererWidgetBase);
        mRedBandLabel->setObjectName(QString::fromUtf8("mRedBandLabel"));

        gridLayout->addWidget(mRedBandLabel, 0, 0, 1, 1);

        label = new QLabel(QgsMultiBandColorRendererWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 1, 1, 1);

        label_2 = new QLabel(QgsMultiBandColorRendererWidgetBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(mRedBandComboBox, mRedMinLineEdit);
        QWidget::setTabOrder(mRedMinLineEdit, mRedMaxLineEdit);
        QWidget::setTabOrder(mRedMaxLineEdit, mGreenBandComboBox);
        QWidget::setTabOrder(mGreenBandComboBox, mGreenMinLineEdit);
        QWidget::setTabOrder(mGreenMinLineEdit, mGreenMaxLineEdit);
        QWidget::setTabOrder(mGreenMaxLineEdit, mBlueBandComboBox);
        QWidget::setTabOrder(mBlueBandComboBox, mBlueMinLineEdit);
        QWidget::setTabOrder(mBlueMinLineEdit, mBlueMaxLineEdit);
        QWidget::setTabOrder(mBlueMaxLineEdit, mContrastEnhancementAlgorithmComboBox);

        retranslateUi(QgsMultiBandColorRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsMultiBandColorRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsMultiBandColorRendererWidgetBase)
    {
        QgsMultiBandColorRendererWidgetBase->setWindowTitle(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mContrastEnhancementAlgorithmLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Contrast\n"
"enhancement", 0, QApplication::UnicodeUTF8));
        mBlueBandLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Blue band", 0, QApplication::UnicodeUTF8));
        mGreenBandLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Green band", 0, QApplication::UnicodeUTF8));
        mMinLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min/max", 0, QApplication::UnicodeUTF8));
        mRedBandLabel->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Red band", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min/max", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsMultiBandColorRendererWidgetBase", "Min/max", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsMultiBandColorRendererWidgetBase: public Ui_QgsMultiBandColorRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSMULTIBANDCOLORRENDERERWIDGETBASE_H
