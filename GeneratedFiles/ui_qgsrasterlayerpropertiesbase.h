/********************************************************************************
** Form generated from reading UI file 'qgsrasterlayerpropertiesbase.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QGSRASTERLAYERPROPERTIESBASE_H
#define UI_QGSRASTERLAYERPROPERTIESBASE_H

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
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <qgsprojectionselectionwidget.h>
#include "qgsblendmodecombobox.h"
#include "qgscollapsiblegroupbox.h"
#include "qgscolorbuttonv2.h"
#include "qgsscalerangewidget.h"

QT_BEGIN_NAMESPACE

class Ui_QgsRasterLayerPropertiesBase
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
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_7;
    QgsCollapsibleGroupBox *mLayerInfoGrpBx;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *leDisplayName;
    QLabel *lblDisplayName;
    QLineEdit *mLayerOrigNameLineEd;
    QLabel *lblLayerSource;
    QLineEdit *leLayerSource;
    QGridLayout *_4;
    QLabel *lblColumns;
    QLabel *lblRows;
    QLabel *lblNoData;
    QSpacerItem *horizontalSpacer_5;
    QgsCollapsibleGroupBox *grpSRS;
    QVBoxLayout *verticalLayout_13;
    QgsProjectionSelectionWidget *mCrsSelector;
    QgsCollapsibleGroupBox *chkUseScaleDependentRendering;
    QGridLayout *_5;
    QgsScaleRangeWidget *mScaleRangeWidget;
    QSpacerItem *verticalSpacer_3;
    QWidget *mOptsPage_Style;
    QVBoxLayout *verticalLayout_14;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_10;
    QgsCollapsibleGroupBox *mBandRenderingGrpBx;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mRenderTypeLabel;
    QComboBox *mRenderTypeComboBox;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *mRendererStackedWidget;
    QgsCollapsibleGroupBox *mColorRenderingGrpBox;
    QGridLayout *gridLayout_2;
    QLabel *labelSaturation;
    QLabel *label_3;
    QSlider *sliderSaturation;
    QLabel *mBlendTypeLabel;
    QLabel *label_2;
    QSlider *mSliderBrightness;
    QSpinBox *mBrightnessSpinBox;
    QSlider *mSliderContrast;
    QLabel *label_5;
    QSpinBox *mContrastSpinBox;
    QFrame *line_2;
    QFrame *line;
    QLabel *labelGrayscale;
    QSpinBox *spinBoxSaturation;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *mColorizeCheck;
    QgsColorButtonV2 *btnColorizeColor;
    QLabel *labelColorizeStrength;
    QSlider *sliderColorizeStrength;
    QSpinBox *spinColorizeStrength;
    QgsBlendModeComboBox *mBlendModeComboBox;
    QToolButton *mResetColorRenderingBtn;
    QComboBox *comboGrayscale;
    QgsCollapsibleGroupBox *mResamplingGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *mZoomedInResamplingLabel;
    QComboBox *mZoomedInResamplingComboBox;
    QLabel *mZoomedOutResamplingLabel;
    QComboBox *mZoomedOutResamplingComboBox;
    QLabel *mMaximumOversamplingLabel;
    QDoubleSpinBox *mMaximumOversamplingSpinBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *spacer_2;
    QGroupBox *groupBox10;
    QGridLayout *_7;
    QLabel *pixmapThumbnail;
    QGroupBox *groupBox9;
    QGridLayout *_8;
    QLabel *pixmapLegend;
    QGroupBox *groupBox8;
    QGridLayout *_9;
    QLabel *pixmapPalette;
    QSpacerItem *spacer;
    QSpacerItem *verticalSpacer;
    QWidget *mOptsPage_Transparency;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QgsCollapsibleGroupBox *gboxGlobalTransp;
    QGridLayout *_3;
    QSlider *sliderTransparency;
    QLabel *textLabel3;
    QSpacerItem *spacerItem;
    QLabel *lblTransparencyPercent;
    QSpacerItem *spacerItem1;
    QLabel *textLabel4;
    QgsCollapsibleGroupBox *gboxNoDataValue;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *mSrcNoDataValueCheckBox;
    QLabel *lblSrcNoDataValue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblUserNoDataValueLabel;
    QLineEdit *leNoDataValue;
    QgsCollapsibleGroupBox *gboxCustomTransparency;
    QGridLayout *gridLayout_3;
    QTableWidget *tableTransparency;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblTransparent;
    QComboBox *cboxTransparencyBand;
    QVBoxLayout *_2;
    QToolButton *pbnAddValuesManually;
    QToolButton *pbnAddValuesFromDisplay;
    QToolButton *pbnRemoveSelectedRow;
    QToolButton *pbnDefaultValues;
    QToolButton *pbnImportTransparentPixelValues;
    QToolButton *pbnExportTransparentPixelValues;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_5;
    QWidget *mOptsPage_Pyramids;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *mPyramidsGrpBx;
    QGridLayout *gridLayout_6;
    QLabel *textLabel4_2;
    QGridLayout *gridLayout_8;
    QLabel *textLabel5;
    QListWidget *lbxPyramidResolutions;
    QTextEdit *tePyramidDescription;
    QPushButton *buttonBuildPyramids;
    QComboBox *cboResamplingMethod;
    QProgressBar *mPyramidProgress;
    QComboBox *cbxPyramidsFormat;
    QLabel *label_11;
    QWidget *mOptsPage_Histogram;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *mHistogramGrpBx;
    QVBoxLayout *verticalLayout_19;
    QStackedWidget *mHistogramStackedWidget;
    QWidget *mOptsPage_Metadata;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_12;
    QgsCollapsibleGroupBox *mMetaDescriptionGrpBx;
    QGridLayout *gridLayout_5;
    QLabel *mLayerTitleLabel;
    QLineEdit *mLayerTitleLineEdit;
    QLabel *mLayerAbstractLabel;
    QTextEdit *mLayerAbstractTextEdit;
    QLabel *mLayerKeywordListLabel;
    QLineEdit *mLayerKeywordListLineEdit;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *mLayerDataUrlLineEdit;
    QLabel *mLayerDataUrlFormatLabel;
    QComboBox *mLayerDataUrlFormatComboBox;
    QLabel *mLayerKeywordListLabel_3;
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
    QSpacerItem *horizontalSpacer_4;
    QgsCollapsibleGroupBox *mMetaLegendGrpBx;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mLayerLegendUrlLabel;
    QLineEdit *mLayerLegendUrlLineEdit;
    QLabel *mLayerLegendUrlFormatLabel;
    QComboBox *mLayerLegendUrlFormatComboBox;
    QgsCollapsibleGroupBox *mMetaPropertiesGrpBx;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *txtbMetadata;
    QSpacerItem *verticalSpacer_4;
    QFrame *mButtonBoxFrame;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsRasterLayerPropertiesBase)
    {
        if (QgsRasterLayerPropertiesBase->objectName().isEmpty())
            QgsRasterLayerPropertiesBase->setObjectName(QString::fromUtf8("QgsRasterLayerPropertiesBase"));
        QgsRasterLayerPropertiesBase->resize(789, 593);
        QgsRasterLayerPropertiesBase->setMinimumSize(QSize(700, 0));
        verticalLayout = new QVBoxLayout(QgsRasterLayerPropertiesBase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOptionsSplitter = new QSplitter(QgsRasterLayerPropertiesBase);
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/symbology.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/transparency.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/pyramids.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/histogram.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/themes/default/propertyicons/metadata.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(mOptionsListWidget);
        __qlistwidgetitem5->setIcon(icon5);
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
        verticalLayout_6 = new QVBoxLayout(mOptsPage_General);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(mOptsPage_General);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 615, 542));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, 0);
        mLayerInfoGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
        mLayerInfoGrpBx->setObjectName(QString::fromUtf8("mLayerInfoGrpBx"));
        mLayerInfoGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("rastergeneral")));
        gridLayout_4 = new QGridLayout(mLayerInfoGrpBx);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(mLayerInfoGrpBx);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 2, 1, 1);

        leDisplayName = new QLineEdit(mLayerInfoGrpBx);
        leDisplayName->setObjectName(QString::fromUtf8("leDisplayName"));
        leDisplayName->setReadOnly(true);

        gridLayout_4->addWidget(leDisplayName, 0, 3, 1, 1);

        lblDisplayName = new QLabel(mLayerInfoGrpBx);
        lblDisplayName->setObjectName(QString::fromUtf8("lblDisplayName"));

        gridLayout_4->addWidget(lblDisplayName, 0, 0, 1, 1);

        mLayerOrigNameLineEd = new QLineEdit(mLayerInfoGrpBx);
        mLayerOrigNameLineEd->setObjectName(QString::fromUtf8("mLayerOrigNameLineEd"));

        gridLayout_4->addWidget(mLayerOrigNameLineEd, 0, 1, 1, 1);

        lblLayerSource = new QLabel(mLayerInfoGrpBx);
        lblLayerSource->setObjectName(QString::fromUtf8("lblLayerSource"));

        gridLayout_4->addWidget(lblLayerSource, 1, 0, 1, 1);

        leLayerSource = new QLineEdit(mLayerInfoGrpBx);
        leLayerSource->setObjectName(QString::fromUtf8("leLayerSource"));
        leLayerSource->setReadOnly(true);

        gridLayout_4->addWidget(leLayerSource, 1, 1, 1, 3);

        _4 = new QGridLayout();
        _4->setObjectName(QString::fromUtf8("_4"));
        lblColumns = new QLabel(mLayerInfoGrpBx);
        lblColumns->setObjectName(QString::fromUtf8("lblColumns"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblColumns->sizePolicy().hasHeightForWidth());
        lblColumns->setSizePolicy(sizePolicy2);

        _4->addWidget(lblColumns, 0, 0, 1, 1);

        lblRows = new QLabel(mLayerInfoGrpBx);
        lblRows->setObjectName(QString::fromUtf8("lblRows"));
        sizePolicy2.setHeightForWidth(lblRows->sizePolicy().hasHeightForWidth());
        lblRows->setSizePolicy(sizePolicy2);

        _4->addWidget(lblRows, 0, 1, 1, 1);

        lblNoData = new QLabel(mLayerInfoGrpBx);
        lblNoData->setObjectName(QString::fromUtf8("lblNoData"));
        sizePolicy2.setHeightForWidth(lblNoData->sizePolicy().hasHeightForWidth());
        lblNoData->setSizePolicy(sizePolicy2);

        _4->addWidget(lblNoData, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _4->addItem(horizontalSpacer_5, 0, 3, 1, 1);


        gridLayout_4->addLayout(_4, 2, 0, 1, 4);


        verticalLayout_7->addWidget(mLayerInfoGrpBx);

        grpSRS = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
        grpSRS->setObjectName(QString::fromUtf8("grpSRS"));
        grpSRS->setProperty("syncGroup", QVariant(QString::fromUtf8("rastergeneral")));
        verticalLayout_13 = new QVBoxLayout(grpSRS);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        mCrsSelector = new QgsProjectionSelectionWidget(grpSRS);
        mCrsSelector->setObjectName(QString::fromUtf8("mCrsSelector"));
        mCrsSelector->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_13->addWidget(mCrsSelector);


        verticalLayout_7->addWidget(grpSRS);

        chkUseScaleDependentRendering = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_3);
        chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
        chkUseScaleDependentRendering->setCheckable(true);
        chkUseScaleDependentRendering->setChecked(false);
        chkUseScaleDependentRendering->setProperty("syncGroup", QVariant(QString::fromUtf8("rastergeneral")));
        _5 = new QGridLayout(chkUseScaleDependentRendering);
        _5->setObjectName(QString::fromUtf8("_5"));
        _5->setVerticalSpacing(6);
        _5->setContentsMargins(11, 11, 11, 11);
        mScaleRangeWidget = new QgsScaleRangeWidget(chkUseScaleDependentRendering);
        mScaleRangeWidget->setObjectName(QString::fromUtf8("mScaleRangeWidget"));

        _5->addWidget(mScaleRangeWidget, 0, 0, 1, 2);


        verticalLayout_7->addWidget(chkUseScaleDependentRendering);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        mOptionsStackedWidget->addWidget(mOptsPage_General);
        mOptsPage_Style = new QWidget();
        mOptsPage_Style->setObjectName(QString::fromUtf8("mOptsPage_Style"));
        verticalLayout_14 = new QVBoxLayout(mOptsPage_Style);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(mOptsPage_Style);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 615, 542));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        mBandRenderingGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mBandRenderingGrpBx->setObjectName(QString::fromUtf8("mBandRenderingGrpBx"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(mBandRenderingGrpBx->sizePolicy().hasHeightForWidth());
        mBandRenderingGrpBx->setSizePolicy(sizePolicy3);
        mBandRenderingGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("rasterstyle")));
        verticalLayout_21 = new QVBoxLayout(mBandRenderingGrpBx);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(0, 12, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, -1, -1, -1);
        mRenderTypeLabel = new QLabel(mBandRenderingGrpBx);
        mRenderTypeLabel->setObjectName(QString::fromUtf8("mRenderTypeLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mRenderTypeLabel->sizePolicy().hasHeightForWidth());
        mRenderTypeLabel->setSizePolicy(sizePolicy4);
        mRenderTypeLabel->setMaximumSize(QSize(32767, 22));

        horizontalLayout_2->addWidget(mRenderTypeLabel);

        mRenderTypeComboBox = new QComboBox(mBandRenderingGrpBx);
        mRenderTypeComboBox->setObjectName(QString::fromUtf8("mRenderTypeComboBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mRenderTypeComboBox->sizePolicy().hasHeightForWidth());
        mRenderTypeComboBox->setSizePolicy(sizePolicy5);
        mRenderTypeComboBox->setMinimumSize(QSize(0, 26));
        mRenderTypeComboBox->setMaximumSize(QSize(32767, 22));

        horizontalLayout_2->addWidget(mRenderTypeComboBox);

        horizontalSpacer_2 = new QSpacerItem(0, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_21->addLayout(horizontalLayout_2);

        mRendererStackedWidget = new QStackedWidget(mBandRenderingGrpBx);
        mRendererStackedWidget->setObjectName(QString::fromUtf8("mRendererStackedWidget"));

        verticalLayout_21->addWidget(mRendererStackedWidget);


        verticalLayout_10->addWidget(mBandRenderingGrpBx);

        mColorRenderingGrpBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mColorRenderingGrpBox->setObjectName(QString::fromUtf8("mColorRenderingGrpBox"));
        mColorRenderingGrpBox->setProperty("collapsed", QVariant(false));
        mColorRenderingGrpBox->setProperty("saveCollapsedState", QVariant(true));
        mColorRenderingGrpBox->setProperty("syncGroup", QVariant(QString::fromUtf8("rasterstyle")));
        gridLayout_2 = new QGridLayout(mColorRenderingGrpBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelSaturation = new QLabel(mColorRenderingGrpBox);
        labelSaturation->setObjectName(QString::fromUtf8("labelSaturation"));

        gridLayout_2->addWidget(labelSaturation, 2, 0, 1, 1);

        label_3 = new QLabel(mColorRenderingGrpBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        sliderSaturation = new QSlider(mColorRenderingGrpBox);
        sliderSaturation->setObjectName(QString::fromUtf8("sliderSaturation"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(sliderSaturation->sizePolicy().hasHeightForWidth());
        sliderSaturation->setSizePolicy(sizePolicy6);
        sliderSaturation->setMinimumSize(QSize(75, 0));
        sliderSaturation->setMinimum(-100);
        sliderSaturation->setMaximum(100);
        sliderSaturation->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderSaturation, 2, 1, 1, 1);

        mBlendTypeLabel = new QLabel(mColorRenderingGrpBox);
        mBlendTypeLabel->setObjectName(QString::fromUtf8("mBlendTypeLabel"));

        gridLayout_2->addWidget(mBlendTypeLabel, 0, 0, 1, 1);

        label_2 = new QLabel(mColorRenderingGrpBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        mSliderBrightness = new QSlider(mColorRenderingGrpBox);
        mSliderBrightness->setObjectName(QString::fromUtf8("mSliderBrightness"));
        mSliderBrightness->setMinimumSize(QSize(75, 0));
        mSliderBrightness->setMinimum(-255);
        mSliderBrightness->setMaximum(255);
        mSliderBrightness->setOrientation(Qt::Horizontal);
        mSliderBrightness->setTickPosition(QSlider::NoTicks);
        mSliderBrightness->setTickInterval(0);

        gridLayout_2->addWidget(mSliderBrightness, 1, 1, 1, 1);

        mBrightnessSpinBox = new QSpinBox(mColorRenderingGrpBox);
        mBrightnessSpinBox->setObjectName(QString::fromUtf8("mBrightnessSpinBox"));
        mBrightnessSpinBox->setMinimum(-255);
        mBrightnessSpinBox->setMaximum(255);

        gridLayout_2->addWidget(mBrightnessSpinBox, 1, 2, 1, 1);

        mSliderContrast = new QSlider(mColorRenderingGrpBox);
        mSliderContrast->setObjectName(QString::fromUtf8("mSliderContrast"));
        mSliderContrast->setMinimumSize(QSize(75, 0));
        mSliderContrast->setMinimum(-100);
        mSliderContrast->setMaximum(100);
        mSliderContrast->setSingleStep(1);
        mSliderContrast->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(mSliderContrast, 1, 5, 1, 1);

        label_5 = new QLabel(mColorRenderingGrpBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 4, 1, 1);

        mContrastSpinBox = new QSpinBox(mColorRenderingGrpBox);
        mContrastSpinBox->setObjectName(QString::fromUtf8("mContrastSpinBox"));
        mContrastSpinBox->setMinimum(-100);
        mContrastSpinBox->setMaximum(100);

        gridLayout_2->addWidget(mContrastSpinBox, 1, 6, 1, 1);

        line_2 = new QFrame(mColorRenderingGrpBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 2, 3, 1, 1);

        line = new QFrame(mColorRenderingGrpBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 3, 1, 1);

        labelGrayscale = new QLabel(mColorRenderingGrpBox);
        labelGrayscale->setObjectName(QString::fromUtf8("labelGrayscale"));

        gridLayout_2->addWidget(labelGrayscale, 2, 4, 1, 1);

        spinBoxSaturation = new QSpinBox(mColorRenderingGrpBox);
        spinBoxSaturation->setObjectName(QString::fromUtf8("spinBoxSaturation"));
        spinBoxSaturation->setMinimum(-100);
        spinBoxSaturation->setMaximum(100);
        spinBoxSaturation->setValue(0);
        spinBoxSaturation->setProperty("decimals", QVariant(0));

        gridLayout_2->addWidget(spinBoxSaturation, 2, 2, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        mColorizeCheck = new QCheckBox(mColorRenderingGrpBox);
        mColorizeCheck->setObjectName(QString::fromUtf8("mColorizeCheck"));

        horizontalLayout_12->addWidget(mColorizeCheck);

        btnColorizeColor = new QgsColorButtonV2(mColorRenderingGrpBox);
        btnColorizeColor->setObjectName(QString::fromUtf8("btnColorizeColor"));
        btnColorizeColor->setMinimumSize(QSize(100, 0));
        btnColorizeColor->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(btnColorizeColor);

        labelColorizeStrength = new QLabel(mColorRenderingGrpBox);
        labelColorizeStrength->setObjectName(QString::fromUtf8("labelColorizeStrength"));

        horizontalLayout_12->addWidget(labelColorizeStrength);

        sliderColorizeStrength = new QSlider(mColorRenderingGrpBox);
        sliderColorizeStrength->setObjectName(QString::fromUtf8("sliderColorizeStrength"));
        sliderColorizeStrength->setMaximum(100);
        sliderColorizeStrength->setValue(100);
        sliderColorizeStrength->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(sliderColorizeStrength);

        spinColorizeStrength = new QSpinBox(mColorRenderingGrpBox);
        spinColorizeStrength->setObjectName(QString::fromUtf8("spinColorizeStrength"));
        spinColorizeStrength->setMinimum(0);
        spinColorizeStrength->setMaximum(100);
        spinColorizeStrength->setValue(100);

        horizontalLayout_12->addWidget(spinColorizeStrength);


        gridLayout_2->addLayout(horizontalLayout_12, 3, 1, 1, 6);

        mBlendModeComboBox = new QgsBlendModeComboBox(mColorRenderingGrpBox);
        mBlendModeComboBox->setObjectName(QString::fromUtf8("mBlendModeComboBox"));
        mBlendModeComboBox->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(mBlendModeComboBox, 0, 1, 1, 3);

        mResetColorRenderingBtn = new QToolButton(mColorRenderingGrpBox);
        mResetColorRenderingBtn->setObjectName(QString::fromUtf8("mResetColorRenderingBtn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/themes/default/mActionUndo.png"), QSize(), QIcon::Normal, QIcon::Off);
        mResetColorRenderingBtn->setIcon(icon6);
        mResetColorRenderingBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_2->addWidget(mResetColorRenderingBtn, 0, 6, 1, 1);

        comboGrayscale = new QComboBox(mColorRenderingGrpBox);
        comboGrayscale->setObjectName(QString::fromUtf8("comboGrayscale"));

        gridLayout_2->addWidget(comboGrayscale, 2, 5, 1, 2);


        verticalLayout_10->addWidget(mColorRenderingGrpBox);

        mResamplingGroupBox = new QgsCollapsibleGroupBox(scrollAreaWidgetContents);
        mResamplingGroupBox->setObjectName(QString::fromUtf8("mResamplingGroupBox"));
        mResamplingGroupBox->setCheckable(false);
        mResamplingGroupBox->setProperty("collapsed", QVariant(false));
        mResamplingGroupBox->setProperty("saveCollapsedState", QVariant(true));
        mResamplingGroupBox->setProperty("syncGroup", QVariant(QString::fromUtf8("rasterstyle")));
        horizontalLayout = new QHBoxLayout(mResamplingGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mZoomedInResamplingLabel = new QLabel(mResamplingGroupBox);
        mZoomedInResamplingLabel->setObjectName(QString::fromUtf8("mZoomedInResamplingLabel"));

        horizontalLayout->addWidget(mZoomedInResamplingLabel);

        mZoomedInResamplingComboBox = new QComboBox(mResamplingGroupBox);
        mZoomedInResamplingComboBox->setObjectName(QString::fromUtf8("mZoomedInResamplingComboBox"));

        horizontalLayout->addWidget(mZoomedInResamplingComboBox);

        mZoomedOutResamplingLabel = new QLabel(mResamplingGroupBox);
        mZoomedOutResamplingLabel->setObjectName(QString::fromUtf8("mZoomedOutResamplingLabel"));

        horizontalLayout->addWidget(mZoomedOutResamplingLabel);

        mZoomedOutResamplingComboBox = new QComboBox(mResamplingGroupBox);
        mZoomedOutResamplingComboBox->setObjectName(QString::fromUtf8("mZoomedOutResamplingComboBox"));

        horizontalLayout->addWidget(mZoomedOutResamplingComboBox);

        mMaximumOversamplingLabel = new QLabel(mResamplingGroupBox);
        mMaximumOversamplingLabel->setObjectName(QString::fromUtf8("mMaximumOversamplingLabel"));

        horizontalLayout->addWidget(mMaximumOversamplingLabel);

        mMaximumOversamplingSpinBox = new QDoubleSpinBox(mResamplingGroupBox);
        mMaximumOversamplingSpinBox->setObjectName(QString::fromUtf8("mMaximumOversamplingSpinBox"));

        horizontalLayout->addWidget(mMaximumOversamplingSpinBox);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_10->addWidget(mResamplingGroupBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        spacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(spacer_2);

        groupBox10 = new QGroupBox(scrollAreaWidgetContents);
        groupBox10->setObjectName(QString::fromUtf8("groupBox10"));
        _7 = new QGridLayout(groupBox10);
        _7->setObjectName(QString::fromUtf8("_7"));
        pixmapThumbnail = new QLabel(groupBox10);
        pixmapThumbnail->setObjectName(QString::fromUtf8("pixmapThumbnail"));
        pixmapThumbnail->setMinimumSize(QSize(120, 120));
        pixmapThumbnail->setMaximumSize(QSize(120, 120));
        pixmapThumbnail->setFrameShape(QFrame::StyledPanel);
        pixmapThumbnail->setScaledContents(true);

        _7->addWidget(pixmapThumbnail, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(groupBox10);

        groupBox9 = new QGroupBox(scrollAreaWidgetContents);
        groupBox9->setObjectName(QString::fromUtf8("groupBox9"));
        _8 = new QGridLayout(groupBox9);
        _8->setObjectName(QString::fromUtf8("_8"));
        pixmapLegend = new QLabel(groupBox9);
        pixmapLegend->setObjectName(QString::fromUtf8("pixmapLegend"));
        pixmapLegend->setMinimumSize(QSize(120, 120));
        pixmapLegend->setMaximumSize(QSize(120, 120));
        pixmapLegend->setFrameShape(QFrame::Box);
        pixmapLegend->setScaledContents(true);

        _8->addWidget(pixmapLegend, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(groupBox9);

        groupBox8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox8->setObjectName(QString::fromUtf8("groupBox8"));
        _9 = new QGridLayout(groupBox8);
        _9->setObjectName(QString::fromUtf8("_9"));
        pixmapPalette = new QLabel(groupBox8);
        pixmapPalette->setObjectName(QString::fromUtf8("pixmapPalette"));
        pixmapPalette->setMinimumSize(QSize(120, 120));
        pixmapPalette->setMaximumSize(QSize(120, 120));
        pixmapPalette->setFrameShape(QFrame::Box);
        pixmapPalette->setScaledContents(true);

        _9->addWidget(pixmapPalette, 0, 0, 1, 1);


        horizontalLayout_10->addWidget(groupBox8);

        spacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(spacer);


        verticalLayout_10->addLayout(horizontalLayout_10);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_14->addWidget(scrollArea);

        mOptionsStackedWidget->addWidget(mOptsPage_Style);
        mOptsPage_Transparency = new QWidget();
        mOptsPage_Transparency->setObjectName(QString::fromUtf8("mOptsPage_Transparency"));
        verticalLayout_4 = new QVBoxLayout(mOptsPage_Transparency);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(mOptsPage_Transparency);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 615, 542));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gboxGlobalTransp = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxGlobalTransp->setObjectName(QString::fromUtf8("gboxGlobalTransp"));
        gboxGlobalTransp->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        _3 = new QGridLayout(gboxGlobalTransp);
        _3->setObjectName(QString::fromUtf8("_3"));
        sliderTransparency = new QSlider(gboxGlobalTransp);
        sliderTransparency->setObjectName(QString::fromUtf8("sliderTransparency"));
        sizePolicy6.setHeightForWidth(sliderTransparency->sizePolicy().hasHeightForWidth());
        sliderTransparency->setSizePolicy(sizePolicy6);
        sliderTransparency->setMaximum(255);
        sliderTransparency->setOrientation(Qt::Horizontal);
        sliderTransparency->setTickInterval(25);

        _3->addWidget(sliderTransparency, 0, 0, 1, 5);

        textLabel3 = new QLabel(gboxGlobalTransp);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        _3->addWidget(textLabel3, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem, 1, 1, 1, 1);

        lblTransparencyPercent = new QLabel(gboxGlobalTransp);
        lblTransparencyPercent->setObjectName(QString::fromUtf8("lblTransparencyPercent"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lblTransparencyPercent->sizePolicy().hasHeightForWidth());
        lblTransparencyPercent->setSizePolicy(sizePolicy7);

        _3->addWidget(lblTransparencyPercent, 1, 2, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem1, 1, 3, 1, 1);

        textLabel4 = new QLabel(gboxGlobalTransp);
        textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

        _3->addWidget(textLabel4, 1, 4, 1, 1);


        horizontalLayout_4->addWidget(gboxGlobalTransp);

        gboxNoDataValue = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxNoDataValue->setObjectName(QString::fromUtf8("gboxNoDataValue"));
        gboxNoDataValue->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        gridLayout_11 = new QGridLayout(gboxNoDataValue);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(1, -1, -1, -1);
        mSrcNoDataValueCheckBox = new QCheckBox(gboxNoDataValue);
        mSrcNoDataValueCheckBox->setObjectName(QString::fromUtf8("mSrcNoDataValueCheckBox"));

        horizontalLayout_5->addWidget(mSrcNoDataValueCheckBox);

        lblSrcNoDataValue = new QLabel(gboxNoDataValue);
        lblSrcNoDataValue->setObjectName(QString::fromUtf8("lblSrcNoDataValue"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(lblSrcNoDataValue->sizePolicy().hasHeightForWidth());
        lblSrcNoDataValue->setSizePolicy(sizePolicy8);

        horizontalLayout_5->addWidget(lblSrcNoDataValue);


        gridLayout_11->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lblUserNoDataValueLabel = new QLabel(gboxNoDataValue);
        lblUserNoDataValueLabel->setObjectName(QString::fromUtf8("lblUserNoDataValueLabel"));

        horizontalLayout_6->addWidget(lblUserNoDataValueLabel);

        leNoDataValue = new QLineEdit(gboxNoDataValue);
        leNoDataValue->setObjectName(QString::fromUtf8("leNoDataValue"));

        horizontalLayout_6->addWidget(leNoDataValue);


        gridLayout_11->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        horizontalLayout_4->addWidget(gboxNoDataValue);


        verticalLayout_5->addLayout(horizontalLayout_4);

        gboxCustomTransparency = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_2);
        gboxCustomTransparency->setObjectName(QString::fromUtf8("gboxCustomTransparency"));
        sizePolicy3.setHeightForWidth(gboxCustomTransparency->sizePolicy().hasHeightForWidth());
        gboxCustomTransparency->setSizePolicy(sizePolicy3);
        gboxCustomTransparency->setProperty("syncGroup", QVariant(QString::fromUtf8("rastertransp")));
        gridLayout_3 = new QGridLayout(gboxCustomTransparency);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableTransparency = new QTableWidget(gboxCustomTransparency);
        tableTransparency->setObjectName(QString::fromUtf8("tableTransparency"));
        tableTransparency->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableTransparency->setAlternatingRowColors(true);
        tableTransparency->setSelectionMode(QAbstractItemView::SingleSelection);
        tableTransparency->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableTransparency->setShowGrid(false);
        tableTransparency->setRowCount(0);
        tableTransparency->setColumnCount(0);
        tableTransparency->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableTransparency, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lblTransparent = new QLabel(gboxCustomTransparency);
        lblTransparent->setObjectName(QString::fromUtf8("lblTransparent"));
        QSizePolicy sizePolicy9(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(lblTransparent->sizePolicy().hasHeightForWidth());
        lblTransparent->setSizePolicy(sizePolicy9);

        horizontalLayout_7->addWidget(lblTransparent);

        cboxTransparencyBand = new QComboBox(gboxCustomTransparency);
        cboxTransparencyBand->setObjectName(QString::fromUtf8("cboxTransparencyBand"));
        cboxTransparencyBand->setEnabled(true);
        sizePolicy4.setHeightForWidth(cboxTransparencyBand->sizePolicy().hasHeightForWidth());
        cboxTransparencyBand->setSizePolicy(sizePolicy4);
        cboxTransparencyBand->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(cboxTransparencyBand);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        _2 = new QVBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 6, 0, 6);
        pbnAddValuesManually = new QToolButton(gboxCustomTransparency);
        pbnAddValuesManually->setObjectName(QString::fromUtf8("pbnAddValuesManually"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/themes/default/symbologyAdd.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesManually->setIcon(icon7);

        _2->addWidget(pbnAddValuesManually);

        pbnAddValuesFromDisplay = new QToolButton(gboxCustomTransparency);
        pbnAddValuesFromDisplay->setObjectName(QString::fromUtf8("pbnAddValuesFromDisplay"));
        pbnAddValuesFromDisplay->setEnabled(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/themes/default/mActionContextHelp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbnAddValuesFromDisplay->setIcon(icon8);

        _2->addWidget(pbnAddValuesFromDisplay);

        pbnRemoveSelectedRow = new QToolButton(gboxCustomTransparency);
        pbnRemoveSelectedRow->setObjectName(QString::fromUtf8("pbnRemoveSelectedRow"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/themes/default/symbologyRemove.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnRemoveSelectedRow->setIcon(icon9);

        _2->addWidget(pbnRemoveSelectedRow);

        pbnDefaultValues = new QToolButton(gboxCustomTransparency);
        pbnDefaultValues->setObjectName(QString::fromUtf8("pbnDefaultValues"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/themes/default/mActionOpenTable.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnDefaultValues->setIcon(icon10);

        _2->addWidget(pbnDefaultValues);

        pbnImportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnImportTransparentPixelValues->setObjectName(QString::fromUtf8("pbnImportTransparentPixelValues"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/themes/default/mActionFileOpen.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnImportTransparentPixelValues->setIcon(icon11);

        _2->addWidget(pbnImportTransparentPixelValues);

        pbnExportTransparentPixelValues = new QToolButton(gboxCustomTransparency);
        pbnExportTransparentPixelValues->setObjectName(QString::fromUtf8("pbnExportTransparentPixelValues"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/themes/default/mActionFileSave.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pbnExportTransparentPixelValues->setIcon(icon12);

        _2->addWidget(pbnExportTransparentPixelValues);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(verticalSpacer_2);


        gridLayout_3->addLayout(_2, 2, 1, 1, 1);

        label_6 = new QLabel(gboxCustomTransparency);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);


        verticalLayout_5->addWidget(gboxCustomTransparency);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(scrollArea_2);

        mOptionsStackedWidget->addWidget(mOptsPage_Transparency);
        mOptsPage_Pyramids = new QWidget();
        mOptsPage_Pyramids->setObjectName(QString::fromUtf8("mOptsPage_Pyramids"));
        verticalLayout_9 = new QVBoxLayout(mOptsPage_Pyramids);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(mOptsPage_Pyramids);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 615, 542));
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(-1, 0, -1, 0);
        mPyramidsGrpBx = new QGroupBox(scrollAreaWidgetContents_5);
        mPyramidsGrpBx->setObjectName(QString::fromUtf8("mPyramidsGrpBx"));
        gridLayout_6 = new QGridLayout(mPyramidsGrpBx);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        textLabel4_2 = new QLabel(mPyramidsGrpBx);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));

        gridLayout_6->addWidget(textLabel4_2, 2, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        textLabel5 = new QLabel(mPyramidsGrpBx);
        textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

        gridLayout_8->addWidget(textLabel5, 0, 1, 1, 1);

        lbxPyramidResolutions = new QListWidget(mPyramidsGrpBx);
        lbxPyramidResolutions->setObjectName(QString::fromUtf8("lbxPyramidResolutions"));
        lbxPyramidResolutions->setMinimumSize(QSize(150, 0));
        lbxPyramidResolutions->setMaximumSize(QSize(150, 32767));
        lbxPyramidResolutions->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout_8->addWidget(lbxPyramidResolutions, 1, 1, 1, 1);

        tePyramidDescription = new QTextEdit(mPyramidsGrpBx);
        tePyramidDescription->setObjectName(QString::fromUtf8("tePyramidDescription"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy10.setHorizontalStretch(4);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(tePyramidDescription->sizePolicy().hasHeightForWidth());
        tePyramidDescription->setSizePolicy(sizePolicy10);

        gridLayout_8->addWidget(tePyramidDescription, 0, 0, 2, 1);


        gridLayout_6->addLayout(gridLayout_8, 0, 0, 1, 5);

        buttonBuildPyramids = new QPushButton(mPyramidsGrpBx);
        buttonBuildPyramids->setObjectName(QString::fromUtf8("buttonBuildPyramids"));
        buttonBuildPyramids->setEnabled(false);

        gridLayout_6->addWidget(buttonBuildPyramids, 2, 4, 1, 1);

        cboResamplingMethod = new QComboBox(mPyramidsGrpBx);
        cboResamplingMethod->setObjectName(QString::fromUtf8("cboResamplingMethod"));

        gridLayout_6->addWidget(cboResamplingMethod, 2, 1, 1, 1);

        mPyramidProgress = new QProgressBar(mPyramidsGrpBx);
        mPyramidProgress->setObjectName(QString::fromUtf8("mPyramidProgress"));
        mPyramidProgress->setValue(0);

        gridLayout_6->addWidget(mPyramidProgress, 2, 2, 1, 2);

        cbxPyramidsFormat = new QComboBox(mPyramidsGrpBx);
        cbxPyramidsFormat->setObjectName(QString::fromUtf8("cbxPyramidsFormat"));
        sizePolicy6.setHeightForWidth(cbxPyramidsFormat->sizePolicy().hasHeightForWidth());
        cbxPyramidsFormat->setSizePolicy(sizePolicy6);

        gridLayout_6->addWidget(cbxPyramidsFormat, 1, 1, 1, 1);

        label_11 = new QLabel(mPyramidsGrpBx);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 1, 0, 1, 1);


        verticalLayout_12->addWidget(mPyramidsGrpBx);

        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_9->addWidget(scrollArea_5);

        mOptionsStackedWidget->addWidget(mOptsPage_Pyramids);
        mOptsPage_Histogram = new QWidget();
        mOptsPage_Histogram->setObjectName(QString::fromUtf8("mOptsPage_Histogram"));
        verticalLayout_15 = new QVBoxLayout(mOptsPage_Histogram);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        scrollArea_6 = new QScrollArea(mOptsPage_Histogram);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 615, 542));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(-1, 0, -1, 0);
        mHistogramGrpBx = new QGroupBox(scrollAreaWidgetContents_6);
        mHistogramGrpBx->setObjectName(QString::fromUtf8("mHistogramGrpBx"));
        verticalLayout_19 = new QVBoxLayout(mHistogramGrpBx);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(-1, -1, 0, -1);
        mHistogramStackedWidget = new QStackedWidget(mHistogramGrpBx);
        mHistogramStackedWidget->setObjectName(QString::fromUtf8("mHistogramStackedWidget"));

        verticalLayout_19->addWidget(mHistogramStackedWidget);


        verticalLayout_16->addWidget(mHistogramGrpBx);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_15->addWidget(scrollArea_6);

        mOptionsStackedWidget->addWidget(mOptsPage_Histogram);
        mOptsPage_Metadata = new QWidget();
        mOptsPage_Metadata->setObjectName(QString::fromUtf8("mOptsPage_Metadata"));
        verticalLayout_8 = new QVBoxLayout(mOptsPage_Metadata);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QScrollArea(mOptsPage_Metadata);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, -99, 599, 641));
        gridLayout_12 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        mMetaDescriptionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaDescriptionGrpBx->setObjectName(QString::fromUtf8("mMetaDescriptionGrpBx"));
        mMetaDescriptionGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("rastermeta")));
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
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(mLayerAbstractTextEdit->sizePolicy().hasHeightForWidth());
        mLayerAbstractTextEdit->setSizePolicy(sizePolicy11);
        mLayerAbstractTextEdit->setMaximumSize(QSize(16777215, 50));

        gridLayout_5->addWidget(mLayerAbstractTextEdit, 3, 1, 1, 1);

        mLayerKeywordListLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel->setObjectName(QString::fromUtf8("mLayerKeywordListLabel"));

        gridLayout_5->addWidget(mLayerKeywordListLabel, 5, 0, 1, 1);

        mLayerKeywordListLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerKeywordListLineEdit->setObjectName(QString::fromUtf8("mLayerKeywordListLineEdit"));

        gridLayout_5->addWidget(mLayerKeywordListLineEdit, 5, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        mLayerDataUrlLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerDataUrlLineEdit->setObjectName(QString::fromUtf8("mLayerDataUrlLineEdit"));

        horizontalLayout_13->addWidget(mLayerDataUrlLineEdit);

        mLayerDataUrlFormatLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerDataUrlFormatLabel"));

        horizontalLayout_13->addWidget(mLayerDataUrlFormatLabel);

        mLayerDataUrlFormatComboBox = new QComboBox(mMetaDescriptionGrpBx);
        mLayerDataUrlFormatComboBox->insertItems(0, QStringList()
         << QString::fromUtf8("text/html")
         << QString::fromUtf8("text/plain")
         << QString::fromUtf8("application/pdf")
        );
        mLayerDataUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerDataUrlFormatComboBox"));

        horizontalLayout_13->addWidget(mLayerDataUrlFormatComboBox);


        gridLayout_5->addLayout(horizontalLayout_13, 6, 1, 1, 1);

        mLayerKeywordListLabel_3 = new QLabel(mMetaDescriptionGrpBx);
        mLayerKeywordListLabel_3->setObjectName(QString::fromUtf8("mLayerKeywordListLabel_3"));

        gridLayout_5->addWidget(mLayerKeywordListLabel_3, 6, 0, 1, 1);

        mLayerShortNameLabel = new QLabel(mMetaDescriptionGrpBx);
        mLayerShortNameLabel->setObjectName(QString::fromUtf8("mLayerShortNameLabel"));

        gridLayout_5->addWidget(mLayerShortNameLabel, 0, 0, 1, 1);

        mLayerShortNameLineEdit = new QLineEdit(mMetaDescriptionGrpBx);
        mLayerShortNameLineEdit->setObjectName(QString::fromUtf8("mLayerShortNameLineEdit"));

        gridLayout_5->addWidget(mLayerShortNameLineEdit, 0, 1, 1, 1);


        gridLayout_12->addWidget(mMetaDescriptionGrpBx, 0, 0, 1, 1);

        mMetaAttributionGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
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


        gridLayout_12->addWidget(mMetaAttributionGrpBx, 1, 0, 1, 1);

        mMetaMetaUrlGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
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

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        gridLayout_9->addLayout(horizontalLayout_8, 1, 1, 1, 1);


        gridLayout_12->addWidget(mMetaMetaUrlGrpBx, 2, 0, 1, 1);

        mMetaLegendGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaLegendGrpBx->setObjectName(QString::fromUtf8("mMetaLegendGrpBx"));
        gridLayout_10 = new QGridLayout(mMetaLegendGrpBx);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        mLayerLegendUrlLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlLabel->setObjectName(QString::fromUtf8("mLayerLegendUrlLabel"));

        horizontalLayout_11->addWidget(mLayerLegendUrlLabel);

        mLayerLegendUrlLineEdit = new QLineEdit(mMetaLegendGrpBx);
        mLayerLegendUrlLineEdit->setObjectName(QString::fromUtf8("mLayerLegendUrlLineEdit"));

        horizontalLayout_11->addWidget(mLayerLegendUrlLineEdit);

        mLayerLegendUrlFormatLabel = new QLabel(mMetaLegendGrpBx);
        mLayerLegendUrlFormatLabel->setObjectName(QString::fromUtf8("mLayerLegendUrlFormatLabel"));

        horizontalLayout_11->addWidget(mLayerLegendUrlFormatLabel);

        mLayerLegendUrlFormatComboBox = new QComboBox(mMetaLegendGrpBx);
        mLayerLegendUrlFormatComboBox->setObjectName(QString::fromUtf8("mLayerLegendUrlFormatComboBox"));
        mLayerLegendUrlFormatComboBox->setMinimumSize(QSize(137, 0));

        horizontalLayout_11->addWidget(mLayerLegendUrlFormatComboBox);


        gridLayout_10->addLayout(horizontalLayout_11, 0, 0, 1, 1);


        gridLayout_12->addWidget(mMetaLegendGrpBx, 3, 0, 1, 1);

        mMetaPropertiesGrpBx = new QgsCollapsibleGroupBox(scrollAreaWidgetContents_4);
        mMetaPropertiesGrpBx->setObjectName(QString::fromUtf8("mMetaPropertiesGrpBx"));
        sizePolicy3.setHeightForWidth(mMetaPropertiesGrpBx->sizePolicy().hasHeightForWidth());
        mMetaPropertiesGrpBx->setSizePolicy(sizePolicy3);
        mMetaPropertiesGrpBx->setProperty("syncGroup", QVariant(QString::fromUtf8("rastermeta")));
        verticalLayout_11 = new QVBoxLayout(mMetaPropertiesGrpBx);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        txtbMetadata = new QTextBrowser(mMetaPropertiesGrpBx);
        txtbMetadata->setObjectName(QString::fromUtf8("txtbMetadata"));

        verticalLayout_11->addWidget(txtbMetadata);


        gridLayout_12->addWidget(mMetaPropertiesGrpBx, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 5, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_8->addWidget(scrollArea_4);

        mOptionsStackedWidget->addWidget(mOptsPage_Metadata);

        verticalLayout_3->addWidget(mOptionsStackedWidget);

        mOptionsSplitter->addWidget(mOptionsFrame);

        verticalLayout->addWidget(mOptionsSplitter);

        mButtonBoxFrame = new QFrame(QgsRasterLayerPropertiesBase);
        mButtonBoxFrame->setObjectName(QString::fromUtf8("mButtonBoxFrame"));
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(mButtonBoxFrame->sizePolicy().hasHeightForWidth());
        mButtonBoxFrame->setSizePolicy(sizePolicy12);
        mButtonBoxFrame->setFrameShape(QFrame::NoFrame);
        mButtonBoxFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(mButtonBoxFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(mButtonBoxFrame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 2);


        verticalLayout->addWidget(mButtonBoxFrame);

        QWidget::setTabOrder(mOptionsListWidget, scrollArea_3);
        QWidget::setTabOrder(scrollArea_3, mLayerOrigNameLineEd);
        QWidget::setTabOrder(mLayerOrigNameLineEd, leDisplayName);
        QWidget::setTabOrder(leDisplayName, leLayerSource);
        QWidget::setTabOrder(leLayerSource, mCrsSelector);
        QWidget::setTabOrder(mCrsSelector, chkUseScaleDependentRendering);
        QWidget::setTabOrder(chkUseScaleDependentRendering, scrollArea);
        QWidget::setTabOrder(scrollArea, mRenderTypeComboBox);
        QWidget::setTabOrder(mRenderTypeComboBox, mBlendModeComboBox);
        QWidget::setTabOrder(mBlendModeComboBox, mResetColorRenderingBtn);
        QWidget::setTabOrder(mResetColorRenderingBtn, mSliderBrightness);
        QWidget::setTabOrder(mSliderBrightness, mBrightnessSpinBox);
        QWidget::setTabOrder(mBrightnessSpinBox, mSliderContrast);
        QWidget::setTabOrder(mSliderContrast, mContrastSpinBox);
        QWidget::setTabOrder(mContrastSpinBox, sliderSaturation);
        QWidget::setTabOrder(sliderSaturation, spinBoxSaturation);
        QWidget::setTabOrder(spinBoxSaturation, comboGrayscale);
        QWidget::setTabOrder(comboGrayscale, mColorizeCheck);
        QWidget::setTabOrder(mColorizeCheck, btnColorizeColor);
        QWidget::setTabOrder(btnColorizeColor, sliderColorizeStrength);
        QWidget::setTabOrder(sliderColorizeStrength, spinColorizeStrength);
        QWidget::setTabOrder(spinColorizeStrength, mZoomedInResamplingComboBox);
        QWidget::setTabOrder(mZoomedInResamplingComboBox, mZoomedOutResamplingComboBox);
        QWidget::setTabOrder(mZoomedOutResamplingComboBox, mMaximumOversamplingSpinBox);
        QWidget::setTabOrder(mMaximumOversamplingSpinBox, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, sliderTransparency);
        QWidget::setTabOrder(sliderTransparency, mSrcNoDataValueCheckBox);
        QWidget::setTabOrder(mSrcNoDataValueCheckBox, leNoDataValue);
        QWidget::setTabOrder(leNoDataValue, cboxTransparencyBand);
        QWidget::setTabOrder(cboxTransparencyBand, tableTransparency);
        QWidget::setTabOrder(tableTransparency, pbnAddValuesManually);
        QWidget::setTabOrder(pbnAddValuesManually, pbnAddValuesFromDisplay);
        QWidget::setTabOrder(pbnAddValuesFromDisplay, pbnRemoveSelectedRow);
        QWidget::setTabOrder(pbnRemoveSelectedRow, pbnDefaultValues);
        QWidget::setTabOrder(pbnDefaultValues, pbnImportTransparentPixelValues);
        QWidget::setTabOrder(pbnImportTransparentPixelValues, pbnExportTransparentPixelValues);
        QWidget::setTabOrder(pbnExportTransparentPixelValues, scrollArea_5);
        QWidget::setTabOrder(scrollArea_5, tePyramidDescription);
        QWidget::setTabOrder(tePyramidDescription, lbxPyramidResolutions);
        QWidget::setTabOrder(lbxPyramidResolutions, cbxPyramidsFormat);
        QWidget::setTabOrder(cbxPyramidsFormat, cboResamplingMethod);
        QWidget::setTabOrder(cboResamplingMethod, buttonBuildPyramids);
        QWidget::setTabOrder(buttonBuildPyramids, scrollArea_6);
        QWidget::setTabOrder(scrollArea_6, scrollArea_4);
        QWidget::setTabOrder(scrollArea_4, mLayerShortNameLineEdit);
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
        QWidget::setTabOrder(mLayerLegendUrlFormatComboBox, txtbMetadata);

        retranslateUi(QgsRasterLayerPropertiesBase);
        QObject::connect(mOptionsListWidget, SIGNAL(currentRowChanged(int)), mOptionsStackedWidget, SLOT(setCurrentIndex(int)));

        mOptionsStackedWidget->setCurrentIndex(0);
        mLayerLegendUrlFormatComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QgsRasterLayerPropertiesBase);
    } // setupUi

    void retranslateUi(QDialog *QgsRasterLayerPropertiesBase)
    {
        QgsRasterLayerPropertiesBase->setWindowTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Raster Layer Properties", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = mOptionsListWidget->isSortingEnabled();
        mOptionsListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = mOptionsListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "General", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = mOptionsListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Style", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Style", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = mOptionsListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem2->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem3 = mOptionsListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Pyramids", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Pyramids", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem4 = mOptionsListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Histogram", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem4->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Histogram", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem5 = mOptionsListWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem5->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Metadata", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mOptionsListWidget->setSortingEnabled(__sortingEnabled);

        mLayerInfoGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Layer info", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "displayed as", 0, QApplication::UnicodeUTF8));
        lblDisplayName->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Layer name", 0, QApplication::UnicodeUTF8));
        lblLayerSource->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Layer source", 0, QApplication::UnicodeUTF8));
        lblColumns->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Columns", 0, QApplication::UnicodeUTF8));
        lblRows->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Rows", 0, QApplication::UnicodeUTF8));
        lblNoData->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "No Data", 0, QApplication::UnicodeUTF8));
        grpSRS->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Coordinate reference system", 0, QApplication::UnicodeUTF8));
        chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Scale dependent visibility", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mScaleRangeWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mScaleRangeWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        mBandRenderingGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Band rendering", 0, QApplication::UnicodeUTF8));
        mRenderTypeLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Render type", 0, QApplication::UnicodeUTF8));
        mColorRenderingGrpBox->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Color rendering", 0, QApplication::UnicodeUTF8));
        labelSaturation->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Saturation", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Hue", 0, QApplication::UnicodeUTF8));
        mBlendTypeLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Blending mode", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Brightness", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Contrast", 0, QApplication::UnicodeUTF8));
        labelGrayscale->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Grayscale", 0, QApplication::UnicodeUTF8));
        mColorizeCheck->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Colorize", 0, QApplication::UnicodeUTF8));
        btnColorizeColor->setText(QString());
        labelColorizeStrength->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Strength", 0, QApplication::UnicodeUTF8));
        spinColorizeStrength->setSuffix(QApplication::translate("QgsRasterLayerPropertiesBase", "%", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mResetColorRenderingBtn->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Reset all color rendering options to default", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mResetColorRenderingBtn->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Reset", 0, QApplication::UnicodeUTF8));
        comboGrayscale->clear();
        comboGrayscale->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Off", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "By lightness", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "By luminosity", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "By average", 0, QApplication::UnicodeUTF8)
        );
        mResamplingGroupBox->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Resampling", 0, QApplication::UnicodeUTF8));
        mZoomedInResamplingLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Zoomed: in", 0, QApplication::UnicodeUTF8));
        mZoomedOutResamplingLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "out", 0, QApplication::UnicodeUTF8));
        mMaximumOversamplingLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Oversampling", 0, QApplication::UnicodeUTF8));
        groupBox10->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Thumbnail", 0, QApplication::UnicodeUTF8));
        groupBox9->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Legend", 0, QApplication::UnicodeUTF8));
        groupBox8->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Palette", 0, QApplication::UnicodeUTF8));
        gboxGlobalTransp->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Global transparency", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "None", 0, QApplication::UnicodeUTF8));
        lblTransparencyPercent->setText(QApplication::translate("QgsRasterLayerPropertiesBase", " 00%", 0, QApplication::UnicodeUTF8));
        textLabel4->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<p align=\"right\">Full</p>", 0, QApplication::UnicodeUTF8));
        gboxNoDataValue->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "No data value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mSrcNoDataValueCheckBox->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Use original source no data value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mSrcNoDataValueCheckBox->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "No data value:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblSrcNoDataValue->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Original data source no data value, if exists.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblSrcNoDataValue->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "<src no data value>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lblUserNoDataValueLabel->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Additional user defined no data value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lblUserNoDataValueLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Additional no data value", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leNoDataValue->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Additional user defined no data value.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        gboxCustomTransparency->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Custom transparency options", 0, QApplication::UnicodeUTF8));
        lblTransparent->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparency band", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnAddValuesManually->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Add values manually", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnAddValuesManually->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnAddValuesFromDisplay->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Add values from display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnAddValuesFromDisplay->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnRemoveSelectedRow->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Remove selected row", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnRemoveSelectedRow->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnDefaultValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Default values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnDefaultValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnImportTransparentPixelValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Import from file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnImportTransparentPixelValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbnExportTransparentPixelValues->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Export to file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbnExportTransparentPixelValues->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Transparent pixel list", 0, QApplication::UnicodeUTF8));
        mPyramidsGrpBx->setTitle(QString());
        textLabel4_2->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Resampling method", 0, QApplication::UnicodeUTF8));
        textLabel5->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Resolutions", 0, QApplication::UnicodeUTF8));
        tePyramidDescription->setHtml(QApplication::translate("QgsRasterLayerPropertiesBase", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell';\"><br /></span></p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonBuildPyramids->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Build pyramids", 0, QApplication::UnicodeUTF8));
        cboResamplingMethod->clear();
        cboResamplingMethod->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Average", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Nearest Neighbour", 0, QApplication::UnicodeUTF8)
        );
        cbxPyramidsFormat->clear();
        cbxPyramidsFormat->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterLayerPropertiesBase", "External", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "Internal (if possible)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "External (Erdas Imagine)", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Overview format", 0, QApplication::UnicodeUTF8));
        mHistogramGrpBx->setTitle(QString());
        mMetaDescriptionGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Description", 0, QApplication::UnicodeUTF8));
        mLayerTitleLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerTitleLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerTitleLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "The title is for the benefit of humans to identify layer.", 0, QApplication::UnicodeUTF8));
        mLayerAbstractLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Abstract", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerAbstractTextEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "The abstract is a descriptive narrative providing more information about the layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerKeywordListLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Keyword list", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerKeywordListLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerKeywordListLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "List of keywords separated by comma to help catalog searching.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerDataUrlLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "An URL of the data presentation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerDataUrlLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "An URL of the data presentation.", 0, QApplication::UnicodeUTF8));
        mLayerDataUrlFormatLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Format", 0, QApplication::UnicodeUTF8));
        mLayerKeywordListLabel_3->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Data Url", 0, QApplication::UnicodeUTF8));
        mLayerShortNameLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Short name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerShortNameLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerShortNameLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "A name used to identify the layer. The short name is a text string used for machine-to-machine communication.", 0, QApplication::UnicodeUTF8));
        mMetaAttributionGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution", 0, QApplication::UnicodeUTF8));
        mLayerAttributionLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Title", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerAttributionLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerAttributionLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's title indicates the provider of the layer.", 0, QApplication::UnicodeUTF8));
        mLayerAttributionUrlLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Url", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerAttributionUrlLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerAttributionUrlLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "Attribution's url gives a link to the webpage of the provider of the data layer.", 0, QApplication::UnicodeUTF8));
        mMetaMetaUrlGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "MetadataUrl", 0, QApplication::UnicodeUTF8));
        mLayerMetadataUrlLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Url", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerMetadataUrlLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "The URL of the metadata document.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerMetadataUrlLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "The URL of the metadata document.", 0, QApplication::UnicodeUTF8));
        mLayerMetadataUrlTypeLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Type", 0, QApplication::UnicodeUTF8));
        mLayerMetadataUrlFormatLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Format", 0, QApplication::UnicodeUTF8));
        mMetaLegendGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "LegendUrl", 0, QApplication::UnicodeUTF8));
        mLayerLegendUrlLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Url", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mLayerLegendUrlLineEdit->setToolTip(QApplication::translate("QgsRasterLayerPropertiesBase", "An URL of the legend image.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mLayerLegendUrlLineEdit->setPlaceholderText(QApplication::translate("QgsRasterLayerPropertiesBase", "An URL of the legend image.", 0, QApplication::UnicodeUTF8));
        mLayerLegendUrlFormatLabel->setText(QApplication::translate("QgsRasterLayerPropertiesBase", "Format", 0, QApplication::UnicodeUTF8));
        mLayerLegendUrlFormatComboBox->clear();
        mLayerLegendUrlFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("QgsRasterLayerPropertiesBase", "image/png", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "image/jpeg", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QgsRasterLayerPropertiesBase", "image/jpg", 0, QApplication::UnicodeUTF8)
        );
        mMetaPropertiesGrpBx->setTitle(QApplication::translate("QgsRasterLayerPropertiesBase", "Properties", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QgsRasterLayerPropertiesBase: public Ui_QgsRasterLayerPropertiesBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QGSRASTERLAYERPROPERTIESBASE_H
