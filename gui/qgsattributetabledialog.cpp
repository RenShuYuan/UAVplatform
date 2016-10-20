/***************************************************************************
  QgsAttributeTableDialog.cpp
  -------------------
         date                 : Feb 2009
         copyright            : Vita Cizek
         email                : weetya (at) gmail.com

 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <QDockWidget>
#include <QMessageBox>

#include "qgsattributetabledialog.h"
#include "qgsattributetablemodel.h"
#include "qgsattributetablefiltermodel.h"
#include "qgsattributetableview.h"

#include <qgsapplication.h>
#include <qgsvectordataprovider.h>
#include <qgsvectorlayer.h>
#include <qgsexpression.h>

#include "uav/uavcore.h"
#include "uav/uavmain.h"
#include "qgssearchquerybuilder.h"
#include "qgslogger.h"
#include "qgsmapcanvas.h"
#include "qgsproject.h"
#include "qgsattributeaction.h"
#include "qgsexpressionbuilderdialog.h"
#include "qgsmessagebar.h"
#include "qgsexpressionselectiondialog.h"
#include "qgsfeaturelistmodel.h"
#include "qgsrubberband.h"
#include "qgsfield.h"
#include "qgseditorwidgetregistry.h"

#include "app/qgsaddattrdialog.h"
#include "app/qgsdelattrdialog.h"
#include "app/qgsfieldcalculator.h"
#include "app/qgsfeatureaction.h"

static QgsExpressionContext _getExpressionContext( const void* context )
{
  QgsExpressionContext expContext;
  expContext << QgsExpressionContextUtils::globalScope()
  << QgsExpressionContextUtils::projectScope();

  const QgsVectorLayer* layer = ( const QgsVectorLayer* ) context;
  if ( layer )
    expContext << QgsExpressionContextUtils::layerScope( layer );

  expContext.lastScope()->setVariable( "row_number", 1 );

  expContext.setHighlightedVariables( QStringList() << "row_number" );

  return expContext;
}

QgsAttributeTableDialog::QgsAttributeTableDialog( QgsVectorLayer *theLayer, QWidget *parent, Qt::WindowFlags flags )
    : QDialog( parent, flags )
    , mDock( nullptr )
    , mLayer( theLayer )
    , mRubberBand( nullptr )
    , mCurrentSearchWidgetWrapper( nullptr )
{
  setupUi( this );

  // 选择固定的颜色失去焦点（视窗）
  setStyleSheet( UavMain::instance()->styleSheet() );

  setAttribute( Qt::WA_DeleteOnClose );

  //QSettings settings;

  //// 初始化窗口形状
  //restoreGeometry( settings.value( "/Windows/BetterAttributeTable/geometry" ).toByteArray() );

  //QgsAttributeEditorContext context;

  //myDa = new QgsDistanceArea();

  //myDa->setSourceCrs( mLayer->crs() );
  //myDa->setEllipsoidalMode( UAVplatform::instance()->mapCanvas()->mapSettings().hasCrsTransformEnabled() );
  //myDa->setEllipsoid( QgsProject::instance()->readEntry( "Measure", "/Ellipsoid", GEO_NONE ) );

  //context.setDistanceArea( *myDa );
  //context.setVectorLayerTools( UAVplatform::instance()->vectorLayerTools() );//////////////////////////////////////////////////////////////////////////

  //QgsFeatureRequest r;
  //if ( mLayer->geometryType() != QGis::NoGeometry &&
  //     settings.value( "/qgis/attributeTableBehaviour", QgsAttributeTableFilterModel::ShowAll ).toInt() == QgsAttributeTableFilterModel::ShowVisible )
  //{
  //  QgsMapCanvas *mc = UAVplatform::instance()->mapCanvas();
  //  QgsRectangle extent( mc->mapSettings().mapToLayerCoordinates( theLayer, mc->extent() ) );
  //  r.setFilterRect( extent );

  //  QgsGeometry *g = QgsGeometry::fromRect( extent );
  //  mRubberBand = new QgsRubberBand( mc, QGis::Polygon );
  //  mRubberBand->setToGeometry( g, theLayer );
  //  delete g;

  //  mActionShowAllFilter->setText( tr( "Show All Features In Initial Canvas Extent" ) );
  //}

  //// 初始化双重视图
  //mMainView->init( mLayer, UAVplatform::instance()->mapCanvas(), r, context );

  //// 初始化过滤器GUI元素
  //mFilterActionMapper = new QSignalMapper( this );
  //mFilterColumnsMenu = new QMenu( this );
  //mActionFilterColumnsMenu->setMenu( mFilterColumnsMenu );
  //mApplyFilterButton->setDefaultAction( mActionApplyFilter );

  //// 在几个地方设置过滤器图标
  //QIcon filterIcon = core::getThemeIcon( "mActionFilter2.svg" );
  //mActionShowAllFilter->setIcon( filterIcon );
  //mActionAdvancedFilter->setIcon( filterIcon );
  //mActionSelectedFilter->setIcon( filterIcon );
  //mActionVisibleFilter->setIcon( filterIcon );
  //mActionEditedFilter->setIcon( filterIcon );

  // Connect 过滤器 signals
  //connect( mActionAdvancedFilter, SIGNAL( triggered() ), SLOT( filterExpressionBuilder() ) );
  //connect( mActionShowAllFilter, SIGNAL( triggered() ), SLOT( filterShowAll() ) );
  //connect( mActionSelectedFilter, SIGNAL( triggered() ), SLOT( filterSelected() ) );
  //connect( mActionVisibleFilter, SIGNAL( triggered() ), SLOT( filterVisible() ) );
  //connect( mActionEditedFilter, SIGNAL( triggered() ), SLOT( filterEdited() ) );
  //connect( mFilterActionMapper, SIGNAL( mapped( QObject* ) ), SLOT( filterColumnChanged( QObject* ) ) );
  //connect( mFilterQuery, SIGNAL( returnPressed() ), SLOT( filterQueryAccepted() ) );
  //connect( mActionApplyFilter, SIGNAL( triggered() ), SLOT( filterQueryAccepted() ) );
  //connect( mSetStyles, SIGNAL( pressed() ), SLOT( openConditionalStyles() ) );

  // 从图层到表格信息
  //connect( mLayer, SIGNAL( editingStarted() ), this, SLOT( editingToggled() ) );
  //connect( mLayer, SIGNAL( editingStopped() ), this, SLOT( editingToggled() ) );
  //connect( mLayer, SIGNAL( layerDeleted() ), this, SLOT( close() ) );
  //connect( mLayer, SIGNAL( selectionChanged() ), this, SLOT( updateTitle() ) );
  //connect( mLayer, SIGNAL( featureAdded( QgsFeatureId ) ), this, SLOT( updateTitle() ) );
  //connect( mLayer, SIGNAL( featuresDeleted( QgsFeatureIds ) ), this, SLOT( updateTitle() ) );
  //connect( mLayer, SIGNAL( attributeAdded( int ) ), this, SLOT( columnBoxInit() ) );
  //connect( mLayer, SIGNAL( attributeDeleted( int ) ), this, SLOT( columnBoxInit() ) );

  // connect 表格信息到窗口
  //connect( mMainView, SIGNAL( filterChanged() ), this, SLOT( updateTitle() ) );

  // 表格信息到应用程序
  //connect( this, SIGNAL( saveEdits( QgsMapLayer * ) ), UAVplatform::instance(), SLOT( saveEdits( QgsMapLayer * ) ) );

  //bool myDockFlag = settings.value( "/qgis/dockAttributeTable", false ).toBool();
  //if ( myDockFlag )
  //{
  //  mDock = new QgsAttributeTableDock( tr( "%1 (%n Feature(s))", "feature count", mMainView->featureCount() ).arg( mLayer->name() ), UAVplatform::instance() );
  //  mDock->setAllowedAreas( Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea );
  //  mDock->setWidget( this );
  //  connect( this, SIGNAL( destroyed() ), mDock, SLOT( close() ) );
  //  UAVplatform::instance()->addDockWidget( Qt::BottomDockWidgetArea, mDock );
  //}

  //columnBoxInit();
  //updateTitle();

  mRemoveSelectionButton->setIcon( uavCore::getThemeIcon( "mActionUnselectAttributes.png" ) );
  mSelectAllButton->setIcon( uavCore::getThemeIcon( "mActionSelectAll.svg" ) );
  mSelectedToTopButton->setIcon( uavCore::getThemeIcon( "mActionSelectedToTop.png" ) );
  mCopySelectedRowsButton->setIcon( uavCore::getThemeIcon( "mActionCopySelected.png" ) );
  mZoomMapToSelectedRowsButton->setIcon( uavCore::getThemeIcon( "mActionZoomToSelected.svg" ) );
  mPanMapToSelectedRowsButton->setIcon( uavCore::getThemeIcon( "mActionPanToSelected.svg" ) );
  mInvertSelectionButton->setIcon( uavCore::getThemeIcon( "mActionInvertSelection.svg" ) );
  mToggleEditingButton->setIcon( uavCore::getThemeIcon( "mActionToggleEditing.svg" ) );
  mSaveEditsButton->setIcon( uavCore::getThemeIcon( "mActionSaveEdits.svg" ) );
  mDeleteSelectedButton->setIcon( uavCore::getThemeIcon( "mActionDeleteSelected.svg" ) );
  mOpenFieldCalculator->setIcon( uavCore::getThemeIcon( "mActionCalculateField.png" ) );
  mAddAttribute->setIcon( uavCore::getThemeIcon( "mActionNewAttribute.png" ) );
  mRemoveAttribute->setIcon( uavCore::getThemeIcon( "mActionDeleteAttribute.png" ) );
  mTableViewButton->setIcon( uavCore::getThemeIcon( "mActionOpenTable.svg" ) );
  mAttributeViewButton->setIcon( uavCore::getThemeIcon( "mActionPropertyItem.png" ) );
  mExpressionSelectButton->setIcon( uavCore::getThemeIcon( "mIconExpressionSelect.svg" ) );
  mAddFeature->setIcon( uavCore::getThemeIcon( "mActionNewTableRow.png" ) );
  mReloadButton->setIcon( uavCore::getThemeIcon( "mActionDraw.svg" ) );
  mPasteFeatures->setIcon( uavCore::getThemeIcon( "mActionEditPaste.png" ) );
  mSetStyles->setIcon( uavCore::getThemeIcon( "rendererCategorizedSymbol.png" ) );
  mTableViewButton->setIcon( uavCore::getThemeIcon( "mActionOpenTable.png" ) );

  // 切换编辑
  //bool canChangeAttributes = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::ChangeAttributeValues;
  //bool canDeleteFeatures = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::DeleteFeatures;
  //bool canAddAttributes = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::AddAttributes;
  //bool canDeleteAttributes = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::DeleteAttributes;
  //bool canAddFeatures = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::AddFeatures;

  //mToggleEditingButton->blockSignals( true );
  //mToggleEditingButton->setCheckable( true );
  //mToggleEditingButton->setChecked( mLayer->isEditable() );
  //mToggleEditingButton->setEnabled(( canChangeAttributes || canDeleteFeatures || canAddAttributes || canDeleteAttributes || canAddFeatures ) && !mLayer->isReadOnly() );
  //mToggleEditingButton->blockSignals( false );

  //mSaveEditsButton->setEnabled( mToggleEditingButton->isEnabled() && mLayer->isEditable() );
  //mReloadButton->setEnabled( ! mLayer->isEditable() );
  //mAddAttribute->setEnabled(( canChangeAttributes || canAddAttributes ) && mLayer->isEditable() );
  //mDeleteSelectedButton->setEnabled( canDeleteFeatures && mLayer->isEditable() );
  //mAddFeature->setEnabled( canAddFeatures && mLayer->isEditable() );
  //mAddFeature->setHidden( !canAddFeatures );

  //mMainViewButtonGroup->setId( mTableViewButton, QgsDualView::AttributeTable );
  //mMainViewButtonGroup->setId( mAttributeViewButton, QgsDualView::AttributeEditor );

  // 加载默认的属性表过滤器
  //QgsAttributeTableFilterModel::FilterMode defaultFilterMode = ( QgsAttributeTableFilterModel::FilterMode ) settings.value( "/qgis/attributeTableBehaviour", QgsAttributeTableFilterModel::ShowAll ).toInt();

  //switch ( defaultFilterMode )
  //{
  //  case QgsAttributeTableFilterModel::ShowVisible:
  //    filterVisible();
  //    break;

  //  case QgsAttributeTableFilterModel::ShowSelected:
  //    filterSelected();
  //    break;

  //  case QgsAttributeTableFilterModel::ShowAll:
  //  default:
  //    filterShowAll();
  //    break;
  //}

  //mUpdateExpressionText->registerGetExpressionContextCallback( &_getExpressionContext, mLayer );

  //mFieldModel = new QgsFieldModel( this );
  //mFieldModel->setLayer( mLayer );
  //mFieldCombo->setModel( mFieldModel );
  //connect( mRunFieldCalc, SIGNAL( clicked() ), this, SLOT( updateFieldFromExpression() ) );
  //connect( mRunFieldCalcSelected, SIGNAL( clicked() ), this, SLOT( updateFieldFromExpressionSelected() ) );
  //// NW TODO Fix in 2.6 - Doesn't work with field model for some reason.
  //connect( mUpdateExpressionText, SIGNAL( returnPressed() ), this, SLOT( updateFieldFromExpression() ) );
  //connect( mUpdateExpressionText, SIGNAL( fieldChanged( QString, bool ) ), this, SLOT( updateButtonStatus( QString, bool ) ) );
  //mUpdateExpressionText->setLayer( mLayer );
  //mUpdateExpressionText->setLeftHandButtonStyle( true );

  //mMainView->setView( QgsDualView::AttributeTable );

  //editingToggled();
}

QgsAttributeTableDialog::~QgsAttributeTableDialog()
{
	//delete myDa;
	//delete mRubberBand;
}

void QgsAttributeTableDialog::updateTitle()
{
  QWidget *w = mDock ? qobject_cast<QWidget*>( mDock ) : qobject_cast<QWidget*>( this );
  w->setWindowTitle( tr( " %1 :: Features total: %2, filtered: %3, selected: %4%5" )
                     .arg( mLayer->name() )
                     .arg( mMainView->featureCount() )
                     .arg( mMainView->filteredFeatureCount() )
                     .arg( mLayer->selectedFeatureCount() )
                     .arg( mRubberBand ? tr( ", spatially limited" ) : "" )
                   );

  if ( mMainView->filterMode() == QgsAttributeTableFilterModel::ShowAll )
    mRunFieldCalc->setText( tr( "Update All" ) );
  else
    mRunFieldCalc->setText( tr( "Update Filtered" ) );

  bool enabled = mLayer->selectedFeatureCount() > 0;
  mRunFieldCalcSelected->setEnabled( enabled );
}

void QgsAttributeTableDialog::updateButtonStatus( const QString& fieldName, bool isValid )
{
  Q_UNUSED( fieldName );
  mRunFieldCalc->setEnabled( isValid );
}

void QgsAttributeTableDialog::closeEvent( QCloseEvent* event )
{
  QDialog::closeEvent( event );

  if ( !mDock )
  {
    QSettings settings;
    settings.setValue( "/Windows/BetterAttributeTable/geometry", saveGeometry() );
  }
}

void QgsAttributeTableDialog::keyPressEvent( QKeyEvent* event )
{
  QDialog::keyPressEvent( event );

  if (( event->key() == Qt::Key_Backspace || event->key() == Qt::Key_Delete ) && mDeleteSelectedButton->isEnabled() )
  {
    //UAVplatform::instance()->deleteSelected( mLayer, this );//////////////////////////////////////////////////////////////////////////
  }
}

void QgsAttributeTableDialog::columnBoxInit()
{
  Q_FOREACH ( QAction* a, mFilterColumnsMenu->actions() )
  {
    mFilterColumnsMenu->removeAction( a );
    mFilterActionMapper->removeMappings( a );
    mFilterButton->removeAction( a );
    delete a;
  }

  mFilterButton->addAction( mActionShowAllFilter );
  mFilterButton->addAction( mActionSelectedFilter );
  if ( mLayer->hasGeometryType() )
  {
    mFilterButton->addAction( mActionVisibleFilter );
  }
  mFilterButton->addAction( mActionEditedFilter );
  mFilterButton->addAction( mActionFilterColumnsMenu );
  mFilterButton->addAction( mActionAdvancedFilter );

  const QList<QgsField> fields = mLayer->fields().toList();

  Q_FOREACH ( const QgsField& field, fields )
  {
    int idx = mLayer->fieldNameIndex( field.name() );
    if ( idx < 0 )
      continue;

    if ( mLayer->editFormConfig()->widgetType( idx ) != "Hidden" )
    {
      QIcon icon = mLayer->fields().iconForField( idx );
      QString alias = mLayer->attributeDisplayName( idx );

      // Generate action for the filter popup button
      QAction* filterAction = new QAction( icon, alias, mFilterButton );
      filterAction->setData( field.name() );
      mFilterActionMapper->setMapping( filterAction, filterAction );
      connect( filterAction, SIGNAL( triggered() ), mFilterActionMapper, SLOT( map() ) );
      mFilterColumnsMenu->addAction( filterAction );
    }
  }
}

void QgsAttributeTableDialog::updateFieldFromExpression()
{
  bool filtered = mMainView->filterMode() != QgsAttributeTableFilterModel::ShowAll;
  QgsFeatureIds filteredIds = filtered ? mMainView->filteredFeatures() : QgsFeatureIds();
  runFieldCalculation( mLayer, mFieldCombo->currentText(), mUpdateExpressionText->asExpression(), filteredIds );
}

void QgsAttributeTableDialog::updateFieldFromExpressionSelected()
{
  QgsFeatureIds filteredIds = mLayer->selectedFeaturesIds();
  runFieldCalculation( mLayer, mFieldCombo->currentText(), mUpdateExpressionText->asExpression(), filteredIds );
}

void QgsAttributeTableDialog::runFieldCalculation( QgsVectorLayer* layer, const QString& fieldName, const QString& expression, const QgsFeatureIds& filteredIds )
{
  QApplication::setOverrideCursor( Qt::WaitCursor );

  mLayer->beginEditCommand( "Field calculator" );

  QModelIndex modelindex = mFieldModel->indexFromName( fieldName );
  int fieldindex = modelindex.data( QgsFieldModel::FieldIndexRole ).toInt();

  bool calculationSuccess = true;
  QString error;

  QgsExpression exp( expression );
  exp.setGeomCalculator( *myDa );
  exp.setDistanceUnits( QgsProject::instance()->distanceUnits() );
  exp.setAreaUnits( QgsProject::instance()->areaUnits() );
  bool useGeometry = exp.needsGeometry();

  QgsFeatureRequest request( mMainView->masterModel()->request() );
  useGeometry |= !request.filterRect().isNull();
  request.setFlags( useGeometry ? QgsFeatureRequest::NoFlags : QgsFeatureRequest::NoGeometry );

  int rownum = 1;

  QgsExpressionContext context;
  context << QgsExpressionContextUtils::globalScope()
  << QgsExpressionContextUtils::projectScope()
  << QgsExpressionContextUtils::layerScope( layer );

  QgsField fld = layer->fields().at( fieldindex );

  //go through all the features and change the new attributes
  QgsFeatureIterator fit = layer->getFeatures( request );
  QgsFeature feature;
  while ( fit.nextFeature( feature ) )
  {
    if ( !filteredIds.isEmpty() && !filteredIds.contains( feature.id() ) )
    {
      continue;
    }

    context.setFeature( feature );
    context.lastScope()->setVariable( QString( "row_number" ), rownum );

    QVariant value = exp.evaluate( &context );
    fld.convertCompatible( value );
    // Bail if we have a update error
    if ( exp.hasEvalError() )
    {
      calculationSuccess = false;
      error = exp.evalErrorString();
      break;
    }
    else
    {
      QVariant oldvalue = feature.attributes().value( fieldindex );
      mLayer->changeAttributeValue( feature.id(), fieldindex, value, oldvalue );
    }

    rownum++;
  }

  QApplication::restoreOverrideCursor();

  if ( !calculationSuccess )
  {
    QMessageBox::critical( nullptr, tr( "Error" ), tr( "An error occurred while evaluating the calculation string:\n%1" ).arg( error ) );
    mLayer->destroyEditCommand();
    return;
  }

  mLayer->endEditCommand();
}

void QgsAttributeTableDialog::replaceSearchWidget( QWidget* oldw, QWidget* neww )
{
  mFilterLayout->removeWidget( oldw );
  oldw->setVisible( false );
  mFilterLayout->addWidget( neww, 0, 0, nullptr );
  neww->setVisible( true );
}

void QgsAttributeTableDialog::filterColumnChanged( QObject* filterAction )
{
  mFilterButton->setDefaultAction( qobject_cast<QAction *>( filterAction ) );
  mFilterButton->setPopupMode( QToolButton::InstantPopup );
  // replace the search line edit with a search widget that is suited to the selected field
  // delete previous widget
  if ( mCurrentSearchWidgetWrapper )
  {
    mCurrentSearchWidgetWrapper->widget()->setVisible( false );
    delete mCurrentSearchWidgetWrapper;
  }
  QString fieldName = mFilterButton->defaultAction()->data().toString();
  // get the search widget
  int fldIdx = mLayer->fieldNameIndex( fieldName );
  if ( fldIdx < 0 )
    return;
  const QString widgetType = mLayer->editFormConfig()->widgetType( fldIdx );
  const QgsEditorWidgetConfig widgetConfig = mLayer->editFormConfig()->widgetConfig( fldIdx );
  mCurrentSearchWidgetWrapper = QgsEditorWidgetRegistry::instance()->
                                createSearchWidget( widgetType, mLayer, fldIdx, widgetConfig, mFilterContainer );
  if ( mCurrentSearchWidgetWrapper->applyDirectly() )
  {
    connect( mCurrentSearchWidgetWrapper, SIGNAL( expressionChanged( QString ) ), SLOT( filterQueryChanged( QString ) ) );
    mApplyFilterButton->setVisible( false );
  }
  else
  {
    connect( mCurrentSearchWidgetWrapper, SIGNAL( expressionChanged( QString ) ), SLOT( filterQueryAccepted() ) );
    mApplyFilterButton->setVisible( true );
  }

  replaceSearchWidget( mFilterQuery, mCurrentSearchWidgetWrapper->widget() );

}

void QgsAttributeTableDialog::filterExpressionBuilder()
{
  // Show expression builder
  QgsExpressionContext context;
  context << QgsExpressionContextUtils::globalScope()
  << QgsExpressionContextUtils::projectScope()
  << QgsExpressionContextUtils::layerScope( mLayer );

  QgsExpressionBuilderDialog dlg( mLayer, mFilterQuery->text(), this, "generic", context );
  dlg.setWindowTitle( tr( "Expression based filter" ) );

  QgsDistanceArea myDa;
  myDa.setSourceCrs( mLayer->crs().srsid() );
  myDa.setEllipsoidalMode( UavMain::instance()->mapCanvas()->mapSettings().hasCrsTransformEnabled() );
  myDa.setEllipsoid( QgsProject::instance()->readEntry( "Measure", "/Ellipsoid", GEO_NONE ) );
  dlg.setGeomCalculator( myDa );

  if ( dlg.exec() == QDialog::Accepted )
  {
    setFilterExpression( dlg.expressionText() );
  }
}

void QgsAttributeTableDialog::filterShowAll()
{
  mFilterButton->setDefaultAction( mActionShowAllFilter );
  mFilterButton->setPopupMode( QToolButton::InstantPopup );
  mFilterQuery->setVisible( false );
  if ( mCurrentSearchWidgetWrapper )
  {
    mCurrentSearchWidgetWrapper->widget()->setVisible( false );
  }
  mApplyFilterButton->setVisible( false );
  mMainView->setFilterMode( QgsAttributeTableFilterModel::ShowAll );
}

void QgsAttributeTableDialog::filterSelected()
{
  mFilterButton->setDefaultAction( mActionSelectedFilter );
  mFilterButton->setPopupMode( QToolButton::InstantPopup );
  mFilterQuery->setVisible( false );
  mApplyFilterButton->setVisible( false );
  mMainView->setFilterMode( QgsAttributeTableFilterModel::ShowSelected );
}

void QgsAttributeTableDialog::filterVisible()
{
  if ( !mLayer->hasGeometryType() )
  {
    filterShowAll();
    return;
  }

  mFilterButton->setDefaultAction( mActionVisibleFilter );
  mFilterButton->setPopupMode( QToolButton::InstantPopup );
  mFilterQuery->setVisible( false );
  mApplyFilterButton->setVisible( false );
  mMainView->setFilterMode( QgsAttributeTableFilterModel::ShowVisible );
}

void QgsAttributeTableDialog::filterEdited()
{
  mFilterButton->setDefaultAction( mActionEditedFilter );
  mFilterButton->setPopupMode( QToolButton::InstantPopup );
  mFilterQuery->setVisible( false );
  mApplyFilterButton->setVisible( false );
  mMainView->setFilterMode( QgsAttributeTableFilterModel::ShowEdited );
}

void QgsAttributeTableDialog::on_mSelectedToTopButton_toggled()
{
  if ( mSelectedToTopButton->isChecked() )
  {
    mMainView->setSelectedOnTop( true );
  }
  else
  {
    mMainView->setSelectedOnTop( false );
  }
}

void QgsAttributeTableDialog::on_mOpenFieldCalculator_clicked()
{
  QgsAttributeTableModel* masterModel = mMainView->masterModel();

  QgsFieldCalculator calc( mLayer, this );
  if ( calc.exec() == QDialog::Accepted )
  {
    int col = masterModel->fieldCol( calc.changedAttributeId() );

    if ( col >= 0 )
    {
      masterModel->reload( masterModel->index( 0, col ), masterModel->index( masterModel->rowCount() - 1, col ) );
    }
  }
}

void QgsAttributeTableDialog::on_mSaveEditsButton_clicked()//////////////////////////////////////////////////////////////////////////
{
  //UAVplatform::instance()->saveEdits( mLayer, true, true );
}

void QgsAttributeTableDialog::on_mReloadButton_clicked()
{
  mMainView->masterModel()->layer()->dataProvider()->forceReload();
}

void QgsAttributeTableDialog::on_mAddFeature_clicked()
{
  if ( !mLayer->isEditable() )
    return;

  QgsAttributeTableModel* masterModel = mMainView->masterModel();

  QgsFeature f;
  QgsFeatureAction action( tr( "Geometryless feature added" ), f, mLayer, -1, -1, this );
  if ( action.addFeature() )
  {
    masterModel->reload( masterModel->index( 0, 0 ), masterModel->index( masterModel->rowCount() - 1, masterModel->columnCount() - 1 ) );
  }
}

void QgsAttributeTableDialog::on_mExpressionSelectButton_clicked()
{
  QgsExpressionSelectionDialog* dlg = new QgsExpressionSelectionDialog( mLayer );
  dlg->setAttribute( Qt::WA_DeleteOnClose );
  dlg->show();
}

void QgsAttributeTableDialog::on_mCopySelectedRowsButton_clicked()
{
  //UAVplatform::instance()->editCopy( mLayer );//////////////////////////////////////////////////////////////////////////
}

void QgsAttributeTableDialog::on_mPasteFeatures_clicked()
{
  //UAVplatform::instance()->editPaste( mLayer );//////////////////////////////////////////////////////////////////////////
}


void QgsAttributeTableDialog::on_mZoomMapToSelectedRowsButton_clicked()
{
  UavMain::instance()->mapCanvas()->zoomToSelected( mLayer );
}

void QgsAttributeTableDialog::on_mPanMapToSelectedRowsButton_clicked()
{
  UavMain::instance()->mapCanvas()->panToSelected( mLayer );
}

void QgsAttributeTableDialog::on_mInvertSelectionButton_clicked()
{
  mLayer->invertSelection();
}

void QgsAttributeTableDialog::on_mRemoveSelectionButton_clicked()
{
  mLayer->removeSelection();
}

void QgsAttributeTableDialog::on_mSelectAllButton_clicked()
{
  mLayer->selectAll();
}

void QgsAttributeTableDialog::on_mDeleteSelectedButton_clicked()
{
  //UAVplatform::instance()->deleteSelected( mLayer, this );//////////////////////////////////////////////////////////////////////////
}

void QgsAttributeTableDialog::on_mMainView_currentChanged( int viewMode )
{
  mMainViewButtonGroup->button( viewMode )->click();
}

void QgsAttributeTableDialog::on_mToggleEditingButton_toggled()//////////////////////////////////////////////////////////////////////////
{
  if ( !mLayer )
    return;
  //if ( !UAVplatform::instance()->toggleEditing( mLayer ) )
  //{
  //  // restore gui state if toggling was canceled or layer commit/rollback failed
  //  editingToggled();
  //}
}

void QgsAttributeTableDialog::editingToggled()
{
  mToggleEditingButton->blockSignals( true );
  mToggleEditingButton->setChecked( mLayer->isEditable() );
  mSaveEditsButton->setEnabled( mLayer->isEditable() );
  mReloadButton->setEnabled( ! mLayer->isEditable() );
  mToggleEditingButton->blockSignals( false );

  bool canChangeAttributes = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::ChangeAttributeValues;
  bool canDeleteFeatures = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::DeleteFeatures;
  bool canAddAttributes = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::AddAttributes;
  bool canAddFeatures = mLayer->dataProvider()->capabilities() & QgsVectorDataProvider::AddFeatures;
  mAddAttribute->setEnabled(( canChangeAttributes || canAddAttributes ) && mLayer->isEditable() );
  mDeleteSelectedButton->setEnabled( canDeleteFeatures && mLayer->isEditable() );
  mAddFeature->setEnabled( canAddFeatures && mLayer->isEditable() );

  mUpdateExpressionBox->setVisible( mLayer->isEditable() );
  // not necessary to set table read only if layer is not editable
  // because model always reflects actual state when returning item flags
}

void QgsAttributeTableDialog::on_mAddAttribute_clicked()
{
  if ( !mLayer )
  {
    return;
  }

  QgsAttributeTableModel* masterModel = mMainView->masterModel();

  QgsAddAttrDialog dialog( mLayer, this );
  if ( dialog.exec() == QDialog::Accepted )
  {
    mLayer->beginEditCommand( tr( "Attribute added" ) );
    if ( mLayer->addAttribute( dialog.field() ) )
    {
      mLayer->endEditCommand();
    }
    else
    {
      mLayer->destroyEditCommand();
      QMessageBox::critical( this, tr( "Failed to add field" ), tr( "Failed to add field '%1' of type '%2'. Is the field name unique?" ).arg( dialog.field().name(), dialog.field().typeName() ) );
    }


    // update model - a field has been added or updated
    masterModel->reload( masterModel->index( 0, 0 ), masterModel->index( masterModel->rowCount() - 1, masterModel->columnCount() - 1 ) );
    columnBoxInit();
  }
}

void QgsAttributeTableDialog::on_mRemoveAttribute_clicked()
{
  if ( !mLayer )
  {
    return;
  }

  QgsDelAttrDialog dialog( mLayer );
  if ( dialog.exec() == QDialog::Accepted )
  {
    QList<int> attributes = dialog.selectedAttributes();
    if ( attributes.size() < 1 )
    {
      return;
    }

    QgsAttributeTableModel* masterModel = mMainView->masterModel();

    mLayer->beginEditCommand( tr( "Deleted attribute" ) );
    if ( mLayer->deleteAttributes( attributes ) )
    {
      mLayer->endEditCommand();
    }
    else
    {
      UavMain::instance()->messageBar()->pushMessage( tr( "Attribute error" ), tr( "The attribute(s) could not be deleted" ), QgsMessageBar::WARNING, UavMain::instance()->messageTimeout() );
      mLayer->destroyEditCommand();
    }
    // update model - a field has been added or updated
    masterModel->reload( masterModel->index( 0, 0 ), masterModel->index( masterModel->rowCount() - 1, masterModel->columnCount() - 1 ) );
    columnBoxInit();
  }
}

void QgsAttributeTableDialog::filterQueryChanged( const QString& query )
{
  QString str;
  if ( mFilterButton->defaultAction() == mActionAdvancedFilter )
  {
    str = query;
  }
  else if ( mCurrentSearchWidgetWrapper )
  {
    str = mCurrentSearchWidgetWrapper->expression();
  }

  setFilterExpression( str );
}

void QgsAttributeTableDialog::filterQueryAccepted()
{
  if (( mFilterQuery->isVisible() && mFilterQuery->text().isEmpty() ) ||
      ( mCurrentSearchWidgetWrapper && mCurrentSearchWidgetWrapper->widget()->isVisible()
        && mCurrentSearchWidgetWrapper->expression().isEmpty() ) )
  {
    filterShowAll();
    return;
  }
  filterQueryChanged( mFilterQuery->text() );
}

void QgsAttributeTableDialog::openConditionalStyles()
{
  mMainView->openConditionalStyles();
}

void QgsAttributeTableDialog::setFilterExpression( const QString& filterString )
{
  if ( !mCurrentSearchWidgetWrapper || !mCurrentSearchWidgetWrapper->applyDirectly() )
  {
    mFilterQuery->setText( filterString );
    mFilterButton->setDefaultAction( mActionAdvancedFilter );
    mFilterButton->setPopupMode( QToolButton::MenuButtonPopup );
    mFilterQuery->setVisible( true );
    mApplyFilterButton->setVisible( true );
    if ( mCurrentSearchWidgetWrapper )
    {
      // replace search widget widget with the normal filter query line edit
      replaceSearchWidget( mCurrentSearchWidgetWrapper->widget(), mFilterQuery );
    }
  }

  QgsFeatureIds filteredFeatures;
  QgsDistanceArea myDa;

  myDa.setSourceCrs( mLayer->crs().srsid() );
  myDa.setEllipsoidalMode( UavMain::instance()->mapCanvas()->mapSettings().hasCrsTransformEnabled() );
  myDa.setEllipsoid( QgsProject::instance()->readEntry( "Measure", "/Ellipsoid", GEO_NONE ) );

  // parse search string and build parsed tree
  QgsExpression filterExpression( filterString );
  if ( filterExpression.hasParserError() )
  {
    UavMain::instance()->messageBar()->pushMessage( tr( "Parsing error" ), filterExpression.parserErrorString(), QgsMessageBar::WARNING, UavMain::instance()->messageTimeout() );
    return;
  }

  QgsExpressionContext context;
  context << QgsExpressionContextUtils::globalScope()
  << QgsExpressionContextUtils::projectScope()
  << QgsExpressionContextUtils::layerScope( mLayer );

  if ( !filterExpression.prepare( &context ) )
  {
    UavMain::instance()->messageBar()->pushMessage( tr( "Evaluation error" ), filterExpression.evalErrorString(), QgsMessageBar::WARNING, UavMain::instance()->messageTimeout() );
  }

  bool fetchGeom = filterExpression.needsGeometry();

  QApplication::setOverrideCursor( Qt::WaitCursor );

  filterExpression.setGeomCalculator( myDa );
  filterExpression.setDistanceUnits( QgsProject::instance()->distanceUnits() );
  filterExpression.setAreaUnits( QgsProject::instance()->areaUnits() );
  QgsFeatureRequest request( mMainView->masterModel()->request() );
  request.setSubsetOfAttributes( filterExpression.referencedColumns(), mLayer->fields() );
  if ( !fetchGeom )
  {
    request.setFlags( QgsFeatureRequest::NoGeometry );
  }
  QgsFeatureIterator featIt = mLayer->getFeatures( request );

  QgsFeature f;

  while ( featIt.nextFeature( f ) )
  {
    context.setFeature( f );
    if ( filterExpression.evaluate( &context ).toInt() != 0 )
      filteredFeatures << f.id();

    // check if there were errors during evaluating
    if ( filterExpression.hasEvalError() )
      break;
  }

  featIt.close();

  mMainView->setFilteredFeatures( filteredFeatures );

  QApplication::restoreOverrideCursor();

  if ( filterExpression.hasEvalError() )
  {
    UavMain::instance()->messageBar()->pushMessage( tr( "Error filtering" ), filterExpression.evalErrorString(), QgsMessageBar::WARNING, UavMain::instance()->messageTimeout() );
    return;
  }
  mMainView->setFilterMode( QgsAttributeTableFilterModel::ShowFilteredList );
}


//
// QgsAttributeTableDock
//

QgsAttributeTableDock::QgsAttributeTableDock( const QString& title, QWidget* parent, Qt::WindowFlags flags )
    : QDockWidget( title, parent, flags )
{
  setObjectName( "AttributeTable" ); // set object name so the position can be saved
}

void QgsAttributeTableDock::closeEvent( QCloseEvent* ev )
{
  Q_UNUSED( ev );
  deleteLater();
}
