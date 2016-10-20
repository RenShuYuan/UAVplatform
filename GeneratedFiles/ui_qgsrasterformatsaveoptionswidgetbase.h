/********************************************************************************
** Form generated from reading UI file 'qgsrasterformatsaveoptionswidgetbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H
#define UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsRasterFormatSaveOptionsWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QWidget *mProfileButtons;
    QHBoxLayout *mProfileButtonsLayout;
    QPushButton *mProfileNewButton;
    QPushButton *mProfileDeleteButton;
    QPushButton *mProfileResetButton;
    QComboBox *mProfileComboBox;
    QLabel *mProfileLabel;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QTableWidget *mOptionsTable;
    QGridLayout *gridLayout_4;
    QPushButton *mOptionsAddButton;
    QPushButton *mOptionsValidateButton;
    QPushButton *mOptionsHelpButton;
    QPushButton *mOptionsDeleteButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *mOptionsLineEdit;
    QFrame *mSeparator;

    void setupUi(QWidget *QgsRasterFormatSaveOptionsWidgetBase)
    {
        if (QgsRasterFormatSaveOptionsWidgetBase->objectName().isEmpty())
            QgsRasterFormatSaveOptionsWidgetBase->setObjectName(QString::fromUtf8("QgsRasterFormatSaveOptionsWidgetBase"));
        QgsRasterFormatSaveOptionsWidgetBase->resize(341, 203);
        gridLayout = new QGridLayout(QgsRasterFormatSaveOptionsWidgetBase);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mProfileButtons = new QWidget(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileButtons->setObjectName(QString::fromUtf8("mProfileButtons"));
        mProfileButtonsLayout = new QHBoxLayout(mProfileButtons);
        mProfileButtonsLayout->setContentsMargins(0, 0, 0, 0);
        mProfileButtonsLayout->setObjectName(QString::fromUtf8("mProfileButtonsLayout"));
        mProfileNewButton = new QPushButton(mProfileButtons);
        mProfileNewButton->setObjectName(QString::fromUtf8("mProfileNewButton"));

        mProfileButtonsLayout->addWidget(mProfileNewButton);

        mProfileDeleteButton = new QPushButton(mProfileButtons);
        mProfileDeleteButton->setObjectName(QString::fromUtf8("mProfileDeleteButton"));

        mProfileButtonsLayout->addWidget(mProfileDeleteButton);

        mProfileResetButton = new QPushButton(mProfileButtons);
        mProfileResetButton->setObjectName(QString::fromUtf8("mProfileResetButton"));

        mProfileButtonsLayout->addWidget(mProfileResetButton);


        gridLayout_3->addWidget(mProfileButtons, 1, 1, 1, 1);

        mProfileComboBox = new QComboBox(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileComboBox->setObjectName(QString::fromUtf8("mProfileComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mProfileComboBox->sizePolicy().hasHeightForWidth());
        mProfileComboBox->setSizePolicy(sizePolicy);
        mProfileComboBox->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(mProfileComboBox, 0, 1, 1, 1);

        mProfileLabel = new QLabel(QgsRasterFormatSaveOptionsWidgetBase);
        mProfileLabel->setObjectName(QString::fromUtf8("mProfileLabel"));

        gridLayout_3->addWidget(mProfileLabel, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 1, 1, 1);

        mOptionsStackedWidget = new QStackedWidget(QgsRasterFormatSaveOptionsWidgetBase);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mOptionsTable = new QTableWidget(page);
        if (mOptionsTable->columnCount() < 2)
            mOptionsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mOptionsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mOptionsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        mOptionsTable->setObjectName(QString::fromUtf8("mOptionsTable"));
        mOptionsTable->setMinimumSize(QSize(204, 0));
        mOptionsTable->horizontalHeader()->setMinimumSectionSize(30);
        mOptionsTable->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(mOptionsTable, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mOptionsAddButton = new QPushButton(page);
        mOptionsAddButton->setObjectName(QString::fromUtf8("mOptionsAddButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsAddButton->sizePolicy().hasHeightForWidth());
        mOptionsAddButton->setSizePolicy(sizePolicy1);
        mOptionsAddButton->setIconSize(QSize(1, 1));

        gridLayout_4->addWidget(mOptionsAddButton, 0, 0, 1, 1);

        mOptionsValidateButton = new QPushButton(page);
        mOptionsValidateButton->setObjectName(QString::fromUtf8("mOptionsValidateButton"));

        gridLayout_4->addWidget(mOptionsValidateButton, 2, 0, 1, 2);

        mOptionsHelpButton = new QPushButton(page);
        mOptionsHelpButton->setObjectName(QString::fromUtf8("mOptionsHelpButton"));

        gridLayout_4->addWidget(mOptionsHelpButton, 3, 0, 1, 2);

        mOptionsDeleteButton = new QPushButton(page);
        mOptionsDeleteButton->setObjectName(QString::fromUtf8("mOptionsDeleteButton"));
        sizePolicy1.setHeightForWidth(mOptionsDeleteButton->sizePolicy().hasHeightForWidth());
        mOptionsDeleteButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(mOptionsDeleteButton, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_4->addItem(verticalSpacer_3, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 0, 1, 1, 1);

        mOptionsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mOptionsLineEdit = new QLineEdit(page_2);
        mOptionsLineEdit->setObjectName(QString::fromUtf8("mOptionsLineEdit"));
        mOptionsLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_2->addWidget(mOptionsLineEdit);

        mOptionsStackedWidget->addWidget(page_2);

        gridLayout->addWidget(mOptionsStackedWidget, 2, 1, 1, 1);

        mSeparator = new QFrame(QgsRasterFormatSaveOptionsWidgetBase);
        mSeparator->setObjectName(QString::fromUtf8("mSeparator"));
        mSeparator->setFrameShape(QFrame::HLine);
        mSeparator->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(mSeparator, 1, 1, 1, 1);

        QWidget::setTabOrder(mProfileComboBox, mProfileNewButton);
        QWidget::setTabOrder(mProfileNewButton, mProfileDeleteButton);
        QWidget::setTabOrder(mProfileDeleteButton, mProfileResetButton);
        QWidget::setTabOrder(mProfileResetButton, mOptionsTable);
        QWidget::setTabOrder(mOptionsTable, mOptionsAddButton);
        QWidget::setTabOrder(mOptionsAddButton, mOptionsDeleteButton);
        QWidget::setTabOrder(mOptionsDeleteButton, mOptionsValidateButton);
        QWidget::setTabOrder(mOptionsValidateButton, mOptionsHelpButton);
        QWidget::setTabOrder(mOptionsHelpButton, mOptionsLineEdit);

        retranslateUi(QgsRasterFormatSaveOptionsWidgetBase);

        mOptionsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterFormatSaveOptionsWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsRasterFormatSaveOptionsWidgetBase)
    {
        QgsRasterFormatSaveOptionsWidgetBase->setWindowTitle(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
        mProfileNewButton->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "New", 0, QApplication::UnicodeUTF8));
        mProfileDeleteButton->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Remove", 0, QApplication::UnicodeUTF8));
        mProfileResetButton->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Reset", 0, QApplication::UnicodeUTF8));
        mProfileLabel->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Profile", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = mOptionsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mOptionsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Value", 0, QApplication::UnicodeUTF8));
        mOptionsAddButton->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "+", 0, QApplication::UnicodeUTF8));
        mOptionsValidateButton->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Validate", 0, QApplication::UnicodeUTF8));
        mOptionsHelpButton->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Help", 0, QApplication::UnicodeUTF8));
        mOptionsDeleteButton->setText(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mOptionsLineEdit->setToolTip(QApplication::translate("QgsRasterFormatSaveOptionsWidgetBase", "Insert KEY=VALUE pairs separated by spaces", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QgsRasterFormatSaveOptionsWidgetBase: public Ui_QgsRasterFormatSaveOptionsWidgetBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERFORMATSAVEOPTIONSWIDGETBASE_H
