#include "qgsapplayertreeviewmenuprovider.h"


#include "uav/uavcore.h"
#include "uav/uavmain.h"
#include "qgsclipboard.h"
#include "qgscolorwidgets.h"
#include "qgscolorschemeregistry.h"
#include "qgscolorswatchgrid.h"
#include "qgslayertree.h"
#include "qgslayertreemodel.h"
#include "qgslayertreemodellegendnode.h"
#include "qgslayertreeviewdefaultactions.h"
#include "qgsmaplayerstyleguiutils.h"
#include "qgsmaplayerregistry.h"
#include "qgsproject.h"
#include "qgsrasterlayer.h"
#include "qgsrendererv2.h"
#include "qgssymbolv2.h"
#include "qgsstylev2.h"
#include "qgsvectordataprovider.h"
#include "qgsvectorlayer.h"
#include "qgslayertreeregistrybridge.h"
#include "qgssymbolv2selectordialog.h"
#include "qgssinglesymbolrendererv2.h"

QgsAppLayerTreeViewMenuProvider::QgsAppLayerTreeViewMenuProvider( QgsLayerTreeView* view, QgsMapCanvas* canvas )
    : mView( view )
    , mCanvas( canvas )
{
}


QMenu* QgsAppLayerTreeViewMenuProvider::createContextMenu()
{
  QMenu* menu = new QMenu;

  QgsLayerTreeViewDefaultActions* actions = mView->defaultActions();

  QModelIndex idx = mView->currentIndex();
  if ( !idx.isValid() )
  {
    // 组合菜单
    menu->addAction( actions->actionAddGroup( menu ) );

    menu->addAction( uavCore::getThemeIcon( "mActionExpandTree.svg" ), tr( "&Expand All" ), mView, SLOT( expandAll() ) );
    menu->addAction( uavCore::getThemeIcon( "mActionCollapseTree.svg" ), tr( "&Collapse All" ), mView, SLOT( collapseAll() ) );

    // TODO: update drawing order
  }
  else if ( QgsLayerTreeNode* node = mView->layerTreeModel()->index2node( idx ) )
  {
    // 选择图层或组
    if ( QgsLayerTree::isGroup( node ) )
    {
	  // 缩放到组
      menu->addAction( actions->actionZoomToGroup( mCanvas, menu ) );

	  // 移除
      menu->addAction( uavCore::getThemeIcon( "mActionRemoveLayer.svg" ), tr( "&Remove" ), UavMain::instance(), SLOT( removeLayer() ) );

	  // 设置组的坐标参照系
      menu->addAction( uavCore::getThemeIcon( "mActionSetCRS.png" ),
                       tr( "&Set Group CRS" ), UavMain::instance(), SLOT( legendGroupSetCRS() ) );

	  //重命名
      menu->addAction( actions->actionRenameGroupOrLayer( menu ) );

	  //互斥组
      menu->addAction( actions->actionMutuallyExclusiveGroup( menu ) );

      if ( mView->selectedNodes( true ).count() >= 2 )
        menu->addAction( actions->actionGroupSelected( menu ) );

      //if ( UAVplatform::instance()->clipboard()->hasFormat( QGSCLIPBOARD_STYLE_MIME ) )
      //{
      //  menu->addAction( tr( "Paste Style" ), UAVplatform::instance(), SLOT( applyStyleToGroup() ) );
      //}

      //menu->addAction( tr( "Save As Layer Definition File..." ), UAVplatform::instance(), SLOT( saveAsLayerDefinition() ) );

      menu->addAction( actions->actionAddGroup( menu ) );
    }
    else if ( QgsLayerTree::isLayer( node ) )
    {
      QgsMapLayer *layer = QgsLayerTree::toLayer( node )->layer();
      QgsRasterLayer *rlayer = qobject_cast<QgsRasterLayer *>( layer );
      QgsVectorLayer *vlayer = qobject_cast<QgsVectorLayer *>( layer );

	  // 缩放到图层
      menu->addAction( actions->actionZoomToLayer( mCanvas, menu ) );

	  // 添加到鹰眼图
      menu->addAction( actions->actionShowInOverview( menu ) );

	  // 栅格图层
      if ( rlayer )
      {
		// 缩放到实际像素
        menu->addAction( uavCore::getThemeIcon( "mActionZoomActual.svg" ), tr( "&Zoom to Native Resolution (100%)" ), UavMain::instance(), SLOT( legendLayerZoomNative() ) );

		// 按当前画布范围拉伸
        if ( rlayer->rasterType() != QgsRasterLayer::Palette )
          menu->addAction( tr( "&Stretch Using Current Extent" ), UavMain::instance(), SLOT( legendLayerStretchUsingCurrentExtent() ) );
      }

	  // 移除
      menu->addAction( uavCore::getThemeIcon( "mActionRemoveLayer.svg" ), tr( "&Remove" ), UavMain::instance(), SLOT( removeLayer() ) );

      // 创建副本
      QAction* duplicateLayersAction = menu->addAction( uavCore::getThemeIcon( "mActionDuplicateLayer.svg" ), tr( "&Duplicate" ), UavMain::instance(), SLOT( duplicateLayers() ) );

	  //判断是否是有效几何图形(点、线、面)
      if ( !vlayer || vlayer->geometryType() != QGis::NoGeometry )
      {
        // 设置图层可视性比例
        menu->addAction( tr( "&Set Layer Scale Visibility" ), UavMain::instance(), SLOT( setLayerScaleVisibility() ) );

        // 设置图层参考坐标系
        menu->addAction( uavCore::getThemeIcon( "mActionSetCRS.png" ), tr( "&Set Layer CRS" ), UavMain::instance(), SLOT( setLayerCRS() ) );

        // 应用图层的参考坐标系到项目
        menu->addAction( uavCore::getThemeIcon( "mActionSetProjectCRS.png" ), tr( "Set &Project CRS from Layer" ), UavMain::instance(), SLOT( setProjectCRSFromLayer() ) );
      }

      // 符号化相关的操作
      if ( layer && mView->selectedLayerNodes().count() == 1 )
      {
        QMenu *menuStyleManager = new QMenu( tr( "Styles" ), menu );

        UavMain *app = UavMain::instance();

		// 拷贝符号化
        menuStyleManager->addAction( tr( "Copy Style" ), app, SLOT( copyStyle() ) );
        if ( app->clipboard()->hasFormat( QGSCLIPBOARD_STYLE_MIME ) )
        {
		  // 粘贴符号化
          menuStyleManager->addAction( tr( "Paste Style" ), app, SLOT( pasteStyle() ) );
        }

        menuStyleManager->addSeparator();
        QgsMapLayerStyleGuiUtils::instance()->addStyleManagerActions( menuStyleManager, layer );

		// 矢量图层
        if ( vlayer )
        {
          const QgsSingleSymbolRendererV2* singleRenderer = dynamic_cast< const QgsSingleSymbolRendererV2* >( vlayer->rendererV2() );
          if ( !singleRenderer && vlayer->rendererV2() && vlayer->rendererV2()->embeddedRenderer() )
          {
            singleRenderer = dynamic_cast< const QgsSingleSymbolRendererV2* >( vlayer->rendererV2()->embeddedRenderer() );
          }
          if ( singleRenderer && singleRenderer->symbol() )
          {
            //单个符号渲染器，所以加集彩色/编辑符号行动
            menuStyleManager->addSeparator();
            QgsColorWheel* colorWheel = new QgsColorWheel( menuStyleManager );
            colorWheel->setColor( singleRenderer->symbol()->color() );
            QgsColorWidgetAction* colorAction = new QgsColorWidgetAction( colorWheel, menuStyleManager, menuStyleManager );
            colorAction->setDismissOnColorSelection( false );
            connect( colorAction, SIGNAL( colorChanged( const QColor& ) ), this, SLOT( setVectorSymbolColor( const QColor& ) ) );
            //存储在行动作的ID，所以我们以后可以获取相应的层
            colorAction->setProperty( "layerId", vlayer->id() );
            menuStyleManager->addAction( colorAction );

            //最近添加色彩动作
            QList<QgsRecentColorScheme *> recentSchemes;
            QgsColorSchemeRegistry::instance()->schemes( recentSchemes );
            if ( !recentSchemes.isEmpty() )
            {
              QgsColorSwatchGridAction* recentColorAction = new QgsColorSwatchGridAction( recentSchemes.at( 0 ), menuStyleManager, "symbology", menuStyleManager );
              recentColorAction->setProperty( "layerId", vlayer->id() );
              recentColorAction->setDismissOnColorSelection( false );
              menuStyleManager->addAction( recentColorAction );
              connect( recentColorAction, SIGNAL( colorChanged( const QColor& ) ), this, SLOT( setVectorSymbolColor( const QColor& ) ) );
            }

            menuStyleManager->addSeparator();
            QAction* editSymbolAction = new QAction( tr( "Edit Symbol..." ), menuStyleManager );
            //存储在动作层的ID，所以我们以后可以获取相应的层
            editSymbolAction->setProperty( "layerId", vlayer->id() );
            connect( editSymbolAction, SIGNAL( triggered() ), this, SLOT( editVectorSymbol() ) );
            menuStyleManager->addAction( editSymbolAction );
          }
        }

        menu->addMenu( menuStyleManager );
      }
      else
      {
        if ( UavMain::instance()->clipboard()->hasFormat( QGSCLIPBOARD_STYLE_MIME ) )
        {
          menu->addAction( tr( "Paste Style" ), UavMain::instance(), SLOT( applyStyleToGroup() ) );
        }
      }

      menu->addSeparator();

	  //矢量图层
      if ( vlayer )
      {
        //QAction *toggleEditingAction = UAVplatform::instance()->actionToggleEditing();
        //QAction *saveLayerEditsAction = UAVplatform::instance()->actionSaveActiveLayerEdits();
        //QAction *allEditsAction = UAVplatform::instance()->actionAllEdits();

        // attribute table
        menu->addAction( uavCore::getThemeIcon( "mActionOpenTable.svg" ), tr( "&Open Attribute Table" ),
                         UavMain::instance(), SLOT( attributeTable() ) );

        // 允许编辑
        //int cap = vlayer->dataProvider()->capabilities();
        //if ( cap & QgsVectorDataProvider::EditingCapabilities )
        //{
        //  if ( toggleEditingAction )
        //  {
        //    menu->addAction( toggleEditingAction );
        //    toggleEditingAction->setChecked( vlayer->isEditable() );
        //  }
        //  if ( saveLayerEditsAction && vlayer->isModified() )
        //  {
        //    menu->addAction( saveLayerEditsAction );
        //  }
        //}

        //if ( allEditsAction->isEnabled() )
        //  menu->addAction( allEditsAction );

        // 禁用临时图层的副本
        if ( vlayer->storageType() == "Memory storage" && mView->selectedLayerNodes().count() == 1 )
          duplicateLayersAction->setEnabled( false );

        // 保存为矢量文件
        //menu->addAction( tr( "Save As..." ), UAVplatform::instance(), SLOT( saveAsFile() ) );
        //menu->addAction( tr( "Save As Layer Definition File..." ), UAVplatform::instance(), SLOT( saveAsLayerDefinition() ) );

        //if ( vlayer->dataProvider()->supportsSubsetString() )
        //{
        //  QAction *action = menu->addAction( tr( "&Filter..." ), UAVplatform::instance(), SLOT( layerSubsetString() ) );
        //  action->setEnabled( !vlayer->isEditable() );
        //}

        menu->addAction( actions->actionShowFeatureCount( menu ) );

        menu->addSeparator();
      }
      else if ( rlayer )
      {
        menu->addAction( tr( "Save As..." ), UavMain::instance(), SLOT( saveAsRasterFile() ) );
        menu->addAction( tr( "Save As Layer Definition File..." ), UavMain::instance(), SLOT( saveAsLayerDefinition() ) );
      }
      else if ( layer && layer->type() == QgsMapLayer::PluginLayer && mView->selectedLayerNodes().count() == 1 )
      {
        // 禁用插件层的副本
        duplicateLayersAction->setEnabled( false );
      }

      addCustomLayerActions( menu, layer );

      if ( layer && QgsProject::instance()->layerIsEmbedded( layer->id() ).isEmpty() )
        menu->addAction( tr( "&Properties" ), UavMain::instance(), SLOT( layerProperties() ) );

      if ( node->parent() != mView->layerTreeModel()->rootGroup() )
        menu->addAction( actions->actionMakeTopLevel( menu ) );

      menu->addAction( actions->actionRenameGroupOrLayer( menu ) );

      if ( mView->selectedNodes( true ).count() >= 2 )
        menu->addAction( actions->actionGroupSelected( menu ) );
    }

  }
  else if ( QgsLayerTreeModelLegendNode* node = mView->layerTreeModel()->index2legendNode( idx ) )
  {
    if ( QgsSymbolV2LegendNode* symbolNode = dynamic_cast< QgsSymbolV2LegendNode* >( node ) )
    {
      // 项目符号
      if ( symbolNode->flags() & Qt::ItemIsUserCheckable )
      {
        menu->addAction( uavCore::getThemeIcon( "mActionShowAllLayers.png" ), tr( "&Show All Items" ),
                         symbolNode, SLOT( checkAllItems() ) );
        menu->addAction( uavCore::getThemeIcon( "mActionHideAllLayers.png" ), tr( "&Hide All Items" ),
                         symbolNode, SLOT( uncheckAllItems() ) );
        menu->addSeparator();
      }

      if ( symbolNode->symbol() )
      {
        QgsColorWheel* colorWheel = new QgsColorWheel( menu );
        colorWheel->setColor( symbolNode->symbol()->color() );
        QgsColorWidgetAction* colorAction = new QgsColorWidgetAction( colorWheel, menu, menu );
        colorAction->setDismissOnColorSelection( false );
        connect( colorAction, SIGNAL( colorChanged( const QColor& ) ), this, SLOT( setSymbolLegendNodeColor( const QColor& ) ) );
        // 存储图层ID和规则的操作键，所以如果仍存在,我们以后可以获取相应的图例节点
        colorAction->setProperty( "layerId", symbolNode->layerNode()->layerId() );
        colorAction->setProperty( "ruleKey", symbolNode->data( QgsLayerTreeModelLegendNode::RuleKeyRole ).toString() );
        menu->addAction( colorAction );

        //最近添加的颜色动作
        QList<QgsRecentColorScheme *> recentSchemes;
        QgsColorSchemeRegistry::instance()->schemes( recentSchemes );
        if ( !recentSchemes.isEmpty() )
        {
          QgsColorSwatchGridAction* recentColorAction = new QgsColorSwatchGridAction( recentSchemes.at( 0 ), menu, "symbology", menu );
          recentColorAction->setProperty( "layerId", symbolNode->layerNode()->layerId() );
          recentColorAction->setProperty( "ruleKey", symbolNode->data( QgsLayerTreeModelLegendNode::RuleKeyRole ).toString() );
          recentColorAction->setDismissOnColorSelection( false );
          menu->addAction( recentColorAction );
          connect( recentColorAction, SIGNAL( colorChanged( const QColor& ) ), this, SLOT( setSymbolLegendNodeColor( const QColor& ) ) );
        }

        menu->addSeparator();
      }

      QAction* editSymbolAction = new QAction( tr( "Edit Symbol..." ), menu );
      // 存储图层ID和规则的操作键，所以如果仍存在,我们以后可以获取相应的图例节点
      editSymbolAction->setProperty( "layerId", symbolNode->layerNode()->layerId() );
      editSymbolAction->setProperty( "ruleKey", symbolNode->data( QgsLayerTreeModelLegendNode::RuleKeyRole ).toString() );
      connect( editSymbolAction, SIGNAL( triggered() ), this, SLOT( editSymbolLegendNodeSymbol() ) );
      menu->addAction( editSymbolAction );
    }
  }

  return menu;
}



