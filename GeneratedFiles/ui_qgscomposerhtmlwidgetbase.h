/********************************************************************************
** Form generated from reading UI file 'qgscomposerhtmlwidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERHTMLWIDGETBASE_H
#define UI_QGSCOMPOSERHTMLWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
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
#include "qgsdatadefinedbutton.h"
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerHtmlWidgetBase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *mainLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *mEvaluateExpressionsCheckbox;
    QPushButton *mReloadPushButton;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mUrlLineEdit;
    QToolButton *mFileToolButton;
    QgsDataDefinedButton *mUrlDDBtn;
    QRadioButton *mRadioManualSource;
    QVBoxLayout *htmlEditorLayout;
    QRadioButton *mRadioUrlSource;
    QPushButton *mInsertExpressionButton;
    QgsCollapsibleGroupBoxBasic *frameGroupBox;
    QGridLayout *gridLayout;
    QComboBox *mResizeModeComboBox;
    QCheckBox *mEmptyFrameCheckBox;
    QPushButton *mAddFramePushButton;
    QLabel *mResizeModeLabel;
    QCheckBox *mHideEmptyBgCheckBox;
    QgsCollapsibleGroupBoxBasic *mUseSmartBreaksCheckBox;
    QGridLayout *gridLayout_3;
    QLabel *mLabelMaxDistance;
    QgsDoubleSpinBox *mMaxDistanceSpinBox;
    QgsCollapsibleGroupBoxBasic *mUserStylesheetCheckBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *stylesheetEditorLayout;
    QPushButton *mReloadPushButton2;

    void setupUi(QWidget *QgsComposerHtmlWidgetBase)
    {
        if (QgsComposerHtmlWidgetBase->objectName().isEmpty())
            QgsComposerHtmlWidgetBase->setObjectName(QString::fromUtf8("QgsComposerHtmlWidgetBase"));
        QgsComposerHtmlWidgetBase->resize(409, 383);
        verticalLayout = new QVBoxLayout(QgsComposerHtmlWidgetBase);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(QgsComposerHtmlWidgetBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("padding: 2px; font-weight: bold; background-color: rgb(200, 200, 200);"));

        verticalLayout->addWidget(label);

        scrollArea = new QScrollArea(QgsComposerHtmlWidgetBase);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -155, 391, 515));
        mainLayout = new QVBoxLayout(scrollAreaWidgetContents);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFocusPolicy(Qt::StrongFocus);
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        groupBox->setProperty("collapsed", QVariant(false));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mEvaluateExpressionsCheckbox = new QCheckBox(groupBox);
        mEvaluateExpressionsCheckbox->setObjectName(QString::fromUtf8("mEvaluateExpressionsCheckbox"));

        gridLayout_2->addWidget(mEvaluateExpressionsCheckbox, 5, 0, 1, 2);

        mReloadPushButton = new QPushButton(groupBox);
        mReloadPushButton->setObjectName(QString::fromUtf8("mReloadPushButton"));

        gridLayout_2->addWidget(mReloadPushButton, 6, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mUrlLineEdit = new QLineEdit(groupBox);
        mUrlLineEdit->setObjectName(QString::fromUtf8("mUrlLineEdit"));

        horizontalLayout->addWidget(mUrlLineEdit);

        mFileToolButton = new QToolButton(groupBox);
        mFileToolButton->setObjectName(QString::fromUtf8("mFileToolButton"));

        horizontalLayout->addWidget(mFileToolButton);

        mUrlDDBtn = new QgsDataDefinedButton(groupBox);
        mUrlDDBtn->setObjectName(QString::fromUtf8("mUrlDDBtn"));

        horizontalLayout->addWidget(mUrlDDBtn);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        mRadioManualSource = new QRadioButton(groupBox);
        mRadioManualSource->setObjectName(QString::fromUtf8("mRadioManualSource"));

        gridLayout_2->addWidget(mRadioManualSource, 2, 0, 1, 2);

        htmlEditorLayout = new QVBoxLayout();
        htmlEditorLayout->setObjectName(QString::fromUtf8("htmlEditorLayout"));

        gridLayout_2->addLayout(htmlEditorLayout, 3, 0, 1, 2);

        mRadioUrlSource = new QRadioButton(groupBox);
        mRadioUrlSource->setObjectName(QString::fromUtf8("mRadioUrlSource"));

        gridLayout_2->addWidget(mRadioUrlSource, 0, 0, 1, 1);

        mInsertExpressionButton = new QPushButton(groupBox);
        mInsertExpressionButton->setObjectName(QString::fromUtf8("mInsertExpressionButton"));

        gridLayout_2->addWidget(mInsertExpressionButton, 4, 0, 1, 2);


        mainLayout->addWidget(groupBox);

        frameGroupBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        frameGroupBox->setObjectName(QString::fromUtf8("frameGroupBox"));
        frameGroupBox->setFocusPolicy(Qt::StrongFocus);
        frameGroupBox->setCheckable(false);
        frameGroupBox->setChecked(false);
        frameGroupBox->setProperty("collapsed", QVariant(false));
        frameGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout = new QGridLayout(frameGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mResizeModeComboBox = new QComboBox(frameGroupBox);
        mResizeModeComboBox->setObjectName(QString::fromUtf8("mResizeModeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mResizeModeComboBox->sizePolicy().hasHeightForWidth());
        mResizeModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mResizeModeComboBox, 0, 1, 1, 1);

        mEmptyFrameCheckBox = new QCheckBox(frameGroupBox);
        mEmptyFrameCheckBox->setObjectName(QString::fromUtf8("mEmptyFrameCheckBox"));

        gridLayout->addWidget(mEmptyFrameCheckBox, 2, 0, 1, 2);

        mAddFramePushButton = new QPushButton(frameGroupBox);
        mAddFramePushButton->setObjectName(QString::fromUtf8("mAddFramePushButton"));

        gridLayout->addWidget(mAddFramePushButton, 1, 0, 1, 2);

        mResizeModeLabel = new QLabel(frameGroupBox);
        mResizeModeLabel->setObjectName(QString::fromUtf8("mResizeModeLabel"));
        mResizeModeLabel->setWordWrap(true);

        gridLayout->addWidget(mResizeModeLabel, 0, 0, 1, 1);

        mHideEmptyBgCheckBox = new QCheckBox(frameGroupBox);
        mHideEmptyBgCheckBox->setObjectName(QString::fromUtf8("mHideEmptyBgCheckBox"));

        gridLayout->addWidget(mHideEmptyBgCheckBox, 3, 0, 1, 2);


        mainLayout->addWidget(frameGroupBox);

        mUseSmartBreaksCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mUseSmartBreaksCheckBox->setObjectName(QString::fromUtf8("mUseSmartBreaksCheckBox"));
        mUseSmartBreaksCheckBox->setCheckable(true);
        mUseSmartBreaksCheckBox->setChecked(false);
        mUseSmartBreaksCheckBox->setProperty("collapsed", QVariant(false));
        mUseSmartBreaksCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        gridLayout_3 = new QGridLayout(mUseSmartBreaksCheckBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mLabelMaxDistance = new QLabel(mUseSmartBreaksCheckBox);
        mLabelMaxDistance->setObjectName(QString::fromUtf8("mLabelMaxDistance"));

        gridLayout_3->addWidget(mLabelMaxDistance, 0, 0, 1, 1);

        mMaxDistanceSpinBox = new QgsDoubleSpinBox(mUseSmartBreaksCheckBox);
        mMaxDistanceSpinBox->setObjectName(QString::fromUtf8("mMaxDistanceSpinBox"));
        mMaxDistanceSpinBox->setDecimals(1);
        mMaxDistanceSpinBox->setMaximum(1000);
        mMaxDistanceSpinBox->setSingleStep(1);
        mMaxDistanceSpinBox->setShowClearButton(false);

        gridLayout_3->addWidget(mMaxDistanceSpinBox, 0, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        mainLayout->addWidget(mUseSmartBreaksCheckBox);

        mUserStylesheetCheckBox = new QgsCollapsibleGroupBoxBasic(scrollAreaWidgetContents);
        mUserStylesheetCheckBox->setObjectName(QString::fromUtf8("mUserStylesheetCheckBox"));
        mUserStylesheetCheckBox->setCheckable(true);
        mUserStylesheetCheckBox->setChecked(false);
        mUserStylesheetCheckBox->setProperty("collapsed", QVariant(true));
        mUserStylesheetCheckBox->setProperty("syncGroup", QVariant(QString::fromUtf8("composeritem")));
        verticalLayout_2 = new QVBoxLayout(mUserStylesheetCheckBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stylesheetEditorLayout = new QVBoxLayout();
        stylesheetEditorLayout->setObjectName(QString::fromUtf8("stylesheetEditorLayout"));

        verticalLayout_2->addLayout(stylesheetEditorLayout);

        mReloadPushButton2 = new QPushButton(mUserStylesheetCheckBox);
        mReloadPushButton2->setObjectName(QString::fromUtf8("mReloadPushButton2"));

        verticalLayout_2->addWidget(mReloadPushButton2);


        mainLayout->addWidget(mUserStylesheetCheckBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, groupBox);
        QWidget::setTabOrder(groupBox, mRadioUrlSource);
        QWidget::setTabOrder(mRadioUrlSource, mUrlLineEdit);
        QWidget::setTabOrder(mUrlLineEdit, mFileToolButton);
        QWidget::setTabOrder(mFileToolButton, mUrlDDBtn);
        QWidget::setTabOrder(mUrlDDBtn, mRadioManualSource);
        QWidget::setTabOrder(mRadioManualSource, mInsertExpressionButton);
        QWidget::setTabOrder(mInsertExpressionButton, mEvaluateExpressionsCheckbox);
        QWidget::setTabOrder(mEvaluateExpressionsCheckbox, mReloadPushButton);
        QWidget::setTabOrder(mReloadPushButton, frameGroupBox);
        QWidget::setTabOrder(frameGroupBox, mResizeModeComboBox);
        QWidget::setTabOrder(mResizeModeComboBox, mAddFramePushButton);
        QWidget::setTabOrder(mAddFramePushButton, mEmptyFrameCheckBox);
        QWidget::setTabOrder(mEmptyFrameCheckBox, mHideEmptyBgCheckBox);
        QWidget::setTabOrder(mHideEmptyBgCheckBox, mUseSmartBreaksCheckBox);
        QWidget::setTabOrder(mUseSmartBreaksCheckBox, mMaxDistanceSpinBox);
        QWidget::setTabOrder(mMaxDistanceSpinBox, mUserStylesheetCheckBox);
        QWidget::setTabOrder(mUserStylesheetCheckBox, mReloadPushButton2);

        retranslateUi(QgsComposerHtmlWidgetBase);

        QMetaObject::connectSlotsByName(QgsComposerHtmlWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerHtmlWidgetBase)
    {
        QgsComposerHtmlWidgetBase->setWindowTitle(QApplication::translate("QgsComposerHtmlWidgetBase", "HTML Frame", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "HTML frame", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerHtmlWidgetBase", "HTML Source", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mEvaluateExpressionsCheckbox->setToolTip(QApplication::translate("QgsComposerHtmlWidgetBase", "If checked, expressions inside [% %] tags will be evaluated prior to rendering the HTML", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mEvaluateExpressionsCheckbox->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Evaluate QGIS expressions in HTML source", 0, QApplication::UnicodeUTF8));
        mReloadPushButton->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Refresh HTML", 0, QApplication::UnicodeUTF8));
        mFileToolButton->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mUrlDDBtn->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "...", 0, QApplication::UnicodeUTF8));
        mRadioManualSource->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Source:", 0, QApplication::UnicodeUTF8));
        mRadioUrlSource->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "URL", 0, QApplication::UnicodeUTF8));
        mInsertExpressionButton->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Insert an expression", 0, QApplication::UnicodeUTF8));
        frameGroupBox->setTitle(QApplication::translate("QgsComposerHtmlWidgetBase", "Frames", 0, QApplication::UnicodeUTF8));
        mEmptyFrameCheckBox->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Don't export page if frame is empty", 0, QApplication::UnicodeUTF8));
        mAddFramePushButton->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Add Frame", 0, QApplication::UnicodeUTF8));
        mResizeModeLabel->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Resize mode", 0, QApplication::UnicodeUTF8));
        mHideEmptyBgCheckBox->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Don't draw background if frame is empty", 0, QApplication::UnicodeUTF8));
        mUseSmartBreaksCheckBox->setTitle(QApplication::translate("QgsComposerHtmlWidgetBase", "Use smart page breaks", 0, QApplication::UnicodeUTF8));
        mLabelMaxDistance->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Maximum distance", 0, QApplication::UnicodeUTF8));
        mMaxDistanceSpinBox->setSuffix(QApplication::translate("QgsComposerHtmlWidgetBase", " mm", 0, QApplication::UnicodeUTF8));
        mUserStylesheetCheckBox->setTitle(QApplication::translate("QgsComposerHtmlWidgetBase", "User stylesheet", 0, QApplication::UnicodeUTF8));
        mReloadPushButton2->setText(QApplication::translate("QgsComposerHtmlWidgetBase", "Update HTML", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerHtmlWidgetBase: public Ui_QgsComposerHtmlWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERHTMLWIDGETBASE_H
