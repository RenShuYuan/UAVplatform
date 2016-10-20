/***************************************************************************
                          qgsoptions.cpp
                    Set user options and preferences
                             -------------------
    begin                : May 28, 2004
    copyright            : (C) 2004 by Gary E.Sherman
    email                : sherman at mrcc.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "qgsapplication.h"
#include "qgsdistancearea.h"
#include "qgsoptions.h"
#include "qgis.h"
#include "uav/uavmain.h"
#include "app/qgisappstylesheet.h"
#include "qgshighlight.h"
#include "qgsmapcanvas.h"
#include "qgsmaprenderer.h"
#include "qgsgenericprojectionselector.h"
#include "qgscoordinatereferencesystem.h"
#include "qgstolerance.h"
#include "qgsscaleutils.h"
#include "qgsproject.h"

#include "qgsattributetablefiltermodel.h"
#include "qgsrasterformatsaveoptionswidget.h"
#include "qgsrasterpyramidsoptionswidget.h"
#include "qgsdialog.h"
//#include "qgscomposer.h"
#include "qgscolorschemeregistry.h"
#include "qgssymbollayerv2utils.h"
#include "qgscolordialog.h"
#include "qgsexpressioncontext.h"
#include "qgsunittypes.h"
#include "qgsrasterlayer.h"

#include <QInputDialog>
#include <QFileDialog>
#include <QSettings>
#include <QColorDialog>
#include <QLocale>
#include <QProcess>
#include <QToolBar>
#include <QScrollBar>
#include <QSize>
#include <QStyleFactory>
#include <QMessageBox>

#include <limits>
#include <sqlite3.h>
#include "qgslogger.h"

#define CPL_SUPRESS_CPLUSPLUS
#include <gdal.h>
#include <geos_c.h>
#include <cpl_conv.h> // for setting gdal options

#include "qgsconfig.h"

/**
 * \class QgsOptions - Set user options and preferences
 * Constructor
 */
QgsOptions::QgsOptions( QWidget *parent, Qt::WindowFlags fl ) :
    QgsOptionsDialogBase( "Options", parent, fl ),
    mSettings( nullptr )
{
  setupUi( this );

  // QgsOptionsDialogBase handles saving/restoring of geometry, splitter and current tab states,
  // switching vertical tabs between icon/text to icon-only modes (splitter collapsed to left),
  // and connecting QDialogButtonBox's accepted/rejected signals to dialog's accept/reject slots
  initOptionsBase( false );

  // stylesheet 设置
  mStyleSheetBuilder = UavMain::instance()->styleSheetBuilder();
  mStyleSheetNewOpts = mStyleSheetBuilder->defaultOptions();
  mStyleSheetOldOpts = QMap<QString, QVariant>( mStyleSheetNewOpts );

  connect( mFontFamilyRadioCustom, SIGNAL( toggled( bool ) ), mFontFamilyComboBox, SLOT( setEnabled( bool ) ) );

  connect( cmbIconSize, SIGNAL( activated( const QString& ) ), this, SLOT( iconSizeChanged( const QString& ) ) );
  connect( cmbIconSize, SIGNAL( highlighted( const QString& ) ), this, SLOT( iconSizeChanged( const QString& ) ) );
  connect( cmbIconSize, SIGNAL( editTextChanged( const QString& ) ), this, SLOT( iconSizeChanged( const QString& ) ) );

  connect( this, SIGNAL( accepted() ), this, SLOT( saveOptions() ) );
  connect( this, SIGNAL( rejected() ), this, SLOT( rejectOptions() ) );

  // 风格
  QStringList styles = QStyleFactory::keys();
  cmbStyle->addItems( styles );

  QStringList themes = QgsApplication::uiThemes().keys();
  cmbUITheme->addItems( themes );

  connect( cmbUITheme, SIGNAL( currentIndexChanged( const QString& ) ), this, SLOT( uiThemeChanged( const QString& ) ) );

  mIdentifyHighlightColorButton->setColorDialogTitle( tr( "Identify highlight color" ) );
  mIdentifyHighlightColorButton->setAllowAlpha( true );
  mIdentifyHighlightColorButton->setContext( "gui" );
  mIdentifyHighlightColorButton->setDefaultColor( QGis::DEFAULT_HIGHLIGHT_COLOR );

  mSettings = new QSettings();

  double identifyValue = mSettings->value( "/Map/searchRadiusMM", QGis::DEFAULT_SEARCH_RADIUS_MM ).toDouble();
  QgsDebugMsg( QString( "Standard Identify radius setting read from settings file: %1" ).arg( identifyValue ) );
  if ( identifyValue <= 0.0 )
    identifyValue = QGis::DEFAULT_SEARCH_RADIUS_MM;
  spinBoxIdentifyValue->setMinimum( 0.0 );
  spinBoxIdentifyValue->setValue( identifyValue );
  QColor highlightColor = QColor( mSettings->value( "/Map/highlight/color", QGis::DEFAULT_HIGHLIGHT_COLOR.name() ).toString() );
  int highlightAlpha = mSettings->value( "/Map/highlight/colorAlpha", QGis::DEFAULT_HIGHLIGHT_COLOR.alpha() ).toInt();
  highlightColor.setAlpha( highlightAlpha );
  mIdentifyHighlightColorButton->setColor( highlightColor );
  double highlightBuffer = mSettings->value( "/Map/highlight/buffer", QGis::DEFAULT_HIGHLIGHT_BUFFER_MM ).toDouble();
  mIdentifyHighlightBufferSpinBox->setValue( highlightBuffer );
  double highlightMinWidth = mSettings->value( "/Map/highlight/minWidth", QGis::DEFAULT_HIGHLIGHT_MIN_WIDTH_MM ).toDouble();
  mIdentifyHighlightMinWidthSpinBox->setValue( highlightMinWidth );

  // 自定义环境变量(系统)
  //bool useCustomVars = mSettings->value( "qgis/customEnvVarsUse", QVariant( false ) ).toBool();
  //mCustomVariablesChkBx->setChecked( useCustomVars );
  //if ( !useCustomVars )
  //{
  //  mAddCustomVarBtn->setEnabled( false );
  //  mRemoveCustomVarBtn->setEnabled( false );
  //  mCustomVariablesTable->setEnabled( false );
  //}
  //QStringList customVarsList = mSettings->value( "qgis/customEnvVars", "" ).toStringList();
  //Q_FOREACH ( const QString &varStr, customVarsList )
  //{
  //  int pos = varStr.indexOf( QLatin1Char( '|' ) );
  //  if ( pos == -1 )
  //    continue;
  //  QString varStrApply = varStr.left( pos );
  //  QString varStrNameValue = varStr.mid( pos + 1 );
  //  pos = varStrNameValue.indexOf( QLatin1Char( '=' ) );
  //  if ( pos == -1 )
  //    continue;
  //  QString varStrName = varStrNameValue.left( pos );
  //  QString varStrValue = varStrNameValue.mid( pos + 1 );

  //  addCustomEnvVarRow( varStrName, varStrValue, varStrApply );
  //}
  //QFontMetrics fmCustomVar( mCustomVariablesTable->horizontalHeader()->font() );
  //int fmCustomVarH = fmCustomVar.height() + 8;
  //mCustomVariablesTable->horizontalHeader()->setFixedHeight( fmCustomVarH );

  //mCustomVariablesTable->setColumnWidth( 0, 120 );
  //if ( mCustomVariablesTable->rowCount() > 0 )
  //{
  //  mCustomVariablesTable->resizeColumnToContents( 1 );
  //}
  //else
  //{
  //  mCustomVariablesTable->setColumnWidth( 1, 120 );
  //}

  // 当前环境变量(系统)
  //mCurrentVariablesTable->horizontalHeader()->setFixedHeight( fmCustomVarH );
  //QMap<QString, QString> sysVarsMap = QgsApplication::systemEnvVars();
  //QStringList currentVarsList = QProcess::systemEnvironment();

  //Q_FOREACH ( const QString &varStr, currentVarsList )
  //{
  //  int pos = varStr.indexOf( QLatin1Char( '=' ) );
  //  if ( pos == -1 )
  //    continue;
  //  QStringList varStrItms;
  //  QString varStrName = varStr.left( pos );
  //  QString varStrValue = varStr.mid( pos + 1 );
  //  varStrItms << varStrName << varStrValue;

  //  // check if different than system variable
  //  QString sysVarVal;
  //  bool sysVarMissing = !sysVarsMap.contains( varStrName );
  //  if ( sysVarMissing )
  //    sysVarVal = tr( "not present" );

  //  if ( !sysVarMissing && sysVarsMap.value( varStrName ) != varStrValue )
  //    sysVarVal = sysVarsMap.value( varStrName );

  //  if ( !sysVarVal.isEmpty() )
  //    sysVarVal = tr( "System value: %1" ).arg( sysVarVal );

  //  int rowCnt = mCurrentVariablesTable->rowCount();
  //  mCurrentVariablesTable->insertRow( rowCnt );

  //  QFont fItm;
  //  for ( int i = 0; i < varStrItms.size(); ++i )
  //  {
  //    QTableWidgetItem* varNameItm = new QTableWidgetItem( varStrItms.at( i ) );
  //    varNameItm->setFlags( Qt::ItemIsEnabled | Qt::ItemIsSelectable
  //                          | Qt::ItemIsEditable | Qt::ItemIsDragEnabled );
  //    fItm = varNameItm->font();
  //    if ( !sysVarVal.isEmpty() )
  //    {
  //      fItm.setBold( true );
  //      varNameItm->setFont( fItm );
  //      varNameItm->setToolTip( sysVarVal );
  //    }
  //    mCurrentVariablesTable->setItem( rowCnt, i, varNameItm );
  //  }
  //  fItm.setBold( true );
  //  QFontMetrics fmRow( fItm );
  //  mCurrentVariablesTable->setRowHeight( rowCnt, fmRow.height() + 6 );
  //}
  //if ( mCurrentVariablesTable->rowCount() > 0 )
  //  mCurrentVariablesTable->resizeColumnToContents( 0 );

  // 本地目录加载C++插件库路径(系统)
  //QString myPaths = mSettings->value( "plugins/searchPathsForPlugins", "" ).toString();
  //if ( !myPaths.isEmpty() )
  //{
  //  QStringList myPathList = myPaths.split( '|' );
  //  QStringList::const_iterator pathIt = myPathList.constBegin();
  //  for ( ; pathIt != myPathList.constEnd(); ++pathIt )
  //  {
  //    QListWidgetItem* newItem = new QListWidgetItem( mListPluginPaths );
  //    newItem->setText( *pathIt );
  //    newItem->setFlags( Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable );
  //    mListPluginPaths->addItem( newItem );
  //  }
  //}

  // SVG路径(系统)
  //QStringList svgPaths = QgsApplication::svgPaths();
  //if ( !svgPaths.isEmpty() )
  //{
  //  Q_FOREACH ( const QString& path, svgPaths )
  //  {
  //    QListWidgetItem* newItem = new QListWidgetItem( mListSVGPaths );
  //    newItem->setText( path );
  //    newItem->setFlags( Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable );
  //    mListSVGPaths->addItem( newItem );
  //  }
  //}

  //QStringList templatePaths = QgsApplication::composerTemplatePaths();
  //if ( !templatePaths.isEmpty() )
  //{
  //  Q_FOREACH ( const QString& path, templatePaths )
  //  {
  //    QListWidgetItem* newItem = new QListWidgetItem( mListComposerTemplatePaths );
  //    newItem->setText( path );
  //    newItem->setFlags( Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable );
  //    mListComposerTemplatePaths->addItem( newItem );
  //  }
  //}

  //QStringList hiddenItems = mSettings->value( "/browser/hiddenPaths",
  //                          QStringList() ).toStringList();
  //QStringList::const_iterator pathIt = hiddenItems.constBegin();
  //for ( ; pathIt != hiddenItems.constEnd(); ++pathIt )
  //{
  //  QListWidgetItem* newItem = new QListWidgetItem( mListHiddenBrowserPaths );
  //  newItem->setText( *pathIt );
  //  mListHiddenBrowserPaths->addItem( newItem );
  //}

  // 网络
  //Network timeout
  //mNetworkTimeoutSpinBox->setValue( mSettings->value( "/qgis/networkAndProxy/networkTimeout", "60000" ).toInt() );
  //leUserAgent->setText( mSettings->value( "/qgis/networkAndProxy/userAgent", "Mozilla/5.0" ).toString() );

  // WMS capabilities expiry time
  //mDefaultCapabilitiesExpirySpinBox->setValue( mSettings->value( "/qgis/defaultCapabilitiesExpiry", "24" ).toInt() );

  // WMS/WMS-C tile expiry time
  //mDefaultTileExpirySpinBox->setValue( mSettings->value( "/qgis/defaultTileExpiry", "24" ).toInt() );

  // WMS/WMS-C default max retry in case of tile request errors
  //mDefaultTileMaxRetrySpinBox->setValue( mSettings->value( "/qgis/defaultTileMaxRetry", "3" ).toInt() );

  //Web proxy settings
  //grpProxy->setChecked( mSettings->value( "proxy/proxyEnabled", "0" ).toBool() );
  //leProxyHost->setText( mSettings->value( "proxy/proxyHost", "" ).toString() );
  //leProxyPort->setText( mSettings->value( "proxy/proxyPort", "" ).toString() );
  //leProxyUser->setText( mSettings->value( "proxy/proxyUser", "" ).toString() );
  //leProxyPassword->setText( mSettings->value( "proxy/proxyPassword", "" ).toString() );

  //available proxy types
  //mProxyTypeComboBox->insertItem( 0, "DefaultProxy" );
  //mProxyTypeComboBox->insertItem( 1, "Socks5Proxy" );
  //mProxyTypeComboBox->insertItem( 2, "HttpProxy" );
  //mProxyTypeComboBox->insertItem( 3, "HttpCachingProxy" );
  //mProxyTypeComboBox->insertItem( 4, "FtpCachingProxy" );
  //QString settingProxyType = mSettings->value( "proxy/proxyType", "DefaultProxy" ).toString();
  //mProxyTypeComboBox->setCurrentIndex( mProxyTypeComboBox->findText( settingProxyType ) );

  //URLs excluded not going through proxies
  //QString proxyExcludedURLs = mSettings->value( "proxy/proxyExcludedUrls", "" ).toString();
  //if ( !proxyExcludedURLs.isEmpty() )
  //{
  //  QStringList splitUrls = proxyExcludedURLs.split( '|' );
  //  QStringList::const_iterator urlIt = splitUrls.constBegin();
  //  for ( ; urlIt != splitUrls.constEnd(); ++urlIt )
  //  {
  //    QListWidgetItem* newItem = new QListWidgetItem( mExcludeUrlListWidget );
  //    newItem->setText( *urlIt );
  //    newItem->setFlags( Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable );
  //    mExcludeUrlListWidget->addItem( newItem );
  //  }
  //}

  // cache settings
  //QNetworkDiskCache *cache = qobject_cast<QNetworkDiskCache*>( QgsNetworkAccessManager::instance()->cache() );
  //if ( cache )
  //{
  //  mCacheDirectory->setText( cache->cacheDirectory() );
  //  mCacheSize->setMinimum( 0 );
  //  mCacheSize->setMaximum( std::numeric_limits<int>::max() );
  //  mCacheSize->setSingleStep( 1024 );
  //  QgsDebugMsg( QString( "set cacheSize: %1" ).arg( cache->maximumCacheSize() ) );
  //  mCacheSize->setValue( cache->maximumCacheSize() / 1024 );
  //}

  //wms search server
  //leWmsSearch->setText( mSettings->value( "/qgis/WMSSearchUrl", "http://geopole.org/wms/search?search=%1&type=rss" ).toString() );

  // 设置属性表默认过滤器(数据源)
  cmbAttrTableBehaviour->clear();
  cmbAttrTableBehaviour->addItem( tr( "Show all features" ), QgsAttributeTableFilterModel::ShowAll );
  cmbAttrTableBehaviour->addItem( tr( "Show selected features" ), QgsAttributeTableFilterModel::ShowSelected );
  cmbAttrTableBehaviour->addItem( tr( "Show features visible on map" ), QgsAttributeTableFilterModel::ShowVisible );
  cmbAttrTableBehaviour->setCurrentIndex( cmbAttrTableBehaviour->findData( mSettings->value( "/qgis/attributeTableBehaviour", QgsAttributeTableFilterModel::ShowAll ).toInt() ) );

  // 属性表的行缓存(数据源)
  spinBoxAttrTableRowCache->setValue( mSettings->value( "/qgis/attributeTableRowCache", 10000 ).toInt() );
  spinBoxAttrTableRowCache->setSpecialValueText( tr( "All" ) );

  // 设置栅格子层的提示(数据源)
  // 0 = Always -> 总是问（若存在子层）
  // 1 = If needed -> 需要时
  // 2 = Never -> 从不
  // 3 = Load all -> 全部载入
  cmbPromptRasterSublayers->clear();
  cmbPromptRasterSublayers->addItem( tr( "Always" ) );
  cmbPromptRasterSublayers->addItem( tr( "If needed" ) );
  cmbPromptRasterSublayers->addItem( tr( "Never" ) );
  cmbPromptRasterSublayers->addItem( tr( "Load all" ) );
  cmbPromptRasterSublayers->setCurrentIndex( mSettings->value( "/qgis/promptForRasterSublayers", 0 ).toInt() );

  // 在浏览器中扫描有效条目的方式(数据源)
  //cmbScanItemsInBrowser->clear();
  //cmbScanItemsInBrowser->addItem( tr( "Check file contents" ), "contents" ); // 0
  //cmbScanItemsInBrowser->addItem( tr( "Check extension" ), "extension" );    // 1
  //int index = cmbScanItemsInBrowser->findData( mSettings->value( "/qgis/scanItemsInBrowser2", "" ) );
  //if ( index == -1 ) index = 1;
  //cmbScanItemsInBrowser->setCurrentIndex( index );

  // 在浏览器中扫描压缩文件(.zip)的内容(数据源)
  //cmbScanZipInBrowser->clear();
  //cmbScanZipInBrowser->addItem( tr( "No" ), QVariant( "no" ) );
  //// cmbScanZipInBrowser->addItem( tr( "Passthru" ) );     // 1 - removed
  //cmbScanZipInBrowser->addItem( tr( "Basic scan" ), QVariant( "basic" ) );
  //cmbScanZipInBrowser->addItem( tr( "Full scan" ), QVariant( "full" ) );
  //index = cmbScanZipInBrowser->findData( mSettings->value( "/qgis/scanZipInBrowser2", "" ) );
  //if ( index == -1 ) index = 1;
  //cmbScanZipInBrowser->setCurrentIndex( index );

  // 调试(渲染)
  //mLogCanvasRefreshChkBx->setChecked( mSettings->value( "/Map/logCanvasRefreshEvent", false ).toBool() );

  // 新建图层或无坐标参照系图层的默认设置(坐标参照系)
  if ( mSettings->value( "/Projections/defaultBehaviour", "prompt" ).toString() == "prompt" )
  {
    radPromptForProjection->setChecked( true );
  }
  else if ( mSettings->value( "/Projections/defaultBehaviour", "prompt" ).toString() == "useProject" )
  {
    radUseProjectProjection->setChecked( true );
  }
  else //useGlobal
  {
    radUseGlobalProjection->setChecked( true );
  }
  QString myLayerDefaultCrs = mSettings->value( "/Projections/layerDefaultCrs", GEO_EPSG_CRS_AUTHID ).toString();
  mLayerDefaultCrs.createFromOgcWmsCrs( myLayerDefaultCrs );
  leLayerGlobalCrs->setCrs( mLayerDefaultCrs );

  //动态投影变换设置(坐标参照系)
  //it would be logical to have single settings value but originaly the radio buttons were checkboxes
  // 这将是合乎逻辑的有一个设置值，但最初的单选按钮分别复选框
  if ( mSettings->value( "/Projections/otfTransformAutoEnable", true ).toBool() )
  {
    radOtfAuto->setChecked( true );
  }
  else if ( mSettings->value( "/Projections/otfTransformEnabled", false ).toBool() )
  {
    radOtfTransform->setChecked( true );
  }
  else
  {
    radOtfNone->setChecked( true ); // default
  }

  QString myDefaultCrs = mSettings->value( "/Projections/projectDefaultCrs", GEO_EPSG_CRS_AUTHID ).toString();
  mDefaultCrs.createFromOgcWmsCrs( myDefaultCrs );
  leProjectGlobalCrs->setCrs( mDefaultCrs );
  leProjectGlobalCrs->setOptionVisible( QgsProjectionSelectionWidget::DefaultCrs, false );

  // 默认基准面变换(坐标参照系)
  mSettings->beginGroup( "/Projections" );

  chkShowDatumTransformDialog->setChecked( mSettings->value( "showDatumTransformDialog", false ).toBool() );

  QStringList projectionKeys = mSettings->allKeys();

  // 收集属于一个整体的src和dest项(坐标参照系)
  // 用于显示基准面列表
  QMap< QPair< QString, QString >, QPair< int, int > > transforms;
  QStringList::const_iterator pkeyIt = projectionKeys.constBegin();
  for ( ; pkeyIt != projectionKeys.constEnd(); ++pkeyIt )
  {
    if ( pkeyIt->contains( "srcTransform" ) || pkeyIt->contains( "destTransform" ) )
    {
      QStringList split = pkeyIt->split( '/' );
      QString srcAuthId, destAuthId;
      if ( ! split.isEmpty() )
      {
        srcAuthId = split.at( 0 );
      }
      if ( split.size() > 1 )
      {
        destAuthId = split.at( 1 ).split( '_' ).at( 0 );
      }

      if ( pkeyIt->contains( "srcTransform" ) )
      {
        transforms[ qMakePair( srcAuthId, destAuthId )].first = mSettings->value( *pkeyIt ).toInt();
      }
      else if ( pkeyIt->contains( "destTransform" ) )
      {
        transforms[ qMakePair( srcAuthId, destAuthId )].second = mSettings->value( *pkeyIt ).toInt();
      }
    }
  }
  mSettings->endGroup();

  QMap< QPair< QString, QString >, QPair< int, int > >::const_iterator transformIt = transforms.constBegin();
  for ( ; transformIt != transforms.constEnd(); ++transformIt )
  {
    const QPair< int, int >& v = transformIt.value();
    QTreeWidgetItem* item = new QTreeWidgetItem();
    item->setText( 0, transformIt.key().first );
    item->setText( 1, transformIt.key().second );
    item->setText( 2, QString::number( v.first ) );
    item->setText( 3, QString::number( v.second ) );
    mDefaultDatumTransformTreeWidget->addTopLevelItem( item );
  }

  // 设置测量单位(地图工具)
  mDistanceUnitsComboBox->addItem( tr( "Meters" ), QGis::Meters );
  mDistanceUnitsComboBox->addItem( tr( "Feet" ), QGis::Feet );
  mDistanceUnitsComboBox->addItem( tr( "Nautical miles" ), QGis::NauticalMiles );
  mDistanceUnitsComboBox->addItem( tr( "Degrees" ), QGis::Degrees );
  mDistanceUnitsComboBox->addItem( tr( "Map units" ), QGis::UnknownUnit );

  bool ok = false;
  QGis::UnitType distanceUnits = QgsUnitTypes::decodeDistanceUnit( mSettings->value( "/qgis/measure/displayunits" ).toString(), &ok );
  if ( !ok )
    distanceUnits = QGis::Meters;
  mDistanceUnitsComboBox->setCurrentIndex( mDistanceUnitsComboBox->findData( distanceUnits ) );

  mAreaUnitsComboBox->addItem( tr( "Square meters" ), QgsUnitTypes::SquareMeters );
  mAreaUnitsComboBox->addItem( tr( "Square kilometers" ), QgsUnitTypes::SquareKilometers );
  mAreaUnitsComboBox->addItem( tr( "Square feet" ), QgsUnitTypes::SquareFeet );
  mAreaUnitsComboBox->addItem( tr( "Square yards" ), QgsUnitTypes::SquareYards );
  mAreaUnitsComboBox->addItem( tr( "Square miles" ), QgsUnitTypes::SquareMiles );
  mAreaUnitsComboBox->addItem( tr( "Hectares" ), QgsUnitTypes::Hectares );
  mAreaUnitsComboBox->addItem( tr( "Acres" ), QgsUnitTypes::Acres );
  mAreaUnitsComboBox->addItem( tr( "Square nautical miles" ), QgsUnitTypes::SquareNauticalMiles );
  mAreaUnitsComboBox->addItem( tr( "Square degrees" ), QgsUnitTypes::SquareDegrees );
  mAreaUnitsComboBox->addItem( tr( "Map units" ), QgsUnitTypes::UnknownAreaUnit );

  QgsUnitTypes::AreaUnit areaUnits = QgsUnitTypes::decodeAreaUnit( mSettings->value( "/qgis/measure/areaunits" ).toString(), &ok );
  if ( !ok )
    areaUnits = QgsUnitTypes::SquareMeters;
  mAreaUnitsComboBox->setCurrentIndex( mAreaUnitsComboBox->findData( areaUnits ) );

  mAngleUnitsComboBox->addItem( tr( "Degrees" ), QgsUnitTypes::AngleDegrees );
  mAngleUnitsComboBox->addItem( tr( "Radians" ), QgsUnitTypes::Radians );
  mAngleUnitsComboBox->addItem( tr( "Gon/gradians" ), QgsUnitTypes::Gon );
  mAngleUnitsComboBox->addItem( tr( "Minutes of arc" ), QgsUnitTypes::MinutesOfArc );
  mAngleUnitsComboBox->addItem( tr( "Seconds of arc" ), QgsUnitTypes::SecondsOfArc );
  mAngleUnitsComboBox->addItem( tr( "Turns/revolutions" ), QgsUnitTypes::Turn );

  QgsUnitTypes::AngleUnit unit = QgsUnitTypes::decodeAngleUnit( mSettings->value( "/qgis/measure/angleunits", QgsUnitTypes::encodeUnit( QgsUnitTypes::AngleDegrees ) ).toString() );
  mAngleUnitsComboBox->setCurrentIndex( mAngleUnitsComboBox->findData( unit ) );

  // 设置测量工具的小数位数
  int decimalPlaces = mSettings->value( "/qgis/measure/decimalplaces", "3" ).toInt();
  mDecimalPlacesSpinBox->setRange( 0, 12 );
  mDecimalPlacesSpinBox->setValue( decimalPlaces );

  // 测量工具的基本单元的设置应改变，保持基本单位(地图工具)
  bool baseUnit = mSettings->value( "qgis/measure/keepbaseunit", false ).toBool();
  if ( baseUnit )
  {
    mKeepBaseUnitCheckBox->setChecked( true );
  }
  else
  {
    mKeepBaseUnitCheckBox->setChecked( false );
  }

  // 图标大小(通用)
  cmbIconSize->setCurrentIndex( cmbIconSize->findText( mSettings->value( "/IconSize", QGIS_ICON_SIZE ).toString() ) );

  // 设定字体大小和列表(通用)
  spinFontSize->blockSignals( true );
  mFontFamilyRadioQt->blockSignals( true );
  mFontFamilyRadioCustom->blockSignals( true );
  mFontFamilyComboBox->blockSignals( true );

  spinFontSize->setValue( mStyleSheetOldOpts.value( "fontPointSize" ).toInt() );
  QString fontFamily = mStyleSheetOldOpts.value( "fontFamily" ).toString();
  bool isQtDefault = ( fontFamily == mStyleSheetBuilder->defaultFont().family() );
  mFontFamilyRadioQt->setChecked( isQtDefault );
  mFontFamilyRadioCustom->setChecked( !isQtDefault );
  mFontFamilyComboBox->setEnabled( !isQtDefault );
  if ( !isQtDefault )
  {
    QFont *tempFont = new QFont( fontFamily );
    // is exact family match returned from system?
    if ( tempFont->family() == fontFamily )
    {
      mFontFamilyComboBox->setCurrentFont( *tempFont );
    }
    delete tempFont;
  }

  spinFontSize->blockSignals( false );
  mFontFamilyRadioQt->blockSignals( false );
  mFontFamilyRadioCustom->blockSignals( false );
  mFontFamilyComboBox->blockSignals( false );

  // QGis风格的组框(通用)
  mCustomGroupBoxChkBx->setChecked( mStyleSheetOldOpts.value( "groupBoxCustom" ).toBool() );

  // 消息显示时间(通用)
  mMessageTimeoutSpnBx->setValue( mSettings->value( "/qgis/messageTimeout", 5 ).toInt() );

  // 样式(通用)
  QString name = mSettings->value( "/qgis/style" ).toString();
  cmbStyle->setCurrentIndex( cmbStyle->findText( name, Qt::MatchFixedString ) );

  // 用户主题界面(通用)
  QString theme = QgsApplication::themeName();
  cmbUITheme->setCurrentIndex( cmbUITheme->findText( theme, Qt::MatchFixedString ) );

  // 两个颜色设置选项(通用)
  mNativeColorDialogsChkBx->setChecked( mSettings->value( "/qgis/native_color_dialogs", false ).toBool() );
  mLiveColorDialogsChkBx->setChecked( mSettings->value( "/qgis/live_color_dialogs", false ).toBool() );

  // 设置复选框的状态(渲染)
  // 渲染质量(渲染)
  chkAntiAliasing->setChecked( mSettings->value( "/qgis/enable_anti_aliasing", true ).toBool() );
  // 渲染缓存(渲染)
  chkUseRenderCaching->setChecked( mSettings->value( "/qgis/enable_render_caching", true ).toBool() );
  // 并行渲染(渲染)
  chkParallelRendering->setChecked( mSettings->value( "/qgis/parallel_rendering", false ).toBool() );
  // 更新间隔(渲染)
  spinMapUpdateInterval->setValue( mSettings->value( "/qgis/map_update_interval", 250 ).toInt() );
  // 最大可用核心数(渲染)
  chkMaxThreads->setChecked( QgsApplication::maxThreads() != -1 );
  spinMaxThreads->setEnabled( chkMaxThreads->isChecked() );
  spinMaxThreads->setRange( 1, QThread::idealThreadCount() );
  spinMaxThreads->setValue( QgsApplication::maxThreads() );

  // 默认简化要素配置(渲染)
  mSimplifyDrawingGroupBox->setChecked( mSettings->value( "/qgis/simplifyDrawingHints", ( int )QgsVectorSimplifyMethod::GeometrySimplification ).toInt() != QgsVectorSimplifyMethod::NoSimplification );
  mSimplifyDrawingSpinBox->setValue( mSettings->value( "/qgis/simplifyDrawingTol", QGis::DEFAULT_MAPTOPIXEL_THRESHOLD ).toFloat() );
  mSimplifyDrawingAtProvider->setChecked( !mSettings->value( "/qgis/simplifyLocal", true ).toBool() );

  QStringList myScalesList = PROJECT_SCALES.split( ',' );
  myScalesList.append( "1:1" );
  mSimplifyMaximumScaleComboBox->updateScales( myScalesList );
  mSimplifyMaximumScaleComboBox->setScale( 1.0 / mSettings->value( "/qgis/simplifyMaxScale", 1 ).toFloat() );

  // 添加到地图的新图层是否显示(渲染)
  chkAddedVisibility->setChecked( mSettings->value( "/qgis/new_layers_visible", true ).toBool() );
  // 显示类别属性名称(通用)
  cbxLegendClassifiers->setChecked( mSettings->value( "/qgis/showLegendClassifiers", false ).toBool() );
  // 图层名使用粗体(通用)
  mLegendLayersBoldChkBx->setChecked( mSettings->value( "/qgis/legendLayersBold", true ).toBool() );
  // 组合名称使用粗体(通用)
  mLegendGroupsBoldChkBx->setChecked( mSettings->value( "/qgis/legendGroupsBold", false ).toBool() );
  // 隐藏启动屏幕(通用)
  cbxHideSplash->setChecked( mSettings->value( "/qgis/hideSplash", false ).toBool() );
  // 在停靠区域打开属性表(数据源)
  cbxAttributeTableDocked->setChecked( mSettings->value( "/qgis/dockAttributeTable", false ).toBool() );
  // 在停靠区域打开捕捉选项(数据源)
  cbxSnappingOptionsDocked->setChecked( mSettings->value( "/qgis/dockSnapping", false ).toBool() );
  // 在图例中显示栅格图标(画布和图例)
  cbxCreateRasterLegendIcons->setChecked( mSettings->value( "/qgis/createRasterLegendIcons", false ).toBool() );
  // 从属性表中复制时采用WTK方法(数据源)
  cbxCopyWKTGeomFromTable->setChecked( mSettings->value( "/qgis/copyGeometryAsWKT", true ).toBool() );
  // 空值表示为(数据源)
  leNullValue->setText( mSettings->value( "qgis/nullValue", "NULL" ).toString() );
  // 忽略Shape文件编码声明(数据源)
  cbxIgnoreShapeEncoding->setChecked( mSettings->value( "/qgis/ignoreShapeEncoding", true ).toBool() );
  // 画布选择支持(通用)
  cbxCanvasRotation->setChecked( QgsMapCanvas::rotationEnabled() );
  // 双击图例的动作(画布和图例)
  cmbLegendDoubleClickAction->setCurrentIndex( mSettings->value( "/qgis/legendDoubleClickAction", 0 ).toInt() );

  //
  // Raster properties(渲染)
  //
  // R/G/B对应的波段(渲染)
  spnRed->setValue( mSettings->value( "/Raster/defaultRedBand", 1 ).toInt() );
  spnGreen->setValue( mSettings->value( "/Raster/defaultGreenBand", 2 ).toInt() );
  spnBlue->setValue( mSettings->value( "/Raster/defaultBlueBand", 3 ).toInt() );
  // 对比度增强(渲染)
  initContrastEnhancement( cboxContrastEnhancementAlgorithmSingleBand, "singleBand", "StretchToMinimumMaximum" );
  initContrastEnhancement( cboxContrastEnhancementAlgorithmMultiBandSingleByte, "multiBandSingleByte", "NoEnhancement" );
  initContrastEnhancement( cboxContrastEnhancementAlgorithmMultiBandMultiByte, "multiBandMultiByte", "StretchToMinimumMaximum" );

  QString cumulativeCutText = tr( "Cumulative pixel count cut" );
  cboxContrastEnhancementLimits->addItem( tr( "Cumulative pixel count cut" ), "CumulativeCut" );
  cboxContrastEnhancementLimits->addItem( tr( "Minimum / maximum" ), "MinMax" );
  cboxContrastEnhancementLimits->addItem( tr( "Mean +/- standard deviation" ), "StdDev" );

  QString contrastEnchacementLimits = mSettings->value( "/Raster/defaultContrastEnhancementLimits", "CumulativeCut" ).toString();

  cboxContrastEnhancementLimits->setCurrentIndex( cboxContrastEnhancementLimits->findData( contrastEnchacementLimits ) );

  spnThreeBandStdDev->setValue( mSettings->value( "/Raster/defaultStandardDeviation", 2.0 ).toDouble() );

  mRasterCumulativeCutLowerDoubleSpinBox->setValue( 100.0 * mSettings->value( "/Raster/cumulativeCutLower", QString::number( QgsRasterLayer::CUMULATIVE_CUT_LOWER ) ).toDouble() );
  mRasterCumulativeCutUpperDoubleSpinBox->setValue( 100.0 * mSettings->value( "/Raster/cumulativeCutUpper", QString::number( QgsRasterLayer::CUMULATIVE_CUT_UPPER ) ).toDouble() );

  // 选取要素的颜色(画布和图例)
  int myRed = mSettings->value( "/qgis/default_selection_color_red", 255 ).toInt();
  int myGreen = mSettings->value( "/qgis/default_selection_color_green", 255 ).toInt();
  int myBlue = mSettings->value( "/qgis/default_selection_color_blue", 0 ).toInt();
  int myAlpha = mSettings->value( "/qgis/default_selection_color_alpha", 255 ).toInt();
  pbnSelectionColor->setColor( QColor( myRed, myGreen, myBlue, myAlpha ) );
  pbnSelectionColor->setColorDialogTitle( tr( "Set selection color" ) );
  pbnSelectionColor->setAllowAlpha( true );
  pbnSelectionColor->setContext( "gui" );
  pbnSelectionColor->setDefaultColor( QColor( 255, 255, 0, 255 ) );

  // 地图画布背景色(画布和图例)
  myRed = mSettings->value( "/qgis/default_canvas_color_red", 255 ).toInt();
  myGreen = mSettings->value( "/qgis/default_canvas_color_green", 255 ).toInt();
  myBlue = mSettings->value( "/qgis/default_canvas_color_blue", 255 ).toInt();
  pbnCanvasColor->setColor( QColor( myRed, myGreen, myBlue ) );
  pbnCanvasColor->setColorDialogTitle( tr( "Set canvas color" ) );
  pbnCanvasColor->setContext( "gui" );
  pbnCanvasColor->setDefaultColor( Qt::white );

  // 设置测量工具的默认颜色(地图工具)
  myRed = mSettings->value( "/qgis/default_measure_color_red", 222 ).toInt();
  myGreen = mSettings->value( "/qgis/default_measure_color_green", 155 ).toInt();
  myBlue = mSettings->value( "/qgis/default_measure_color_blue", 67 ).toInt();
  pbnMeasureColor->setColor( QColor( myRed, myGreen, myBlue ) );
  pbnMeasureColor->setColorDialogTitle( tr( "Set measuring tool color" ) );
  pbnMeasureColor->setContext( "gui" );
  pbnMeasureColor->setDefaultColor( QColor( 222, 155, 67 ) );

  // 项目名称使用大写字母(画布和图例)
  capitaliseCheckBox->setChecked( mSettings->value( "/qgis/capitaliseLayerName", QVariant( false ) ).toBool() );

  //int projOpen = mSettings->value( "/qgis/projOpenAtLaunch", 0 ).toInt();
  //mProjectOnLaunchCmbBx->setCurrentIndex( projOpen );
  //mProjectOnLaunchLineEdit->setText( mSettings->value( "/qgis/projOpenAtLaunchPath" ).toString() );
  //mProjectOnLaunchLineEdit->setEnabled( projOpen == 2 );
  //mProjectOnLaunchPushBtn->setEnabled( projOpen == 2 );

  // 提示需要保存与更新(通用)
  chbAskToSaveProjectChanges->setChecked( mSettings->value( "qgis/askToSaveProjectChanges", QVariant( true ) ).toBool() );
  // 移除数据时要提示(通用)
  mLayerDeleteConfirmationChkBx->setChecked( mSettings->value( "qgis/askToDeleteLayers", true ).toBool() );
  // 鼠标滚轮动作(地图工具)
  cmbWheelAction->setCurrentIndex( mSettings->value( "/qgis/wheel_action", 2 ).toInt() );
  // 缩放系数(地图工具)
  spinZoomFactor->setValue( mSettings->value( "/qgis/zoom_factor", 2 ).toDouble() );

  // 预定义的比例尺组合框
  QString myPaths = mSettings->value( "Map/scales", PROJECT_SCALES ).toString();
  if ( !myPaths.isEmpty() )
  {
    QStringList myScalesList = myPaths.split( ',' );
    Q_FOREACH ( const QString& scale, myScalesList )
    {
      addScaleToScaleList( scale );
    }
  }
  connect( mListGlobalScales, SIGNAL( itemChanged( QListWidgetItem* ) ), this, SLOT( scaleItemChanged( QListWidgetItem* ) ) );

  //
  // Color palette(颜色)
  //
  connect( mButtonCopyColors, SIGNAL( clicked() ), mTreeCustomColors, SLOT( copyColors() ) );
  connect( mButtonRemoveColor, SIGNAL( clicked() ), mTreeCustomColors, SLOT( removeSelection() ) );
  connect( mButtonPasteColors, SIGNAL( clicked() ), mTreeCustomColors, SLOT( pasteColors() ) );

  // 找到注册表中的自定义配色方案(颜色)
  QList<QgsCustomColorScheme *> customSchemes;
  QgsColorSchemeRegistry::instance()->schemes( customSchemes );
  if ( customSchemes.length() > 0 )
  {
    mTreeCustomColors->setScheme( customSchemes.at( 0 ) );
  }

  //
  // 版面设置(版面)
  //

  // 默认字体(版面)
  mComposerFontComboBox->blockSignals( true );

  QString composerFontFamily = mSettings->value( "/Composer/defaultFont" ).toString();

  QFont *tempComposerFont = new QFont( composerFontFamily );
  // is exact family match returned from system?
  if ( tempComposerFont->family() == composerFontFamily )
  {
    mComposerFontComboBox->setCurrentFont( *tempComposerFont );
  }
  delete tempComposerFont;

  mComposerFontComboBox->blockSignals( false );

  // 默认网格颜色(版面)
  int gridRed, gridGreen, gridBlue, gridAlpha;
  gridRed = mSettings->value( "/Composer/gridRed", 190 ).toInt();
  gridGreen = mSettings->value( "/Composer/gridGreen", 190 ).toInt();
  gridBlue = mSettings->value( "/Composer/gridBlue", 190 ).toInt();
  gridAlpha = mSettings->value( "/Composer/gridAlpha", 100 ).toInt();
  QColor gridColor = QColor( gridRed, gridGreen, gridBlue, gridAlpha );
  mGridColorButton->setColor( gridColor );
  mGridColorButton->setColorDialogTitle( tr( "Select grid color" ) );
  mGridColorButton->setAllowAlpha( true );
  mGridColorButton->setContext( "gui" );
  mGridColorButton->setDefaultColor( QColor( 190, 190, 190, 100 ) );

  // 默认网格样式(版面)
  QString gridStyleString;
  gridStyleString = mSettings->value( "/Composer/gridStyle", "Dots" ).toString();
  mGridStyleComboBox->insertItem( 0, tr( "Solid" ) );
  mGridStyleComboBox->insertItem( 1, tr( "Dots" ) );
  mGridStyleComboBox->insertItem( 2, tr( "Crosses" ) );
  if ( gridStyleString == "Solid" )
  {
    mGridStyleComboBox->setCurrentIndex( 0 );
  }
  else if ( gridStyleString == "Crosses" )
  {
    mGridStyleComboBox->setCurrentIndex( 2 );
  }
  else
  {
	// 默认网格是点样式(版面)
    mGridStyleComboBox->setCurrentIndex( 1 );
  }

  // 网格和向导默认(版面)
  mGridResolutionSpinBox->setValue( mSettings->value( "/Composer/defaultSnapGridResolution", 10.0 ).toDouble() );
  mSnapToleranceSpinBox->setValue( mSettings->value( "/Composer/defaultSnapTolerancePixels", 5 ).toInt() );
  mOffsetXSpinBox->setValue( mSettings->value( "/Composer/defaultSnapGridOffsetX", 0 ).toDouble() );
  mOffsetYSpinBox->setValue( mSettings->value( "/Composer/defaultSnapGridOffsetY", 0 ).toDouble() );

  // 设置数字化选项卡元素(数字化)
  mLineWidthSpinBox->setValue( mSettings->value( "/qgis/digitizing/line_width", 1 ).toInt() );
  QColor digitizingColor;
  myRed = mSettings->value( "/qgis/digitizing/line_color_red", 255 ).toInt();
  myGreen = mSettings->value( "/qgis/digitizing/line_color_green", 0 ).toInt();
  myBlue = mSettings->value( "/qgis/digitizing/line_color_blue", 0 ).toInt();
  myAlpha = mSettings->value( "/qgis/digitizing/line_color_alpha", 200 ).toInt();
  mLineColorToolButton->setColor( QColor( myRed, myGreen, myBlue, myAlpha ) );
  mLineColorToolButton->setAllowAlpha( true );
  mLineColorToolButton->setContext( "gui" );
  mLineColorToolButton->setDefaultColor( QColor( 255, 0, 0, 200 ) );

  myRed = mSettings->value( "/qgis/digitizing/fill_color_red", 255 ).toInt();
  myGreen = mSettings->value( "/qgis/digitizing/fill_color_green", 0 ).toInt();
  myBlue = mSettings->value( "/qgis/digitizing/fill_color_blue", 0 ).toInt();
  myAlpha = mSettings->value( "/qgis/digitizing/fill_color_alpha", 30 ).toInt();
  mFillColorToolButton->setColor( QColor( myRed, myGreen, myBlue, myAlpha ) );
  mFillColorToolButton->setAllowAlpha( true );
  mFillColorToolButton->setContext( "gui" );
  mFillColorToolButton->setDefaultColor( QColor( 255, 0, 0, 30 ) );

  mLineGhostCheckBox->setChecked( mSettings->value( "/qgis/digitizing/line_ghost", false ).toBool() );

  // 默认捕捉模式(数字化)
  mDefaultSnapModeComboBox->insertItem( 0, tr( "To vertex" ), "to vertex" );
  mDefaultSnapModeComboBox->insertItem( 1, tr( "To segment" ), "to segment" );
  mDefaultSnapModeComboBox->insertItem( 2, tr( "To vertex and segment" ), "to vertex and segment" );
  mDefaultSnapModeComboBox->insertItem( 3, tr( "Off" ), "off" );
  QString defaultSnapString = mSettings->value( "/qgis/digitizing/default_snap_mode", "off" ).toString();
  mDefaultSnapModeComboBox->setCurrentIndex( mDefaultSnapModeComboBox->findData( defaultSnapString ) );
  mDefaultSnappingToleranceSpinBox->setValue( mSettings->value( "/qgis/digitizing/default_snapping_tolerance", 0 ).toDouble() );
  mSearchRadiusVertexEditSpinBox->setValue( mSettings->value( "/qgis/digitizing/search_radius_vertex_edit", 10 ).toDouble() );
  int defSnapUnits = mSettings->value( "/qgis/digitizing/default_snapping_tolerance_unit", QgsTolerance::ProjectUnits ).toInt();
  int index = 0;
  if ( defSnapUnits == QgsTolerance::ProjectUnits || defSnapUnits == QgsTolerance::LayerUnits )
  {
    index = mDefaultSnappingToleranceComboBox->findText( tr( "map units" ) );
  }
  else
  {
    index = mDefaultSnappingToleranceComboBox->findText( tr( "pixels" ) );
  }
  mDefaultSnappingToleranceComboBox->setCurrentIndex( index );
  int defRadiusUnits = mSettings->value( "/qgis/digitizing/search_radius_vertex_edit_unit", QgsTolerance::Pixels ).toInt();
  if ( defRadiusUnits == QgsTolerance::ProjectUnits || defRadiusUnits == QgsTolerance::LayerUnits )
  {
    index = mSearchRadiusVertexEditComboBox->findText( tr( "map units" ) );
  }
  else
  {
    index = mSearchRadiusVertexEditComboBox->findText( tr( "pixels" ) );
  }
  mSearchRadiusVertexEditComboBox->setCurrentIndex( index );

  // 顶点标记(数字化)
  mMarkersOnlyForSelectedCheckBox->setChecked( mSettings->value( "/qgis/digitizing/marker_only_for_selected", false ).toBool() );

  mMarkerStyleComboBox->addItem( tr( "Semi transparent circle" ) );
  mMarkerStyleComboBox->addItem( tr( "Cross" ) );
  mMarkerStyleComboBox->addItem( tr( "None" ) );

  mValidateGeometries->clear();
  mValidateGeometries->addItem( tr( "Off" ) );
  mValidateGeometries->addItem( tr( "QGIS" ) );
#if defined(GEOS_VERSION_MAJOR) && defined(GEOS_VERSION_MINOR) && \
    ( (GEOS_VERSION_MAJOR==3 && GEOS_VERSION_MINOR>=3) || GEOS_VERSION_MAJOR>3)
  mValidateGeometries->addItem( tr( "GEOS" ) );
#endif

  QString markerStyle = mSettings->value( "/qgis/digitizing/marker_style", "Cross" ).toString();
  if ( markerStyle == "SemiTransparentCircle" )
  {
    mMarkerStyleComboBox->setCurrentIndex( mMarkerStyleComboBox->findText( tr( "Semi transparent circle" ) ) );
  }
  else if ( markerStyle == "Cross" )
  {
    mMarkerStyleComboBox->setCurrentIndex( mMarkerStyleComboBox->findText( tr( "Cross" ) ) );
  }
  else if ( markerStyle == "None" )
  {
    mMarkerStyleComboBox->setCurrentIndex( mMarkerStyleComboBox->findText( tr( "None" ) ) );
  }
  mMarkerSizeSpinBox->setValue( mSettings->value( "/qgis/digitizing/marker_size", 3 ).toInt() );

  chkReuseLastValues->setChecked( mSettings->value( "/qgis/digitizing/reuseLastValues", false ).toBool() );
  chkDisableAttributeValuesDlg->setChecked( mSettings->value( "/qgis/digitizing/disable_enter_attribute_values_dialog", false ).toBool() );
  mValidateGeometries->setCurrentIndex( mSettings->value( "/qgis/digitizing/validate_geometries", 1 ).toInt() );

  mOffsetJoinStyleComboBox->addItem( tr( "Round" ), 0 );
  mOffsetJoinStyleComboBox->addItem( tr( "Mitre" ), 1 );
  mOffsetJoinStyleComboBox->addItem( tr( "Bevel" ), 2 );
  mOffsetJoinStyleComboBox->setCurrentIndex( mSettings->value( "/qgis/digitizing/offset_join_style", 0 ).toInt() );
  mOffsetQuadSegSpinBox->setValue( mSettings->value( "/qgis/digitizing/offset_quad_seg", 8 ).toInt() );
  mCurveOffsetMiterLimitComboBox->setValue( mSettings->value( "/qgis/digitizing/offset_miter_limit", 5.0 ).toDouble() );

  // 加载只有当GDAL选项卡首次打开GDAL驱动程序列表(GDAL)
  mLoadedGdalDriverList = false;

  mAdvancedSettingsEditor->setSettingsObject( mSettings );

  // restore window and widget geometry/state
  restoreOptionsBaseUi();
}

//! Destructor
QgsOptions::~QgsOptions()
{
  delete mSettings;
}

void QgsOptions::setCurrentPage( const QString& pageWidgetName )
{
  //find the page with a matching widget name
  for ( int idx = 0; idx < mOptionsStackedWidget->count(); ++idx )
  {
    QWidget* currentPage = mOptionsStackedWidget->widget( idx );
    if ( currentPage->objectName() == pageWidgetName )
    {
      //found the page, set it as current
      mOptionsStackedWidget->setCurrentIndex( idx );
      return;
    }
  }
}

void QgsOptions::on_pbnProjectDefaultSetCurrent_clicked()
{
  QString fileName = QgsApplication::qgisSettingsDirPath() + QLatin1String( "project_default.qgs" );
  if ( QgsProject::instance()->write( QFileInfo( fileName ) ) )
  {
    QMessageBox::information( nullptr, tr( "Save default project" ), tr( "Current project saved as default" ) );
  }
  else
  {
    QMessageBox::critical( nullptr, tr( "Save default project" ), tr( "Error saving current project as default" ) );
  }
}

void QgsOptions::iconSizeChanged( const QString &iconSize )
{
  UavMain::instance()->setIconSizes( iconSize.toInt() );
}

void QgsOptions::uiThemeChanged( const QString &theme )
{
  if ( theme == QgsApplication::themeName() )
    return;

  QgsApplication::setUITheme( theme );
}

void QgsOptions::saveOptions()
{
  QSettings settings;

  mSettings->setValue( "UI/UITheme", cmbUITheme->currentText() );

  //通用设置
  mSettings->setValue( "/Map/searchRadiusMM", spinBoxIdentifyValue->value() );
  mSettings->setValue( "/Map/highlight/color", mIdentifyHighlightColorButton->color().name() );
  mSettings->setValue( "/Map/highlight/colorAlpha", mIdentifyHighlightColorButton->color().alpha() );
  mSettings->setValue( "/Map/highlight/buffer", mIdentifyHighlightBufferSpinBox->value() );
  mSettings->setValue( "/Map/highlight/minWidth", mIdentifyHighlightMinWidthSpinBox->value() );

  bool showLegendClassifiers = mSettings->value( "/qgis/showLegendClassifiers", false ).toBool();
  mSettings->setValue( "/qgis/showLegendClassifiers", cbxLegendClassifiers->isChecked() );
  bool legendLayersBold = mSettings->value( "/qgis/legendLayersBold", true ).toBool();
  mSettings->setValue( "/qgis/legendLayersBold", mLegendLayersBoldChkBx->isChecked() );
  bool legendGroupsBold = mSettings->value( "/qgis/legendGroupsBold", false ).toBool();
  mSettings->setValue( "/qgis/legendGroupsBold", mLegendGroupsBoldChkBx->isChecked() );
  mSettings->setValue( "/qgis/hideSplash", cbxHideSplash->isChecked() );
  mSettings->setValue( "/qgis/dockAttributeTable", cbxAttributeTableDocked->isChecked() );
  mSettings->setValue( "/qgis/attributeTableBehaviour", cmbAttrTableBehaviour->itemData( cmbAttrTableBehaviour->currentIndex() ) );
  mSettings->setValue( "/qgis/attributeTableRowCache", spinBoxAttrTableRowCache->value() );
  mSettings->setValue( "/qgis/promptForRasterSublayers", cmbPromptRasterSublayers->currentIndex() );
  mSettings->setValue( "/qgis/scanItemsInBrowser2",
                       cmbScanItemsInBrowser->itemData( cmbScanItemsInBrowser->currentIndex() ).toString() );
  mSettings->setValue( "/qgis/scanZipInBrowser2",
                       cmbScanZipInBrowser->itemData( cmbScanZipInBrowser->currentIndex() ).toString() );
  mSettings->setValue( "/qgis/ignoreShapeEncoding", cbxIgnoreShapeEncoding->isChecked() );
  mSettings->setValue( "/qgis/dockSnapping", cbxSnappingOptionsDocked->isChecked() );

  bool createRasterLegendIcons = mSettings->value( "/qgis/createRasterLegendIcons", false ).toBool();
  mSettings->setValue( "/qgis/createRasterLegendIcons", cbxCreateRasterLegendIcons->isChecked() );
  mSettings->setValue( "/qgis/copyGeometryAsWKT", cbxCopyWKTGeomFromTable->isChecked() );
  mSettings->setValue( "/qgis/new_layers_visible", chkAddedVisibility->isChecked() );
  mSettings->setValue( "/qgis/enable_anti_aliasing", chkAntiAliasing->isChecked() );
  mSettings->setValue( "/qgis/enable_render_caching", chkUseRenderCaching->isChecked() );
  mSettings->setValue( "/qgis/parallel_rendering", chkParallelRendering->isChecked() );
  int maxThreads = chkMaxThreads->isChecked() ? spinMaxThreads->value() : -1;
  QgsApplication::setMaxThreads( maxThreads );
  mSettings->setValue( "/qgis/max_threads", maxThreads );

  mSettings->setValue( "/qgis/map_update_interval", spinMapUpdateInterval->value() );
  mSettings->setValue( "/qgis/legendDoubleClickAction", cmbLegendDoubleClickAction->currentIndex() );
  bool legendLayersCapitalise = mSettings->value( "/qgis/capitaliseLayerName", false ).toBool();
  mSettings->setValue( "/qgis/capitaliseLayerName", capitaliseCheckBox->isChecked() );
  QgsMapCanvas::enableRotation( cbxCanvasRotation->isChecked() );

  // 默认简化图纸配置
  QgsVectorSimplifyMethod::SimplifyHints simplifyHints = QgsVectorSimplifyMethod::NoSimplification;
  if ( mSimplifyDrawingGroupBox->isChecked() )
  {
    simplifyHints |= QgsVectorSimplifyMethod::GeometrySimplification;
    if ( mSimplifyDrawingSpinBox->value() > 1 ) simplifyHints |= QgsVectorSimplifyMethod::AntialiasingSimplification;
  }
  mSettings->setValue( "/qgis/simplifyDrawingHints", ( int ) simplifyHints );
  mSettings->setValue( "/qgis/simplifyDrawingTol", mSimplifyDrawingSpinBox->value() );
  mSettings->setValue( "/qgis/simplifyLocal", !mSimplifyDrawingAtProvider->isChecked() );
  mSettings->setValue( "/qgis/simplifyMaxScale", 1.0 / mSimplifyMaximumScaleComboBox->scale() );

  // 项目
  mSettings->setValue( "/qgis/askToSaveProjectChanges", chbAskToSaveProjectChanges->isChecked() );
  mSettings->setValue( "qgis/askToDeleteLayers", mLayerDeleteConfirmationChkBx->isChecked() );

  mSettings->setValue( "/qgis/nullValue", leNullValue->text() );
  mSettings->setValue( "/qgis/style", cmbStyle->currentText() );
  mSettings->setValue( "/IconSize", cmbIconSize->currentText() );

  mSettings->setValue( "/qgis/messageTimeout", mMessageTimeoutSpnBx->value() );

  mSettings->setValue( "/qgis/native_color_dialogs", mNativeColorDialogsChkBx->isChecked() );
  mSettings->setValue( "/qgis/live_color_dialogs", mLiveColorDialogsChkBx->isChecked() );

  // 栅格设置
  mSettings->setValue( "/Raster/defaultRedBand", spnRed->value() );
  mSettings->setValue( "/Raster/defaultGreenBand", spnGreen->value() );
  mSettings->setValue( "/Raster/defaultBlueBand", spnBlue->value() );

  saveContrastEnhancement( cboxContrastEnhancementAlgorithmSingleBand, "singleBand" );
  saveContrastEnhancement( cboxContrastEnhancementAlgorithmMultiBandSingleByte, "multiBandSingleByte" );
  saveContrastEnhancement( cboxContrastEnhancementAlgorithmMultiBandMultiByte, "multiBandMultiByte" );

  QString contrastEnhancementLimits = cboxContrastEnhancementLimits->itemData( cboxContrastEnhancementLimits->currentIndex() ).toString();
  mSettings->setValue( "/Raster/defaultContrastEnhancementLimits", contrastEnhancementLimits );

  mSettings->setValue( "/Raster/defaultStandardDeviation", spnThreeBandStdDev->value() );

  mSettings->setValue( "/Raster/cumulativeCutLower", mRasterCumulativeCutLowerDoubleSpinBox->value() / 100.0 );
  mSettings->setValue( "/Raster/cumulativeCutUpper", mRasterCumulativeCutUpperDoubleSpinBox->value() / 100.0 );

  // 检查行为，所以默认的投影时，添加了没有定义的投影新层...
  if ( radPromptForProjection->isChecked() )
  {
    mSettings->setValue( "/Projections/defaultBehaviour", "prompt" );
  }
  else if ( radUseProjectProjection->isChecked() )
  {
    mSettings->setValue( "/Projections/defaultBehaviour", "useProject" );
  }
  else //assumes radUseGlobalProjection is checked
  {
    mSettings->setValue( "/Projections/defaultBehaviour", "useGlobal" );
  }

  mSettings->setValue( "/Projections/layerDefaultCrs", mLayerDefaultCrs.authid() );

  // 保存动态投影参照坐标系转换设置
  mSettings->setValue( "/Projections/otfTransformAutoEnable", radOtfAuto->isChecked() );
  mSettings->setValue( "/Projections/otfTransformEnabled", radOtfTransform->isChecked() );
  mSettings->setValue( "/Projections/projectDefaultCrs", mDefaultCrs.authid() );

  mSettings->setValue( "/Projections/showDatumTransformDialog", chkShowDatumTransformDialog->isChecked() );

  // 测量设置
  QGis::UnitType distanceUnit = static_cast< QGis::UnitType >( mDistanceUnitsComboBox->itemData( mDistanceUnitsComboBox->currentIndex() ).toInt() );
  mSettings->setValue( "/qgis/measure/displayunits", QgsUnitTypes::encodeUnit( distanceUnit ) );

  QgsUnitTypes::AreaUnit areaUnit = static_cast< QgsUnitTypes::AreaUnit >( mAreaUnitsComboBox->itemData( mAreaUnitsComboBox->currentIndex() ).toInt() );
  mSettings->setValue( "/qgis/measure/areaunits", QgsUnitTypes::encodeUnit( areaUnit ) );

  QgsUnitTypes::AngleUnit angleUnit = static_cast< QgsUnitTypes::AngleUnit >( mAngleUnitsComboBox->itemData( mAngleUnitsComboBox->currentIndex() ).toInt() );
  mSettings->setValue( "/qgis/measure/angleunits", QgsUnitTypes::encodeUnit( angleUnit ) );

  int decimalPlaces = mDecimalPlacesSpinBox->value();
  mSettings->setValue( "/qgis/measure/decimalplaces", decimalPlaces );

  bool baseUnit = mKeepBaseUnitCheckBox->isChecked();
  mSettings->setValue( "/qgis/measure/keepbaseunit", baseUnit );

  // 设置选择颜色
  QColor myColor = pbnSelectionColor->color();
  mSettings->setValue( "/qgis/default_selection_color_red", myColor.red() );
  mSettings->setValue( "/qgis/default_selection_color_green", myColor.green() );
  mSettings->setValue( "/qgis/default_selection_color_blue", myColor.blue() );
  mSettings->setValue( "/qgis/default_selection_color_alpha", myColor.alpha() );

  // 设置画布底色的默认颜色
  myColor = pbnCanvasColor->color();
  mSettings->setValue( "/qgis/default_canvas_color_red", myColor.red() );
  mSettings->setValue( "/qgis/default_canvas_color_green", myColor.green() );
  mSettings->setValue( "/qgis/default_canvas_color_blue", myColor.blue() );

  // 设置测量工具的默认颜色
  myColor = pbnMeasureColor->color();
  mSettings->setValue( "/qgis/default_measure_color_red", myColor.red() );
  mSettings->setValue( "/qgis/default_measure_color_green", myColor.green() );
  mSettings->setValue( "/qgis/default_measure_color_blue", myColor.blue() );

  mSettings->setValue( "/qgis/wheel_action", cmbWheelAction->currentIndex() );
  mSettings->setValue( "/qgis/zoom_factor", spinZoomFactor->value() );

  // 数字化
  mSettings->setValue( "/qgis/digitizing/line_width", mLineWidthSpinBox->value() );
  QColor digitizingColor = mLineColorToolButton->color();
  mSettings->setValue( "/qgis/digitizing/line_color_red", digitizingColor.red() );
  mSettings->setValue( "/qgis/digitizing/line_color_green", digitizingColor.green() );
  mSettings->setValue( "/qgis/digitizing/line_color_blue", digitizingColor.blue() );
  mSettings->setValue( "/qgis/digitizing/line_color_alpha", digitizingColor.alpha() );

  digitizingColor = mFillColorToolButton->color();
  mSettings->setValue( "/qgis/digitizing/fill_color_red", digitizingColor.red() );
  mSettings->setValue( "/qgis/digitizing/fill_color_green", digitizingColor.green() );
  mSettings->setValue( "/qgis/digitizing/fill_color_blue", digitizingColor.blue() );
  mSettings->setValue( "/qgis/digitizing/fill_color_alpha", digitizingColor.alpha() );

  settings.setValue( "/qgis/digitizing/line_ghost", mLineGhostCheckBox->isChecked() );

  // 默认捕捉模式
  QString defaultSnapModeString = mDefaultSnapModeComboBox->itemData( mDefaultSnapModeComboBox->currentIndex() ).toString();
  mSettings->setValue( "/qgis/digitizing/default_snap_mode", defaultSnapModeString );
  mSettings->setValue( "/qgis/digitizing/default_snapping_tolerance", mDefaultSnappingToleranceSpinBox->value() );
  mSettings->setValue( "/qgis/digitizing/search_radius_vertex_edit", mSearchRadiusVertexEditSpinBox->value() );
  mSettings->setValue( "/qgis/digitizing/default_snapping_tolerance_unit",
                       ( mDefaultSnappingToleranceComboBox->currentIndex() == 0 ? QgsTolerance::ProjectUnits : QgsTolerance::Pixels ) );
  mSettings->setValue( "/qgis/digitizing/search_radius_vertex_edit_unit",
                       ( mSearchRadiusVertexEditComboBox->currentIndex()  == 0 ? QgsTolerance::ProjectUnits : QgsTolerance::Pixels ) );

  mSettings->setValue( "/qgis/digitizing/marker_only_for_selected", mMarkersOnlyForSelectedCheckBox->isChecked() );

  QString markerComboText = mMarkerStyleComboBox->currentText();
  if ( markerComboText == tr( "Semi transparent circle" ) )
  {
    mSettings->setValue( "/qgis/digitizing/marker_style", "SemiTransparentCircle" );
  }
  else if ( markerComboText == tr( "Cross" ) )
  {
    mSettings->setValue( "/qgis/digitizing/marker_style", "Cross" );
  }
  else if ( markerComboText == tr( "None" ) )
  {
    mSettings->setValue( "/qgis/digitizing/marker_style", "None" );
  }
  mSettings->setValue( "/qgis/digitizing/marker_size", ( mMarkerSizeSpinBox->value() ) );

  mSettings->setValue( "/qgis/digitizing/reuseLastValues", chkReuseLastValues->isChecked() );
  mSettings->setValue( "/qgis/digitizing/disable_enter_attribute_values_dialog", chkDisableAttributeValuesDlg->isChecked() );
  mSettings->setValue( "/qgis/digitizing/validate_geometries", mValidateGeometries->currentIndex() );

  mSettings->setValue( "/qgis/digitizing/offset_join_style", mOffsetJoinStyleComboBox->itemData( mOffsetJoinStyleComboBox->currentIndex() ).toInt() );
  mSettings->setValue( "/qgis/digitizing/offset_quad_seg", mOffsetQuadSegSpinBox->value() );
  mSettings->setValue( "/qgis/digitizing/offset_miter_limit", mCurveOffsetMiterLimitComboBox->value() );

  // 默认比例尺列表
  QString myPaths;
  for ( int i = 0; i < mListGlobalScales->count(); ++i )
  {
    if ( i != 0 )
    {
      myPaths += ',';
    }
    myPaths += mListGlobalScales->item( i )->text();
  }
  mSettings->setValue( "Map/scales", myPaths );

  //
  // 颜色面板
  //
  if ( mTreeCustomColors->isDirty() )
  {
    mTreeCustomColors->saveColorsToScheme();
  }

  //
  // 版面设置
  //

  // 默认字体
  QString composerFont = mComposerFontComboBox->currentFont().family();
  mSettings->setValue( "/Composer/defaultFont", composerFont );

  // 网格颜色
  mSettings->setValue( "/Composer/gridRed", mGridColorButton->color().red() );
  mSettings->setValue( "/Composer/gridGreen", mGridColorButton->color().green() );
  mSettings->setValue( "/Composer/gridBlue", mGridColorButton->color().blue() );
  mSettings->setValue( "/Composer/gridAlpha", mGridColorButton->color().alpha() );

  // 网格样式
  if ( mGridStyleComboBox->currentText() == tr( "Solid" ) )
  {
    mSettings->setValue( "/Composer/gridStyle", "Solid" );
  }
  else if ( mGridStyleComboBox->currentText() == tr( "Dots" ) )
  {
    mSettings->setValue( "/Composer/gridStyle", "Dots" );
  }
  else if ( mGridStyleComboBox->currentText() == tr( "Crosses" ) )
  {
    mSettings->setValue( "/Composer/gridStyle", "Crosses" );
  }

  // 网格和向导默认值
  mSettings->setValue( "/Composer/defaultSnapGridResolution", mGridResolutionSpinBox->value() );
  mSettings->setValue( "/Composer/defaultSnapTolerancePixels", mSnapToleranceSpinBox->value() );
  mSettings->setValue( "/Composer/defaultSnapGridOffsetX", mOffsetXSpinBox->value() );
  mSettings->setValue( "/Composer/defaultSnapGridOffsetY", mOffsetYSpinBox->value() );

  // GDAL跳过驱动程序列表
  if ( mLoadedGdalDriverList )
    saveGdalDriverList();

  // refresh legend if any legend item's state is to be changed
  // 刷新图例，如果有图例中的项目状态将被改变
  if ( legendLayersBold != mLegendLayersBoldChkBx->isChecked()
       || legendGroupsBold != mLegendGroupsBoldChkBx->isChecked()
       || legendLayersCapitalise != capitaliseCheckBox->isChecked() )
  {
    // TODO[MD] QgisApp::instance()->legend()->updateLegendItemStyles();
  }

  // 如果需要，刷新图例项的每个符号
  if ( showLegendClassifiers != cbxLegendClassifiers->isChecked()
       || createRasterLegendIcons != cbxCreateRasterLegendIcons->isChecked() )
  {
    // TODO[MD] QgisApp::instance()->legend()->updateLegendItemSymbologies();
  }

  // 保存应用样式表最后一位（在复位的情况下有必要）
  if ( mStyleSheetNewOpts != mStyleSheetOldOpts )
  {
    mStyleSheetBuilder->saveToSettings( mStyleSheetNewOpts );
  }

  saveDefaultDatumTransformations();
}

void QgsOptions::rejectOptions()
{
  // 不要重置样式表，如果我们没有
  if ( mStyleSheetNewOpts != mStyleSheetOldOpts )
  {
    mStyleSheetBuilder->buildStyleSheet( mStyleSheetOldOpts );
  }
}

void QgsOptions::on_spinFontSize_valueChanged( int fontSize )
{
  mStyleSheetNewOpts.insert( "fontPointSize", QVariant( fontSize ) );
  mStyleSheetBuilder->buildStyleSheet( mStyleSheetNewOpts );
}

void QgsOptions::on_mFontFamilyRadioQt_released()
{
  if ( mStyleSheetNewOpts.value( "fontFamily" ).toString() != mStyleSheetBuilder->defaultFont().family() )
  {
    mStyleSheetNewOpts.insert( "fontFamily", QVariant( mStyleSheetBuilder->defaultFont().family() ) );
    mStyleSheetBuilder->buildStyleSheet( mStyleSheetNewOpts );
  }
}

void QgsOptions::on_mFontFamilyRadioCustom_released()
{
  if ( mFontFamilyComboBox->currentFont().family() != mStyleSheetBuilder->defaultFont().family() )
  {
    mStyleSheetNewOpts.insert( "fontFamily", QVariant( mFontFamilyComboBox->currentFont().family() ) );
    mStyleSheetBuilder->buildStyleSheet( mStyleSheetNewOpts );
  }
}

void QgsOptions::on_mFontFamilyComboBox_currentFontChanged( const QFont& font )
{
  if ( mFontFamilyRadioCustom->isChecked()
       && mStyleSheetNewOpts.value( "fontFamily" ).toString() != font.family() )
  {
    mStyleSheetNewOpts.insert( "fontFamily", QVariant( font.family() ) );
    mStyleSheetBuilder->buildStyleSheet( mStyleSheetNewOpts );
  }
}

void QgsOptions::on_mCustomGroupBoxChkBx_clicked( bool chkd )
{
  mStyleSheetNewOpts.insert( "groupBoxCustom", QVariant( chkd ) );
  mStyleSheetBuilder->buildStyleSheet( mStyleSheetNewOpts );
}

void QgsOptions::on_leProjectGlobalCrs_crsChanged( const QgsCoordinateReferenceSystem& crs )
{
  mDefaultCrs = crs;
}

void QgsOptions::on_leLayerGlobalCrs_crsChanged( const QgsCoordinateReferenceSystem& crs )
{
  mLayerDefaultCrs = crs;
}

void QgsOptions::on_lstGdalDrivers_itemDoubleClicked( QTreeWidgetItem * item, int column )
{
  Q_UNUSED( column );
  // edit driver if driver supports write
  if ( item && ( cmbEditCreateOptions->findText( item->text( 0 ) ) != -1 ) )
  {
    editGdalDriver( item->text( 0 ) );
  }
}

void QgsOptions::on_pbnEditCreateOptions_pressed()
{
  editGdalDriver( cmbEditCreateOptions->currentText() );
}

void QgsOptions::on_pbnEditPyramidsOptions_pressed()
{
  editGdalDriver( "_pyramids" );
}

void QgsOptions::editGdalDriver( const QString& driverName )
{
  if ( driverName.isEmpty() )
    return;

  QgsDialog dlg( this, nullptr, QDialogButtonBox::Ok | QDialogButtonBox::Cancel );
  QVBoxLayout *layout = dlg.layout();
  QString title = tr( "Create Options - %1 Driver" ).arg( driverName );
  if ( driverName == "_pyramids" )
    title = tr( "Create Options - pyramids" );
  dlg.setWindowTitle( title );
  if ( driverName == "_pyramids" )
  {
    QgsRasterPyramidsOptionsWidget* optionsWidget =
      new QgsRasterPyramidsOptionsWidget( &dlg, "gdal" );
    layout->addWidget( optionsWidget );
    dlg.resize( 400, 400 );
    if ( dlg.exec() == QDialog::Accepted )
      optionsWidget->apply();
  }
  else
  {
    QgsRasterFormatSaveOptionsWidget* optionsWidget =
      new QgsRasterFormatSaveOptionsWidget( &dlg, driverName,
                                            QgsRasterFormatSaveOptionsWidget::Full, "gdal" );
    layout->addWidget( optionsWidget );
    if ( dlg.exec() == QDialog::Accepted )
      optionsWidget->apply();
  }

}

// Return state of the visibility flag for newly added layers. If

bool QgsOptions::newVisible()
{
  return chkAddedVisibility->isChecked();
}

void QgsOptions::on_mRestoreDefaultWindowStateBtn_clicked()
{
  // richard
  if ( QMessageBox::warning( this, tr( "Restore UI defaults" ), tr( "Are you sure to reset the UI to default (needs restart)?" ), QMessageBox::Ok | QMessageBox::Cancel ) == QMessageBox::Cancel )
    return;
  mSettings->setValue( "/qgis/restoreDefaultWindowState", true );
}

void QgsOptions::on_mBtnAddTemplatePath_clicked()
{
  QString myDir = QFileDialog::getExistingDirectory(
                    this,
                    tr( "Choose a directory" ),
                    QDir::toNativeSeparators( QDir::homePath() ),
                    QFileDialog::ShowDirsOnly
                  );

  if ( ! myDir.isEmpty() )
  {
    QListWidgetItem* newItem = new QListWidgetItem( mListComposerTemplatePaths );
    newItem->setText( myDir );
    newItem->setFlags( Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable );
    mListComposerTemplatePaths->addItem( newItem );
    mListComposerTemplatePaths->setCurrentItem( newItem );
  }
}

void QgsOptions::on_mBtnRemoveTemplatePath_clicked()
{
  int currentRow = mListComposerTemplatePaths->currentRow();
  QListWidgetItem* itemToRemove = mListComposerTemplatePaths->takeItem( currentRow );
  delete itemToRemove;
}

void QgsOptions::on_mBtnRemoveHiddenPath_clicked()
{
  int currentRow = mListHiddenBrowserPaths->currentRow();
  QListWidgetItem* itemToRemove = mListHiddenBrowserPaths->takeItem( currentRow );
  delete itemToRemove;
}

void QgsOptions::on_mOptionsStackedWidget_currentChanged( int theIndx )
{
  Q_UNUSED( theIndx );
  // load gdal driver list when gdal tab is first opened
  if ( mOptionsStackedWidget->currentWidget()->objectName() == "mOptionsPageGDAL"
       && ! mLoadedGdalDriverList )
  {
    loadGdalDriverList();
  }
}

void QgsOptions::loadGdalDriverList()
{
  QStringList mySkippedDrivers = QgsApplication::skippedGdalDrivers();
  GDALDriverH myGdalDriver; // current driver
  QString myGdalDriverDescription;
  QStringList myDrivers;
  QStringList myGdalWriteDrivers;
  QMap<QString, QString> myDriversFlags, myDriversExt, myDriversLongName;

  // make sure we save list when accept()
  mLoadedGdalDriverList = true;

  // allow retrieving metadata from all drivers, they will be skipped again when saving
  CPLSetConfigOption( "GDAL_SKIP", "" );
  GDALAllRegister();

  int myGdalDriverCount = GDALGetDriverCount();
  for ( int i = 0; i < myGdalDriverCount; ++i )
  {
    myGdalDriver = GDALGetDriver( i );

    Q_CHECK_PTR( myGdalDriver );

    if ( !myGdalDriver )
    {
      QgsLogger::warning( "unable to get driver " + QString::number( i ) );
      continue;
    }

    // in GDAL 2.0 vector and mixed drivers are returned by GDALGetDriver, so filter out non-raster drivers
    // TODO add same UI for vector drivers
#ifdef GDAL_COMPUTE_VERSION
#if GDAL_VERSION_NUM >= GDAL_COMPUTE_VERSION(2,0,0)
    if ( QString( GDALGetMetadataItem( myGdalDriver, GDAL_DCAP_RASTER, nullptr ) ) != "YES" )
      continue;
#endif
#endif

    myGdalDriverDescription = GDALGetDescription( myGdalDriver );
    myDrivers << myGdalDriverDescription;

    QgsDebugMsg( QString( "driver #%1 - %2" ).arg( i ).arg( myGdalDriverDescription ) );

    // get driver R/W flags, taken from GDALGeneralCmdLineProcessor()
    const char *pszRWFlag, *pszVirtualIO;
    if ( GDALGetMetadataItem( myGdalDriver, GDAL_DCAP_CREATE, nullptr ) )
    {
      myGdalWriteDrivers << myGdalDriverDescription;
      pszRWFlag = "rw+";
    }
    else if ( GDALGetMetadataItem( myGdalDriver, GDAL_DCAP_CREATECOPY,
                                   nullptr ) )
      pszRWFlag = "rw";
    else
      pszRWFlag = "ro";
    if ( GDALGetMetadataItem( myGdalDriver, GDAL_DCAP_VIRTUALIO, nullptr ) )
      pszVirtualIO = "v";
    else
      pszVirtualIO = "";
    myDriversFlags[myGdalDriverDescription] = QString( "%1%2" ).arg( pszRWFlag, pszVirtualIO );

    // get driver extensions and long name
    // the gdal provider can override/add extensions but there is no interface to query this
    // aside from parsing QgsRasterLayer::buildSupportedRasterFileFilter()
    myDriversExt[myGdalDriverDescription] = QString( GDALGetMetadataItem( myGdalDriver, "DMD_EXTENSION", "" ) ).toLower();
    myDriversLongName[myGdalDriverDescription] = QString( GDALGetMetadataItem( myGdalDriver, "DMD_LONGNAME", "" ) );

  }
  // restore GDAL_SKIP just in case
  CPLSetConfigOption( "GDAL_SKIP", mySkippedDrivers.join( " " ).toUtf8() );

  myDrivers.removeDuplicates();
  // myDrivers.sort();
  // sort list case insensitive - no existing function for this!
  QMap<QString, QString> strMap;
  Q_FOREACH ( const QString& str, myDrivers )
    strMap.insert( str.toLower(), str );
  myDrivers = strMap.values();

  Q_FOREACH ( const QString& myName, myDrivers )
  {
    QTreeWidgetItem * mypItem = new QTreeWidgetItem( QStringList( myName ) );
    if ( mySkippedDrivers.contains( myName ) )
    {
      mypItem->setCheckState( 0, Qt::Unchecked );
    }
    else
    {
      mypItem->setCheckState( 0, Qt::Checked );
    }

    // add driver metadata
    mypItem->setText( 1, myDriversExt[myName] );
    QString myFlags = myDriversFlags[myName];
    mypItem->setText( 2, myFlags );
    mypItem->setText( 3, myDriversLongName[myName] );
    lstGdalDrivers->addTopLevelItem( mypItem );
  }
  // adjust column width
  for ( int i = 0; i < 4; i++ )
  {
    lstGdalDrivers->resizeColumnToContents( i );
    lstGdalDrivers->setColumnWidth( i, lstGdalDrivers->columnWidth( i ) + 5 );
  }

  // populate cmbEditCreateOptions with gdal write drivers - sorted, GTiff first
  strMap.clear();
  Q_FOREACH ( const QString& str, myGdalWriteDrivers )
    strMap.insert( str.toLower(), str );
  myGdalWriteDrivers = strMap.values();
  myGdalWriteDrivers.removeAll( "Gtiff" );
  myGdalWriteDrivers.prepend( "GTiff" );
  cmbEditCreateOptions->clear();
  Q_FOREACH ( const QString& myName, myGdalWriteDrivers )
  {
    cmbEditCreateOptions->addItem( myName );
  }

}

void QgsOptions::saveGdalDriverList()
{
  for ( int i = 0; i < lstGdalDrivers->topLevelItemCount(); i++ )
  {
    QTreeWidgetItem * mypItem = lstGdalDrivers->topLevelItem( i );
    if ( mypItem->checkState( 0 ) == Qt::Unchecked )
    {
      QgsApplication::skipGdalDriver( mypItem->text( 0 ) );
    }
    else
    {
      QgsApplication::restoreGdalDriver( mypItem->text( 0 ) );
    }
  }
  mSettings->setValue( "gdal/skipList", QgsApplication::skippedGdalDrivers().join( " " ) );
}

void QgsOptions::on_pbnAddScale_clicked()
{
  int myScale = QInputDialog::getInt(
                  this,
                  tr( "Enter scale" ),
                  tr( "Scale denominator" ),
                  -1,
                  1
                );

  if ( myScale != -1 )
  {
    QListWidgetItem* newItem = addScaleToScaleList( QString( "1:%1" ).arg( myScale ) );
    mListGlobalScales->setCurrentItem( newItem );
  }
}

void QgsOptions::on_pbnRemoveScale_clicked()
{
  int currentRow = mListGlobalScales->currentRow();
  QListWidgetItem* itemToRemove = mListGlobalScales->takeItem( currentRow );
  delete itemToRemove;
}

void QgsOptions::on_pbnDefaultScaleValues_clicked()
{
  mListGlobalScales->clear();

  QStringList myScalesList = PROJECT_SCALES.split( ',' );
  Q_FOREACH ( const QString& scale, myScalesList )
  {
    addScaleToScaleList( scale );
  }
}

void QgsOptions::on_pbnImportScales_clicked()
{
  QString fileName = QFileDialog::getOpenFileName( this, tr( "Load scales" ), QDir::homePath(),
                     tr( "XML files (*.xml *.XML)" ) );
  if ( fileName.isEmpty() )
  {
    return;
  }

  QString msg;
  QStringList myScales;
  if ( !QgsScaleUtils::loadScaleList( fileName, myScales, msg ) )
  {
    QgsDebugMsg( msg );
  }

  Q_FOREACH ( const QString& scale, myScales )
  {
    addScaleToScaleList( scale );
  }
}

void QgsOptions::on_pbnExportScales_clicked()
{
  QString fileName = QFileDialog::getSaveFileName( this, tr( "Save scales" ), QDir::homePath(),
                     tr( "XML files (*.xml *.XML)" ) );
  if ( fileName.isEmpty() )
  {
    return;
  }

  // ensure the user never ommited the extension from the file name
  if ( !fileName.endsWith( ".xml", Qt::CaseInsensitive ) )
  {
    fileName += ".xml";
  }

  QStringList myScales;
  myScales.reserve( mListGlobalScales->count() );
  for ( int i = 0; i < mListGlobalScales->count(); ++i )
  {
    myScales.append( mListGlobalScales->item( i )->text() );
  }

  QString msg;
  if ( !QgsScaleUtils::saveScaleList( fileName, myScales, msg ) )
  {
    QgsDebugMsg( msg );
  }
}

void QgsOptions::initContrastEnhancement( QComboBox *cbox, const QString& name, const QString& defaultVal )
{
  QSettings settings;

  //add items to the color enhanceContrast combo box
  cbox->addItem( tr( "No Stretch" ), "NoEnhancement" );
  cbox->addItem( tr( "Stretch To MinMax" ), "StretchToMinimumMaximum" );
  cbox->addItem( tr( "Stretch And Clip To MinMax" ), "StretchAndClipToMinimumMaximum" );
  cbox->addItem( tr( "Clip To MinMax" ), "ClipToMinimumMaximum" );

  QString contrastEnchacement = mSettings->value( "/Raster/defaultContrastEnhancementAlgorithm/" + name, defaultVal ).toString();
  cbox->setCurrentIndex( cbox->findData( contrastEnchacement ) );
}

void QgsOptions::saveContrastEnhancement( QComboBox *cbox, const QString& name )
{
  QSettings settings;
  QString value = cbox->itemData( cbox->currentIndex() ).toString();
  mSettings->setValue( "/Raster/defaultContrastEnhancementAlgorithm/" + name, value );
}

void QgsOptions::on_mRemoveDefaultTransformButton_clicked()
{
  QList<QTreeWidgetItem*> items = mDefaultDatumTransformTreeWidget->selectedItems();
  for ( int i = 0; i < items.size(); ++i )
  {
    int idx = mDefaultDatumTransformTreeWidget->indexOfTopLevelItem( items.at( i ) );
    if ( idx >= 0 )
    {
      delete mDefaultDatumTransformTreeWidget->takeTopLevelItem( idx );
    }
  }
}

void QgsOptions::on_mAddDefaultTransformButton_clicked()
{
  QTreeWidgetItem* item = new QTreeWidgetItem();
  item->setText( 0, "" );
  item->setText( 1, "" );
  item->setText( 2, "" );
  item->setText( 3, "" );
  item->setFlags( Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable );
  mDefaultDatumTransformTreeWidget->addTopLevelItem( item );
}

void QgsOptions::saveDefaultDatumTransformations()
{
  QSettings s;
  s.beginGroup( "/Projections" );
  QStringList groupKeys = s.allKeys();
  QStringList::const_iterator groupKeyIt = groupKeys.constBegin();
  for ( ; groupKeyIt != groupKeys.constEnd(); ++groupKeyIt )
  {
    if ( groupKeyIt->contains( "srcTransform" ) || groupKeyIt->contains( "destTransform" ) )
    {
      s.remove( *groupKeyIt );
    }
  }

  int nDefaultTransforms = mDefaultDatumTransformTreeWidget->topLevelItemCount();
  for ( int i = 0; i < nDefaultTransforms; ++i )
  {
    QTreeWidgetItem* item = mDefaultDatumTransformTreeWidget->topLevelItem( i );
    QString srcAuthId = item->text( 0 );
    QString destAuthId = item->text( 1 );
    if ( srcAuthId.isEmpty() || destAuthId.isEmpty() )
    {
      continue;
    }

    bool conversionOk;
    int srcDatumTransform = item->text( 2 ).toInt( &conversionOk );
    if ( conversionOk )
    {
      s.setValue( srcAuthId + "//" + destAuthId + "_srcTransform", srcDatumTransform );
    }
    int destDatumTransform = item->text( 3 ).toInt( &conversionOk );
    if ( conversionOk )
    {
      s.setValue( srcAuthId + "//" + destAuthId + "_destTransform", destDatumTransform );
    }
  }

  s.endGroup();
}


void QgsOptions::on_mButtonAddColor_clicked()
{
  QColor newColor = QgsColorDialogV2::getColor( QColor(), this->parentWidget(), tr( "Select color" ), true );
  if ( !newColor.isValid() )
  {
    return;
  }
  activateWindow();

  mTreeCustomColors->addColor( newColor, QgsSymbolLayerV2Utils::colorToName( newColor ) );
}

void QgsOptions::on_mButtonImportColors_clicked()
{
  QSettings s;
  QString lastDir = s.value( "/UI/lastGplPaletteDir", QDir::homePath() ).toString();
  QString filePath = QFileDialog::getOpenFileName( this, tr( "Select palette file" ), lastDir, "GPL (*.gpl);;All files (*.*)" );
  activateWindow();
  if ( filePath.isEmpty() )
  {
    return;
  }

  //check if file exists
  QFileInfo fileInfo( filePath );
  if ( !fileInfo.exists() || !fileInfo.isReadable() )
  {
    QMessageBox::critical( nullptr, tr( "Invalid file" ), tr( "Error, file does not exist or is not readable" ) );
    return;
  }

  s.setValue( "/UI/lastGplPaletteDir", fileInfo.absolutePath() );
  QFile file( filePath );
  bool importOk = mTreeCustomColors->importColorsFromGpl( file );
  if ( !importOk )
  {
    QMessageBox::critical( nullptr, tr( "Invalid file" ), tr( "Error, no colors found in palette file" ) );
    return;
  }
}

void QgsOptions::on_mButtonExportColors_clicked()
{
  QSettings s;
  QString lastDir = s.value( "/UI/lastGplPaletteDir", QDir::homePath() ).toString();
  QString fileName = QFileDialog::getSaveFileName( this, tr( "Palette file" ), lastDir, "GPL (*.gpl)" );
  activateWindow();
  if ( fileName.isEmpty() )
  {
    return;
  }

  // ensure filename contains extension
  if ( !fileName.endsWith( ".gpl", Qt::CaseInsensitive ) )
  {
    fileName += ".gpl";
  }

  QFileInfo fileInfo( fileName );
  s.setValue( "/UI/lastGplPaletteDir", fileInfo.absolutePath() );

  QFile file( fileName );
  bool exportOk = mTreeCustomColors->exportColorsToGpl( file );
  if ( !exportOk )
  {
    QMessageBox::critical( nullptr, tr( "Error exporting" ), tr( "Error writing palette file" ) );
    return;
  }
}

QListWidgetItem* QgsOptions::addScaleToScaleList( const QString &newScale )
{
  QListWidgetItem* newItem = new QListWidgetItem( newScale );
  addScaleToScaleList( newItem );
  return newItem;
}

void QgsOptions::addScaleToScaleList( QListWidgetItem* newItem )
{
  // If the new scale already exists, delete it.
  QListWidgetItem* duplicateItem = mListGlobalScales->findItems( newItem->text(), Qt::MatchExactly ).value( 0 );
  delete duplicateItem;

  int newDenominator = newItem->text().split( ":" ).value( 1 ).toInt();
  int i;
  for ( i = 0; i < mListGlobalScales->count(); i++ )
  {
    int denominator = mListGlobalScales->item( i )->text().split( ":" ).value( 1 ).toInt();
    if ( newDenominator > denominator )
      break;
  }

  newItem->setData( Qt::UserRole, newItem->text() );
  newItem->setFlags( Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable );
  mListGlobalScales->insertItem( i, newItem );
}

void QgsOptions::scaleItemChanged( QListWidgetItem* changedScaleItem )
{
  // Check if the new value is valid, restore the old value if not.
  QRegExp regExp( "1:0*[1-9]\\d*" );
  if ( regExp.exactMatch( changedScaleItem->text() ) )
  {
    //Remove leading zeroes from the denominator
    regExp.setPattern( "1:0*" );
    changedScaleItem->setText( changedScaleItem->text().replace( regExp, "1:" ) );
  }
  else
  {
    QMessageBox::warning( this, tr( "Invalid scale" ), tr( "The text you entered is not a valid scale." ) );
    changedScaleItem->setText( changedScaleItem->data( Qt::UserRole ).toString() );
  }

  // Take the changed item out of the list and re-add it. This keeps things ordered and creates correct meta-data for the changed item.
  int row = mListGlobalScales->row( changedScaleItem );
  mListGlobalScales->takeItem( row );
  addScaleToScaleList( changedScaleItem );
  mListGlobalScales->setCurrentItem( changedScaleItem );
}
