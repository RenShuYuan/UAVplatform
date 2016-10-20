/********************************************************************************
** Form generated from reading UI file 'qgssinglebandgrayrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H
#define UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H

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

class Ui_QgsSingleBandGrayRendererWidgetBase
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *mContrastEnhancementLabel;
    QLineEdit *mMinLineEdit;
    QComboBox *mContrastEnhancementComboBox;
    QLabel *mGrayBandLabel;
    QLabel *mMinLabel;
    QComboBox *mGrayBandComboBox;
    QLabel *mMaxLabel;
    QLineEdit *mMaxLineEdit;
    QLabel *label;
    QComboBox *mGradientComboBox;
    QSpacerItem *verticalSpacer;
    QWidget *mMinMaxContainerWidget;

    void setupUi(QWidget *QgsSingleBandGrayRendererWidgetBase)
    {
        if (QgsSingleBandGrayRendererWidgetBase->objectName().isEmpty())
            QgsSingleBandGrayRendererWidgetBase->setObjectName(QString::fromUtf8("QgsSingleBandGrayRendererWidgetBase"));
        QgsSingleBandGrayRendererWidgetBase->resize(496, 298);
        horizontalLayout = new QHBoxLayout(QgsSingleBandGrayRendererWidgetBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mContrastEnhancementLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mContrastEnhancementLabel->setObjectName(QString::fromUtf8("mContrastEnhancementLabel"));

        gridLayout->addWidget(mContrastEnhancementLabel, 4, 0, 1, 1);

        mMinLineEdit = new QLineEdit(QgsSingleBandGrayRendererWidgetBase);
        mMinLineEdit->setObjectName(QString::fromUtf8("mMinLineEdit"));

        gridLayout->addWidget(mMinLineEdit, 2, 1, 1, 1);

        mContrastEnhancementComboBox = new QComboBox(QgsSingleBandGrayRendererWidgetBase);
        mContrastEnhancementComboBox->setObjectName(QString::fromUtf8("mContrastEnhancementComboBox"));

        gridLayout->addWidget(mContrastEnhancementComboBox, 4, 1, 1, 1);

        mGrayBandLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mGrayBandLabel->setObjectName(QString::fromUtf8("mGrayBandLabel"));

        gridLayout->addWidget(mGrayBandLabel, 0, 0, 1, 1);

        mMinLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mMinLabel->setObjectName(QString::fromUtf8("mMinLabel"));

        gridLayout->addWidget(mMinLabel, 2, 0, 1, 1);

        mGrayBandComboBox = new QComboBox(QgsSingleBandGrayRendererWidgetBase);
        mGrayBandComboBox->setObjectName(QString::fromUtf8("mGrayBandComboBox"));

        gridLayout->addWidget(mGrayBandComboBox, 0, 1, 1, 1);

        mMaxLabel = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        mMaxLabel->setObjectName(QString::fromUtf8("mMaxLabel"));

        gridLayout->addWidget(mMaxLabel, 3, 0, 1, 1);

        mMaxLineEdit = new QLineEdit(QgsSingleBandGrayRendererWidgetBase);
        mMaxLineEdit->setObjectName(QString::fromUtf8("mMaxLineEdit"));

        gridLayout->addWidget(mMaxLineEdit, 3, 1, 1, 1);

        label = new QLabel(QgsSingleBandGrayRendererWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        mGradientComboBox = new QComboBox(QgsSingleBandGrayRendererWidgetBase);
        mGradientComboBox->setObjectName(QString::fromUtf8("mGradientComboBox"));

        gridLayout->addWidget(mGradientComboBox, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        mMinMaxContainerWidget = new QWidget(QgsSingleBandGrayRendererWidgetBase);
        mMinMaxContainerWidget->setObjectName(QString::fromUtf8("mMinMaxContainerWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mMinMaxContainerWidget->sizePolicy().hasHeightForWidth());
        mMinMaxContainerWidget->setSizePolicy(sizePolicy);
        mMinMaxContainerWidget->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(mMinMaxContainerWidget);

        QWidget::setTabOrder(mGrayBandComboBox, mGradientComboBox);
        QWidget::setTabOrder(mGradientComboBox, mMinLineEdit);
        QWidget::setTabOrder(mMinLineEdit, mMaxLineEdit);
        QWidget::setTabOrder(mMaxLineEdit, mContrastEnhancementComboBox);

        retranslateUi(QgsSingleBandGrayRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsSingleBandGrayRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSingleBandGrayRendererWidgetBase)
    {
        QgsSingleBandGrayRendererWidgetBase->setWindowTitle(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mContrastEnhancementLabel->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Contrast\n"
"enhancement", 0, QApplication::UnicodeUTF8));
        mGrayBandLabel->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Gray band", 0, QApplication::UnicodeUTF8));
        mMinLabel->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Min", 0, QApplication::UnicodeUTF8));
        mMaxLabel->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Max", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsSingleBandGrayRendererWidgetBase", "Color gradient", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsSingleBandGrayRendererWidgetBase: public Ui_QgsSingleBandGrayRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSINGLEBANDGRAYRENDERERWIDGETBASE_H
