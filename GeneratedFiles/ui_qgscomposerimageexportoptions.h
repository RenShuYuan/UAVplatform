/********************************************************************************
** Form generated from reading UI file 'qgscomposerimageexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERIMAGEEXPORTOPTIONS_H
#define UI_QGSCOMPOSERIMAGEEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "qgscollapsiblegroupbox.h"
#include "qgsspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsComposerImageExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_13;
    QgsSpinBox *mResolutionSpinBox;
    QgsSpinBox *mWidthSpinBox;
    QLabel *label_10;
    QgsSpinBox *mHeightSpinBox;
    QSpacerItem *horizontalSpacer_3;
    QgsCollapsibleGroupBoxBasic *mClipToContentGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QgsSpinBox *mLeftMarginSpinBox;
    QLabel *label_11;
    QgsSpinBox *mRightMarginSpinBox;
    QLabel *label_12;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QgsSpinBox *mTopMarginSpinBox;
    QgsSpinBox *mBottomMarginSpinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsComposerImageExportOptionsDialog)
    {
        if (QgsComposerImageExportOptionsDialog->objectName().isEmpty())
            QgsComposerImageExportOptionsDialog->setObjectName(QString::fromUtf8("QgsComposerImageExportOptionsDialog"));
        QgsComposerImageExportOptionsDialog->resize(489, 325);
        verticalLayout = new QVBoxLayout(QgsComposerImageExportOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(QgsComposerImageExportOptionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 2);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 2, 0, 1, 2);

        mResolutionSpinBox = new QgsSpinBox(groupBox);
        mResolutionSpinBox->setObjectName(QString::fromUtf8("mResolutionSpinBox"));
        mResolutionSpinBox->setMaximum(3000);
        mResolutionSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mResolutionSpinBox, 0, 2, 1, 2);

        mWidthSpinBox = new QgsSpinBox(groupBox);
        mWidthSpinBox->setObjectName(QString::fromUtf8("mWidthSpinBox"));
        mWidthSpinBox->setMinimum(0);
        mWidthSpinBox->setMaximum(99999999);
        mWidthSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mWidthSpinBox, 1, 2, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        mHeightSpinBox = new QgsSpinBox(groupBox);
        mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));
        mHeightSpinBox->setMinimum(0);
        mHeightSpinBox->setMaximum(99999999);
        mHeightSpinBox->setProperty("showClearButton", QVariant(false));

        gridLayout->addWidget(mHeightSpinBox, 2, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 4, 1, 1);


        verticalLayout->addWidget(groupBox);

        mClipToContentGroupBox = new QgsCollapsibleGroupBoxBasic(QgsComposerImageExportOptionsDialog);
        mClipToContentGroupBox->setObjectName(QString::fromUtf8("mClipToContentGroupBox"));
        mClipToContentGroupBox->setCheckable(true);
        mClipToContentGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(mClipToContentGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(mClipToContentGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        mLeftMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mLeftMarginSpinBox->setObjectName(QString::fromUtf8("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setMaximum(1000);

        horizontalLayout_7->addWidget(mLeftMarginSpinBox);

        label_11 = new QLabel(mClipToContentGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        mRightMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mRightMarginSpinBox->setObjectName(QString::fromUtf8("mRightMarginSpinBox"));
        mRightMarginSpinBox->setMaximum(1000);

        horizontalLayout_7->addWidget(mRightMarginSpinBox);


        gridLayout_5->addLayout(horizontalLayout_7, 1, 0, 1, 4);

        label_12 = new QLabel(mClipToContentGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 2, 1, 1, 1);

        label_4 = new QLabel(mClipToContentGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);

        mTopMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mTopMarginSpinBox->setObjectName(QString::fromUtf8("mTopMarginSpinBox"));
        mTopMarginSpinBox->setMaximum(1000);

        gridLayout_5->addWidget(mTopMarginSpinBox, 0, 2, 1, 1);

        mBottomMarginSpinBox = new QgsSpinBox(mClipToContentGroupBox);
        mBottomMarginSpinBox->setObjectName(QString::fromUtf8("mBottomMarginSpinBox"));
        mBottomMarginSpinBox->setMaximum(1000);

        gridLayout_5->addWidget(mBottomMarginSpinBox, 2, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_5);


        verticalLayout->addWidget(mClipToContentGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsComposerImageExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mResolutionSpinBox, mWidthSpinBox);
        QWidget::setTabOrder(mWidthSpinBox, mHeightSpinBox);
        QWidget::setTabOrder(mHeightSpinBox, mClipToContentGroupBox);
        QWidget::setTabOrder(mClipToContentGroupBox, mTopMarginSpinBox);
        QWidget::setTabOrder(mTopMarginSpinBox, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mBottomMarginSpinBox);

        retranslateUi(QgsComposerImageExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsComposerImageExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsComposerImageExportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsComposerImageExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsComposerImageExportOptionsDialog)
    {
        QgsComposerImageExportOptionsDialog->setWindowTitle(QApplication::translate("QgsComposerImageExportOptionsDialog", "Image export options", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsComposerImageExportOptionsDialog", "Export options", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Export resolution", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Page height", 0, QApplication::UnicodeUTF8));
        mResolutionSpinBox->setSuffix(QApplication::translate("QgsComposerImageExportOptionsDialog", " dpi", 0, QApplication::UnicodeUTF8));
        mResolutionSpinBox->setPrefix(QString());
        mWidthSpinBox->setSpecialValueText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Auto", 0, QApplication::UnicodeUTF8));
        mWidthSpinBox->setSuffix(QApplication::translate("QgsComposerImageExportOptionsDialog", " px", 0, QApplication::UnicodeUTF8));
        mWidthSpinBox->setPrefix(QString());
        label_10->setText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Page width", 0, QApplication::UnicodeUTF8));
        mHeightSpinBox->setSpecialValueText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Auto", 0, QApplication::UnicodeUTF8));
        mHeightSpinBox->setSuffix(QApplication::translate("QgsComposerImageExportOptionsDialog", " px", 0, QApplication::UnicodeUTF8));
        mHeightSpinBox->setPrefix(QString());
        mClipToContentGroupBox->setTitle(QApplication::translate("QgsComposerImageExportOptionsDialog", "Crop to content", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Left", 0, QApplication::UnicodeUTF8));
        mLeftMarginSpinBox->setSuffix(QApplication::translate("QgsComposerImageExportOptionsDialog", " px", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Right", 0, QApplication::UnicodeUTF8));
        mRightMarginSpinBox->setSuffix(QApplication::translate("QgsComposerImageExportOptionsDialog", " px", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Bottom", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsComposerImageExportOptionsDialog", "Top margin", 0, QApplication::UnicodeUTF8));
        mTopMarginSpinBox->setSuffix(QApplication::translate("QgsComposerImageExportOptionsDialog", " px", 0, QApplication::UnicodeUTF8));
        mBottomMarginSpinBox->setSuffix(QApplication::translate("QgsComposerImageExportOptionsDialog", " px", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsComposerImageExportOptionsDialog: public Ui_QgsComposerImageExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSCOMPOSERIMAGEEXPORTOPTIONS_H
