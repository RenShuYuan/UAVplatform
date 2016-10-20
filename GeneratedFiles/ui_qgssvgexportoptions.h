/********************************************************************************
** Form generated from reading UI file 'qgssvgexportoptions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSSVGEXPORTOPTIONS_H
#define UI_QGSSVGEXPORTOPTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <qgscollapsiblegroupbox.h>
#include "qgsdoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsSvgExportOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QgsCollapsibleGroupBoxBasic *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkMapLayersAsGroup;
    QCheckBox *chkTextAsOutline;
    QgsCollapsibleGroupBoxBasic *mClipToContentGroupBox;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QgsDoubleSpinBox *mTopMarginSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QgsDoubleSpinBox *mLeftMarginSpinBox;
    QLabel *label_11;
    QgsDoubleSpinBox *mRightMarginSpinBox;
    QLabel *label_12;
    QgsDoubleSpinBox *mBottomMarginSpinBox;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsSvgExportOptionsDialog)
    {
        if (QgsSvgExportOptionsDialog->objectName().isEmpty())
            QgsSvgExportOptionsDialog->setObjectName(QString::fromUtf8("QgsSvgExportOptionsDialog"));
        QgsSvgExportOptionsDialog->resize(489, 282);
        verticalLayout = new QVBoxLayout(QgsSvgExportOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QgsCollapsibleGroupBoxBasic(QgsSvgExportOptionsDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chkMapLayersAsGroup = new QCheckBox(groupBox);
        chkMapLayersAsGroup->setObjectName(QString::fromUtf8("chkMapLayersAsGroup"));
        chkMapLayersAsGroup->setChecked(false);

        verticalLayout_2->addWidget(chkMapLayersAsGroup);

        chkTextAsOutline = new QCheckBox(groupBox);
        chkTextAsOutline->setObjectName(QString::fromUtf8("chkTextAsOutline"));
        chkTextAsOutline->setEnabled(true);
        chkTextAsOutline->setChecked(true);

        verticalLayout_2->addWidget(chkTextAsOutline);


        verticalLayout->addWidget(groupBox);

        mClipToContentGroupBox = new QgsCollapsibleGroupBoxBasic(QgsSvgExportOptionsDialog);
        mClipToContentGroupBox->setObjectName(QString::fromUtf8("mClipToContentGroupBox"));
        mClipToContentGroupBox->setCheckable(true);
        mClipToContentGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(mClipToContentGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mTopMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mTopMarginSpinBox->setObjectName(QString::fromUtf8("mTopMarginSpinBox"));
        mTopMarginSpinBox->setSingleStep(0.1);

        gridLayout_5->addWidget(mTopMarginSpinBox, 0, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(mClipToContentGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        mLeftMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mLeftMarginSpinBox->setObjectName(QString::fromUtf8("mLeftMarginSpinBox"));
        mLeftMarginSpinBox->setSingleStep(0.1);

        horizontalLayout_7->addWidget(mLeftMarginSpinBox);

        label_11 = new QLabel(mClipToContentGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        mRightMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mRightMarginSpinBox->setObjectName(QString::fromUtf8("mRightMarginSpinBox"));
        mRightMarginSpinBox->setSingleStep(0.1);

        horizontalLayout_7->addWidget(mRightMarginSpinBox);


        gridLayout_5->addLayout(horizontalLayout_7, 1, 0, 1, 4);

        label_12 = new QLabel(mClipToContentGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 2, 1, 1, 1);

        mBottomMarginSpinBox = new QgsDoubleSpinBox(mClipToContentGroupBox);
        mBottomMarginSpinBox->setObjectName(QString::fromUtf8("mBottomMarginSpinBox"));
        mBottomMarginSpinBox->setSingleStep(0.1);

        gridLayout_5->addWidget(mBottomMarginSpinBox, 2, 2, 1, 1);

        label_4 = new QLabel(mClipToContentGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_5);


        verticalLayout->addWidget(mClipToContentGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(QgsSvgExportOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(chkMapLayersAsGroup, chkTextAsOutline);
        QWidget::setTabOrder(chkTextAsOutline, mClipToContentGroupBox);
        QWidget::setTabOrder(mClipToContentGroupBox, mTopMarginSpinBox);
        QWidget::setTabOrder(mTopMarginSpinBox, mLeftMarginSpinBox);
        QWidget::setTabOrder(mLeftMarginSpinBox, mRightMarginSpinBox);
        QWidget::setTabOrder(mRightMarginSpinBox, mBottomMarginSpinBox);

        retranslateUi(QgsSvgExportOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsSvgExportOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsSvgExportOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsSvgExportOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsSvgExportOptionsDialog)
    {
        QgsSvgExportOptionsDialog->setWindowTitle(QApplication::translate("QgsSvgExportOptionsDialog", "SVG export options", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QgsSvgExportOptionsDialog", "SVG options", 0, QApplication::UnicodeUTF8));
        chkMapLayersAsGroup->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Export map layers as svg groups (may affect label placement)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        chkTextAsOutline->setToolTip(QApplication::translate("QgsSvgExportOptionsDialog", "Uncheck to render map labels as text objects. This will degrade the quality of the map labels but allow editing in vector illustration software.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        chkTextAsOutline->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Render map labels as outlines", 0, QApplication::UnicodeUTF8));
        mClipToContentGroupBox->setTitle(QApplication::translate("QgsSvgExportOptionsDialog", "Crop to content", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Left", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Right", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Bottom", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QgsSvgExportOptionsDialog", "Top margin (mm)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsSvgExportOptionsDialog: public Ui_QgsSvgExportOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSSVGEXPORTOPTIONS_H
