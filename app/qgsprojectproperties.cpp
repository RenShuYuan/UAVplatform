/***************************************************************************
                            qgsprojectproperties.cpp
       Set various project properties (inherits qgsprojectpropertiesbase)
                              -------------------
  begin                : May 18, 2004
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

#include "qgsprojectproperties.h"

//qgis includes
#include "uav/uavcore.h"
#include "qgsapplication.h"
#include "qgsdistancearea.h"
#include "uav/uavmain.h"
#include "qgscontexthelp.h"
#include "qgscoordinatetransform.h"
#include "qgslogger.h"
#include "qgsmapcanvas.h"
#include "qgsmaplayer.h"
#include "qgsmaplayerregistry.h"
#include "qgsmaprenderer.h"
#include "qgsproject.h"
#include "qgsrasterlayer.h"
#include "qgsvectorlayer.h"
#include "qgsvectordataprovider.h"
#include "qgsscaleutils.h"
#include "qgsgenericprojectionselector.h"
#include "qgsstylev2.h"
#include "qgsmapoverviewcanvas.h"
#include "qgslayertreenode.h"
#include "qgslayertreegroup.h"
#include "qgslayertreelayer.h"
#include "qgslayertreemodel.h"
#include "qgsunittypes.h"

#include "qgsmessagelog.h"

//qt includes
#include <QInputDialog>
#include <QFileDialog>
#include <QHeaderView>  // Qt 4.4
#include <QMessageBox>
#include <QPushButton>

const char * QgsProjectProperties::GEO_NONE_DESC = QT_TRANSLATE_NOOP( "QgsOptions", "None / Planimetric" );

//stdc++ includes

QgsProjectProperties::QgsProjectProperties( QgsMapCanvas* mapCanvas, QWidget *parent, Qt::WindowFlags fl )
    : QgsOptionsDialogBase( "ProjectProperties", parent, fl )
    , mMapCanvas( mapCanvas )
    , mEllipsoidList()
    , mEllipsoidIndex( 0 )

{
  setupUi( this );
  // QgsOptionsDialogBase处理保存/几何形状，分离器和当前选项卡的状态恢复，
  // 切换图标/文本之间的垂直选项卡仅图标模式（分路器崩溃到左），
  // 以及连接QDialogButtonBox的接受/拒绝信号，以对话框的接受/拒绝插槽
  initOptionsBase( false );
  
  // 重新定义图标及大小
  pbnAddScale->setIcon(uavCore::getThemeIcon("symbologyAdd.svg"));
  pbnRemoveScale->setIcon(uavCore::getThemeIcon("symbologyRemove.svg"));
  pbnImportScales->setIcon(uavCore::getThemeIcon("mActionFileOpen.svg"));
  pbnExportScales->setIcon(uavCore::getThemeIcon("mActionFileSave.svg"));
  for (int i=0; i<mOptionsListWidget->count(); ++i)
  {
	  QListWidgetItem *item = mOptionsListWidget->item(i);
	  if (0==i)
	  {
		  item->setIcon(uavCore::getThemeIcon("propertyicons/general.svg"));
	  } 
	  else if (1==i)
	  {
		  item->setIcon(uavCore::getThemeIcon("propertyicons/CRS.svg"));
	  }
	  else if (2==i)
	  {
		  item->setIcon(uavCore::getThemeIcon("propertyicons/map_tools.png"));
	  }
  }
  int size = mSettings->value( "/IconSize", 24 ).toInt();
  int iconBuffer = 4;
  mOptionsListWidget->setIconSize( QSize( size + iconBuffer, size + iconBuffer ) );

  // 地图单位
  mCoordinateDisplayComboBox->addItem( tr( "Map units" ), MapUnits ); 
  mCoordinateDisplayComboBox->addItem( tr( "Decimal degrees" ), DecimalDegrees );
  mCoordinateDisplayComboBox->addItem( tr( "Degrees, minutes" ), DegreesMinutes );
  mCoordinateDisplayComboBox->addItem( tr( "Degrees, minutes, seconds" ), DegreesMinutesSeconds );

  mDistanceUnitsCombo->addItem( tr( "Meters" ), QGis::Meters );
  mDistanceUnitsCombo->addItem( tr( "Feet" ), QGis::Feet );
  mDistanceUnitsCombo->addItem( tr( "Nautical miles" ), QGis::NauticalMiles );
  mDistanceUnitsCombo->addItem( tr( "Degrees" ), QGis::Degrees );
  mDistanceUnitsCombo->addItem( tr( "Map units" ), QGis::UnknownUnit );

  // 面积计量单位
  mAreaUnitsCombo->addItem( tr( "Square meters" ), QgsUnitTypes::SquareMeters );
  mAreaUnitsCombo->addItem( tr( "Square kilometers" ), QgsUnitTypes::SquareKilometers );
  mAreaUnitsCombo->addItem( tr( "Square feet" ), QgsUnitTypes::SquareFeet );
  mAreaUnitsCombo->addItem( tr( "Square yards" ), QgsUnitTypes::SquareYards );
  mAreaUnitsCombo->addItem( tr( "Square miles" ), QgsUnitTypes::SquareMiles );
  mAreaUnitsCombo->addItem( tr( "Hectares" ), QgsUnitTypes::Hectares );
  mAreaUnitsCombo->addItem( tr( "Acres" ), QgsUnitTypes::Acres );
  mAreaUnitsCombo->addItem( tr( "Square nautical miles" ), QgsUnitTypes::SquareNauticalMiles );
  mAreaUnitsCombo->addItem( tr( "Square degrees" ), QgsUnitTypes::SquareDegrees );
  mAreaUnitsCombo->addItem( tr( "Map units" ), QgsUnitTypes::UnknownAreaUnit );

  connect( buttonBox->button( QDialogButtonBox::Apply ), SIGNAL( clicked() ), this, SLOT( apply() ) );
  connect( this, SIGNAL( accepted() ), this, SLOT( apply() ) );
  connect( projectionSelector, SIGNAL( sridSelected( QString ) ), this, SLOT( srIdUpdated() ) );
  connect( projectionSelector, SIGNAL( initialized() ), this, SLOT( projectionSelectorInitialized() ) );

  connect( cmbEllipsoid, SIGNAL( currentIndexChanged( int ) ), this, SLOT( updateEllipsoidUI( int ) ) );

  connect( radAutomatic, SIGNAL( toggled( bool ) ), spinBoxDP, SLOT( setDisabled( bool ) ) );
  connect( radAutomatic, SIGNAL( toggled( bool ) ), labelDP, SLOT( setDisabled( bool ) ) );
  connect( radManual, SIGNAL( toggled( bool ) ), spinBoxDP, SLOT( setEnabled( bool ) ) );
  connect( radManual, SIGNAL( toggled( bool ) ), labelDP, SLOT( setEnabled( bool ) ) );

  QSettings settings;

  ///////////////////////////////////////////////////////////
  // 存储在地图画布QgsMap渲染属性
  // 这些通过信号传播到QGIS项目

  // 我们需要初始化它, since the on_cbxProjectionEnabled_toggled()
  // slot triggered by setChecked() might use it.
  mProjectSrsId = mMapCanvas->mapSettings().destinationCrs().srsid();

  QgsCoordinateReferenceSystem srs( mProjectSrsId, QgsCoordinateReferenceSystem::InternalCrsId );
  updateGuiForMapUnits( srs.mapUnits() );

  QgsDebugMsg( "Read project CRSID: " + QString::number( mProjectSrsId ) );
  projectionSelector->setSelectedCrsId( mProjectSrsId );

  mMapTileRenderingCheckBox->setChecked( mMapCanvas->mapSettings().testFlag( QgsMapSettings::RenderMapTile ) );

  // see end of constructor for updating of projection selector

  ///////////////////////////////////////////////////////////
  // Properties stored in QgsProject

  title( QgsProject::instance()->title() );
  projectFileName->setText( QgsProject::instance()->fileName() );

  // get the manner in which the number of decimal places in the mouse
  // position display is set (manual or automatic)
  bool automaticPrecision = QgsProject::instance()->readBoolEntry( "PositionPrecision", "/Automatic", true );
  if ( automaticPrecision )
  {
    radAutomatic->setChecked( true );
    spinBoxDP->setEnabled( false );
    labelDP->setEnabled( false );
  }
  else
  {
    radManual->setChecked( true );
    spinBoxDP->setEnabled( true );
    labelDP->setEnabled( true );
  }
  int dp = QgsProject::instance()->readNumEntry( "PositionPrecision", "/DecimalPlaces" );
  spinBoxDP->setValue( dp );

  cbxAbsolutePath->setCurrentIndex( QgsProject::instance()->readBoolEntry( "Paths", "/Absolute", true ) ? 0 : 1 );

  // populate combo box with ellipsoids
  // selection of the ellipsoid from settings is defferred to a later point, because it would
  // be overridden in the meanwhile by the projection selector
  populateEllipsoidList();

  QString format = QgsProject::instance()->readEntry( "PositionPrecision", "/DegreeFormat", "MU" );
  if ( format == "MU" )
    mCoordinateDisplayComboBox->setCurrentIndex( mCoordinateDisplayComboBox->findData( MapUnits ) );
  else if ( format == "DM" )
    mCoordinateDisplayComboBox->setCurrentIndex( mCoordinateDisplayComboBox->findData( DegreesMinutes ) );
  else if ( format == "DMS" )
    mCoordinateDisplayComboBox->setCurrentIndex( mCoordinateDisplayComboBox->findData( DegreesMinutesSeconds ) );
  else
    mCoordinateDisplayComboBox->setCurrentIndex( mCoordinateDisplayComboBox->findData( DecimalDegrees ) );

  mDistanceUnitsCombo->setCurrentIndex( mDistanceUnitsCombo->findData( QgsProject::instance()->distanceUnits() ) );
  mAreaUnitsCombo->setCurrentIndex( mAreaUnitsCombo->findData( QgsProject::instance()->areaUnits() ) );

  //get the color selections and set the button color accordingly
  int myRedInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorRedPart", 255 );
  int myGreenInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorGreenPart", 255 );
  int myBlueInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorBluePart", 0 );
  int myAlphaInt = QgsProject::instance()->readNumEntry( "Gui", "/SelectionColorAlphaPart", 255 );
  QColor myColor = QColor( myRedInt, myGreenInt, myBlueInt, myAlphaInt );
  myRedInt = settings.value( "/qgis/default_selection_color_red", 255 ).toInt();
  myGreenInt = settings.value( "/qgis/default_selection_color_green", 255 ).toInt();
  myBlueInt = settings.value( "/qgis/default_selection_color_blue", 0 ).toInt();
  myAlphaInt = settings.value( "/qgis/default_selection_color_alpha", 255 ).toInt();
  QColor defaultSelectionColor = QColor( myRedInt, myGreenInt, myBlueInt, myAlphaInt );
  pbnSelectionColor->setContext( "gui" );
  pbnSelectionColor->setColor( myColor );
  pbnSelectionColor->setDefaultColor( defaultSelectionColor );
  pbnSelectionColor->setColorDialogTitle( tr( "Selection color" ) );
  pbnSelectionColor->setAllowAlpha( true );

  //获取地图画布的背景颜色，并相应设置按钮的颜色（默认的白色）
  myRedInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorRedPart", 255 );
  myGreenInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorGreenPart", 255 );
  myBlueInt = QgsProject::instance()->readNumEntry( "Gui", "/CanvasColorBluePart", 255 );
  myColor = QColor( myRedInt, myGreenInt, myBlueInt );
  myRedInt = settings.value( "/qgis/default_canvas_color_red", 255 ).toInt();
  myGreenInt = settings.value( "/qgis/default_canvas_color_green", 255 ).toInt();
  myBlueInt = settings.value( "/qgis/default_canvas_color_blue", 255 ).toInt();
  QColor defaultCanvasColor = QColor( myRedInt, myGreenInt, myBlueInt );

  pbnCanvasColor->setContext( "gui" );
  pbnCanvasColor->setColor( myColor );
  pbnCanvasColor->setDefaultColor( defaultCanvasColor );

  //get project scales
  QStringList myScales = QgsProject::instance()->readListEntry( "Scales", "/ScalesList" );
  if ( !myScales.isEmpty() )
  {
    Q_FOREACH ( const QString& scale, myScales )
    {
      addScaleToScaleList( scale );
    }
  }
  connect( lstScales, SIGNAL( itemChanged( QListWidgetItem* ) ), this, SLOT( scaleItemChanged( QListWidgetItem* ) ) );

  grpProjectScales->setChecked( QgsProject::instance()->readBoolEntry( "Scales", "/useProjectScales" ) );

  QgsMapLayer* currentLayer = nullptr;

  QStringList noIdentifyLayerIdList = QgsProject::instance()->readListEntry( "Identify", "/disabledLayers" );

  const QMap<QString, QgsMapLayer*> &mapLayers = QgsMapLayerRegistry::instance()->mapLayers();

  if ( mMapCanvas->currentLayer() )
  {
    mLayerSrsId = mMapCanvas->currentLayer()->crs().srsid();
  }
  else if ( !mapLayers.isEmpty() )
  {
    mLayerSrsId = mapLayers.begin().value()->crs().srsid();
  }
  else
  {
    mLayerSrsId = mProjectSrsId;
  }

  twIdentifyLayers->setColumnCount( 3 );
  twIdentifyLayers->horizontalHeader()->setVisible( true );
  twIdentifyLayers->setHorizontalHeaderItem( 0, new QTableWidgetItem( tr( "Layer" ) ) );
  twIdentifyLayers->setHorizontalHeaderItem( 1, new QTableWidgetItem( tr( "Type" ) ) );
  twIdentifyLayers->setHorizontalHeaderItem( 2, new QTableWidgetItem( tr( "Identifiable" ) ) );
  twIdentifyLayers->setRowCount( mapLayers.size() );
  twIdentifyLayers->verticalHeader()->setResizeMode( QHeaderView::ResizeToContents );

  int i = 0;
  for ( QMap<QString, QgsMapLayer*>::const_iterator it = mapLayers.constBegin(); it != mapLayers.constEnd(); ++it, i++ )
  {
    currentLayer = it.value();

    QTableWidgetItem *twi = new QTableWidgetItem( QString::number( i ) );
    twIdentifyLayers->setVerticalHeaderItem( i, twi );

    twi = new QTableWidgetItem( currentLayer->name() );
    twi->setData( Qt::UserRole, it.key() );
    twi->setFlags( twi->flags() & ~Qt::ItemIsEditable );
    twIdentifyLayers->setItem( i, 0, twi );

    QString type;
    if ( currentLayer->type() == QgsMapLayer::VectorLayer )
    {
      type = tr( "Vector" );
    }
    else if ( currentLayer->type() == QgsMapLayer::RasterLayer )
    {
      QgsRasterLayer *rl = qobject_cast<QgsRasterLayer *>( currentLayer );

      if ( rl && rl->providerType() == "wms" )
      {
        type = tr( "WMS" );
      }
      else
      {
        type = tr( "Raster" );
      }
    }

    twi = new QTableWidgetItem( type );
    twi->setFlags( twi->flags() & ~Qt::ItemIsEditable );
    twIdentifyLayers->setItem( i, 1, twi );

    QCheckBox *cb = new QCheckBox();
    cb->setChecked( !noIdentifyLayerIdList.contains( currentLayer->id() ) );
    twIdentifyLayers->setCellWidget( i, 2, cb );
  }

  // Update projection selector (after mLayerSrsId is set)
  bool myProjectionEnabled = mMapCanvas->mapSettings().hasCrsTransformEnabled();
  bool onFlyChecked = cbxProjectionEnabled->isChecked();
  cbxProjectionEnabled->setChecked( myProjectionEnabled );

  if ( onFlyChecked == myProjectionEnabled )
  {
    // ensure selector is updated if cbxProjectionEnabled->toggled signal not sent
    on_cbxProjectionEnabled_toggled( myProjectionEnabled );
  }

  projectionSelectorInitialized();
  restoreOptionsBaseUi();
  restoreState();
}

QgsProjectProperties::~QgsProjectProperties()
{
  saveState();
}

// return the map units
QGis::UnitType QgsProjectProperties::mapUnits() const
{
  return mMapCanvas->mapSettings().mapUnits();
}

void QgsProjectProperties::setMapUnits( QGis::UnitType unit )
{
  // select the button
  if ( unit == QGis::UnknownUnit )
  {
    unit = QGis::Meters;
  }

  mMapCanvas->setMapUnits( unit );
}

QString QgsProjectProperties::title() const
{
  return titleEdit->text();
} //  QgsProjectPropertires::title() const

void QgsProjectProperties::title( QString const & title )
{
  titleEdit->setText( title );
  QgsProject::instance()->setTitle( title );
} // QgsProjectProperties::title( QString const & title )

//when user clicks apply button
void QgsProjectProperties::apply()
{
  mMapCanvas->setCrsTransformEnabled( cbxProjectionEnabled->isChecked() );

  mMapCanvas->enableMapTileRendering( mMapTileRenderingCheckBox->isChecked() );

  // 如果在所选择的树具有一个SRID的节点，仅改变投影。
  // 这防止错误，如果用户选择了一个顶层节点，而不是实际的坐标系
  long myCRSID = projectionSelector->selectedCrsId();
  if ( myCRSID )
  {
	// 使用选择的坐标系定义对象，并设置为mMapCanvas的坐标参照系
    QgsCoordinateReferenceSystem srs( myCRSID, QgsCoordinateReferenceSystem::InternalCrsId );
    mMapCanvas->setDestinationCrs( srs );
    QgsDebugMsg( QString( "Selected CRS " ) + srs.description() );
	// 将当前选择的投影写到项目设置中
    QgsDebugMsg( QString( "SpatialRefSys/ProjectCRSProj4String: %1" ).arg( projectionSelector->selectedProj4String() ) );
    QgsProject::instance()->writeEntry( "SpatialRefSys", "/ProjectCRSProj4String", projectionSelector->selectedProj4String() );
    QgsProject::instance()->writeEntry( "SpatialRefSys", "/ProjectCRSID", ( int ) projectionSelector->selectedCrsId() );
    QgsProject::instance()->writeEntry( "SpatialRefSys", "/ProjectCrs", projectionSelector->selectedAuthId() );

	// 设置地图单位的投影坐标
    if ( isProjected() )
    {
      // 如果我们无法获得地图单位，默认为在项目属性对话框中的值
      if ( srs.mapUnits() != QGis::UnknownUnit )
        mMapCanvas->setMapUnits( srs.mapUnits() );
    }

    if ( cbxProjectionEnabled->isChecked() )
    {
	  // 选择标记为投影前
      projectionSelector->pushProjectionToFront();
    }
  }

  // 设置这个项目的标题
  QgsProject::instance()->setTitle( title() );

  // set the mouse display precision method and the
  // number of decimal places for the manual option
  // Note. Qt 3.2.3 and greater have a function selectedId() that
  // can be used instead of the two part technique here
  QgsProject::instance()->writeEntry( "PositionPrecision", "/Automatic", radAutomatic->isChecked() );
  QgsProject::instance()->writeEntry( "PositionPrecision", "/DecimalPlaces", spinBoxDP->value() );
  QString degreeFormat;
  switch ( static_cast< CoordinateFormat >( mCoordinateDisplayComboBox->itemData( mCoordinateDisplayComboBox->currentIndex() ).toInt() ) )
  {
    case DegreesMinutes:
      degreeFormat = "DM";
      break;
    case DegreesMinutesSeconds:
      degreeFormat = "DMS";
      break;
    case MapUnits:
      degreeFormat = "MU";
      break;
    case DecimalDegrees:
    default:
      degreeFormat = "D";
      break;
  }
  QgsProject::instance()->writeEntry( "PositionPrecision", "/DegreeFormat", degreeFormat );

  // 宣布，我们可能有一个新的显示精度设置
  emit displayPrecisionChanged();

  QGis::UnitType distanceUnits = static_cast< QGis::UnitType >( mDistanceUnitsCombo->itemData( mDistanceUnitsCombo->currentIndex() ).toInt() );
  QgsProject::instance()->writeEntry( "Measurement", "/DistanceUnits", QgsUnitTypes::encodeUnit( distanceUnits ) );

  QgsUnitTypes::AreaUnit areaUnits = static_cast< QgsUnitTypes::AreaUnit >( mAreaUnitsCombo->itemData( mAreaUnitsCombo->currentIndex() ).toInt() );
  QgsProject::instance()->writeEntry( "Measurement", "/AreaUnits", QgsUnitTypes::encodeUnit( areaUnits ) );

  QgsProject::instance()->writeEntry( "Paths", "/Absolute", cbxAbsolutePath->currentIndex() == 0 );

  if ( mEllipsoidList.at( mEllipsoidIndex ).acronym.startsWith( "PARAMETER" ) )
  {
    double major = mEllipsoidList.at( mEllipsoidIndex ).semiMajor;
    double minor = mEllipsoidList.at( mEllipsoidIndex ).semiMinor;
    // 如果用户字段发生了变化，用它们来代替。
    if ( leSemiMajor->isModified() || leSemiMinor->isModified() )
    {
      QgsDebugMsg( "Using paramteric major/minor" );
      major = QLocale::system().toDouble( leSemiMajor->text() );
      minor = QLocale::system().toDouble( leSemiMinor->text() );
    }
    QgsProject::instance()->writeEntry( "Measure", "/Ellipsoid", QString( "PARAMETER:%1:%2" )
                                        .arg( major, 0, 'g', 17 )
                                        .arg( minor, 0, 'g', 17 ) );
  }
  else
  {
    QgsProject::instance()->writeEntry( "Measure", "/Ellipsoid", mEllipsoidList[ mEllipsoidIndex ].acronym );
  }

  // 设置选择颜色
  QColor myColor = pbnSelectionColor->color();
  QgsProject::instance()->writeEntry( "Gui", "/SelectionColorRedPart", myColor.red() );
  QgsProject::instance()->writeEntry( "Gui", "/SelectionColorGreenPart", myColor.green() );
  QgsProject::instance()->writeEntry( "Gui", "/SelectionColorBluePart", myColor.blue() );
  QgsProject::instance()->writeEntry( "Gui", "/SelectionColorAlphaPart", myColor.alpha() );
  mMapCanvas->setSelectionColor( myColor );

  // 设置画布颜色
  myColor = pbnCanvasColor->color();
  QgsProject::instance()->writeEntry( "Gui", "/CanvasColorRedPart", myColor.red() );
  QgsProject::instance()->writeEntry( "Gui", "/CanvasColorGreenPart", myColor.green() );
  QgsProject::instance()->writeEntry( "Gui", "/CanvasColorBluePart", myColor.blue() );
  mMapCanvas->setCanvasColor( myColor );
  UavMain::instance()->mapOverviewCanvas()->setBackgroundColor( myColor );
  UavMain::instance()->mapOverviewCanvas()->refresh();

  // 保存工程比例尺
  QStringList myScales;
  myScales.reserve( lstScales->count() );
  for ( int i = 0; i < lstScales->count(); ++i )
  {
    myScales.append( lstScales->item( i )->text() );
  }

  if ( !myScales.isEmpty() )
  {
    QgsProject::instance()->writeEntry( "Scales", "/ScalesList", myScales );
    QgsProject::instance()->writeEntry( "Scales", "/useProjectScales", grpProjectScales->isChecked() );
  }
  else
  {
    QgsProject::instance()->removeEntry( "Scales", "/" );
  }

  // 使用全局或项目尺度取决于复选框状态
  if ( grpProjectScales->isChecked() )
  {
    emit scalesChanged( myScales );
  }
  else
  {
    emit scalesChanged();
  }

  QStringList noIdentifyLayerList;
  for ( int i = 0; i < twIdentifyLayers->rowCount(); i++ )
  {
    QCheckBox *cb = qobject_cast<QCheckBox *>( twIdentifyLayers->cellWidget( i, 2 ) );
    if ( cb && !cb->isChecked() )
    {
      QString id = twIdentifyLayers->item( i, 0 )->data( Qt::UserRole ).toString();
      noIdentifyLayerList << id;
    }
  }

  QgsProject::instance()->writeEntry( "Identify", "/disabledLayers", noIdentifyLayerList );

  emit refresh();
}

bool QgsProjectProperties::isProjected()
{
  return cbxProjectionEnabled->isChecked();
}

void QgsProjectProperties::showProjectionsTab()
{
  mOptionsListWidget->setCurrentRow( 1 );
}

void QgsProjectProperties::on_cbxProjectionEnabled_toggled( bool onFlyEnabled )
{
  if ( !onFlyEnabled )
  {
    // reset projection to default
    const QMap<QString, QgsMapLayer*> &mapLayers = QgsMapLayerRegistry::instance()->mapLayers();

    if ( mMapCanvas->currentLayer() )
    {
      mLayerSrsId = mMapCanvas->currentLayer()->crs().srsid();
    }
    else if ( !mapLayers.isEmpty() )
    {
      mLayerSrsId = mapLayers.begin().value()->crs().srsid();
    }
    else
    {
      mLayerSrsId = mProjectSrsId;
    }
    mProjectSrsId = mLayerSrsId;
    projectionSelector->setSelectedCrsId( mLayerSrsId );

    // unset ellipsoid
    mEllipsoidIndex = 0;
  }
  else
  {
    if ( !mLayerSrsId )
    {
      mLayerSrsId = projectionSelector->selectedCrsId();
    }
    projectionSelector->setSelectedCrsId( mProjectSrsId );
  }

  srIdUpdated();

  // Enable/Disable selector and update tool-tip
  updateEllipsoidUI( mEllipsoidIndex ); // maybe already done by setMapUnitsToCurrentProjection
}

void QgsProjectProperties::updateGuiForMapUnits( QGis::UnitType units )
{
  //make sure map units option is shown in coordinate display combo
  int idx = mCoordinateDisplayComboBox->findData( MapUnits );
  QString mapUnitString = tr( "Map units (%1)" ).arg( QgsUnitTypes::toString( units ) );
  mCoordinateDisplayComboBox->setItemText( idx, mapUnitString );

  //also update unit combo boxes
  idx = mDistanceUnitsCombo->findData( QGis::UnknownUnit );
  if ( idx >= 0 )
  {
    QString mapUnitString = tr( "Map units (%1)" ).arg( QgsUnitTypes::toString( units ) );
    mDistanceUnitsCombo->setItemText( idx, mapUnitString );
  }
  idx = mAreaUnitsCombo->findData( QgsUnitTypes::UnknownAreaUnit );
  if ( idx >= 0 )
  {
    QString mapUnitString = tr( "Map units (%1)" ).arg( QgsUnitTypes::toString( QgsUnitTypes::distanceToAreaUnit( units ) ) );
    mAreaUnitsCombo->setItemText( idx, mapUnitString );
  }
}

void QgsProjectProperties::srIdUpdated()
{
  long myCRSID = projectionSelector->selectedCrsId();
  if ( !isProjected() || !myCRSID )
    return;

  QgsCoordinateReferenceSystem srs( myCRSID, QgsCoordinateReferenceSystem::InternalCrsId );
  //set radio button to crs map unit type
  QGis::UnitType units = srs.mapUnits();

  updateGuiForMapUnits( units );

  // attempt to reset the projection ellipsoid according to the srs
  int myIndex = 0;
  for ( int i = 0; i < mEllipsoidList.length(); i++ )
  {
    if ( mEllipsoidList[ i ].acronym == srs.ellipsoidAcronym() )
    {
      myIndex = i;
      break;
    }
  }
  updateEllipsoidUI( myIndex );
}

/*!
 * Function to save non-base dialog states
 */
void QgsProjectProperties::saveState()
{
}

/*!
 * Function to restore non-base dialog states
 */
void QgsProjectProperties::restoreState()
{
}

void QgsProjectProperties::on_pbnAddScale_clicked()
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
    lstScales->setCurrentItem( newItem );
  }
}

void QgsProjectProperties::on_pbnRemoveScale_clicked()
{
  int currentRow = lstScales->currentRow();
  QListWidgetItem* itemToRemove = lstScales->takeItem( currentRow );
  delete itemToRemove;
}

void QgsProjectProperties::on_pbnImportScales_clicked()
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

void QgsProjectProperties::on_pbnExportScales_clicked()
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
  for ( int i = 0; i < lstScales->count(); ++i )
  {
    myScales.append( lstScales->item( i )->text() );
  }

  QString msg;
  if ( !QgsScaleUtils::saveScaleList( fileName, myScales, msg ) )
  {
    QgsDebugMsg( msg );
  }
}

void QgsProjectProperties::populateEllipsoidList()
{
  //
  // Populate the ellipsoid list
  //
	sqlite3      *myDatabase;
	const char   *myTail;
	sqlite3_stmt *myPreparedStatement;
	int           myResult;
	EllipsoidDefs myItem;

	myItem.acronym = GEO_NONE;
	myItem.description =  tr( GEO_NONE_DESC );
	myItem.semiMajor = 0.0;
	myItem.semiMinor = 0.0;
	mEllipsoidList.append( myItem );

	myItem.acronym = QLatin1String( "PARAMETER:6370997:6370997" );
	myItem.description = tr( "Parameters:" );
	myItem.semiMajor = 6370997.0;
	myItem.semiMinor = 6370997.0;
	mEllipsoidList.append( myItem );

  //check the db is available
  //myResult = sqlite3_open_v2( QgsApplication::srsDbFilePath().toUtf8().data(), &myDatabase, SQLITE_OPEN_READONLY, nullptr );
  myResult = sqlite3_open_v2(QgsApplication::srsDbFilePath().toUtf8().data(), &myDatabase, SQLITE_OPEN_READONLY, nullptr);
  if ( myResult )
  {
    QgsDebugMsg( QString( "Can't open database: %1" ).arg( sqlite3_errmsg( myDatabase ) ) );
    // XXX This will likely never happen since on open, sqlite creates the
    //     database if it does not exist.
    Q_ASSERT( myResult == 0 );
  }

  // Set up the query to retrieve the projection information needed to populate the ELLIPSOID list
  QString mySql = "select acronym, name, radius, parameter2 from tbl_ellipsoid order by name";
  myResult = sqlite3_prepare( myDatabase, mySql.toUtf8(), mySql.toUtf8().length(), &myPreparedStatement, &myTail );
  // XXX Need to free memory from the error msg if one is set
  if ( myResult == SQLITE_OK )
  {
    while ( sqlite3_step( myPreparedStatement ) == SQLITE_ROW )
    {
      QString para1, para2;
      myItem.acronym = ( const char * )sqlite3_column_text( myPreparedStatement, 0 );
      myItem.description = ( const char * )sqlite3_column_text( myPreparedStatement, 1 );

      // Copied from QgsDistanecArea. Should perhaps be moved there somehow?
      // No error checking, this values are for show only, never used in calculations.

      // Fall-back values
      myItem.semiMajor = 0.0;
      myItem.semiMinor = 0.0;
      // Crash if no column?
      para1 = ( const char * )sqlite3_column_text( myPreparedStatement, 2 );
      para2 = ( const char * )sqlite3_column_text( myPreparedStatement, 3 );
      myItem.semiMajor = para1.mid( 2 ).toDouble();
      if ( para2.left( 2 ) == "b=" )
      {
        myItem.semiMinor = para2.mid( 2 ).toDouble();
      }
      else if ( para2.left( 3 ) == "rf=" )
      {
        double invFlattening = para2.mid( 3 ).toDouble();
        if ( invFlattening != 0.0 )
        {
          myItem.semiMinor = myItem.semiMajor - ( myItem.semiMajor / invFlattening );
        }
      }
      mEllipsoidList.append( myItem );
    }
  }

  // close the sqlite3 statement
  sqlite3_finalize( myPreparedStatement );
  sqlite3_close( myDatabase );

  // Add all items to selector

  foreach ( const EllipsoidDefs& i, mEllipsoidList )
  {
    cmbEllipsoid->addItem( i.description );
  }
}

