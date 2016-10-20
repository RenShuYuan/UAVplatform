/********************************************************************************
** Form generated from reading UI file 'qgsdatumtransformdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSDATUMTRANSFORMDIALOGBASE_H
#define UI_QGSDATUMTRANSFORMDIALOGBASE_H

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
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsDatumTransformDialogBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mDatumTransformTreeWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *mRememberSelectionCheckBox;
    QSpacerItem *horizontalSpacer;
    QCheckBox *mHideDeprecatedCheckBox;
    QLabel *label_2;
    QLabel *mLabelSrcCrs;
    QLabel *mLabelDstCrs;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QLabel *mLabelLayer;
    QLabel *mLabelDstDescription;
    QLabel *mLabelSrcDescription;

    void setupUi(QDialog *QgsDatumTransformDialogBase)
    {
        if (QgsDatumTransformDialogBase->objectName().isEmpty())
            QgsDatumTransformDialogBase->setObjectName(QString::fromUtf8("QgsDatumTransformDialogBase"));
        QgsDatumTransformDialogBase->resize(547, 285);
        gridLayout = new QGridLayout(QgsDatumTransformDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mDatumTransformTreeWidget = new QTreeWidget(QgsDatumTransformDialogBase);
        mDatumTransformTreeWidget->setObjectName(QString::fromUtf8("mDatumTransformTreeWidget"));

        gridLayout->addWidget(mDatumTransformTreeWidget, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mRememberSelectionCheckBox = new QCheckBox(QgsDatumTransformDialogBase);
        mRememberSelectionCheckBox->setObjectName(QString::fromUtf8("mRememberSelectionCheckBox"));

        horizontalLayout->addWidget(mRememberSelectionCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mHideDeprecatedCheckBox = new QCheckBox(QgsDatumTransformDialogBase);
        mHideDeprecatedCheckBox->setObjectName(QString::fromUtf8("mHideDeprecatedCheckBox"));

        horizontalLayout->addWidget(mHideDeprecatedCheckBox);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 2);

        label_2 = new QLabel(QgsDatumTransformDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mLabelSrcCrs = new QLabel(QgsDatumTransformDialogBase);
        mLabelSrcCrs->setObjectName(QString::fromUtf8("mLabelSrcCrs"));
        mLabelSrcCrs->setText(QString::fromUtf8("Source CRS"));

        gridLayout->addWidget(mLabelSrcCrs, 1, 1, 1, 1);

        mLabelDstCrs = new QLabel(QgsDatumTransformDialogBase);
        mLabelDstCrs->setObjectName(QString::fromUtf8("mLabelDstCrs"));
        mLabelDstCrs->setText(QString::fromUtf8("Destination CRS"));

        gridLayout->addWidget(mLabelDstCrs, 2, 1, 1, 1);

        label = new QLabel(QgsDatumTransformDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsDatumTransformDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 2);

        label_3 = new QLabel(QgsDatumTransformDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        mLabelLayer = new QLabel(QgsDatumTransformDialogBase);
        mLabelLayer->setObjectName(QString::fromUtf8("mLabelLayer"));
        mLabelLayer->setText(QString::fromUtf8("layer name"));

        gridLayout->addWidget(mLabelLayer, 0, 1, 1, 1);

        mLabelDstDescription = new QLabel(QgsDatumTransformDialogBase);
        mLabelDstDescription->setObjectName(QString::fromUtf8("mLabelDstDescription"));
        mLabelDstDescription->setText(QString::fromUtf8("Description"));
        mLabelDstDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelDstDescription->setWordWrap(true);

        gridLayout->addWidget(mLabelDstDescription, 4, 1, 1, 1);

        mLabelSrcDescription = new QLabel(QgsDatumTransformDialogBase);
        mLabelSrcDescription->setObjectName(QString::fromUtf8("mLabelSrcDescription"));
        mLabelSrcDescription->setText(QString::fromUtf8("Description"));
        mLabelSrcDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mLabelSrcDescription->setWordWrap(true);

        gridLayout->addWidget(mLabelSrcDescription, 4, 0, 1, 1);

        QWidget::setTabOrder(mDatumTransformTreeWidget, mRememberSelectionCheckBox);
        QWidget::setTabOrder(mRememberSelectionCheckBox, mHideDeprecatedCheckBox);
        QWidget::setTabOrder(mHideDeprecatedCheckBox, buttonBox);

        retranslateUi(QgsDatumTransformDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsDatumTransformDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsDatumTransformDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsDatumTransformDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDatumTransformDialogBase)
    {
        QgsDatumTransformDialogBase->setWindowTitle(QApplication::translate("QgsDatumTransformDialogBase", "Select datum transformations", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mDatumTransformTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsDatumTransformDialogBase", "dst transform", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsDatumTransformDialogBase", "src transform", 0, QApplication::UnicodeUTF8));
        mRememberSelectionCheckBox->setText(QApplication::translate("QgsDatumTransformDialogBase", "Remember selection", 0, QApplication::UnicodeUTF8));
        mHideDeprecatedCheckBox->setText(QApplication::translate("QgsDatumTransformDialogBase", "Hide deprecated", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsDatumTransformDialogBase", "Destination CRS", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsDatumTransformDialogBase", "Source CRS", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsDatumTransformDialogBase", "Layer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsDatumTransformDialogBase: public Ui_QgsDatumTransformDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSDATUMTRANSFORMDIALOGBASE_H