void QgsAppLayerTreeViewMenuProvider::addLegendLayerAction( QAction* action, const QString& menu, const QString& id,
    QgsMapLayer::LayerType type, bool allLayers )
{
  mLegendLayerActionMap[type].append( LegendLayerAction( action, menu, id, allLayers ) );
}

bool QgsAppLayerTreeViewMenuProvider::removeLegendLayerAction( QAction* action )
{
  QMap< QgsMapLayer::LayerType, QList< LegendLayerAction > >::iterator it;
  for ( it = mLegendLayerActionMap.begin();
        it != mLegendLayerActionMap.end(); ++it )
  {
    for ( int i = 0; i < it->count(); i++ )
    {
      if (( *it )[i].action == action )
      {
        ( *it ).removeAt( i );
        return true;
      }
    }
  }
  return false;
}

void QgsAppLayerTreeViewMenuProvider::addLegendLayerActionForLayer( QAction* action, QgsMapLayer* layer )
{
  if ( !action || !layer )
    return;

  legendLayerActions( layer->type() );
  if ( !mLegendLayerActionMap.contains( layer->type() ) )
    return;

  QMap< QgsMapLayer::LayerType, QList< LegendLayerAction > >::iterator it
  = mLegendLayerActionMap.find( layer->type() );
  for ( int i = 0; i < it->count(); i++ )
  {
    if (( *it )[i].action == action )
    {
      ( *it )[i].layers.append( layer );
      return;
    }
  }
}