void QgsProjectProperties::updateEllipsoidUI( int newIndex )
{
  // Just return if the list isn't populated yet
  if ( mEllipsoidList.isEmpty() )
  {
    return;
  }
  // Called whenever settings change, adjusts the UI accordingly
  // Pre-select current ellipsoid

  // Check if CRS transformation is on, or else turn everything off
  double myMajor =  mEllipsoidList.at( newIndex ).semiMajor;
  double myMinor =  mEllipsoidList.at( newIndex ).semiMinor;

  // If user has modified the radii (only possible if parametric!), before
  // changing ellipsoid, save the modified coordinates
  if ( leSemiMajor->isModified() || leSemiMinor->isModified() )
  {
    QgsDebugMsg( "Saving major/minor" );
    mEllipsoidList[ mEllipsoidIndex ].semiMajor = QLocale::system().toDouble( leSemiMajor->text() );
    mEllipsoidList[ mEllipsoidIndex ].semiMinor = QLocale::system().toDouble( leSemiMinor->text() );
  }

  mEllipsoidIndex = newIndex;
  leSemiMajor->setEnabled( false );
  leSemiMinor->setEnabled( false );
  leSemiMajor->setText( "" );
  leSemiMinor->setText( "" );
  if ( cbxProjectionEnabled->isChecked() )
  {
    cmbEllipsoid->setEnabled( true );
    cmbEllipsoid->setToolTip( "" );
    if ( mEllipsoidList.at( mEllipsoidIndex ).acronym.startsWith( "PARAMETER:" ) )
    {
      leSemiMajor->setEnabled( true );
      leSemiMinor->setEnabled( true );
    }
    else
    {
      leSemiMajor->setToolTip( tr( "Select %1 from pull-down menu to adjust radii" ).arg( tr( "Parameters:" ) ) );
      leSemiMinor->setToolTip( tr( "Select %1 from pull-down menu to adjust radii" ).arg( tr( "Parameters:" ) ) );
    }
    if ( mEllipsoidList[ mEllipsoidIndex ].acronym != GEO_NONE )
    {
      leSemiMajor->setText( QLocale::system().toString( myMajor, 'f', 3 ) );
      leSemiMinor->setText( QLocale::system().toString( myMinor, 'f', 3 ) );
    }
  }
  else
  {
    cmbEllipsoid->setEnabled( false );
    cmbEllipsoid->setToolTip( tr( "Can only use ellipsoidal calculations when CRS transformation is enabled" ) );
  }
  cmbEllipsoid->setCurrentIndex( mEllipsoidIndex ); // Not always necessary
}

void QgsProjectProperties::projectionSelectorInitialized()
{
  QgsDebugMsg( "Setting up ellipsoid" );

  // Reading ellipsoid from setttings
  QStringList mySplitEllipsoid = QgsProject::instance()->readEntry( "Measure", "/Ellipsoid", GEO_NONE ).split( ':' );

  int myIndex = 0;
  for ( int i = 0; i < mEllipsoidList.length(); i++ )
  {
    if ( mEllipsoidList.at( i ).acronym.startsWith( mySplitEllipsoid[ 0 ] ) )
    {
      myIndex = i;
      break;
    }
  }

  // Update paramaters if present.
  if ( mySplitEllipsoid.length() >= 3 )
  {
    mEllipsoidList[ myIndex ].semiMajor =  mySplitEllipsoid[ 1 ].toDouble();
    mEllipsoidList[ myIndex ].semiMinor =  mySplitEllipsoid[ 2 ].toDouble();
  }

  updateEllipsoidUI( myIndex );
}

QListWidgetItem* QgsProjectProperties::addScaleToScaleList( const QString &newScale )
{
  // TODO QGIS3: Rework the scale list widget to be a reusable piece of code, see PR #2558
  QListWidgetItem* newItem = new QListWidgetItem( newScale );
  addScaleToScaleList( newItem );
  return newItem;
}

void QgsProjectProperties::addScaleToScaleList( QListWidgetItem* newItem )
{
  // If the new scale already exists, delete it.
  QListWidgetItem* duplicateItem = lstScales->findItems( newItem->text(), Qt::MatchExactly ).value( 0 );
  delete duplicateItem;

  int newDenominator = newItem->text().split( ":" ).value( 1 ).toInt();
  int i;
  for ( i = 0; i < lstScales->count(); i++ )
  {
    int denominator = lstScales->item( i )->text().split( ":" ).value( 1 ).toInt();
    if ( newDenominator > denominator )
      break;
  }

  newItem->setData( Qt::UserRole, newItem->text() );
  newItem->setFlags( Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable );
  lstScales->insertItem( i, newItem );
}

void QgsProjectProperties::scaleItemChanged( QListWidgetItem* changedScaleItem )
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
  int row = lstScales->row( changedScaleItem );
  lstScales->takeItem( row );
  addScaleToScaleList( changedScaleItem );
  lstScales->setCurrentItem( changedScaleItem );
}
