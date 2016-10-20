/********************************************************************************
** Form generated from reading UI file 'qgslabelingwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSLABELINGWIDGET_H
#define UI_QGSLABELINGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QgsLabelingWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *mLabelModeComboBox;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mEngineSettingsButton;
    QStackedWidget *mStackedWidget;

    void setupUi(QWidget *QgsLabelingWidget)
    {
        if (QgsLabelingWidget->objectName().isEmpty())
            QgsLabelingWidget->setObjectName(QString::fromUtf8("QgsLabelingWidget"));
        QgsLabelingWidget->resize(572, 300);
        verticalLayout = new QVBoxLayout(QgsLabelingWidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mLabelModeComboBox = new QComboBox(QgsLabelingWidget);
        mLabelModeComboBox->addItem(QString());
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/labelingSingle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelModeComboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/labelingRuleBased.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelModeComboBox->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/labelingObstacle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mLabelModeComboBox->addItem(icon2, QString());
        mLabelModeComboBox->setObjectName(QString::fromUtf8("mLabelModeComboBox"));

        horizontalLayout->addWidget(mLabelModeComboBox);

        horizontalSpacer_5 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        mEngineSettingsButton = new QPushButton(QgsLabelingWidget);
        mEngineSettingsButton->setObjectName(QString::fromUtf8("mEngineSettingsButton"));
        mEngineSettingsButton->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mIconAutoPlacementSettings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mEngineSettingsButton->setIcon(icon3);
        mEngineSettingsButton->setIconSize(QSize(24, 16));

        horizontalLayout->addWidget(mEngineSettingsButton);


        verticalLayout->addLayout(horizontalLayout);

        mStackedWidget = new QStackedWidget(QgsLabelingWidget);
        mStackedWidget->setObjectName(QString::fromUtf8("mStackedWidget"));

        verticalLayout->addWidget(mStackedWidget);


        retranslateUi(QgsLabelingWidget);

        QMetaObject::connectSlotsByName(QgsLabelingWidget);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelingWidget)
    {
        mLabelModeComboBox->setItemText(0, QApplication::translate("QgsLabelingWidget", "No labels", 0, QApplication::UnicodeUTF8));
        mLabelModeComboBox->setItemText(1, QApplication::translate("QgsLabelingWidget", "Show labels for this layer", 0, QApplication::UnicodeUTF8));
        mLabelModeComboBox->setItemText(2, QApplication::translate("QgsLabelingWidget", "Rule-based labeling", 0, QApplication::UnicodeUTF8));
        mLabelModeComboBox->setItemText(3, QApplication::translate("QgsLabelingWidget", "Discourage other labels from covering features in this layer", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
        mEngineSettingsButton->setToolTip(QApplication::translate("QgsLabelingWidget", "Automated placement settings (apply to all layers)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(QgsLabelingWidget);
    } // retranslateUi

};

namespace Ui {
    class QgsLabelingWidget: public Ui_QgsLabelingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSLABELINGWIDGET_H
