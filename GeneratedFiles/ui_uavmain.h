/********************************************************************************
** Form generated from reading UI file 'uavmain.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UAVMAIN_H
#define UI_UAVMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UAVplatformClass
{
public:
    QAction *mActionCustomProjection;
    QAction *mActionOptions;
    QAction *mActionNewProject;
    QAction *mActionSaveMapAsImage;
    QAction *action_P;
    QAction *action;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *mProjectMenu;
    QMenu *mViewMenu;
    QMenu *mLayerMenu;
    QMenu *mSettingsMenu;
    QMenu *mPosMenu;
    QMenu *menu_D;
    QMenu *menu_F;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UAVplatformClass)
    {
        if (UAVplatformClass->objectName().isEmpty())
            UAVplatformClass->setObjectName(QString::fromUtf8("UAVplatformClass"));
        UAVplatformClass->resize(1125, 812);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/sponsors/icons/plane.ico"), QSize(), QIcon::Normal, QIcon::Off);
        UAVplatformClass->setWindowIcon(icon);
        mActionCustomProjection = new QAction(UAVplatformClass);
        mActionCustomProjection->setObjectName(QString::fromUtf8("mActionCustomProjection"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/mActionCustomProjection.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionCustomProjection->setIcon(icon1);
        mActionOptions = new QAction(UAVplatformClass);
        mActionOptions->setObjectName(QString::fromUtf8("mActionOptions"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/mActionOptions.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionOptions->setIcon(icon2);
        mActionNewProject = new QAction(UAVplatformClass);
        mActionNewProject->setObjectName(QString::fromUtf8("mActionNewProject"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/mActionFileNew.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mActionNewProject->setIcon(icon3);
        mActionSaveMapAsImage = new QAction(UAVplatformClass);
        mActionSaveMapAsImage->setObjectName(QString::fromUtf8("mActionSaveMapAsImage"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/mActionSaveMapAsImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        mActionSaveMapAsImage->setIcon(icon4);
        action_P = new QAction(UAVplatformClass);
        action_P->setObjectName(QString::fromUtf8("action_P"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/mActionProjectProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_P->setIcon(icon5);
        action = new QAction(UAVplatformClass);
        action->setObjectName(QString::fromUtf8("action"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionFileExit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon6);
        centralWidget = new QWidget(UAVplatformClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        UAVplatformClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UAVplatformClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1125, 26));
        mProjectMenu = new QMenu(menuBar);
        mProjectMenu->setObjectName(QString::fromUtf8("mProjectMenu"));
        mViewMenu = new QMenu(menuBar);
        mViewMenu->setObjectName(QString::fromUtf8("mViewMenu"));
        mLayerMenu = new QMenu(menuBar);
        mLayerMenu->setObjectName(QString::fromUtf8("mLayerMenu"));
        mSettingsMenu = new QMenu(menuBar);
        mSettingsMenu->setObjectName(QString::fromUtf8("mSettingsMenu"));
        mPosMenu = new QMenu(menuBar);
        mPosMenu->setObjectName(QString::fromUtf8("mPosMenu"));
        menu_D = new QMenu(menuBar);
        menu_D->setObjectName(QString::fromUtf8("menu_D"));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        UAVplatformClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(UAVplatformClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        UAVplatformClass->setStatusBar(statusBar);

        menuBar->addAction(mProjectMenu->menuAction());
        menuBar->addAction(mViewMenu->menuAction());
        menuBar->addAction(mLayerMenu->menuAction());
        menuBar->addAction(mPosMenu->menuAction());
        menuBar->addAction(menu_D->menuAction());
        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(mSettingsMenu->menuAction());

        retranslateUi(UAVplatformClass);

        QMetaObject::connectSlotsByName(UAVplatformClass);
    } // setupUi

    void retranslateUi(QMainWindow *UAVplatformClass)
    {
        UAVplatformClass->setWindowTitle(QApplication::translate("UAVplatformClass", "\346\227\240\344\272\272\346\234\272\350\210\252\347\251\272\345\275\261\345\203\217\345\215\217\345\220\214\344\274\230\345\214\226\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        mActionCustomProjection->setText(QApplication::translate("UAVplatformClass", "\350\207\252\345\256\232\344\271\211\345\235\220\346\240\207\345\217\202\347\205\247\347\263\273(&P)...", 0, QApplication::UnicodeUTF8));
        mActionOptions->setText(QApplication::translate("UAVplatformClass", "\351\200\211\351\241\271(&O)...", 0, QApplication::UnicodeUTF8));
        mActionNewProject->setText(QApplication::translate("UAVplatformClass", "\346\226\260\345\273\272(&N)", 0, QApplication::UnicodeUTF8));
        mActionNewProject->setShortcut(QApplication::translate("UAVplatformClass", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        mActionSaveMapAsImage->setText(QApplication::translate("UAVplatformClass", "\345\217\246\345\255\230\344\270\272\344\275\215\345\233\276(&I)...", 0, QApplication::UnicodeUTF8));
        action_P->setText(QApplication::translate("UAVplatformClass", "\351\241\271\347\233\256\345\261\236\346\200\247(&P)...", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("UAVplatformClass", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        action->setShortcut(QApplication::translate("UAVplatformClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        mProjectMenu->setTitle(QApplication::translate("UAVplatformClass", "\351\241\271\347\233\256(&J)", 0, QApplication::UnicodeUTF8));
        mViewMenu->setTitle(QApplication::translate("UAVplatformClass", "\350\247\206\345\233\276(&V)", 0, QApplication::UnicodeUTF8));
        mLayerMenu->setTitle(QApplication::translate("UAVplatformClass", "\345\233\276\345\261\202(&L)", 0, QApplication::UnicodeUTF8));
        mSettingsMenu->setTitle(QApplication::translate("UAVplatformClass", "\350\256\276\347\275\256(&S)", 0, QApplication::UnicodeUTF8));
        mPosMenu->setTitle(QApplication::translate("UAVplatformClass", "\346\233\235\345\205\211\347\202\271\351\242\204\345\244\204\347\220\206(&P)", 0, QApplication::UnicodeUTF8));
        menu_D->setTitle(QApplication::translate("UAVplatformClass", "\345\212\250\346\200\201\350\201\224\345\212\250(&D)", 0, QApplication::UnicodeUTF8));
        menu_F->setTitle(QApplication::translate("UAVplatformClass", "\346\225\260\346\215\256\345\210\206\346\236\220(&A)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UAVplatformClass: public Ui_UAVplatformClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UAVMAIN_H
