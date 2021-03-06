/***************************************************************************
   UavStatusBarCoordinatesWidget.cpp
    --------------------------------------
   Date                 : 05.08.2015
   Copyright            : (C) 2015 Denis Rouzaud
   Email                : denis.rouzaud@gmail.com
***************************************************************************
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
***************************************************************************/

#include <QFont>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QRegExpValidator>
#include <QSpacerItem>
#include <QTimer>
#include <QToolButton>

#include "uavstatusbarcoordinateswidget.h"
#include "qgsapplication.h"
#include "qgsmapcanvas.h"
#include "qgsproject.h"
#include "qgscoordinateutils.h"
#include "uav/uavcore.h"


UavStatusBarCoordinatesWidget::UavStatusBarCoordinatesWidget( QWidget *parent )
    : QWidget( parent )
    , mDizzyTimer( nullptr )
    , mMapCanvas( nullptr )
    , mMousePrecisionDecimalPlaces( 0 )
{
  //添加一个标签显示当前坐标
  mLabel = new QLabel( QString(), this );
  mLabel->setObjectName( "mCoordsLabel" );
  mLabel->setMinimumWidth( 10 );
  //mCoordsLabel->setMaximumHeight( 20 );
  mLabel->setMargin( 3 );
  mLabel->setAlignment( Qt::AlignCenter );
  mLabel->setFrameStyle( QFrame::NoFrame );
  mLabel->setText( "坐标" );
  mLabel->setToolTip( "鼠标指针位置的地图坐标值" );

  mLineEdit = new QLineEdit( this );
  mLineEdit->setMinimumWidth( 10 );
  mLineEdit->setMaximumWidth( 300 );
  //mLineEdit->setMaximumHeight( 20 );
  mLineEdit->setContentsMargins( 0, 0, 0, 0 );
  mLineEdit->setAlignment( Qt::AlignCenter );
  connect( mLineEdit, SIGNAL( returnPressed() ), this, SLOT( validateCoordinates() ) );

  QRegExp coordValidator( "[+-]?\\d+\\.?\\d*\\s*,\\s*[+-]?\\d+\\.?\\d*" );
  mCoordsEditValidator = new QRegExpValidator( coordValidator, this );
  mLineEdit->setWhatsThis( "显示鼠标指针当前位置的地图坐标。坐标值会随着鼠标指针移动连续变化。允许编辑设定画布中心点的位置。格式为经度，纬度和东，北" );
  mLineEdit->setToolTip( "当前地图的坐标参照系 (经度,纬度 或东,北)" );

  //状态栏中显示的窗口小部件，切换鼠标位置和显示范围
  mToggleExtentsViewButton = new QToolButton( this );
  mToggleExtentsViewButton->setMaximumWidth( 20 );
  //mToggleExtentsViewButton->setMaximumHeight( 20 );
  mToggleExtentsViewButton->setIcon( uavCore::getThemeIcon( "tracking.png" ) );
  mToggleExtentsViewButton->setToolTip( "切换范围和鼠标位置显示" );
  mToggleExtentsViewButton->setCheckable( true );
  connect( mToggleExtentsViewButton, SIGNAL( toggled( bool ) ), this, SLOT( extentsViewToggled( bool ) ) );

  QHBoxLayout* layout = new QHBoxLayout( this );
  setLayout( layout );
  layout->addItem( new QSpacerItem( 0, 0, QSizePolicy::Expanding ) );
  layout->addWidget( mLabel );
  layout->addWidget( mLineEdit );
  layout->addWidget( mToggleExtentsViewButton );
  layout->setContentsMargins( 0, 0, 0, 0 );
  layout->setAlignment( Qt::AlignRight );
  layout->setSpacing( 0 );

  // 当你感到头晕！~~~~
  mDizzyTimer = new QTimer( this );
  connect( mDizzyTimer, SIGNAL( timeout() ), this, SLOT( dizzy() ) );
}

void UavStatusBarCoordinatesWidget::setMapCanvas( QgsMapCanvas *mapCanvas )
{
  if ( mMapCanvas )
  {
    disconnect( mMapCanvas, SIGNAL( xyCoordinates( const QgsPoint & ) ), this, SLOT( showMouseCoordinates( const QgsPoint & ) ) );
    disconnect( mMapCanvas, SIGNAL( extentsChanged() ), this, SLOT( showExtent() ) );
  }

  mMapCanvas = mapCanvas;
  connect( mMapCanvas, SIGNAL( xyCoordinates( const QgsPoint & ) ), this, SLOT( showMouseCoordinates( const QgsPoint & ) ) );
  connect( mMapCanvas, SIGNAL( extentsChanged() ), this, SLOT( showExtent() ) );
}

void UavStatusBarCoordinatesWidget::setFont( const QFont& myFont )
{
  mLineEdit->setFont( myFont );
  mLabel->setFont( myFont );
}

void UavStatusBarCoordinatesWidget::setMouseCoordinatesPrecision( unsigned int precision )
{
  mMousePrecisionDecimalPlaces = precision;
}


void UavStatusBarCoordinatesWidget::validateCoordinates()
{
  if ( !mMapCanvas )
  {
    return;
  }
  if ( mLineEdit->text() == "dizzy" )
  {
    // sometimes you may feel a bit dizzy...
    if ( mDizzyTimer->isActive() )
    {
      mDizzyTimer->stop();
      mMapCanvas->setSceneRect( mMapCanvas->viewport()->rect() );
      mMapCanvas->setTransform( QTransform() );
    }
    else
    {
      mDizzyTimer->start( 100 );
    }
    return;
  }
  else if ( mLineEdit->text() == "retro" )
  {
    mMapCanvas->setProperty( "retro", !mMapCanvas->property( "retro" ).toBool() );
    refreshMapCanvas();
    return;
  }

  bool xOk = false;
  bool  yOk = false;
  double x = 0., y = 0.;
  QString coordText = mLineEdit->text();
  coordText.replace( QRegExp( " {2,}" ), " " );

  QStringList parts = coordText.split( ',' );
  if ( parts.size() == 2 )
  {
    x = parts.at( 0 ).toDouble( &xOk );
    y = parts.at( 1 ).toDouble( &yOk );
  }

  if ( !xOk || !yOk )
  {
    parts = coordText.split( ' ' );
    if ( parts.size() == 2 )
    {
      x = parts.at( 0 ).toDouble( &xOk );
      y = parts.at( 1 ).toDouble( &yOk );
    }
  }

  if ( !xOk || !yOk )
    return;

  mMapCanvas->setCenter( QgsPoint( x, y ) );
  mMapCanvas->refresh();
}


void UavStatusBarCoordinatesWidget::dizzy()
{
  if ( !mMapCanvas )
  {
    return;
  }
  // constants should go to options so that people can customize them to their taste
  int d = 10; // max. translational dizziness offset
  int r = 4;  // max. rotational dizzines angle
  QRectF rect = mMapCanvas->sceneRect();
  if ( rect.x() < -d || rect.x() > d || rect.y() < -d || rect.y() > d )
    return; // do not affect panning
  rect.moveTo(( qrand() % ( 2 * d ) ) - d, ( qrand() % ( 2 * d ) ) - d );
  mMapCanvas->setSceneRect( rect );
  QTransform matrix;
  matrix.rotate(( qrand() % ( 2 * r ) ) - r );
  mMapCanvas->setTransform( matrix );
}

void UavStatusBarCoordinatesWidget::extentsViewToggled( bool theFlag )
{
  if ( theFlag )
  {
    //范围视图模式
    mToggleExtentsViewButton->setIcon( uavCore::getThemeIcon( "extents.png" ) );
    mLineEdit->setToolTip( "当前视图范围的地图坐标" );
    mLineEdit->setReadOnly( true );
    showExtent();
  }
  else
  {
    //当前鼠标位置视图模式
    mToggleExtentsViewButton->setIcon( uavCore::getThemeIcon( "tracking.png" ) );
    mLineEdit->setToolTip( "鼠标指针位置的地图坐标值" );
    mLineEdit->setReadOnly( false );
    mLabel->setText( "坐标:" );
  }
}

void UavStatusBarCoordinatesWidget::refreshMapCanvas()
{
  if ( !mMapCanvas )
    return;

  //stop any current rendering
  mMapCanvas->stopRendering();
  mMapCanvas->refreshAllLayers();
}

void UavStatusBarCoordinatesWidget::showMouseCoordinates( const QgsPoint & p )
{
  if ( !mMapCanvas || mToggleExtentsViewButton->isChecked() )
  {
    return;
  }

  mLineEdit->setText( QgsCoordinateUtils::formatCoordinateForProject( p, mMapCanvas->mapSettings().destinationCrs(),
                      mMousePrecisionDecimalPlaces ) );

  if ( mLineEdit->width() > mLineEdit->minimumWidth() )
  {
    mLineEdit->setMinimumWidth( mLineEdit->width() );
  }
}


void UavStatusBarCoordinatesWidget::showExtent()
{
  if ( !mToggleExtentsViewButton->isChecked() )
  {
    return;
  }

  // 更新当前范围的状态栏
  QgsRectangle myExtents = mMapCanvas->extent();
  mLabel->setText( "范围:" );
  mLineEdit->setText( myExtents.toString( true ) );
  //确保标签足够大
  if ( mLineEdit->width() > mLineEdit->minimumWidth() )
  {
    mLineEdit->setMinimumWidth( mLineEdit->width() );
  }
}