void QgsAppLayerTreeViewMenuProvider::removeLegendLayerActionsForLayer( QgsMapLayer* layer )
{
  if ( ! layer || ! mLegendLayerActionMap.contains( layer->type() ) )
    return;

  QMap< QgsMapLayer::LayerType, QList< LegendLayerAction > >::iterator it
  = mLegendLayerActionMap.find( layer->type() );
  for ( int i = 0; i < it->count(); i++ )
  {
    ( *it )[i].layers.removeAll( layer );
  }
}

QList< LegendLayerAction > QgsAppLayerTreeViewMenuProvider::legendLayerActions( QgsMapLayer::LayerType type ) const
{
#ifdef QGISDEBUG
  if ( mLegendLayerActionMap.contains( type ) )
  {
    QgsDebugMsg( QString( "legendLayerActions for layers of type %1:" ).arg( type ) );

    Q_FOREACH ( const LegendLayerAction& lyrAction, mLegendLayerActionMap[ type ] )
    {
      Q_UNUSED( lyrAction );
      QgsDebugMsg( QString( "%1/%2 - %3 layers" ).arg( lyrAction.menu, lyrAction.action->text() ).arg( lyrAction.layers.count() ) );
    }
  }
#endif

  return mLegendLayerActionMap.contains( type ) ? mLegendLayerActionMap.value( type ) : QList< LegendLayerAction >();
}

void QgsAppLayerTreeViewMenuProvider::addCustomLayerActions( QMenu* menu, QgsMapLayer* layer )
{
  if ( !layer )
    return;

  // add custom layer actions - should this go at end?
  QList< LegendLayerAction > lyrActions = legendLayerActions( layer->type() );

  if ( ! lyrActions.isEmpty() )
  {
    menu->addSeparator();
    QList<QMenu*> theMenus;
    for ( int i = 0; i < lyrActions.count(); i++ )
    {
      if ( lyrActions[i].allLayers || lyrActions[i].layers.contains( layer ) )
      {
        if ( lyrActions[i].menu.isEmpty() )
        {
          menu->addAction( lyrActions[i].action );
        }
        else
        {
          // find or create menu for given menu name
          // adapted from QgisApp::getPluginMenu( QString menuName )
          QString menuName = lyrActions[i].menu;
#ifdef Q_OS_MAC
          // Mac doesn't have '&' keyboard shortcuts.
          menuName.remove( QChar( '&' ) );
#endif
          QAction* before = nullptr;
          QMenu* newMenu = nullptr;
          QString dst = menuName;
          dst.remove( QChar( '&' ) );
          Q_FOREACH ( QMenu* menu, theMenus )
          {
            QString src = menu->title();
            src.remove( QChar( '&' ) );
            int comp = dst.localeAwareCompare( src );
            if ( comp < 0 )
            {
              // Add item before this one
              before = menu->menuAction();
              break;
            }
            else if ( comp == 0 )
            {
              // Plugin menu item already exists
              newMenu = menu;
              break;
            }
          }
          if ( ! newMenu )
          {
            // It doesn't exist, so create
            newMenu = new QMenu( menuName );
            theMenus.append( newMenu );
            // Where to put it? - we worked that out above...
            menu->insertMenu( before, newMenu );
          }
          // QMenu* menu = getMenu( lyrActions[i].menu, &theBeforeSep, &theAfterSep, &theMenu );
          newMenu->addAction( lyrActions[i].action );
        }
      }
    }
    menu->addSeparator();
  }
}

void QgsAppLayerTreeViewMenuProvider::editVectorSymbol()
{
  QAction* action = qobject_cast< QAction*>( sender() );
  if ( !action )
    return;

  QString layerId = action->property( "layerId" ).toString();
  QgsVectorLayer* layer = dynamic_cast<QgsVectorLayer*>( QgsMapLayerRegistry::instance()->mapLayer( layerId ) );
  if ( !layer )
    return;

  QgsSingleSymbolRendererV2* singleRenderer = dynamic_cast< QgsSingleSymbolRendererV2* >( layer->rendererV2() );
  if ( !singleRenderer )
    return;

  QScopedPointer< QgsSymbolV2 > symbol( singleRenderer->symbol() ? singleRenderer->symbol()->clone() : nullptr );
  QgsSymbolV2SelectorDialog dlg( symbol.data(), QgsStyleV2::defaultStyle(), layer, mView->window() );
  dlg.setMapCanvas( mCanvas );
  if ( dlg.exec() )
  {
    singleRenderer->setSymbol( symbol.take() );
    layer->triggerRepaint();
    mView->refreshLayerSymbology( layer->id() );
  }
}

void QgsAppLayerTreeViewMenuProvider::setVectorSymbolColor( const QColor& color )
{
  QAction* action = qobject_cast< QAction*>( sender() );
  if ( !action )
    return;

  QString layerId = action->property( "layerId" ).toString();
  QgsVectorLayer* layer = dynamic_cast<QgsVectorLayer*>( QgsMapLayerRegistry::instance()->mapLayer( layerId ) );
  if ( !layer )
    return;

  QgsSingleSymbolRendererV2* singleRenderer = dynamic_cast< QgsSingleSymbolRendererV2* >( layer->rendererV2() );
  QgsSymbolV2* newSymbol = nullptr;

  if ( singleRenderer && singleRenderer->symbol() )
    newSymbol = singleRenderer->symbol()->clone();

  const QgsSingleSymbolRendererV2* embeddedRenderer = nullptr;
  if ( !newSymbol && layer->rendererV2()->embeddedRenderer() )
  {
    embeddedRenderer = dynamic_cast< const QgsSingleSymbolRendererV2* >( layer->rendererV2()->embeddedRenderer() );
    if ( embeddedRenderer && embeddedRenderer->symbol() )
      newSymbol = embeddedRenderer->symbol()->clone();
  }

  if ( !newSymbol )
    return;

  newSymbol->setColor( color );
  if ( singleRenderer )
  {
    singleRenderer->setSymbol( newSymbol );
  }
  else if ( embeddedRenderer )
  {
    QgsSingleSymbolRendererV2* newRenderer = embeddedRenderer->clone();
    newRenderer->setSymbol( newSymbol );
    layer->rendererV2()->setEmbeddedRenderer( newRenderer );
  }

  layer->triggerRepaint();
  mView->refreshLayerSymbology( layer->id() );
}

void QgsAppLayerTreeViewMenuProvider::editSymbolLegendNodeSymbol()
{
  QAction* action = qobject_cast< QAction*>( sender() );
  if ( !action )
    return;

  QString layerId = action->property( "layerId" ).toString();
  QString ruleKey = action->property( "ruleKey" ).toString();

  QgsSymbolV2LegendNode* node = dynamic_cast<QgsSymbolV2LegendNode*>( mView->layerTreeModel()->findLegendNode( layerId, ruleKey ) );
  if ( !node )
    return;

  const QgsSymbolV2* originalSymbol = node->symbol();
  if ( !originalSymbol )
    return;

  QScopedPointer< QgsSymbolV2 > symbol( originalSymbol->clone() );
  QgsVectorLayer* vlayer = qobject_cast<QgsVectorLayer*>( node->layerNode()->layer() );
  QgsSymbolV2SelectorDialog dlg( symbol.data(), QgsStyleV2::defaultStyle(), vlayer, mView->window() );
  dlg.setMapCanvas( mCanvas );
  if ( dlg.exec() )
  {
    node->setSymbol( symbol.take() );
  }
}

void QgsAppLayerTreeViewMenuProvider::setSymbolLegendNodeColor( const QColor &color )
{
  QAction* action = qobject_cast< QAction*>( sender() );
  if ( !action )
    return;

  QString layerId = action->property( "layerId" ).toString();
  QString ruleKey = action->property( "ruleKey" ).toString();

  QgsSymbolV2LegendNode* node = dynamic_cast<QgsSymbolV2LegendNode*>( mView->layerTreeModel()->findLegendNode( layerId, ruleKey ) );
  if ( !node )
    return;

  const QgsSymbolV2* originalSymbol = node->symbol();
  if ( !originalSymbol )
    return;

  QgsSymbolV2* newSymbol = originalSymbol->clone();
  newSymbol->setColor( color );
  node->setSymbol( newSymbol );
}
