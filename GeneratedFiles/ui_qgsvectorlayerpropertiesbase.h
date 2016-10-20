/********************************************************************************
** Form generated from reading UI file 'qgsvectorlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSVECTORLAYERPROPERTIESBASE_H
#define UI_QGSVECTORLAYERPROPERTIESBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgsprojectionselectionwidget.h>
#include <qgsvariableeditorwidget.h>
#include "qgscollapsiblegroupbox.h"
#include "qgsfieldcombobox.h"
#include "qgsscalecombobox.h"
#include "qgsscalerangewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsVectorLayerPropertiesBase
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *mOptionsSplitter;
    QFrame *mOptionsListFrame;
    QVBoxLayout *verticalLayout_2;
    QListWidget *mOptionsListWidget;
    QFrame *mOptionsFrame;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *mOptionsStackedWidget;
    QWidget *mOptsPage_General;
    QVBoxLayout *verticalLayout_14;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_13;
    QgsCollapsibleGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *textLabel3;
    QFrame *mDataSourceEncodingFrame;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *mLayerOrigNameLineEdit;
    QLineEdit *txtDisplayName;
    QLabel *label_2;
    QLabel *lblLayerSource;
    QLineEdit *txtLayerSource;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *cboProviderEncoding;
    QSpacerItem *horizontalSpacer_2;
    QgsCollapsibleGroupBox *indexGroupBox;
    QVBoxLayout *verticalLayout_27;
    QgsProjectionSelectionWidget *mCrsSelector;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pbnIndex;
    QPushButton *pbnUpdateExtents;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QgsCollapsibleGroupBox *mScaleVisibilityGroupBox;
    QGridLayout *gridLayout_6;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QgsCollapsibleGroupBox *mSubsetGroupBox;
    QGridLayout *gridLayout_4;
    QPushButton *pbnQueryBuilder;
    QSpacerItem *spacerItem;
    QTextEdit *txtSubsetSQL;
    QSpacerItem *verticalSpacer;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_18;
    QStackedWidget *widgetStackRenderers;
    QWidget *mOptsPage_Labels;
    QVBoxLayout *verticalLayout_12;
    QFrame *labelingFrame;
    QWidget *mOptsPage_LabelsOld;
    QVBoxLayout *verticalLayout_30;
    QScrollArea *scrollArea_9;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_28;
    QCheckBox *labelCheckBox;
    QFrame *labelOptionsFrame;
    QWidget *mOptsPage_Fields;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_20;
    QFrame *mFieldsFrame;
    QWidget *mOptsPage_Rendering;
    QVBoxLayout *verticalLayout_19;
    QScrollArea *scrollArea_19;
    QWidget *scrollAreaWidgetContents_19;
    QVBoxLayout *verticalLayout_32;
    QGroupBox *mSimplifyDrawingGroupBox;
    QGridLayout *_12;
    QLabel *label_59;
    QLabel *label_56;
    QDoubleSpinBox *mSimplifyDrawingSpinBox;
    QLabel *mSimplifyDrawingPx;
    QSpacerItem *horizontalSpacer_40;
    QCheckBox *mSimplifyDrawingAtProvider;
    QLabel *mSimplifyMaxScaleLabel;
    QgsScaleComboBox *mSimplifyMaximumScaleComboBox;
    QCheckBox *mForceRasterCheckBox;
    QSpacerItem *verticalSpacer_6;
    QWidget *mOptsPage_Display;
    QVBoxLayout *verticalLayout_25;
    QScrollArea *scrollArea_10;
    QWidget *scrollAreaWidgetContents_10;
    QVBoxLayout *verticalLayout_26;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_18;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *insertExpressionButton;
    QSpacerItem *horizontalSpacer_4;
    QgsFieldComboBox *fieldComboBox;
    QPushButton *insertFieldButton;
    QTextEdit *htmlMapTip;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *htmlRadio;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *fieldComboRadio;
    QgsFieldComboBox *displayFieldComboBox;
    QWidget *mOptsPage_Actions;
    QVBoxLayout *verticalLayout_16;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_21;
    QFrame *actionOptionsFrame;
    QWidget *mOptsPage_Joins;
    QVBoxLayout *verticalLayout_17;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_23;
    QTreeWidget *mJoinTreeWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mButtonAddJoin;
    QPushButton *mButtonRemoveJoin;
    QPushButton *mButtonEditJoin;
    QSpacerItem *horizontalSpacer;
    QWidget *mOptsPage_Diagrams;
    QVBoxLayout *verticalLayout_10;
    QFrame *mDiagramFrame;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_3;
    QgsCollapsibleGroupBox *mMetaDescriptionGrpBx;
    QGridLayout *gridLayout_5;
    QLabel *mLayerTitleLabel;
    QLineEdit *mLayerTitleLineEdit;
    QLabel *mLayerAbstractLabel;
    QTextEdit *mLayerAbstractTextEdit;
    QLabel *mLayerKeywordListLabel;
    QLineEdit *mLayerKeywordListLineEdit;
    QLabel *mLayerDataUrlLabel;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *mLayerDataUrlLineEdit;
    QLabel *mLayerDataUrlFormatLabel;
    QComboBox *mLayerDataUrlFormatComboBox;
    QLabel *mLayerShortNameLabel;
    QLineEdit *mLayerShortNameLineEdit;
    QgsCollapsibleGroupBox *mMetaAttributionGrpBx;
    QGridLayout *gridLayout_7;
    QLabel *mLayerAttributionLabel;
    QLineEdit *mLayerAttributionLineEdit;
    QLabel *mLayerAttributionUrlLabel;
    QLineEdit *mLayerAttributionUrlLineEdit;
    QgsCollapsibleGroupBox *mMetaMetaUrlGrpBx;
    QGridLayout *gridLayout_9;
    QLabel *mLayerMetadataUrlLabel;
    QLineEdit *mLayerMetadataUrlLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *mLayerMetadataUrlTypeLabel;
    QComboBox *mLayerMetadataUrlTypeComboBox;
    QLabel *mLayerMetadataUrlFormatLabel;
    QComboBox *mLayerMetadataUrlFormatComboBox;
    QSpacerItem *horizontalSpacer_5;
    QgsCollapsibleGroupBox *mMetaLegendGrpBx;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mLayerLegendUrlLabel;
    QLineEdit *mLayerLegendUrlLineEdit;
    QLabel *mLayerLegendUrlFormatLabel;
    QComboBox *mLayerLegendUrlFormatComboBox;
    QgsCollapsibleGroupBox *mMetaPropertiesGrpBx;
    QVBoxLayout *verticalLayout_9;
    QTextEdit *teMetadata;
    QSpacerItem *verticalSpacer_3;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_9;
    QgsVariableEditorWidget *mVariableEditor;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout_btnbox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsVectorLayerPropertiesBase)
    {
        if (QgsVectorLayerPropertiesBase->objectName().isEmpty())
            QgsVectorLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsVectorLayerPropertiesBase"));
        QgsVectorLayerPropertiesBase->resize(904, 588);
        QgsVectorLayerPropertiesBase->setMinimumSize(QSize(825, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/qgis-icon-16x16.png"), QSize(), QIcon::Normal, QIcon::Off);
        QgsVectorLayerPropertiesBase->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(QgsVectorLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsVectorLayerPropertiesBase);
        mOptionsSplitter->setObjectName(QString::fromUtf8("mOptionsSplitter"));
        mOptionsSplitter->setOrientation(Qt::Horizontal);
        mOptionsSplitter->setChildrenCollapsible(false);
        mOptionsListFrame = new QFrame(mOptionsSplitter);
        mOptionsListFrame->setObjectName(QString::fromUtf8("mOptionsListFrame"));
        mOptionsListFrame->setMinimumSize(QSize(0, 0));
        mOptionsListFrame->setFrameShape(QFrame::NoFrame);
        mOptionsListFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mOptionsListFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mOptionsListWidget = new QListWidget(mOptionsListFrame);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labels.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/labels.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/attributes.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/rendering.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/display.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem6->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/action.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem7->setIcon(icon8);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/join.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem8->setIcon(icon9);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/diagram.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem9 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem9->setIcon(icon10);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem10 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem10->setIcon(icon11);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mIconExpression.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem11 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem11->setIcon(icon12);
        mOptionsListWidget->setObjectName(QString::fromUtf8("mOptionsListWidget"));
        mOptionsListWidget->setMinimumSize(QSize(58, 0));
        mOptionsListWidget->setMaximumSize(QSize(150, 16777215));
        mOptionsListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mOptionsListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mOptionsListWidget->setIconSize(QSize(32, 32));
        mOptionsListWidget->setTextElideMode(Qt::ElideNone);
        mOptionsListWidget->setResizeMode(QListView::Adjust);
        mOptionsListWidget->setWordWrap(true);

        verticalLayout_2->addWidget(mOptionsListWidget);

        mOptionsSplitter->addWidget(mOptionsListFrame);
        mOptionsFrame = new QFrame(mOptionsSplitter);
        mOptionsFrame->setObjectName(QString::fromUtf8("mOptionsFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mOptionsFrame->sizePolicy().hasHeightForWidth());
        mOptionsFrame->setSizePolicy(sizePolicy);
        mOptionsFrame->setFrameShape(QFrame::NoFrame);
        mOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mOptionsFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        mOptionsStackedWidget = new QStackedWidget(mOptionsFrame);
        mOptionsStackedWidget->setObjectName(QString::fromUtf8("mOptionsStackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mOptionsStackedWidget->sizePolicy().hasHeightForWidth());
        mOptionsStackedWidget->setSizePolicy(sizePolicy1);
        mOptsPage_General = new QWidget();
        mOptsPage_General->setObjectName(QString::fromUtf8("mOptsPage_General"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_General);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(mOptsPage_General);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 331, 431));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        groupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel3 = new QLabel(groupBox);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout->addWidget(textLabel3, 1, 0, 1, 1);

        mDataSourceEncodingFrame = new QFrame(groupBox);
        mDataSourceEncodingFrame->setObjectName(QString::fromUtf8("mDataSourceEncodingFrame"));
        horizontalLayout_4 = new QHBoxLayout(mDataSourceEncodingFrame);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(mDataSourceEncodingFrame, 5, 0, 1, 1);

        mLayerOrigNameLineEdit = new QLineEdit(groupBox);
        mLayerOrigNameLineEdit->setObjectName(QString::fromUtf8("mLayerOrigNameLineEdit"));

        gridLayout->addWidget(mLayerOrigNameLineEdit, 1, 1, 1, 1);

        txtDisplayName = new QLineEdit(groupBox);
        txtDisplayName->setObjectName(QString::fromUtf8("txtDisplayName"));
        txtDisplayName->setReadOnly(true);

        gridLayout->addWidget(txtDisplayName, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        lblLayerSource = new QLabel(groupBox);
        lblLayerSource->setObjectName(QString::fromUtf8("lblLayerSource"));

        gridLayout->addWidget(lblLayerSource, 2, 0, 1, 1);

        txtLayerSource = new QLineEdit(groupBox);
        txtLayerSource->setObjectName(QString::fromUtf8("txtLayerSource"));
        txtLayerSource->setEnabled(true);
        txtLayerSource->setReadOnly(true);

        gridLayout->addWidget(txtLayerSource, 2, 1, 1, 3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(label_3);

        cboProviderEncoding = new QComboBox(groupBox);
        cboProviderEncoding->setObjectName(QString::fromUtf8("cboProviderEncoding"));

        horizontalLayout_6->addWidget(cboProviderEncoding);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 4);


        verticalLayout_13->addWidget(groupBox);

        indexGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        indexGroupBox->setObjectName(QString::fromUtf8("indexGroupBox"));
        indexGroupBox->setCheckable(false);
        indexGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("vectorgeneral")));
        verticalLayout_27 = new QVBoxLayout(indexGroupBox);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        mCrsSelector = new QgsProjectionSelectionWidget(indexGroupBox);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_27->addWidget(mCrsSelector);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pbnIndex = new QPushButton(indexGroupBox);
        pbnIndex->setObjectName(QString::fromUtf8("pbnIndex"));

        horizontalLayout_5->addWidget(pbnIndex);

        pbnUpdateExtents = new QPushButton(indexGroupBox);
        pbnUpdateExtents->setObjectName(QString::fromUtf8("pbnUpdateExtents"));

        horizontalLayout_5->addWidget(pbnUpdateExtents);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_27->addLayout(horizontalLayout_5);

        line = new QFrame(indexGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_27->addWidget(line);


        verticalLayout_13->addWidget(indexGroupBox);

        mScaleVisibilityGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mScaleVisibilityGroupBox->setObjectName(QString::fromUtf8("mScaleVisibilityGroupBox"));
        mScaleVisibilityGroupBox->setCheckable(true);
        gridLayout_6 = new QGridLayout(mScaleVisibilityGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mScaleRangeWidget = new QgsScaleRangeWidget(mScaleVisibilityGroupBox);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        gridLayout_6->addWidget(mScaleRangeWidget, 0, 0, 1, 1);


        verticalLayout_13->addWidget(mScaleVisibilityGroupBox);

        mSubsetGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mSubsetGroupBox->setObjectName(QString::fromUtf8("mSubsetGroupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(3);
        sizePolicy3.setHeightForWidth(mSubsetGroupBox->sizePolicy().hasHeightForWidth());
        mSubsetGroupBox->setSizePolicy(sizePolicy3);
        gridLayout_4 = new QGridLayout(mSubsetGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pbnQueryBuilder = new QPushButton(mSubsetGroupBox);
        pbnQueryBuilder->setObjectName(QString::fromUtf8("pbnQueryBuilder"));

        gridLayout_4->addWidget(pbnQueryBuilder, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(0, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(spacerItem, 1, 0, 1, 1);

        txtSubsetSQL = new QTextEdit(mSubsetGroupBox);
        txtSubsetSQL->setObjectName(QString::fromUtf8("txtSubsetSQL"));
        txtSubsetSQL->setEnabled(false);
        txtSubsetSQL->setAcceptDrops(false);
        txtSubsetSQL->setAcceptRichText(false);

        gridLayout_4->addWidget(txtSubsetSQL, 0, 0, 1, 2);

        txtSubsetSQL->raise();
        pbnQueryBuilder->raise();

        verticalLayout_13->addWidget(mSubsetGroupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_General);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QString::fromUtf8("mOptsPage_Style"));
        verticalLayout_11 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(mOptsPage_Style);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_18 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        widgetStackRenderers = new QStackedWidget(scrollAreaWidgetContents_3);
        widgetStackRenderers->setObjectName(QString::fromUtf8("widgetStackRenderers"));
        sizePolicy1.setHeightForWidth(widgetStackRenderers->sizePolicy().hasHeightForWidth());
        widgetStackRenderers->setSizePolicy(sizePolicy1);
        widgetStackRenderers->setFrameShape(QFrame::NoFrame);
        widgetStackRenderers->setFrameShadow(QFrame::Sunken);

        verticalLayout_18->addWidget(widgetStackRenderers);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_11->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Labels = new QWidget();
        mOptsPage_Labels->setObjectName(QString::fromUtf8("mOptsPage_Labels"));
        verticalLayout_12 = new QVBoxLayout(mOptsPage_Labels);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        labelingFrame = new QFrame(mOptsPage_Labels);
        labelingFrame->setObjectName(QString::fromUtf8("labelingFrame"));
        sizePolicy1.setHeightForWidth(labelingFrame->sizePolicy().hasHeightForWidth());
        labelingFrame->setSizePolicy(sizePolicy1);
        labelingFrame->setFrameShape(QFrame::NoFrame);
        labelingFrame->setFrameShadow(QFrame::Plain);

        verticalLayout_12->addWidget(labelingFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Labels);
        mOptsPage_LabelsOld = new QWidget();
        mOptsPage_LabelsOld->setObjectName(QString::fromUtf8("mOptsPage_LabelsOld"));
        verticalLayout_30 = new QVBoxLayout(mOptsPage_LabelsOld);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalLayout_30->setContentsMargins(0, 0, 0, 0);
        scrollArea_9 = new QScrollArea(mOptsPage_LabelsOld);
        scrollArea_9->setObjectName(QString::fromUtf8("scrollArea_9"));
        scrollArea_9->setFrameShape(QFrame::NoFrame);
        scrollArea_9->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 123, 38));
        verticalLayout_28 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        labelCheckBox = new QCheckBox(scrollAreaWidgetContents_9);
        labelCheckBox->setObjectName(QString::fromUtf8("labelCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelCheckBox->sizePolicy().hasHeightForWidth());
        labelCheckBox->setSizePolicy(sizePolicy4);

        verticalLayout_28->addWidget(labelCheckBox);

        labelOptionsFrame = new QFrame(scrollAreaWidgetContents_9);
        labelOptionsFrame->setObjectName(QString::fromUtf8("labelOptionsFrame"));
        labelOptionsFrame->setEnabled(false);
        sizePolicy1.setHeightForWidth(labelOptionsFrame->sizePolicy().hasHeightForWidth());
        labelOptionsFrame->setSizePolicy(sizePolicy1);
        labelOptionsFrame->setFrameShape(QFrame::NoFrame);
        labelOptionsFrame->setFrameShadow(QFrame::Plain);

        verticalLayout_28->addWidget(labelOptionsFrame);

        scrollArea_9->setWidget(scrollAreaWidgetContents_9);

        verticalLayout_30->addWidget(scrollArea_9);

        mOptionsStackedWidget->addWidget(mOptsPage_LabelsOld);
        mOptsPage_Fields = new QWidget();
        mOptsPage_Fields->setObjectName(QString::fromUtf8("mOptsPage_Fields"));
        verticalLayout_15 = new QVBoxLayout(mOptsPage_Fields);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(mOptsPage_Fields);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_20 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        mFieldsFrame = new QFrame(scrollAreaWidgetContents_5);
        mFieldsFrame->setObjectName(QString::fromUtf8("mFieldsFrame"));
        mFieldsFrame->setFrameShape(QFrame::NoFrame);
        mFieldsFrame->setFrameShadow(QFrame::Plain);

        verticalLayout_20->addWidget(mFieldsFrame);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_15->addWidget(scrollArea_5);

        mOptionsStackedWidget->addWidget(mOptsPage_Fields);
        mOptsPage_Rendering = new QWidget();
        mOptsPage_Rendering->setObjectName(QString::fromUtf8("mOptsPage_Rendering"));
        verticalLayout_19 = new QVBoxLayout(mOptsPage_Rendering);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        scrollArea_19 = new QScrollArea(mOptsPage_Rendering);
        scrollArea_19->setObjectName(QString::fromUtf8("scrollArea_19"));
        scrollArea_19->setFrameShape(QFrame::NoFrame);
        scrollArea_19->setWidgetResizable(true);
        scrollAreaWidgetContents_19 = new QWidget();
        scrollAreaWidgetContents_19->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_19"));
        scrollAreaWidgetContents_19->setGeometry(QRect(0, 0, 721, 199));
        verticalLayout_32 = new QVBoxLayout(scrollAreaWidgetContents_19);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        mSimplifyDrawingGroupBox = new QGroupBox(scrollAreaWidgetContents_19);
        mSimplifyDrawingGroupBox->setObjectName(QString::fromUtf8("mSimplifyDrawingGroupBox"));
        mSimplifyDrawingGroupBox->setCheckable(true);
        _12 = new QGridLayout(mSimplifyDrawingGroupBox);
        _12->setObjectName(QString::fromUtf8("_12"));
        label_59 = new QLabel(mSimplifyDrawingGroupBox);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        _12->addWidget(label_59, 0, 1, 1, 4);

        label_56 = new QLabel(mSimplifyDrawingGroupBox);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setMargin(2);

        _12->addWidget(label_56, 1, 1, 1, 1);

        mSimplifyDrawingSpinBox = new QDoubleSpinBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingSpinBox->setObjectName(QString::fromUtf8("mSimplifyDrawingSpinBox"));
        mSimplifyDrawingSpinBox->setDecimals(2);
        mSimplifyDrawingSpinBox->setMinimum(1);
        mSimplifyDrawingSpinBox->setMaximum(5);
        mSimplifyDrawingSpinBox->setSingleStep(0.2);
        mSimplifyDrawingSpinBox->setValue(1);

        _12->addWidget(mSimplifyDrawingSpinBox, 1, 2, 1, 1);

        mSimplifyDrawingPx = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyDrawingPx->setObjectName(QString::fromUtf8("mSimplifyDrawingPx"));
        mSimplifyDrawingPx->setMargin(2);

        _12->addWidget(mSimplifyDrawingPx, 1, 3, 1, 1);

        horizontalSpacer_40 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _12->addItem(horizontalSpacer_40, 1, 4, 1, 1);

        mSimplifyDrawingAtProvider = new QCheckBox(mSimplifyDrawingGroupBox);
        mSimplifyDrawingAtProvider->setObjectName(QString::fromUtf8("mSimplifyDrawingAtProvider"));

        _12->addWidget(mSimplifyDrawingAtProvider, 2, 1, 1, 4);

        mSimplifyMaxScaleLabel = new QLabel(mSimplifyDrawingGroupBox);
        mSimplifyMaxScaleLabel->setObjectName(QString::fromUtf8("mSimplifyMaxScaleLabel"));
        mSimplifyMaxScaleLabel->setMargin(2);

        _12->addWidget(mSimplifyMaxScaleLabel, 3, 1, 1, 1);

        mSimplifyMaximumScaleComboBox = new QgsScaleComboBox(mSimplifyDrawingGroupBox);
        mSimplifyMaximumScaleComboBox->setObjectName(QString::fromUtf8("mSimplifyMaximumScaleComboBox"));
        sizePolicy4.setHeightForWidth(mSimplifyMaximumScaleComboBox->sizePolicy().hasHeightForWidth());
        mSimplifyMaximumScaleComboBox->setSizePolicy(sizePolicy4);

        _12->addWidget(mSimplifyMaximumScaleComboBox, 3, 2, 1, 1);


        verticalLayout_32->addWidget(mSimplifyDrawingGroupBox);

        mForceRasterCheckBox = new QCheckBox(scrollAreaWidgetContents_19);
        mForceRasterCheckBox->setObjectName(QString::fromUtf8("mForceRasterCheckBox"));

        verticalLayout_32->addWidget(mForceRasterCheckBox);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_32->addItem(verticalSpacer_6);

        scrollArea_19->setWidget(scrollAreaWidgetContents_19);

        verticalLayout_19->addWidget(scrollArea_19);

        mOptionsStackedWidget->addWidget(mOptsPage_Rendering);
        mOptsPage_Display = new QWidget();
        mOptsPage_Display->setObjectName(QString::fromUtf8("mOptsPage_Display"));
        verticalLayout_25 = new QVBoxLayout(mOptsPage_Display);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        scrollArea_10 = new QScrollArea(mOptsPage_Display);
        scrollArea_10->setObjectName(QString::fromUtf8("scrollArea_10"));
        scrollArea_10->setFrameShape(QFrame::NoFrame);
        scrollArea_10->setWidgetResizable(true);
        scrollAreaWidgetContents_10 = new QWidget();
        scrollAreaWidgetContents_10->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_10"));
        scrollAreaWidgetContents_10->setGeometry(QRect(0, 0, 730, 537));
        verticalLayout_26 = new QVBoxLayout(scrollAreaWidgetContents_10);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_10);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setProperty("syncGroup", QVariant(QString::fromUtf8("vectordisplay")));
        gridLayout_18 = new QGridLayout(groupBox_2);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        insertExpressionButton = new QPushButton(groupBox_2);
        insertExpressionButton->setObjectName(QString::fromUtf8("insertExpressionButton"));
        insertExpressionButton->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(insertExpressionButton->sizePolicy().hasHeightForWidth());
        insertExpressionButton->setSizePolicy(sizePolicy5);

        horizontalLayout_14->addWidget(insertExpressionButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_4);

        fieldComboBox = new QgsFieldComboBox(groupBox_2);
        fieldComboBox->setObjectName(QString::fromUtf8("fieldComboBox"));
        fieldComboBox->setEnabled(false);

        horizontalLayout_14->addWidget(fieldComboBox);

        insertFieldButton = new QPushButton(groupBox_2);
        insertFieldButton->setObjectName(QString::fromUtf8("insertFieldButton"));
        insertFieldButton->setEnabled(false);
        sizePolicy5.setHeightForWidth(insertFieldButton->sizePolicy().hasHeightForWidth());
        insertFieldButton->setSizePolicy(sizePolicy5);

        horizontalLayout_14->addWidget(insertFieldButton);


        gridLayout_18->addLayout(horizontalLayout_14, 4, 2, 1, 1);

        htmlMapTip = new QTextEdit(groupBox_2);
        htmlMapTip->setObjectName(QString::fromUtf8("htmlMapTip"));
        htmlMapTip->setEnabled(false);

        gridLayout_18->addWidget(htmlMapTip, 2, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        htmlRadio = new QRadioButton(groupBox_2);
        htmlRadio->setObjectName(QString::fromUtf8("htmlRadio"));

        verticalLayout_5->addWidget(htmlRadio);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        gridLayout_18->addLayout(verticalLayout_5, 2, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        fieldComboRadio = new QRadioButton(groupBox_2);
        fieldComboRadio->setObjectName(QString::fromUtf8("fieldComboRadio"));

        verticalLayout_6->addWidget(fieldComboRadio);


        gridLayout_18->addLayout(verticalLayout_6, 1, 0, 1, 1);

        displayFieldComboBox = new QgsFieldComboBox(groupBox_2);
        displayFieldComboBox->setObjectName(QString::fromUtf8("displayFieldComboBox"));
        displayFieldComboBox->setEnabled(false);

        gridLayout_18->addWidget(displayFieldComboBox, 1, 2, 1, 1);


        verticalLayout_26->addWidget(groupBox_2);

        scrollArea_10->setWidget(scrollAreaWidgetContents_10);

        verticalLayout_25->addWidget(scrollArea_10);

        mOptionsStackedWidget->addWidget(mOptsPage_Display);
        mOptsPage_Actions = new QWidget();
        mOptsPage_Actions->setObjectName(QString::fromUtf8("mOptsPage_Actions"));
        verticalLayout_16 = new QVBoxLayout(mOptsPage_Actions);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QScrollArea(mOptsPage_Actions);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        actionOptionsFrame = new QFrame(scrollAreaWidgetContents_6);
        actionOptionsFrame->setObjectName(QString::fromUtf8("actionOptionsFrame"));
        sizePolicy1.setHeightForWidth(actionOptionsFrame->sizePolicy().hasHeightForWidth());
        actionOptionsFrame->setSizePolicy(sizePolicy1);
        actionOptionsFrame->setFrameShape(QFrame::NoFrame);
        actionOptionsFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_21->addWidget(actionOptionsFrame);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_16->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mOptsPage_Actions);
        mOptsPage_Joins = new QWidget();
        mOptsPage_Joins->setObjectName(QString::fromUtf8("mOptsPage_Joins"));
        verticalLayout_17 = new QVBoxLayout(mOptsPage_Joins);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QScrollArea(mOptsPage_Joins);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 134, 113));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        mJoinTreeWidget = new QTreeWidget(scrollAreaWidgetContents_7);
        mJoinTreeWidget->setObjectName(QString::fromUtf8("mJoinTreeWidget"));
        mJoinTreeWidget->setColumnCount(6);

        verticalLayout_23->addWidget(mJoinTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mButtonAddJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonAddJoin->setObjectName(QString::fromUtf8("mButtonAddJoin"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonAddJoin->setIcon(icon13);

        horizontalLayout->addWidget(mButtonAddJoin);

        mButtonRemoveJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonRemoveJoin->setObjectName(QString::fromUtf8("mButtonRemoveJoin"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonRemoveJoin->setIcon(icon14);

        horizontalLayout->addWidget(mButtonRemoveJoin);

        mButtonEditJoin = new QPushButton(scrollAreaWidgetContents_7);
        mButtonEditJoin->setObjectName(QString::fromUtf8("mButtonEditJoin"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/themes/default/mActionToggleEditing.png"), QSize(), QIcon::Normal, QIcon::Off);
        mButtonEditJoin->setIcon(icon15);

        horizontalLayout->addWidget(mButtonEditJoin);

        horizontalSpacer = new QSpacerItem(0, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_23->addLayout(horizontalLayout);

        scrollArea_7->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_17->addWidget(scrollArea_7);

        mOptionsStackedWidget->addWidget(mOptsPage_Joins);
        mOptsPage_Diagrams = new QWidget();
        mOptsPage_Diagrams->setObjectName(QString::fromUtf8("mOptsPage_Diagrams"));
        verticalLayout_10 = new QVBoxLayout(mOptsPage_Diagrams);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        mDiagramFrame = new QFrame(mOptsPage_Diagrams);
        mDiagramFrame->setObjectName(QString::fromUtf8("mDiagramFrame"));
        sizePolicy1.setHeightForWidth(mDiagramFrame->sizePolicy().hasHeightForWidth());
        mDiagramFrame->setSizePolicy(sizePolicy1);
        mDiagramFrame->setFrameShape(QFrame::NoFrame);
        mDiagramFrame->setFrameShadow(QFrame::Plain);

        verticalLayout_10->addWidget(mDiagramFrame);

        mOptionsStackedWidget->addWidget(mOptsPage_Diagrams);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QString::fromUtf8("mOptsPage_Metadata"));
        verticalLayout_7 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(mOptsPage_Metadata);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 393, 641));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mMetaDescriptionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mMetaDescriptionGrpBx->setObjectName(QString::fromUtf8("mMetaDescriptionGrpBx"));
        mMetaDescriptionGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("vectormeta")));
        gridLayout_5 = new QGridLayout(mMetaDescriptionGrpBx);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        mLayerTitleLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerTitleLabel->setObjectName(QString::fromUtf8("mLayerTitleLabel"));

        gridLayout_5->addWidget(mLayerTitleLabel, 1, 0, 1, 1);

        mLayerTitleLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerTitleLineEdit->setObjectName(QString::fromUtf8("mLayerTitleLineEdit"));

        gridLayout_5->addWidget(mLayerTitleLineEdit, 1, 1, 1, 1);

        mLayerAbstractLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerAbstractLabel->setObjectName(QString::fromUtf8("mLayerAbstractLabel"));

        gridLayout_5->addWidget(mLayerAbstractLabel, 3, 0, 1, 1);

        mLayerAbstractTextEdit = new QTextEdit(mMetaDescriptionGrpBx);
        mLayerAbstractTextEdit->setObjectName(QString::fromUtf8("mLayerAbstractTextEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(mLayerAbstractTextEdit->sizePolicy().hasHeightForWidth());
        mLayerAbstractTextEdit->setSizePolicy(sizePolicy6);
        mLayerAbstractTextEdit->setMaximumSize(QSize(16777215, 50));

        gridLayout_5->addWidget(mLayerAbstractTextEdit, 3, 1, 1, 1);

        mLayerKeywordListLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel->setObjectName(QString::fromUtf8("mLayerKeywordListLabel"));

        gridLayout_5->addWidget(mLayerKeywordListLabel, 5, 0, 1, 1);

        mLayerKeywordListLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerKeywordListLineEdit->setObjectName(QString::fromUtf8("mLayerKeywordListLineEdit"));

        gridLayout_5->addWidget(mLayerKeywordListLineEdit, 5, 1, 1, 1);

        mLayerDataUrlLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlLabel->setObjectName(QString::fromUtf8("mLayerDataUrlLabel"));

        gridLayout_5->addWidget(mLayerDataUrlLabel, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        mLayerDataUrlLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerDataUrlLineEdit->setObjectName(QString::fromUtf8("mLayerDataUrlLineEdit"));

        horizontalLayout_7->addWidget(mLayerDataUrlLineEdit);

        mLayerDataUrlFormatLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerDataUrlFormatLabel"));

        horizontalLayout_7->addWidget(mLayerDataUrlFormatLabel);

        mLayerDataUrlFormatComboBox = new QComboBox(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatComboBox->insertItems(0, QStringList()
         << QString::fromUtf8("text/html")
         << QString::fromUtf8("text/plain")
         << QString::fromUtf8("application/pdf")
        );
        mLayerDataUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerDataUrlFormatComboBox"));

        horizontalLayout_7->addWidget(mLayerDataUrlFormatComboBox);


        gridLayout_5->addLayout(horizontalLayout_7, 6, 1, 1, 1);

        mLayerShortNameLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerShortNameLabel->setObjectName(QString::fromUtf8("mLayerShortNameLabel"));

        gridLayout_5->addWidget(mLayerShortNameLabel, 0, 0, 1, 1);

        mLayerShortNameLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerShortNameLineEdit->setObjectName(QString::fromUtf8("mLayerShortNameLineEdit"));

        gridLayout_5->addWidget(mLayerShortNameLineEdit, 0, 1, 1, 1);


        gridLayout_3->addWidget(mMetaDescriptionGrpBx, 0, 0, 1, 1);

        mMetaAttributionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mMetaAttributionGrpBx->setObjectName(QString::fromUtf8("mMetaAttributionGrpBx"));
        mMetaAttributionGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("vectormeta")));
        gridLayout_7 = new QGridLayout(mMetaAttributionGrpBx);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        mLayerAttributionLabel = new QLabel(mMetaAttributionGrpBx);
        mLayerAttributionLabel->setObjectName(QString::fromUtf8("mLayerAttributionLabel"));

        gridLayout_7->addWidget(mLayerAttributionLabel, 0, 0, 1, 1);

        mLayerAttributionLineEdit = new QLineEdit(mMetaAttributionGrpBx);
        mLayerAttributionLineEdit->setObjectName(QString::fromUtf8("mLayerAttributionLineEdit"));

        gridLayout_7->addWidget(mLayerAttributionLineEdit, 0, 1, 1, 1);

        mLayerAttributionUrlLabel = new QLabel(mMetaAttributionGrpBx);
        mLayerAttributionUrlLabel->setObjectName(QString::fromUtf8("mLayerAttributionUrlLabel"));

        gridLayout_7->addWidget(mLayerAttributionUrlLabel, 2, 0, 1, 1);

        mLayerAttributionUrlLineEdit = new QLineEdit(mMetaAttributionGrpBx);
        mLayerAttributionUrlLineEdit->setObjectName(QString::fromUtf8("mLayerAttributionUrlLineEdit"));

        gridLayout_7->addWidget(mLayerAttributionUrlLineEdit, 2, 1, 1, 1);


        gridLayout_3->addWidget(mMetaAttributionGrpBx, 1, 0, 1, 1);

        mMetaMetaUrlGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mMetaMetaUrlGrpBx->setObjectName(QString::fromUtf8("mMetaMetaUrlGrpBx"));
        mMetaMetaUrlGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("vectormeta")));
        gridLayout_9 = new QGridLayout(mMetaMetaUrlGrpBx);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        mLayerMetadataUrlLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlLabel->setObjectName(QString::fromUtf8("mLayerMetadataUrlLabel"));

        gridLayout_9->addWidget(mLayerMetadataUrlLabel, 0, 0, 1, 1);

        mLayerMetadataUrlLineEdit = new QLineEdit(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlLineEdit->setObjectName(QString::fromUtf8("mLayerMetadataUrlLineEdit"));

        gridLayout_9->addWidget(mLayerMetadataUrlLineEdit, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mLayerMetadataUrlTypeLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlTypeLabel->setObjectName(QString::fromUtf8("mLayerMetadataUrlTypeLabel"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlTypeLabel);

        mLayerMetadataUrlTypeComboBox = new QComboBox(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlTypeComboBox->insertItems(0, QStringList()
         << QString::fromUtf8("")
         << QString::fromUtf8("FGDC")
         << QString::fromUtf8("TC211")
        );
        mLayerMetadataUrlTypeComboBox->setObjectName(QString::fromUtf8("mLayerMetadataUrlTypeComboBox"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlTypeComboBox);

        mLayerMetadataUrlFormatLabel = new QLabel(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerMetadataUrlFormatLabel"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlFormatLabel);

        mLayerMetadataUrlFormatComboBox = new QComboBox(mMetaMetaUrlGrpBx);
        mLayerMetadataUrlFormatComboBox->insertItems(0, QStringList()
         << QString::fromUtf8("")
         << QString::fromUtf8("text/plain")
         << QString::fromUtf8("text/xml")
        );
        mLayerMetadataUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerMetadataUrlFormatComboBox"));

        horizontalLayout_8->addWidget(mLayerMetadataUrlFormatComboBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        gridLayout_9->addLayout(horizontalLayout_8, 1, 1, 1, 1);


        gridLayout_3->addWidget(mMetaMetaUrlGrpBx, 2, 0, 1, 1);

        mMetaLegendGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mMetaLegendGrpBx->setObjectName(QString::fromUtf8("mMetaLegendGrpBx"));
        gridLayout_2 = new QGridLayout(mMetaLegendGrpBx);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mLayerLegendUrlLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlLabel->setObjectName(QString::fromUtf8("mLayerLegendUrlLabel"));

        horizontalLayout_2->addWidget(mLayerLegendUrlLabel);

        mLayerLegendUrlLineEdit = new QLineEdit(mMetaLegendGrpBx);
        mLayerLegendUrlLineEdit->setObjectName(QString::fromUtf8("mLayerLegendUrlLineEdit"));

        horizontalLayout_2->addWidget(mLayerLegendUrlLineEdit);

        mLayerLegendUrlFormatLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerLegendUrlFormatLabel"));

        horizontalLayout_2->addWidget(mLayerLegendUrlFormatLabel);

        mLayerLegendUrlFormatComboBox = new QComboBox(mMetaLegendGrpBx);
        mLayerLegendUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerLegendUrlFormatComboBox"));
        mLayerLegendUrlFormatComboBox->setMinimumSize(QSize(137, 0));

        horizontalLayout_2->addWidget(mLayerLegendUrlFormatComboBox);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(mMetaLegendGrpBx, 3, 0, 1, 1);

        mMetaPropertiesGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        mMetaPropertiesGrpBx->setObjectName(QString::fromUtf8("mMetaPropertiesGrpBx"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(5);
        sizePolicy7.setHeightForWidth(mMetaPropertiesGrpBx->sizePolicy().hasHeightForWidth());
        mMetaPropertiesGrpBx->setSizePolicy(sizePolicy7);
        mMetaPropertiesGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("vectormeta")));
        verticalLayout_9 = new QVBoxLayout(mMetaPropertiesGrpBx);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        teMetadata = new QTextEdit(mMetaPropertiesGrpBx);
        teMetadata->setObjectName(QString::fromUtf8("teMetadata"));
        teMetadata->setLineWidth(2);
        teMetadata->setReadOnly(true);

        verticalLayout_9->addWidget(teMetadata);


        gridLayout_3->addWidget(mMetaPropertiesGrpBx, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 5, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_7->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_4 = new QGroupBox(page);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_4);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        mVariableEditor = new QgsVariableEditorWidget(groupBox_4);
        mVariableEditor->setObjectName(QString::fromUtf8("mVariableEditor"));
        mVariableEditor->setProperty("settingGroup", QVariant(QString::fromUtf8("projectProperties")));

        horizontalLayout_9->addWidget(mVariableEditor);


        verticalLayout_4->addWidget(groupBox_4);

        mOptionsStackedWidget->addWidget(page);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsVectorLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy8);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout_btnbox = new QGridLayout(mButtonBoxFrame);
        gridLayout_btnbox->setObjectName(QString::fromUtf8("gridLayout_btnbox"));
        gridLayout_btnbox->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout_btnbox->addWidget(buttonBox, 2, 1, 1, 4);


        verticalLayout->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mOptionsListWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, mLayerOrigNameLineEdit);
        QWidget::setTabOrder(mLayerOrigNameLineEdit, txtDisplayName);
        QWidget::setTabOrder(txtDisplayName, txtLayerSource);
        QWidget::setTabOrder(txtLayerSource, cboProviderEncoding);
        QWidget::setTabOrder(cboProviderEncoding, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, pbnIndex);
        QWidget::setTabOrder(pbnIndex, pbnUpdateExtents);
        QWidget::setTabOrder(pbnUpdateExtents, mScaleVisibilityGroupBox);
        QWidget::setTabOrder(mScaleVisibilityGroupBox, txtSubsetSQL);
        QWidget::setTabOrder(txtSubsetSQL, pbnQueryBuilder);
        QWidget::setTabOrder(pbnQueryBuilder, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, scrollArea_9);
        QWidget::setTabOrder(scrollArea_9, labelCheckBox);
        QWidget::setTabOrder(labelCheckBox, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, scrollArea_19);
        QWidget::setTabOrder(scrollArea_19, mSimplifyDrawingGroupBox);
        QWidget::setTabOrder(mSimplifyDrawingGroupBox, mSimplifyDrawingSpinBox);
        QWidget::setTabOrder(mSimplifyDrawingSpinBox, mSimplifyDrawingAtProvider);
        QWidget::setTabOrder(mSimplifyDrawingAtProvider, mSimplifyMaximumScaleComboBox);
        QWidget::setTabOrder(mSimplifyMaximumScaleComboBox, mForceRasterCheckBox);
        QWidget::setTabOrder(mForceRasterCheckBox, scrollArea_10);
        QWidget::setTabOrder(scrollArea_10, fieldComboRadio);
        QWidget::setTabOrder(fieldComboRadio, displayFieldComboBox);
        QWidget::setTabOrder(displayFieldComboBox, htmlRadio);
        QWidget::setTabOrder(htmlRadio, htmlMapTip);
        QWidget::setTabOrder(htmlMapTip, insertExpressionButton);
        QWidget::setTabOrder(insertExpressionButton, fieldComboBox);
        QWidget::setTabOrder(fieldComboBox, insertFieldButton);
        QWidget::setTabOrder(insertFieldButton, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, mJoinTreeWidget);
        QWidget::setTabOrder(mJoinTreeWidget, scrollArea_7);
        QWidget::setTabOrder(scrollArea_7, mButtonAddJoin);
        QWidget::setTabOrder(mButtonAddJoin, mButtonRemoveJoin);
        QWidget::setTabOrder(mButtonRemoveJoin, mButtonEditJoin);
        QWidget::setTabOrder(mButtonEditJoin, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, mLayerShortNameLineEdit);
        QWidget::setTabOrder(mLayerShortNameLineEdit, mLayerTitleLineEdit);
        QWidget::setTabOrder(mLayerTitleLineEdit, mLayerAbstractTextEdit);
        QWidget::setTabOrder(mLayerAbstractTextEdit, mLayerKeywordListLineEdit);
        QWidget::setTabOrder(mLayerKeywordListLineEdit, mLayerDataUrlLineEdit);
        QWidget::setTabOrder(mLayerDataUrlLineEdit, mLayerDataUrlFormatComboBox);
        QWidget::setTabOrder(mLayerDataUrlFormatComboBox, mLayerAttributionLineEdit);
        QWidget::setTabOrder(mLayerAttributionLineEdit, mLayerAttributionUrlLineEdit);
        QWidget::setTabOrder(mLayerAttributionUrlLineEdit, mLayerMetadataUrlLineEdit);
        QWidget::setTabOrder(mLayerMetadataUrlLineEdit, mLayerMetadataUrlTypeComboBox);
        QWidget::setTabOrder(mLayerMetadataUrlTypeComboBox, mLayerMetadataUrlFormatComboBox);
        QWidget::setTabOrder(mLayerMetadataUrlFormatComboBox, mLayerLegendUrlLineEdit);
        QWidget::setTabOrder(mLayerLegendUrlLineEdit, mLayerLegendUrlFormatComboBox);
        QWidget::setTabOrder(mLayerLegendUrlFormatComboBox, teMetadata);

        retranslateUi(QgsVectorLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(6);
        widgetStackRenderers->setCurrentIndex(-1);
        mLayerLegendUrlFormatComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsVectorLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsVectorLayerPropertiesBase)
    {
        QgsVectorLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer Properties", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Style", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Style", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Labels", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Labels", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Labels (deprecated)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Labels (deprecated)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Fields", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Rendering", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Rendering", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem6 = mOptionsListWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem6->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem7 = mOptionsListWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Actions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem7->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Actions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem8 = mOptionsListWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Joins", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem8->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Joins", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem9 = mOptionsListWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Diagrams", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem9->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Diagrams", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem10 = mOptionsListWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem10->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem11 = mOptionsListWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Variables", 0, QApplication::UnicodeUTF8));
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer info", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "displayed as", 0, QApplication::UnicodeUTF8));
        lblLayerSource->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Layer source", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Data source encoding", 0, QApplication::UnicodeUTF8));
        indexGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Coordinate reference system", 0, QApplication::UnicodeUTF8));
        pbnIndex->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Create spatial index", 0, QApplication::UnicodeUTF8));
        pbnUpdateExtents->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Update extents", 0, QApplication::UnicodeUTF8));
        mScaleVisibilityGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Scale dependent visibility", 0, QApplication::UnicodeUTF8));
        mSubsetGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Provider feature filter", 0, QApplication::UnicodeUTF8));
        pbnQueryBuilder->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Query Builder", 0, QApplication::UnicodeUTF8));
        labelCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Display labels", 0, QApplication::UnicodeUTF8));
        mSimplifyDrawingGroupBox->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Simplify geometry", 0, QApplication::UnicodeUTF8));
        label_59->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "<b>Note:</b> Feature simplification may speed up rendering but can result in rendering inconsistencies", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Simplification threshold (higher values result in more simplification): ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSimplifyDrawingSpinBox->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Higher values result in more simplification", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSimplifyDrawingPx->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "pixels", 0, QApplication::UnicodeUTF8));
        mSimplifyDrawingAtProvider->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Simplify on provider side if possible", 0, QApplication::UnicodeUTF8));
        mSimplifyMaxScaleLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Maximum scale at which the layer should be simplified (1:1 always simplifies): ", 0, QApplication::UnicodeUTF8));
        mForceRasterCheckBox->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Force layer to render as a raster (may result in smaller export file sizes)", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Map tip display text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        insertExpressionButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Inserts an expression into the action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insertExpressionButton->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Insert expression...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fieldComboBox->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "The valid attribute names for this layer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        insertFieldButton->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Inserts the selected field into the action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insertFieldButton->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Insert field", 0, QApplication::UnicodeUTF8));
        htmlRadio->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "HTML", 0, QApplication::UnicodeUTF8));
        fieldComboRadio->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Field", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mJoinTreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("QgsVectorLayerPropertiesBase", "Joined fields", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("QgsVectorLayerPropertiesBase", "Prefix", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("QgsVectorLayerPropertiesBase", "Memory cache", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("QgsVectorLayerPropertiesBase", "Target field", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("QgsVectorLayerPropertiesBase", "Join field", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("QgsVectorLayerPropertiesBase", "Join layer", 0, QApplication::UnicodeUTF8));
        mButtonAddJoin->setText(QString());
        mButtonRemoveJoin->setText(QString());
        mButtonEditJoin->setText(QString());
        mMetaDescriptionGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Description", 0, QApplication::UnicodeUTF8));
        mLayerTitleLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerTitleLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerTitleLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", 0, QApplication::UnicodeUTF8));
        mLayerAbstractLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Abstract", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerAbstractTextEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "The abstract is a descriptive narrative providing more information about the layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerKeywordListLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Keyword list", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerKeywordListLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerKeywordListLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", 0, QApplication::UnicodeUTF8));
        mLayerDataUrlLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "DataUrl", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerDataUrlLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "An URL of the data presentation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerDataUrlLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "An URL of the data presentation.", 0, QApplication::UnicodeUTF8));
        mLayerDataUrlFormatLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Format", 0, QApplication::UnicodeUTF8));
        mLayerShortNameLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Short name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerShortNameLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerShortNameLineEdit->setInputMask(QString());
        mLayerShortNameLineEdit->setText(QString());
        mLayerShortNameLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", 0, QApplication::UnicodeUTF8));
        mMetaAttributionGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution", 0, QApplication::UnicodeUTF8));
        mLayerAttributionLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerAttributionLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerAttributionLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution's title indicates the provider of the data layer.", 0, QApplication::UnicodeUTF8));
        mLayerAttributionUrlLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Url", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerAttributionUrlLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerAttributionUrlLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", 0, QApplication::UnicodeUTF8));
        mMetaMetaUrlGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "MetadataUrl", 0, QApplication::UnicodeUTF8));
        mLayerMetadataUrlLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Url", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerMetadataUrlLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "The URL of the metadata document.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerMetadataUrlLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "The URL of the metadata document.", 0, QApplication::UnicodeUTF8));
        mLayerMetadataUrlTypeLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Type", 0, QApplication::UnicodeUTF8));
        mLayerMetadataUrlFormatLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Format", 0, QApplication::UnicodeUTF8));
        mMetaLegendGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "LegendUrl", 0, QApplication::UnicodeUTF8));
        mLayerLegendUrlLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Url", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerLegendUrlLineEdit->setToolTip(QApplication::translate("QgsVectorLayerPropertiesBase", "An URL of the legend image.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerLegendUrlLineEdit->setPlaceholderText(QApplication::translate("QgsVectorLayerPropertiesBase", "An URL of the legend image.", 0, QApplication::UnicodeUTF8));
        mLayerLegendUrlFormatLabel->setText(QApplication::translate("QgsVectorLayerPropertiesBase", "Format", 0, QApplication::UnicodeUTF8));
        mLayerLegendUrlFormatComboBox->clear();
        mLayerLegendUrlFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsVectorLayerPropertiesBase", "image/png", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsVectorLayerPropertiesBase", "image/jpeg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsVectorLayerPropertiesBase", "image/jpg", 0, QApplication::UnicodeUTF8)
        );
        mMetaPropertiesGrpBx->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Properties", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("QgsVectorLayerPropertiesBase", "Variables", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsVectorLayerPropertiesBase: public Ui_QgsVectorLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSVECTORLAYERPROPERTIESBASE_H
