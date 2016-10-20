/********************************************************************************
** Form generated from reading UI file 'qgssinglebandpseudocolorrendererwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H
#define UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorrampcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSingleBandPseudoColorRendererWidgetBase
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *mBandLabel;
    QComboBox *mBandComboBox;
    QComboBox *mColorInterpolationComboBox;
    QLabel *mColorInterpolationLabel;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *mAddEntryButton;
    QToolButton *mDeleteEntryButton;
    QToolButton *mSortButton;
    QToolButton *mLoadFromBandButton;
    QToolButton *mLoadFromFileButton;
    QToolButton *mExportToFileButton;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *mColormapTreeWidget;
    QCheckBox *mClipCheckBox;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *grpGenerateColorMap;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QgsColorRampComboBox *mColorRampComboBox;
    QPushButton *mButtonEditRamp;
    QCheckBox *mInvertCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mClassificationModeLabel;
    QComboBox *mClassificationModeComboBox;
    QLabel *mNumberOfEntriesLabel;
    QSpinBox *mNumberOfEntriesSpinBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mMinLabel;
    QLineEdit *mMinLineEdit;
    QLabel *mMaxLabel;
    QLineEdit *mMaxLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mClassifyButton;
    QGridLayout *gridLayout_3;
    QLabel *mMinMaxOriginLabel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QWidget *mMinMaxContainerWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsSingleBandPseudoColorRendererWidgetBase)
    {
        if (QgsSingleBandPseudoColorRendererWidgetBase->objectName().isEmpty())
            QgsSingleBandPseudoColorRendererWidgetBase->setObjectName(QString::fromUtf8("QgsSingleBandPseudoColorRendererWidgetBase"));
        QgsSingleBandPseudoColorRendererWidgetBase->resize(616, 422);
        horizontalLayout_5 = new QHBoxLayout(QgsSingleBandPseudoColorRendererWidgetBase);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mBandLabel = new QLabel(QgsSingleBandPseudoColorRendererWidgetBase);
        mBandLabel->setObjectName(QString::fromUtf8("mBandLabel"));

        gridLayout->addWidget(mBandLabel, 0, 0, 1, 1);

        mBandComboBox = new QComboBox(QgsSingleBandPseudoColorRendererWidgetBase);
        mBandComboBox->setObjectName(QString::fromUtf8("mBandComboBox"));

        gridLayout->addWidget(mBandComboBox, 0, 1, 1, 1);

        mColorInterpolationComboBox = new QComboBox(QgsSingleBandPseudoColorRendererWidgetBase);
        mColorInterpolationComboBox->setObjectName(QString::fromUtf8("mColorInterpolationComboBox"));

        gridLayout->addWidget(mColorInterpolationComboBox, 1, 1, 1, 1);

        mColorInterpolationLabel = new QLabel(QgsSingleBandPseudoColorRendererWidgetBase);
        mColorInterpolationLabel->setObjectName(QString::fromUtf8("mColorInterpolationLabel"));

        gridLayout->addWidget(mColorInterpolationLabel, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mAddEntryButton = new QToolButton(QgsSingleBandPseudoColorRendererWidgetBase);
        mAddEntryButton->setObjectName(QString::fromUtf8("mAddEntryButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAddEntryButton->setIcon(icon);

        horizontalLayout_3->addWidget(mAddEntryButton);

        mDeleteEntryButton = new QToolButton(QgsSingleBandPseudoColorRendererWidgetBase);
        mDeleteEntryButton->setObjectName(QString::fromUtf8("mDeleteEntryButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mDeleteEntryButton->setIcon(icon1);

        horizontalLayout_3->addWidget(mDeleteEntryButton);

        mSortButton = new QToolButton(QgsSingleBandPseudoColorRendererWidgetBase);
        mSortButton->setObjectName(QString::fromUtf8("mSortButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionArrowDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        mSortButton->setIcon(icon2);

        horizontalLayout_3->addWidget(mSortButton);

        mLoadFromBandButton = new QToolButton(QgsSingleBandPseudoColorRendererWidgetBase);
        mLoadFromBandButton->setObjectName(QString::fromUtf8("mLoadFromBandButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionDraw.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadFromBandButton->setIcon(icon3);

        horizontalLayout_3->addWidget(mLoadFromBandButton);

        mLoadFromFileButton = new QToolButton(QgsSingleBandPseudoColorRendererWidgetBase);
        mLoadFromFileButton->setObjectName(QString::fromUtf8("mLoadFromFileButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLoadFromFileButton->setIcon(icon4);

        horizontalLayout_3->addWidget(mLoadFromFileButton);

        mExportToFileButton = new QToolButton(QgsSingleBandPseudoColorRendererWidgetBase);
        mExportToFileButton->setObjectName(QString::fromUtf8("mExportToFileButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSaveAs.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mExportToFileButton->setIcon(icon5);

        horizontalLayout_3->addWidget(mExportToFileButton);

        horizontalSpacer = new QSpacerItem(48, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        mColormapTreeWidget = new QTreeWidget(QgsSingleBandPseudoColorRendererWidgetBase);
        mColormapTreeWidget->setObjectName(QString::fromUtf8("mColormapTreeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mColormapTreeWidget->sizePolicy().hasHeightForWidth());
        mColormapTreeWidget->setSizePolicy(sizePolicy);
        mColormapTreeWidget->header()->setDefaultSectionSize(70);
        mColormapTreeWidget->header()->setMinimumSectionSize(10);
        mColormapTreeWidget->header()->setStretchLastSection(true);

        verticalLayout->addWidget(mColormapTreeWidget);

        mClipCheckBox = new QCheckBox(QgsSingleBandPseudoColorRendererWidgetBase);
        mClipCheckBox->setObjectName(QString::fromUtf8("mClipCheckBox"));

        verticalLayout->addWidget(mClipCheckBox);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        grpGenerateColorMap = new QGroupBox(QgsSingleBandPseudoColorRendererWidgetBase);
        grpGenerateColorMap->setObjectName(QString::fromUtf8("grpGenerateColorMap"));
        verticalLayout_4 = new QVBoxLayout(grpGenerateColorMap);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mColorRampComboBox = new QgsColorRampComboBox(grpGenerateColorMap);
        mColorRampComboBox->setObjectName(QString::fromUtf8("mColorRampComboBox"));

        horizontalLayout_2->addWidget(mColorRampComboBox);

        mButtonEditRamp = new QPushButton(grpGenerateColorMap);
        mButtonEditRamp->setObjectName(QString::fromUtf8("mButtonEditRamp"));

        horizontalLayout_2->addWidget(mButtonEditRamp);

        mInvertCheckBox = new QCheckBox(grpGenerateColorMap);
        mInvertCheckBox->setObjectName(QString::fromUtf8("mInvertCheckBox"));

        horizontalLayout_2->addWidget(mInvertCheckBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mClassificationModeLabel = new QLabel(grpGenerateColorMap);
        mClassificationModeLabel->setObjectName(QString::fromUtf8("mClassificationModeLabel"));

        horizontalLayout->addWidget(mClassificationModeLabel);

        mClassificationModeComboBox = new QComboBox(grpGenerateColorMap);
        mClassificationModeComboBox->setObjectName(QString::fromUtf8("mClassificationModeComboBox"));

        horizontalLayout->addWidget(mClassificationModeComboBox);

        mNumberOfEntriesLabel = new QLabel(grpGenerateColorMap);
        mNumberOfEntriesLabel->setObjectName(QString::fromUtf8("mNumberOfEntriesLabel"));

        horizontalLayout->addWidget(mNumberOfEntriesLabel);

        mNumberOfEntriesSpinBox = new QSpinBox(grpGenerateColorMap);
        mNumberOfEntriesSpinBox->setObjectName(QString::fromUtf8("mNumberOfEntriesSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mNumberOfEntriesSpinBox->sizePolicy().hasHeightForWidth());
        mNumberOfEntriesSpinBox->setSizePolicy(sizePolicy1);
        mNumberOfEntriesSpinBox->setMaximum(255);
        mNumberOfEntriesSpinBox->setValue(0);

        horizontalLayout->addWidget(mNumberOfEntriesSpinBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mMinLabel = new QLabel(grpGenerateColorMap);
        mMinLabel->setObjectName(QString::fromUtf8("mMinLabel"));

        horizontalLayout_4->addWidget(mMinLabel);

        mMinLineEdit = new QLineEdit(grpGenerateColorMap);
        mMinLineEdit->setObjectName(QString::fromUtf8("mMinLineEdit"));

        horizontalLayout_4->addWidget(mMinLineEdit);

        mMaxLabel = new QLabel(grpGenerateColorMap);
        mMaxLabel->setObjectName(QString::fromUtf8("mMaxLabel"));

        horizontalLayout_4->addWidget(mMaxLabel);

        mMaxLineEdit = new QLineEdit(grpGenerateColorMap);
        mMaxLineEdit->setObjectName(QString::fromUtf8("mMaxLineEdit"));

        horizontalLayout_4->addWidget(mMaxLineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        mClassifyButton = new QPushButton(grpGenerateColorMap);
        mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));

        verticalLayout_4->addWidget(mClassifyButton);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(6);
        mMinMaxOriginLabel = new QLabel(grpGenerateColorMap);
        mMinMaxOriginLabel->setObjectName(QString::fromUtf8("mMinMaxOriginLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mMinMaxOriginLabel->sizePolicy().hasHeightForWidth());
        mMinMaxOriginLabel->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(mMinMaxOriginLabel, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        label_2 = new QLabel(grpGenerateColorMap);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);


        verticalLayout_4->addLayout(gridLayout_3);


        verticalLayout_3->addWidget(grpGenerateColorMap);

        mMinMaxContainerWidget = new QWidget(QgsSingleBandPseudoColorRendererWidgetBase);
        mMinMaxContainerWidget->setObjectName(QString::fromUtf8("mMinMaxContainerWidget"));

        verticalLayout_3->addWidget(mMinMaxContainerWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_3);

        QWidget::setTabOrder(mBandComboBox, mColorInterpolationComboBox);
        QWidget::setTabOrder(mColorInterpolationComboBox, mAddEntryButton);
        QWidget::setTabOrder(mAddEntryButton, mDeleteEntryButton);
        QWidget::setTabOrder(mDeleteEntryButton, mSortButton);
        QWidget::setTabOrder(mSortButton, mLoadFromBandButton);
        QWidget::setTabOrder(mLoadFromBandButton, mLoadFromFileButton);
        QWidget::setTabOrder(mLoadFromFileButton, mExportToFileButton);
        QWidget::setTabOrder(mExportToFileButton, mColormapTreeWidget);
        QWidget::setTabOrder(mColormapTreeWidget, mClipCheckBox);
        QWidget::setTabOrder(mClipCheckBox, mColorRampComboBox);
        QWidget::setTabOrder(mColorRampComboBox, mButtonEditRamp);
        QWidget::setTabOrder(mButtonEditRamp, mInvertCheckBox);
        QWidget::setTabOrder(mInvertCheckBox, mClassificationModeComboBox);
        QWidget::setTabOrder(mClassificationModeComboBox, mNumberOfEntriesSpinBox);
        QWidget::setTabOrder(mNumberOfEntriesSpinBox, mMinLineEdit);
        QWidget::setTabOrder(mMinLineEdit, mMaxLineEdit);
        QWidget::setTabOrder(mMaxLineEdit, mClassifyButton);

        retranslateUi(QgsSingleBandPseudoColorRendererWidgetBase);

        QMetaObject::connectSlotsByName(QgsSingleBandPseudoColorRendererWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsSingleBandPseudoColorRendererWidgetBase)
    {
        QgsSingleBandPseudoColorRendererWidgetBase->setWindowTitle(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mBandLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Band", 0, QApplication::UnicodeUTF8));
        mColorInterpolationLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Color interpolation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mAddEntryButton->setToolTip(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Add values manually", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mAddEntryButton->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mDeleteEntryButton->setToolTip(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Remove selected row", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mDeleteEntryButton->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSortButton->setToolTip(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Sort colormap items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSortButton->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLoadFromBandButton->setToolTip(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Load color map from band", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLoadFromBandButton->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLoadFromFileButton->setToolTip(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Load color map from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLoadFromFileButton->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mExportToFileButton->setToolTip(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Export color map to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mExportToFileButton->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mColormapTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Label", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Value", 0, QApplication::UnicodeUTF8));
        mClipCheckBox->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Clip", 0, QApplication::UnicodeUTF8));
        grpGenerateColorMap->setTitle(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Generate new color map", 0, QApplication::UnicodeUTF8));
        mButtonEditRamp->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Edit", 0, QApplication::UnicodeUTF8));
        mInvertCheckBox->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Invert", 0, QApplication::UnicodeUTF8));
        mClassificationModeLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Mode", 0, QApplication::UnicodeUTF8));
        mNumberOfEntriesLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Classes", 0, QApplication::UnicodeUTF8));
        mMinLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Min", 0, QApplication::UnicodeUTF8));
        mMaxLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Max", 0, QApplication::UnicodeUTF8));
        mClassifyButton->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Classify", 0, QApplication::UnicodeUTF8));
        mMinMaxOriginLabel->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Min / Max origin", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsSingleBandPseudoColorRendererWidgetBase", "Min / max origin:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsSingleBandPseudoColorRendererWidgetBase: public Ui_QgsSingleBandPseudoColorRendererWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSINGLEBANDPSEUDOCOLORRENDERERWIDGETBASE_H
