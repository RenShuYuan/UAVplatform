/********************************************************************************
** Form generated from reading UI file 'qgsattributeactiondialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEACTIONDIALOGBASE_H
#define UI_QGSATTRIBUTEACTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "qgscollapsiblegroupbox.h"

QT_BEGIN_NAMESPACE

class Ui_QgsAttributeActionDialogBase
{
public:
    QGridLayout *gridLayout_2;
    QgsCollapsibleGroupBox *groupBoxActionList;
    QGridLayout *gridLayout_3;
    QPushButton *moveUpButton;
    QTableWidget *attributeActionTable;
    QPushButton *removeButton;
    QPushButton *moveDownButton;
    QPushButton *addDefaultActionsButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QgsCollapsibleGroupBox *groupBoxActionProperties;
    QLabel *label;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *actionType;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *captureCB;
    QLabel *textLabel1;
    QLineEdit *actionName;
    QLabel *label_2;
    QLabel *textLabel2;
    QGridLayout *gridLayout_4;
    QToolButton *browseButton;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *actionAction;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *insertExpressionButton;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *fieldComboBox;
    QPushButton *insertFieldButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *insertButton;
    QPushButton *updateButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *iconPreview;
    QLineEdit *actionIcon;
    QToolButton *chooseIconButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QgsAttributeActionDialogBase)
    {
        if (QgsAttributeActionDialogBase->objectName().isEmpty())
            QgsAttributeActionDialogBase->setObjectName(QString::fromUtf8("QgsAttributeActionDialogBase"));
        QgsAttributeActionDialogBase->resize(609, 731);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsAttributeActionDialogBase->sizePolicy().hasHeightForWidth());
        QgsAttributeActionDialogBase->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(QgsAttributeActionDialogBase);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBoxActionList = new QgsCollapsibleGroupBox(QgsAttributeActionDialogBase);
        groupBoxActionList->setObjectName(QString::fromUtf8("groupBoxActionList"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(groupBoxActionList->sizePolicy().hasHeightForWidth());
        groupBoxActionList->setSizePolicy(sizePolicy1);
        groupBoxActionList->setProperty("syncGroup", QVariant(QString::fromUtf8("actiongroup")));
        gridLayout_3 = new QGridLayout(groupBoxActionList);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        moveUpButton = new QPushButton(groupBoxActionList);
        moveUpButton->setObjectName(QString::fromUtf8("moveUpButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(moveUpButton->sizePolicy().hasHeightForWidth());
        moveUpButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/images/themes/default/mActionArrowUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUpButton->setIcon(icon);

        gridLayout_3->addWidget(moveUpButton, 1, 0, 1, 1);

        attributeActionTable = new QTableWidget(groupBoxActionList);
        if (attributeActionTable->columnCount() < 4)
            attributeActionTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        attributeActionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        attributeActionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        attributeActionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        attributeActionTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        attributeActionTable->setObjectName(QString::fromUtf8("attributeActionTable"));
        sizePolicy.setHeightForWidth(attributeActionTable->sizePolicy().hasHeightForWidth());
        attributeActionTable->setSizePolicy(sizePolicy);
        attributeActionTable->setSelectionMode(QAbstractItemView::SingleSelection);
        attributeActionTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        attributeActionTable->setColumnCount(4);

        gridLayout_3->addWidget(attributeActionTable, 0, 0, 1, 6);

        removeButton = new QPushButton(groupBoxActionList);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        sizePolicy2.setHeightForWidth(removeButton->sizePolicy().hasHeightForWidth());
        removeButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeButton->setIcon(icon1);

        gridLayout_3->addWidget(removeButton, 1, 3, 1, 1);

        moveDownButton = new QPushButton(groupBoxActionList);
        moveDownButton->setObjectName(QString::fromUtf8("moveDownButton"));
        sizePolicy2.setHeightForWidth(moveDownButton->sizePolicy().hasHeightForWidth());
        moveDownButton->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/images/themes/default/mActionArrowDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDownButton->setIcon(icon2);

        gridLayout_3->addWidget(moveDownButton, 1, 1, 1, 1);

        addDefaultActionsButton = new QPushButton(groupBoxActionList);
        addDefaultActionsButton->setObjectName(QString::fromUtf8("addDefaultActionsButton"));

        gridLayout_3->addWidget(addDefaultActionsButton, 1, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 1, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 2, 1, 1);


        gridLayout_2->addWidget(groupBoxActionList, 0, 0, 1, 1);

        groupBoxActionProperties = new QgsCollapsibleGroupBox(QgsAttributeActionDialogBase);
        groupBoxActionProperties->setObjectName(QString::fromUtf8("groupBoxActionProperties"));
        sizePolicy1.setHeightForWidth(groupBoxActionProperties->sizePolicy().hasHeightForWidth());
        groupBoxActionProperties->setSizePolicy(sizePolicy1);
        groupBoxActionProperties->setProperty("syncGroup", QVariant(QString::fromUtf8("actiongroup")));
        label = new QLabel(groupBoxActionProperties);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 41, 31));
        formLayout = new QFormLayout(groupBoxActionProperties);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        actionType = new QComboBox(groupBoxActionProperties);
        actionType->setObjectName(QString::fromUtf8("actionType"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(actionType->sizePolicy().hasHeightForWidth());
        actionType->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(actionType);

        horizontalSpacer_3 = new QSpacerItem(12, 24, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        captureCB = new QCheckBox(groupBoxActionProperties);
        captureCB->setObjectName(QString::fromUtf8("captureCB"));

        horizontalLayout_4->addWidget(captureCB);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        textLabel1 = new QLabel(groupBoxActionProperties);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

        formLayout->setWidget(1, QFormLayout::LabelRole, textLabel1);

        actionName = new QLineEdit(groupBoxActionProperties);
        actionName->setObjectName(QString::fromUtf8("actionName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, actionName);

        label_2 = new QLabel(groupBoxActionProperties);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        textLabel2 = new QLabel(groupBoxActionProperties);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, textLabel2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        browseButton = new QToolButton(groupBoxActionProperties);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        browseButton->setIcon(icon3);

        gridLayout_4->addWidget(browseButton, 0, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 1, 1, 1, 1);

        actionAction = new QPlainTextEdit(groupBoxActionProperties);
        actionAction->setObjectName(QString::fromUtf8("actionAction"));
        sizePolicy.setHeightForWidth(actionAction->sizePolicy().hasHeightForWidth());
        actionAction->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(actionAction, 0, 0, 2, 1);


        formLayout->setLayout(3, QFormLayout::FieldRole, gridLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        insertExpressionButton = new QPushButton(groupBoxActionProperties);
        insertExpressionButton->setObjectName(QString::fromUtf8("insertExpressionButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(insertExpressionButton->sizePolicy().hasHeightForWidth());
        insertExpressionButton->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(insertExpressionButton);

        horizontalSpacer_2 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        fieldComboBox = new QComboBox(groupBoxActionProperties);
        fieldComboBox->setObjectName(QString::fromUtf8("fieldComboBox"));

        horizontalLayout_2->addWidget(fieldComboBox);

        insertFieldButton = new QPushButton(groupBoxActionProperties);
        insertFieldButton->setObjectName(QString::fromUtf8("insertFieldButton"));
        sizePolicy4.setHeightForWidth(insertFieldButton->sizePolicy().hasHeightForWidth());
        insertFieldButton->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(insertFieldButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        insertButton = new QPushButton(groupBoxActionProperties);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));

        horizontalLayout_3->addWidget(insertButton);

        updateButton = new QPushButton(groupBoxActionProperties);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        horizontalLayout_3->addWidget(updateButton);


        formLayout->setLayout(5, QFormLayout::SpanningRole, horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        iconPreview = new QLabel(groupBoxActionProperties);
        iconPreview->setObjectName(QString::fromUtf8("iconPreview"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(24);
        sizePolicy5.setVerticalStretch(24);
        sizePolicy5.setHeightForWidth(iconPreview->sizePolicy().hasHeightForWidth());
        iconPreview->setSizePolicy(sizePolicy5);
        iconPreview->setMinimumSize(QSize(24, 24));

        horizontalLayout_5->addWidget(iconPreview);

        actionIcon = new QLineEdit(groupBoxActionProperties);
        actionIcon->setObjectName(QString::fromUtf8("actionIcon"));

        horizontalLayout_5->addWidget(actionIcon);

        chooseIconButton = new QToolButton(groupBoxActionProperties);
        chooseIconButton->setObjectName(QString::fromUtf8("chooseIconButton"));

        horizontalLayout_5->addWidget(chooseIconButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_5);


        gridLayout_2->addWidget(groupBoxActionProperties, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(actionType);
        textLabel1->setBuddy(actionName);
        textLabel2->setBuddy(actionAction);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(attributeActionTable, moveUpButton);
        QWidget::setTabOrder(moveUpButton, moveDownButton);
        QWidget::setTabOrder(moveDownButton, removeButton);
        QWidget::setTabOrder(removeButton, addDefaultActionsButton);
        QWidget::setTabOrder(addDefaultActionsButton, actionType);
        QWidget::setTabOrder(actionType, captureCB);
        QWidget::setTabOrder(captureCB, actionName);
        QWidget::setTabOrder(actionName, actionIcon);
        QWidget::setTabOrder(actionIcon, chooseIconButton);
        QWidget::setTabOrder(chooseIconButton, actionAction);
        QWidget::setTabOrder(actionAction, browseButton);
        QWidget::setTabOrder(browseButton, insertExpressionButton);
        QWidget::setTabOrder(insertExpressionButton, fieldComboBox);
        QWidget::setTabOrder(fieldComboBox, insertFieldButton);
        QWidget::setTabOrder(insertFieldButton, insertButton);
        QWidget::setTabOrder(insertButton, updateButton);

        retranslateUi(QgsAttributeActionDialogBase);

        QMetaObject::connectSlotsByName(QgsAttributeActionDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeActionDialogBase)
    {
        QgsAttributeActionDialogBase->setWindowTitle(QApplication::translate("QgsAttributeActionDialogBase", "Attribute Actions", 0, QApplication::UnicodeUTF8));
        groupBoxActionList->setTitle(QApplication::translate("QgsAttributeActionDialogBase", "Action list", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        moveUpButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        moveUpButton->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = attributeActionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QgsAttributeActionDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = attributeActionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QgsAttributeActionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = attributeActionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = attributeActionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QgsAttributeActionDialogBase", "Capture", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        attributeActionTable->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "This list contains all actions that have been defined for the current layer. Add actions by entering the details in the controls below and then pressing the Add to action list button. Actions can be edited here by double clicking on the item.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        removeButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Remove the selected action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        moveDownButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        moveDownButton->setText(QString());
        addDefaultActionsButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Add default actions", 0, QApplication::UnicodeUTF8));
        groupBoxActionProperties->setTitle(QApplication::translate("QgsAttributeActionDialogBase", "Action properties", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QgsAttributeActionDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        actionType->clear();
        actionType->insertItems(0, QStringList()
         << QApplication::translate("QgsAttributeActionDialogBase", "Generic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Python", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Mac", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Windows", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Unix", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsAttributeActionDialogBase", "Open", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        captureCB->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Captures any output from the action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        captureCB->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Captures the standard output or error generated by the action and displays it in a dialog box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        captureCB->setText(QApplication::translate("QgsAttributeActionDialogBase", "Capture output", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        textLabel1->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the name of an action here. The name should be unique (qgis will make it unique if necessary).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        textLabel1->setText(QApplication::translate("QgsAttributeActionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionName->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action name here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionName->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the name of an action here. The name should be unique (qgis will make it unique if necessary).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Icon", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        textLabel2->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action here. This can be any program, script or command that is available on your system. When the action is invoked any set of characters that start with a % and then have the name of a field will be replaced by the value of that field. The special characters %% will be replaced by the value of the field that was selected. Double quote marks group text into single arguments to the program, script or command. Double quotes will be ignored if prefixed with a backslash", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        textLabel2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        browseButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Browse for action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        browseButton->setStatusTip(QApplication::translate("QgsAttributeActionDialogBase", "Click to browse for an action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        browseButton->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Clicking the button will let you select an application to use as the action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        browseButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAction->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action command here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        actionAction->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action here. This can be any program, script or command that is available on your system. When the action is invoked any set of characters within [% and %] will be evaluated as expression and replaced by its result. Double quote marks group text into single arguments to the program, script or command. Double quotes will be ignored if prefixed with a backslash", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        insertExpressionButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts an expression into the action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insertExpressionButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Insert expression...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fieldComboBox->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "The valid attribute names for this layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        insertFieldButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts the selected field into the action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insertFieldButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Insert field", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        insertButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts the action into the list above", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insertButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Add to action list", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        updateButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Update the selected action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        updateButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Update selected action", 0, QApplication::UnicodeUTF8));
        iconPreview->setText(QString());
        chooseIconButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeActionDialogBase: public Ui_QgsAttributeActionDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSATTRIBUTEACTIONDIALOGBASE_H
