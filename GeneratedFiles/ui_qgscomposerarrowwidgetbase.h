/********************************************************************************
** Form generated from reading UI file 'qgscomposerarrowwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERARROWWIDGETBASE_H
#define UI_QGSCOMPOSERARROWWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgscollapsiblegroupbox.h>
#include "qgscolorbuttonv2.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerArrowWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *mLineStyleButton;
    QgsCollapsibleGroupBoxBasic *mArrowMarkersGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mDefaultMarkerRadioButton;
    QRadioButton *mNoMarkerRadioButton;
    QRadioButton *mSvgMarkerRadioButton;
    QLabel *label_5;
    QgsColorButtonV2 *mArrowHeadOutlineColorButton;
    QLabel *label_4;
    QgsColorButtonV2 *mArrowHeadFillColorButton;
    QLabel *label;
    QgsDoubleSpinBox *mOutlineWidthSpinBox;
    QLabel *label_2;
    QgsDoubleSpinBox *mArrowHeadWidthSpinBox;
    QLabel *mStartMarkerLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mStartMarkerLineEdit;
    QToolButton *mStartMarkerToolButton;
    QLabel *mEndMarkerLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mEndMarkerLineEdit;
    QToolButton *mEndMarkerToolButton;

    void setupUi(QWidget *QgsComposerArrowWidgetBase)
    {
        if (QgsComposerArrowWidgetBase->objectName().isEmpty())
            QgsComposerArrowWidgetBase->setObjectName(QString::fromUtf8("QgsComposerArrowWidgetBase"));
        QgsComposerArrowWidgetBase->resize(334, 383);
        verticalLayout = new QVBoxLayout(QgsComposerArrowWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(QgsComposerArrowWidgetBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label_3);

        scrollArea = new QScrollArea(QgsComposerArrowWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 332, 360));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mLineStyleButton = new QPushButton(groupBox);
        mLineStyleButton->setObjectName(QString::fromUtf8("mLineStyleButton"));

        verticalLayout_2->addWidget(mLineStyleButton);


        mainLayout->addWidget(groupBox);

        mArrowMarkersGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mArrowMarkersGroupBox->setObjectName(QString::fromUtf8("mArrowMarkersGroupBox"));
        mArrowMarkersGroupBox->setFocusPolicy(Qt::StrongFocus);
        mArrowMarkersGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        mArrowMarkersGroupBox->setProperty("collapsed", QVariant(false));
        gridLayout = new QGridLayout(mArrowMarkersGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mDefaultMarkerRadioButton = new QRadioButton(mArrowMarkersGroupBox);
        mDefaultMarkerRadioButton->setObjectName(QString::fromUtf8("mDefaultMarkerRadioButton"));

        horizontalLayout_3->addWidget(mDefaultMarkerRadioButton);

        mNoMarkerRadioButton = new QRadioButton(mArrowMarkersGroupBox);
        mNoMarkerRadioButton->setObjectName(QString::fromUtf8("mNoMarkerRadioButton"));

        horizontalLayout_3->addWidget(mNoMarkerRadioButton);

        mSvgMarkerRadioButton = new QRadioButton(mArrowMarkersGroupBox);
        mSvgMarkerRadioButton->setObjectName(QString::fromUtf8("mSvgMarkerRadioButton"));

        horizontalLayout_3->addWidget(mSvgMarkerRadioButton);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        label_5 = new QLabel(mArrowMarkersGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        mArrowHeadOutlineColorButton = new QgsColorButtonV2(mArrowMarkersGroupBox);
        mArrowHeadOutlineColorButton->setObjectName(QString::fromUtf8("mArrowHeadOutlineColorButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mArrowHeadOutlineColorButton->sizePolicy().hasHeightForWidth());
        mArrowHeadOutlineColorButton->setSizePolicy(sizePolicy1);
        mArrowHeadOutlineColorButton->setMinimumSize(QSize(120, 0));
        mArrowHeadOutlineColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mArrowHeadOutlineColorButton, 1, 1, 1, 1);

        label_4 = new QLabel(mArrowMarkersGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        mArrowHeadFillColorButton = new QgsColorButtonV2(mArrowMarkersGroupBox);
        mArrowHeadFillColorButton->setObjectName(QString::fromUtf8("mArrowHeadFillColorButton"));
        sizePolicy1.setHeightForWidth(mArrowHeadFillColorButton->sizePolicy().hasHeightForWidth());
        mArrowHeadFillColorButton->setSizePolicy(sizePolicy1);
        mArrowHeadFillColorButton->setMinimumSize(QSize(120, 0));
        mArrowHeadFillColorButton->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(mArrowHeadFillColorButton, 2, 1, 1, 1);

        label = new QLabel(mArrowMarkersGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        mOutlineWidthSpinBox = new QgsDoubleSpinBox(mArrowMarkersGroupBox);
        mOutlineWidthSpinBox->setObjectName(QString::fromUtf8("mOutlineWidthSpinBox"));
        mOutlineWidthSpinBox->setShowClearButton(false);

        gridLayout->addWidget(mOutlineWidthSpinBox, 3, 1, 1, 1);

        label_2 = new QLabel(mArrowMarkersGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        mArrowHeadWidthSpinBox = new QgsDoubleSpinBox(mArrowMarkersGroupBox);
        mArrowHeadWidthSpinBox->setObjectName(QString::fromUtf8("mArrowHeadWidthSpinBox"));
        mArrowHeadWidthSpinBox->setShowClearButton(false);

        gridLayout->addWidget(mArrowHeadWidthSpinBox, 4, 1, 1, 1);

        mStartMarkerLabel = new QLabel(mArrowMarkersGroupBox);
        mStartMarkerLabel->setObjectName(QString::fromUtf8("mStartMarkerLabel"));

        gridLayout->addWidget(mStartMarkerLabel, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mStartMarkerLineEdit = new QLineEdit(mArrowMarkersGroupBox);
        mStartMarkerLineEdit->setObjectName(QString::fromUtf8("mStartMarkerLineEdit"));

        horizontalLayout->addWidget(mStartMarkerLineEdit);

        mStartMarkerToolButton = new QToolButton(mArrowMarkersGroupBox);
        mStartMarkerToolButton->setObjectName(QString::fromUtf8("mStartMarkerToolButton"));

        horizontalLayout->addWidget(mStartMarkerToolButton);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        mEndMarkerLabel = new QLabel(mArrowMarkersGroupBox);
        mEndMarkerLabel->setObjectName(QString::fromUtf8("mEndMarkerLabel"));

        gridLayout->addWidget(mEndMarkerLabel, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mEndMarkerLineEdit = new QLineEdit(mArrowMarkersGroupBox);
        mEndMarkerLineEdit->setObjectName(QString::fromUtf8("mEndMarkerLineEdit"));

        horizontalLayout_2->addWidget(mEndMarkerLineEdit);

        mEndMarkerToolButton = new QToolButton(mArrowMarkersGroupBox);
        mEndMarkerToolButton->setObjectName(QString::fromUtf8("mEndMarkerToolButton"));

        horizontalLayout_2->addWidget(mEndMarkerToolButton);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);


        mainLayout->addWidget(mArrowMarkersGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mLineStyleButton);
        QWidget::setTabOrder(mLineStyleButton, mArrowMarkersGroupBox);
        QWidget::setTabOrder(mArrowMarkersGroupBox, mDefaultMarkerRadioButton);
        QWidget::setTabOrder(mDefaultMarkerRadioButton, mNoMarkerRadioButton);
        QWidget::setTabOrder(mNoMarkerRadioButton, mSvgMarkerRadioButton);
        QWidget::setTabOrder(mSvgMarkerRadioButton, mArrowHeadOutlineColorButton);
        QWidget::setTabOrder(mArrowHeadOutlineColorButton, mArrowHeadFillColorButton);
        QWidget::setTabOrder(mArrowHeadFillColorButton, mOutlineWidthSpinBox);
        QWidget::setTabOrder(mOutlineWidthSpinBox, mArrowHeadWidthSpinBox);
        QWidget::setTabOrder(mArrowHeadWidthSpinBox, mStartMarkerLineEdit);
        QWidget::setTabOrder(mStartMarkerLineEdit, mStartMarkerToolButton);
        QWidget::setTabOrder(mStartMarkerToolButton, mEndMarkerLineEdit);
        QWidget::setTabOrder(mEndMarkerLineEdit, mEndMarkerToolButton);

        retranslateUi(QgsComposerArrowWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerArrowWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerArrowWidgetBase)
    {
        QgsComposerArrowWidgetBase->setWindowTitle(QApplication::translate("QgsComposerArrowWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerArrowWidgetBase", "Main properties", 0, QApplication::UnicodeUTF8));
        mLineStyleButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Line style...", 0, QApplication::UnicodeUTF8));
        mArrowMarkersGroupBox->setTitle(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow markers", 0, QApplication::UnicodeUTF8));
        mDefaultMarkerRadioButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Default", 0, QApplication::UnicodeUTF8));
        mNoMarkerRadioButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "None", 0, QApplication::UnicodeUTF8));
        mSvgMarkerRadioButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "SVG", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow outline color", 0, QApplication::UnicodeUTF8));
        mArrowHeadOutlineColorButton->setText(QString());
        label_4->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow fill color", 0, QApplication::UnicodeUTF8));
        mArrowHeadFillColorButton->setText(QString());
        label->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow outline width", 0, QApplication::UnicodeUTF8));
        mOutlineWidthSpinBox->setPrefix(QString());
        mOutlineWidthSpinBox->setSuffix(QApplication::translate("QgsComposerArrowWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Arrow head width", 0, QApplication::UnicodeUTF8));
        mArrowHeadWidthSpinBox->setPrefix(QString());
        mArrowHeadWidthSpinBox->setSuffix(QApplication::translate("QgsComposerArrowWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mStartMarkerLabel->setText(QApplication::translate("QgsComposerArrowWidgetBase", "Start marker", 0, QApplication::UnicodeUTF8));
        mStartMarkerToolButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mEndMarkerLabel->setText(QApplication::translate("QgsComposerArrowWidgetBase", "End marker", 0, QApplication::UnicodeUTF8));
        mEndMarkerToolButton->setText(QApplication::translate("QgsComposerArrowWidgetBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerArrowWidgetBase: public Ui_QgsComposerArrowWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERARROWWIDGETBASE_H
