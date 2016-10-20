/********************************************************************************
** Form generated from reading UI file 'qgsrendererv2propsdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRENDERERV2PROPSDIALOGBASE_H
#define UI_QGSRENDERERV2PROPSDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "effects/qgseffectstackpropertieswidget.h"
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRendererV2PropsDialogBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cboRenderers;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *pageNoWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout;
    QgsEffectStackCompactWidget *mEffectWidget;
    QHBoxLayout *horizontalLayout_2;
    QSlider *mLayerTransparencySlider;
    QSpinBox *mLayerTransparencySpnBx;
    QLabel *lblTransparency;
    QgsBlendModeComboBox *mFeatureBlendComboBox;
    QLabel *lblFeatureBlend;
    QLabel *lblLayerBlend;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkboxEnableOrderBy;
    QLineEdit *lineEditOrderBy;
    QToolButton *btnOrderBy;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRendererV2PropsDialogBase)
    {
        if (QgsRendererV2PropsDialogBase->objectName().isEmpty())
            QgsRendererV2PropsDialogBase->setObjectName(QString::fromUtf8("QgsRendererV2PropsDialogBase"));
        QgsRendererV2PropsDialogBase->resize(534, 320);
        verticalLayout_2 = new QVBoxLayout(QgsRendererV2PropsDialogBase);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cboRenderers = new QComboBox(QgsRendererV2PropsDialogBase);
        cboRenderers->setObjectName(QString::fromUtf8("cboRenderers"));

        horizontalLayout->addWidget(cboRenderers);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget = new QStackedWidget(QgsRendererV2PropsDialogBase);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        pageNoWidget = new QWidget();
        pageNoWidget->setObjectName(QString::fromUtf8("pageNoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pageNoWidget->sizePolicy().hasHeightForWidth());
        pageNoWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(pageNoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pageNoWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        stackedWidget->addWidget(pageNoWidget);

        verticalLayout_2->addWidget(stackedWidget);

        groupBox = new QgsCollapsibleGroupBox(QgsRendererV2PropsDialogBase);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setProperty("collapsed", QVariant(false));
        groupBox->setProperty("saveCollapsedState", QVariant(true));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mEffectWidget = new QgsEffectStackCompactWidget(groupBox);
        mEffectWidget->setObjectName(QString::fromUtf8("mEffectWidget"));
        mEffectWidget->setMinimumSize(QSize(16, 16));

        gridLayout->addWidget(mEffectWidget, 2, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mLayerTransparencySlider = new QSlider(groupBox);
        mLayerTransparencySlider->setObjectName(QString::fromUtf8("mLayerTransparencySlider"));
        mLayerTransparencySlider->setMaximum(100);
        mLayerTransparencySlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(mLayerTransparencySlider);

        mLayerTransparencySpnBx = new QSpinBox(groupBox);
        mLayerTransparencySpnBx->setObjectName(QString::fromUtf8("mLayerTransparencySpnBx"));
        mLayerTransparencySpnBx->setMaximum(100);

        horizontalLayout_2->addWidget(mLayerTransparencySpnBx);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 3);

        lblTransparency = new QLabel(groupBox);
        lblTransparency->setObjectName(QString::fromUtf8("lblTransparency"));

        gridLayout->addWidget(lblTransparency, 0, 0, 1, 1);

        mFeatureBlendComboBox = new QgsBlendModeComboBox(groupBox);
        mFeatureBlendComboBox->setObjectName(QString::fromUtf8("mFeatureBlendComboBox"));

        gridLayout->addWidget(mFeatureBlendComboBox, 1, 3, 1, 1);

        lblFeatureBlend = new QLabel(groupBox);
        lblFeatureBlend->setObjectName(QString::fromUtf8("lblFeatureBlend"));

        gridLayout->addWidget(lblFeatureBlend, 1, 2, 1, 1);

        lblLayerBlend = new QLabel(groupBox);
        lblLayerBlend->setObjectName(QString::fromUtf8("lblLayerBlend"));

        gridLayout->addWidget(lblLayerBlend, 1, 0, 1, 1);

        mBlendModeComboBox = new QgsBlendModeComboBox(groupBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));

        gridLayout->addWidget(mBlendModeComboBox, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkboxEnableOrderBy = new QCheckBox(groupBox);
        checkboxEnableOrderBy->setObjectName(QString::fromUtf8("checkboxEnableOrderBy"));

        horizontalLayout_3->addWidget(checkboxEnableOrderBy);

        lineEditOrderBy = new QLineEdit(groupBox);
        lineEditOrderBy->setObjectName(QString::fromUtf8("lineEditOrderBy"));
        lineEditOrderBy->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditOrderBy);

        btnOrderBy = new QToolButton(groupBox);
        btnOrderBy->setObjectName(QString::fromUtf8("btnOrderBy"));

        horizontalLayout_3->addWidget(btnOrderBy);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 4);


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(QgsRendererV2PropsDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(cboRenderers, mLayerTransparencySlider);
        QWidget::setTabOrder(mLayerTransparencySlider, mLayerTransparencySpnBx);
        QWidget::setTabOrder(mLayerTransparencySpnBx, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mFeatureBlendComboBox);
        QWidget::setTabOrder(mFeatureBlendComboBox, buttonBox);

        retranslateUi(QgsRendererV2PropsDialogBase);

        QMetaObject::connectSlotsByName(QgsRendererV2PropsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRendererV2PropsDialogBase)
    {
        QgsRendererV2PropsDialogBase->setWindowTitle(QApplication::translate("QgsRendererV2PropsDialogBase", "Renderer settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "This renderer doesn't implement a graphical interface.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsRendererV2PropsDialogBase", "Layer rendering", 0, QApplication::UnicodeUTF8));
        lblTransparency->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "Layer transparency", 0, QApplication::UnicodeUTF8));
        lblFeatureBlend->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "Feature blending mode", 0, QApplication::UnicodeUTF8));
        lblLayerBlend->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "Layer blending mode", 0, QApplication::UnicodeUTF8));
        checkboxEnableOrderBy->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "Control feature rendering order", 0, QApplication::UnicodeUTF8));
        btnOrderBy->setText(QApplication::translate("QgsRendererV2PropsDialogBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRendererV2PropsDialogBase: public Ui_QgsRendererV2PropsDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRENDERERV2PROPSDIALOGBASE_H
