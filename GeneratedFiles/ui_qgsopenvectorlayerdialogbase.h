/********************************************************************************
** Form generated from reading UI file 'qgsopenvectorlayerdialogbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSOPENVECTORLAYERDIALOGBASE_H
#define UI_QGSOPENVECTORLAYERDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_QgsOpenVectorLayerDialogBase
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *srcGroupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *radioSrcFile;
    QRadioButton *radioSrcDirectory;
    QLabel *label_3;
    QComboBox *cmbEncodings;
    QGroupBox *fileGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *labelDirectoryType;
    QComboBox *cmbDirectoryTypes;
    QLabel *labelSrcDataset;
    QLineEdit *inputSrcDataset;
    QPushButton *buttonSelectSrc;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOpenVectorLayerDialogBase)
    {
        if (QgsOpenVectorLayerDialogBase->objectName().isEmpty())
            QgsOpenVectorLayerDialogBase->setObjectName(QString::fromUtf8("QgsOpenVectorLayerDialogBase"));
        QgsOpenVectorLayerDialogBase->setWindowModality(Qt::WindowModal);
        QgsOpenVectorLayerDialogBase->resize(500, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QgsOpenVectorLayerDialogBase->sizePolicy().hasHeightForWidth());
        QgsOpenVectorLayerDialogBase->setSizePolicy(sizePolicy);
        QgsOpenVectorLayerDialogBase->setMinimumSize(QSize(500, 150));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        QgsOpenVectorLayerDialogBase->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        QgsOpenVectorLayerDialogBase->setWindowIcon(icon);
        gridLayout_5 = new QGridLayout(QgsOpenVectorLayerDialogBase);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        srcGroupBox_2 = new QGroupBox(QgsOpenVectorLayerDialogBase);
        srcGroupBox_2->setObjectName(QString::fromUtf8("srcGroupBox_2"));
        sizePolicy.setHeightForWidth(srcGroupBox_2->sizePolicy().hasHeightForWidth());
        srcGroupBox_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(srcGroupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioSrcFile = new QRadioButton(srcGroupBox_2);
        radioSrcFile->setObjectName(QString::fromUtf8("radioSrcFile"));

        gridLayout->addWidget(radioSrcFile, 0, 0, 1, 1);

        radioSrcDirectory = new QRadioButton(srcGroupBox_2);
        radioSrcDirectory->setObjectName(QString::fromUtf8("radioSrcDirectory"));

        gridLayout->addWidget(radioSrcDirectory, 0, 1, 1, 1);

        label_3 = new QLabel(srcGroupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        cmbEncodings = new QComboBox(srcGroupBox_2);
        cmbEncodings->setObjectName(QString::fromUtf8("cmbEncodings"));
        cmbEncodings->setMinimumSize(QSize(380, 0));

        gridLayout->addWidget(cmbEncodings, 1, 1, 1, 2);


        gridLayout_5->addWidget(srcGroupBox_2, 0, 0, 1, 1);

        fileGroupBox = new QGroupBox(QgsOpenVectorLayerDialogBase);
        fileGroupBox->setObjectName(QString::fromUtf8("fileGroupBox"));
        sizePolicy.setHeightForWidth(fileGroupBox->sizePolicy().hasHeightForWidth());
        fileGroupBox->setSizePolicy(sizePolicy);
        fileGroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_3 = new QGridLayout(fileGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelDirectoryType = new QLabel(fileGroupBox);
        labelDirectoryType->setObjectName(QString::fromUtf8("labelDirectoryType"));

        gridLayout_3->addWidget(labelDirectoryType, 0, 0, 1, 1);

        cmbDirectoryTypes = new QComboBox(fileGroupBox);
        cmbDirectoryTypes->setObjectName(QString::fromUtf8("cmbDirectoryTypes"));

        gridLayout_3->addWidget(cmbDirectoryTypes, 0, 2, 1, 2);

        labelSrcDataset = new QLabel(fileGroupBox);
        labelSrcDataset->setObjectName(QString::fromUtf8("labelSrcDataset"));

        gridLayout_3->addWidget(labelSrcDataset, 1, 0, 1, 2);

        inputSrcDataset = new QLineEdit(fileGroupBox);
        inputSrcDataset->setObjectName(QString::fromUtf8("inputSrcDataset"));
        inputSrcDataset->setMinimumSize(QSize(200, 0));

        gridLayout_3->addWidget(inputSrcDataset, 1, 2, 1, 1);

        buttonSelectSrc = new QPushButton(fileGroupBox);
        buttonSelectSrc->setObjectName(QString::fromUtf8("buttonSelectSrc"));

        gridLayout_3->addWidget(buttonSelectSrc, 1, 3, 1, 1);


        gridLayout_5->addWidget(fileGroupBox, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QgsOpenVectorLayerDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Open);

        gridLayout_5->addWidget(buttonBox, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelSrcDataset->setBuddy(inputSrcDataset);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(radioSrcFile, radioSrcDirectory);
        QWidget::setTabOrder(radioSrcDirectory, cmbEncodings);
        QWidget::setTabOrder(cmbEncodings, cmbDirectoryTypes);
        QWidget::setTabOrder(cmbDirectoryTypes, inputSrcDataset);
        QWidget::setTabOrder(inputSrcDataset, buttonSelectSrc);
        QWidget::setTabOrder(buttonSelectSrc, buttonBox);

        retranslateUi(QgsOpenVectorLayerDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), QgsOpenVectorLayerDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QgsOpenVectorLayerDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(QgsOpenVectorLayerDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOpenVectorLayerDialogBase)
    {
        QgsOpenVectorLayerDialogBase->setWindowTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Add vector layer", 0, QApplication::UnicodeUTF8));
        srcGroupBox_2->setTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Source type", 0, QApplication::UnicodeUTF8));
        radioSrcFile->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "File", 0, QApplication::UnicodeUTF8));
        radioSrcDirectory->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Directory", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Encoding", 0, QApplication::UnicodeUTF8));
        fileGroupBox->setTitle(QApplication::translate("QgsOpenVectorLayerDialogBase", "Source", 0, QApplication::UnicodeUTF8));
        labelDirectoryType->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Type", 0, QApplication::UnicodeUTF8));
        labelSrcDataset->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Dataset", 0, QApplication::UnicodeUTF8));
        buttonSelectSrc->setText(QApplication::translate("QgsOpenVectorLayerDialogBase", "Browse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsOpenVectorLayerDialogBase: public Ui_QgsOpenVectorLayerDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSOPENVECTORLAYERDIALOGBASE_H
