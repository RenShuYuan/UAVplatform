/********************************************************************************
** Form generated from reading UI file 'qgscomposertablewidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERTABLEWIDGETBASE_H
#define UI_QGSCOMPOSERTABLEWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include <qgsmaplayercombobox.h>
#include "qgscolorbuttonv2.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerTableWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QFormLayout *formLayout;
    QLabel *mLayerLabel;
    QgsMapLayerComboBox *mLayerComboBox;
    QPushButton *mRefreshPushButton;
    QPushButton *mAttributesPushButton;
    QLabel *mMarginLabel;
    QDoubleSpinBox *mMarginSpinBox;
    QgsCollapsibleGroupBoxBasic *groupBox_5;
    QFormLayout *formLayout_3;
    QLabel *mMaxNumFeaturesLabel;
    QSpinBox *mMaximumColumnsSpinBox;
    QCheckBox *mShowOnlyVisibleFeaturesCheckBox;
    QLabel *mComposerMapLabel;
    QComboBox *mComposerMapComboBox;
    QCheckBox *mFeatureFilterCheckBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mFeatureFilterEdit;
    QToolButton *mFeatureFilterButton;
    QgsCollapsibleGroupBoxBasic *mShowGridGroupCheckBox;
    QFormLayout *formLayout_2;
    QLabel *mGridStrokeWidthLabel;
    QDoubleSpinBox *mGridStrokeWidthSpinBox;
    QLabel *label_6;
    QgsColorButtonV2 *mGridColorButton;
    QgsCollapsibleGroupBoxBasic *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QComboBox *mHeaderHAlignmentComboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *mHeaderFontPushButton;
    QgsColorButtonV2 *mHeaderFontColorButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QgsColorButtonV2 *mContentFontColorButton;
    QPushButton *mContentFontPushButton;
    QLabel *lblContentsFont;

    void setupUi(QWidget *QgsComposerTableWidgetBase)
    {
        if (QgsComposerTableWidgetBase->objectName().isEmpty())
            QgsComposerTableWidgetBase->setObjectName(QString::fromUtf8("QgsComposerTableWidgetBase"));
        QgsComposerTableWidgetBase->resize(410, 595);
        verticalLayout = new QVBoxLayout(QgsComposerTableWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(QgsComposerTableWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(QgsComposerTableWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 392, 711));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mLayerLabel = new QLabel(groupBox);
        mLayerLabel->setObjectName(QString::fromUtf8("mLayerLabel"));
        mLayerLabel->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, mLayerLabel);

        mLayerComboBox = new QgsMapLayerComboBox(groupBox);
        mLayerComboBox->setObjectName(QString::fromUtf8("mLayerComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLayerComboBox->sizePolicy().hasHeightForWidth());
        mLayerComboBox->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, mLayerComboBox);

        mRefreshPushButton = new QPushButton(groupBox);
        mRefreshPushButton->setObjectName(QString::fromUtf8("mRefreshPushButton"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, mRefreshPushButton);

        mAttributesPushButton = new QPushButton(groupBox);
        mAttributesPushButton->setObjectName(QString::fromUtf8("mAttributesPushButton"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, mAttributesPushButton);

        mMarginLabel = new QLabel(groupBox);
        mMarginLabel->setObjectName(QString::fromUtf8("mMarginLabel"));
        mMarginLabel->setWordWrap(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, mMarginLabel);

        mMarginSpinBox = new QDoubleSpinBox(groupBox);
        mMarginSpinBox->setObjectName(QString::fromUtf8("mMarginSpinBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mMarginSpinBox);


        mainLayout->addWidget(groupBox);

        groupBox_5 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setFocusPolicy(Qt::StrongFocus);
        groupBox_5->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_5->setProperty("collapsed", QVariant(false));
        formLayout_3 = new QFormLayout(groupBox_5);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        mMaxNumFeaturesLabel = new QLabel(groupBox_5);
        mMaxNumFeaturesLabel->setObjectName(QString::fromUtf8("mMaxNumFeaturesLabel"));
        mMaxNumFeaturesLabel->setWordWrap(true);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, mMaxNumFeaturesLabel);

        mMaximumColumnsSpinBox = new QSpinBox(groupBox_5);
        mMaximumColumnsSpinBox->setObjectName(QString::fromUtf8("mMaximumColumnsSpinBox"));
        mMaximumColumnsSpinBox->setMaximum(999);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mMaximumColumnsSpinBox);

        mShowOnlyVisibleFeaturesCheckBox = new QCheckBox(groupBox_5);
        mShowOnlyVisibleFeaturesCheckBox->setObjectName(QString::fromUtf8("mShowOnlyVisibleFeaturesCheckBox"));

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, mShowOnlyVisibleFeaturesCheckBox);

        mComposerMapLabel = new QLabel(groupBox_5);
        mComposerMapLabel->setObjectName(QString::fromUtf8("mComposerMapLabel"));
        mComposerMapLabel->setWordWrap(true);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, mComposerMapLabel);

        mComposerMapComboBox = new QComboBox(groupBox_5);
        mComposerMapComboBox->setObjectName(QString::fromUtf8("mComposerMapComboBox"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, mComposerMapComboBox);

        mFeatureFilterCheckBox = new QCheckBox(groupBox_5);
        mFeatureFilterCheckBox->setObjectName(QString::fromUtf8("mFeatureFilterCheckBox"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, mFeatureFilterCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mFeatureFilterEdit = new QLineEdit(groupBox_5);
        mFeatureFilterEdit->setObjectName(QString::fromUtf8("mFeatureFilterEdit"));

        horizontalLayout->addWidget(mFeatureFilterEdit);

        mFeatureFilterButton = new QToolButton(groupBox_5);
        mFeatureFilterButton->setObjectName(QString::fromUtf8("mFeatureFilterButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mFeatureFilterButton->setIcon(icon);

        horizontalLayout->addWidget(mFeatureFilterButton);


        formLayout_3->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        mShowOnlyVisibleFeaturesCheckBox->raise();
        mComposerMapLabel->raise();
        mComposerMapComboBox->raise();
        mFeatureFilterCheckBox->raise();
        mMaximumColumnsSpinBox->raise();
        mMaxNumFeaturesLabel->raise();

        mainLayout->addWidget(groupBox_5);

        mShowGridGroupCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mShowGridGroupCheckBox->setObjectName(QString::fromUtf8("mShowGridGroupCheckBox"));
        mShowGridGroupCheckBox->setCheckable(true);
        mShowGridGroupCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mShowGridGroupCheckBox->setProperty("collapsed", QVariant(false));
        formLayout_2 = new QFormLayout(mShowGridGroupCheckBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        mGridStrokeWidthLabel = new QLabel(mShowGridGroupCheckBox);
        mGridStrokeWidthLabel->setObjectName(QString::fromUtf8("mGridStrokeWidthLabel"));
        mGridStrokeWidthLabel->setWordWrap(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, mGridStrokeWidthLabel);

        mGridStrokeWidthSpinBox = new QDoubleSpinBox(mShowGridGroupCheckBox);
        mGridStrokeWidthSpinBox->setObjectName(QString::fromUtf8("mGridStrokeWidthSpinBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mGridStrokeWidthSpinBox);

        label_6 = new QLabel(mShowGridGroupCheckBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        mGridColorButton = new QgsColorButtonV2(mShowGridGroupCheckBox);
        mGridColorButton->setObjectName(QString::fromUtf8("mGridColorButton"));
        mGridColorButton->setMinimumSize(QSize(120, 0));
        mGridColorButton->setMaximumSize(QSize(120, 16777215));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mGridColorButton);


        mainLayout->addWidget(mShowGridGroupCheckBox);

        groupBox_3 = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFocusPolicy(Qt::StrongFocus);
        groupBox_3->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox_3->setProperty("collapsed", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mHeaderHAlignmentComboBox = new QComboBox(groupBox_2);
        mHeaderHAlignmentComboBox->setObjectName(QString::fromUtf8("mHeaderHAlignmentComboBox"));
        sizePolicy1.setHeightForWidth(mHeaderHAlignmentComboBox->sizePolicy().hasHeightForWidth());
        mHeaderHAlignmentComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mHeaderHAlignmentComboBox, 3, 1, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        mHeaderFontPushButton = new QPushButton(groupBox_2);
        mHeaderFontPushButton->setObjectName(QString::fromUtf8("mHeaderFontPushButton"));

        gridLayout->addWidget(mHeaderFontPushButton, 0, 1, 1, 2);

        mHeaderFontColorButton = new QgsColorButtonV2(groupBox_2);
        mHeaderFontColorButton->setObjectName(QString::fromUtf8("mHeaderFontColorButton"));
        mHeaderFontColorButton->setMinimumSize(QSize(120, 0));
        mHeaderFontColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mHeaderFontColorButton, 2, 1, 1, 2);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        mContentFontColorButton = new QgsColorButtonV2(groupBox_4);
        mContentFontColorButton->setObjectName(QString::fromUtf8("mContentFontColorButton"));
        mContentFontColorButton->setMinimumSize(QSize(120, 0));
        mContentFontColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(mContentFontColorButton, 1, 1, 1, 2);

        mContentFontPushButton = new QPushButton(groupBox_4);
        mContentFontPushButton->setObjectName(QString::fromUtf8("mContentFontPushButton"));

        gridLayout_2->addWidget(mContentFontPushButton, 0, 1, 1, 2);

        lblContentsFont = new QLabel(groupBox_4);
        lblContentsFont->setObjectName(QString::fromUtf8("lblContentsFont"));

        gridLayout_2->addWidget(lblContentsFont, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);


        mainLayout->addWidget(groupBox_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

#ifndef QT_NO_SHORTCUT
        mMarginLabel->setBuddy(mMarginSpinBox);
        mMaxNumFeaturesLabel->setBuddy(mMaximumColumnsSpinBox);
        mComposerMapLabel->setBuddy(mComposerMapComboBox);
        mGridStrokeWidthLabel->setBuddy(mGridStrokeWidthSpinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mLayerComboBox);
        QWidget::setTabOrder(mLayerComboBox, mRefreshPushButton);
        QWidget::setTabOrder(mRefreshPushButton, mAttributesPushButton);
        QWidget::setTabOrder(mAttributesPushButton, mMarginSpinBox);
        QWidget::setTabOrder(mMarginSpinBox, groupBox_5);
        QWidget::setTabOrder(groupBox_5, mMaximumColumnsSpinBox);
        QWidget::setTabOrder(mMaximumColumnsSpinBox, mShowOnlyVisibleFeaturesCheckBox);
        QWidget::setTabOrder(mShowOnlyVisibleFeaturesCheckBox, mComposerMapComboBox);
        QWidget::setTabOrder(mComposerMapComboBox, mFeatureFilterCheckBox);
        QWidget::setTabOrder(mFeatureFilterCheckBox, mFeatureFilterEdit);
        QWidget::setTabOrder(mFeatureFilterEdit, mFeatureFilterButton);
        QWidget::setTabOrder(mFeatureFilterButton, mShowGridGroupCheckBox);
        QWidget::setTabOrder(mShowGridGroupCheckBox, mGridStrokeWidthSpinBox);
        QWidget::setTabOrder(mGridStrokeWidthSpinBox, mGridColorButton);
        QWidget::setTabOrder(mGridColorButton, groupBox_3);
        QWidget::setTabOrder(groupBox_3, mHeaderFontPushButton);
        QWidget::setTabOrder(mHeaderFontPushButton, mHeaderFontColorButton);
        QWidget::setTabOrder(mHeaderFontColorButton, mHeaderHAlignmentComboBox);
        QWidget::setTabOrder(mHeaderHAlignmentComboBox, mContentFontPushButton);
        QWidget::setTabOrder(mContentFontPushButton, mContentFontColorButton);

        retranslateUi(QgsComposerTableWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerTableWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerTableWidgetBase)
    {
        QgsComposerTableWidgetBase->setWindowTitle(QApplication::translate("QgsComposerTableWidgetBase", "Attribute Table", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerTableWidgetBase", "Attribute table", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerTableWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        mLayerLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Layer", 0, QApplication::UnicodeUTF8));
        mRefreshPushButton->setText(QApplication::translate("QgsComposerTableWidgetBase", "Refresh table data", 0, QApplication::UnicodeUTF8));
        mAttributesPushButton->setText(QApplication::translate("QgsComposerTableWidgetBase", "Attributes...", 0, QApplication::UnicodeUTF8));
        mMarginLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Margin", 0, QApplication::UnicodeUTF8));
        mMarginSpinBox->setSuffix(QApplication::translate("QgsComposerTableWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("QgsComposerTableWidgetBase", "Feature filtering", 0, QApplication::UnicodeUTF8));
        mMaxNumFeaturesLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Maximum rows", 0, QApplication::UnicodeUTF8));
        mShowOnlyVisibleFeaturesCheckBox->setText(QApplication::translate("QgsComposerTableWidgetBase", "Show only visible features", 0, QApplication::UnicodeUTF8));
        mComposerMapLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Composer map", 0, QApplication::UnicodeUTF8));
        mFeatureFilterCheckBox->setText(QApplication::translate("QgsComposerTableWidgetBase", "Filter with", 0, QApplication::UnicodeUTF8));
        mFeatureFilterButton->setText(QApplication::translate("QgsComposerTableWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mShowGridGroupCheckBox->setTitle(QApplication::translate("QgsComposerTableWidgetBase", "Show grid", 0, QApplication::UnicodeUTF8));
        mGridStrokeWidthLabel->setText(QApplication::translate("QgsComposerTableWidgetBase", "Line width", 0, QApplication::UnicodeUTF8));
        mGridStrokeWidthSpinBox->setSuffix(QApplication::translate("QgsComposerTableWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsComposerTableWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        mGridColorButton->setText(QString());
        groupBox_3->setTitle(QApplication::translate("QgsComposerTableWidgetBase", "Fonts and text styling", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsComposerTableWidgetBase", "Table heading", 0, QApplication::UnicodeUTF8));
        mHeaderHAlignmentComboBox->clear();
        mHeaderHAlignmentComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsComposerTableWidgetBase", "Follow column alignment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerTableWidgetBase", "Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerTableWidgetBase", "Center", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsComposerTableWidgetBase", "Right", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("QgsComposerTableWidgetBase", "Alignment", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerTableWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsComposerTableWidgetBase", "Font", 0, QApplication::UnicodeUTF8));
        mHeaderFontPushButton->setText(QApplication::translate("QgsComposerTableWidgetBase", "Choose font...", 0, QApplication::UnicodeUTF8));
        mHeaderFontColorButton->setText(QString());
        groupBox_4->setTitle(QApplication::translate("QgsComposerTableWidgetBase", "Table contents", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsComposerTableWidgetBase", "Color", 0, QApplication::UnicodeUTF8));
        mContentFontColorButton->setText(QString());
        mContentFontPushButton->setText(QApplication::translate("QgsComposerTableWidgetBase", "Choose font...", 0, QApplication::UnicodeUTF8));
        lblContentsFont->setText(QApplication::translate("QgsComposerTableWidgetBase", "Font", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerTableWidgetBase: public Ui_QgsComposerTableWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERTABLEWIDGETBASE_H
