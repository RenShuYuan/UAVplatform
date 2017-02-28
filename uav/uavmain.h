#ifndef UAVPLATFORM_H
#define UAVPLATFORM_H

class QgsMapCanvas;
class QgsLayerTreeView;
class QgsSnappingUtils;
class QgsMapLayer;
class QgsScaleComboBox;
class QgsStatusBarCoordinatesWidget;
class QgsDoubleSpinBox;
class QgsMapTool;
class QgsVectorLayer;
class QgsVectorLayerTools;
class QgsTransactionGroup;
class QgsClipboard;
class QgsMapTip;
class QgsRasterLayer;
class QgsLayerTreeMapCanvasBridge;
class QgsCustomLayerOrderWidget;
class QgsMapOverviewCanvas;
class QgisAppStyleSheet;
class QgsMessageLogViewer;

class QTimer;
class QCursor;
class QLabel;
class QString;
class QAction;
class QTabWidget;
class toolmenubar;
class QProgressBar;
class QDockWidget;
class QToolBar;
class QCheckBox;
class QStackedWidget;

class uavPosDataProcessing;
class uavPPInteractive;

#include <QtGui/QMainWindow>
#include <QMap>
#include <QPair>
#include "ui_uavmain.h"

#include "qgsmessagebar.h"
#include "qgspoint.h"
#include "qgsraster.h"

class UavMain : public QMainWindow
{
	Q_OBJECT

public:
	UavMain(QWidget *parent = 0, Qt::WFlags flags = 0);
	~UavMain();

	//! 控制信息显示条显示的时间: 默认为5秒
	int messageTimeout();

	static UavMain *instance() { return smInstance; }

	QgsMapCanvas *mapCanvas();

	//! Returns a pointer to the internal clipboard
	QgsClipboard *clipboard();

	//! returns pointer to map legend
	QgsLayerTreeView *layerTreeView();

	QgsLayerTreeMapCanvasBridge *layerTreeCanvasBridge() { return mLayerTreeCanvasBridge; }

	QgsVectorLayerTools *vectorLayerTools() { return mVectorLayerTools; }

	QgsMapOverviewCanvas* mapOverviewCanvas() { return mOverviewCanvas; }

	QAction *actionHideAllLayers() { return mActionHideAllLayers; }
	QAction *actionShowAllLayers() { return mActionShowAllLayers; }
	QAction *actionHideSelectedLayers() { return mActionHideSelectedLayers; }
	QAction *actionShowSelectedLayers() { return mActionShowSelectedLayers; }

	//! 显示图层属性
	void showLayerProperties( QgsMapLayer *ml );

	//! 获取样式表生成器对象的应用程序和打印
	QgisAppStyleSheet *styleSheetBuilder();

	void setIconSizes( int size );

	/** 返回顶部显示的消息对象 */
	QgsMessageBar *messageBar();

	/** 打开消息面板 **/
	void openMessageLog();

	void addDockWidget( Qt::DockWidgetArea area, QDockWidget *dockwidget );

public slots:
	//! 更新工具按钮的默认选项
	void toolButtonActionTriggered( QAction * );

	void loadOGRSublayers( const QString& layertype, const QString& uri, const QStringList& list );
	void loadGDALSublayers( const QString& uri, const QStringList& list );

	//! 连接到图层树桥注册表，首先选择新添加的地图图层
	void autoSelectAddedLayer( QList<QgsMapLayer*> layers );
	void activeLayerChanged( QgsMapLayer *layer );

	//! 确保新层插入最新点与层树视图当前项目
	void updateNewLayerInsertionPoint();

	bool autoTransaction() const;
	void setAutoTransaction( bool state );

	//! 显示全屏范围
	void zoomFull();
	//! 显示上一视图
	void zoomToPrevious();
	//! 显示下一视图
	void zoomToNext();
	//! 缩放到选择要素
	void zoomToSelected();

	/** 活动光栅层上执行本地直方图拉伸
	（基于视图范围像素值拉伸）。
	仅对非WMS栅格图层。 */
    void localHistogramStretch();
	/** 活动栅格图层上执行一个完整的直方图拉伸
	（基于完整数据集的像素值，拉伸）
	仅对非WMS栅格图层。 */
    void fullHistogramStretch();
    /** 使用当前范围,默认限制和估计值进行局部累计裁剪拉伸 */
    void localCumulativeCutStretch();
    /** 使用全图范围,默认限制和估计值进行局部累计裁剪拉伸 */
    void fullCumulativeCutStretch();
    /** 增加亮度
     * 仅对非WMS栅格图层。 */
    void increaseBrightness();
    /** 减小亮度
     * 仅对非WMS栅格图层。 */
    void decreaseBrightness();
    /** 增加对比度
     * 仅对非WMS栅格图层。 */
    void increaseContrast();
    /** 减小对比度
     * 仅对非WMS栅格图层。 */
    void decreaseContrast();

	//! 显示当前所选层的属性表
	void attributeTable();

	//! 标志项目脏
	void markDirty();

	/** 打开使用栅格数据提供栅格图层. */
	//QgsRasterLayer *addRasterLayer( QString const & uri, QString const & baseName, QString const & providerKey );

	//! Opens the options dialog
	void showOptionsDialog( QWidget *parent = nullptr, const QString& currentPage = QString() );

	//! 刷新地图画布
	void refreshMapCanvas();

	QMenu *panelMenu() { return mPanelMenu; }
private:
	void createActions();
	void createMenus();
	void createToolBars();
	void createStatusBar();
	void setupConnections();	////////////////
	void initLayerTreeView();
	void createOverview();
	void createCanvasTools();
	void createMapTips();
	//更新坐标参照系状态栏
	void updateCRSStatusBar();
	//void createDecorations();
	
	//! 根据QSettings用户的选项配置层树视图
	void setupLayerTreeViewFromSettings();

	//! 这种方法将打开的对话框，因此用户可以选择的OGR子层加载
    void askUserForOGRSublayers( QgsVectorLayer *layer );

	 /** 栅格图层添加到地图（传过来的ptr）.
     * 它不会强制刷新。
     */
    bool addRasterLayer( QgsRasterLayer * theRasterLayer );

    /** 打开一个栅格图层 - 这是通用函数，它接受所有参数 */
    QgsRasterLayer* addRasterLayerPrivate( const QString & uri, const QString & baseName,
                                           const QString & providerKey, bool guiWarning,
                                           bool guiUpdate );

	/** 这种方法将打开对话框，因此用户可以选择的GDAL子层加载
    */
    void askUserForGDALSublayers( QgsRasterLayer *layer );

	/** 此方法将验证GDAL层是否包含子层
    */
    bool shouldAskUserForGDALSublayers( QgsRasterLayer *layer );

	/** 直方图拉伸适合于单灰/多频带颜色栅格*/
	void histogramStretch( bool visibleAreaOnly = false, QgsRaster::ContrastEnhancementLimits theLimits = QgsRaster::ContrastEnhancementMinMax );

	/** 应用光栅亮度 */
	void adjustBrightnessContrast( int delta, bool updateBrightness = true );

	void saveAsVectorFileGeneral( QgsVectorLayer* vlayer = nullptr, bool symbologyOption = true );

	void upDataPosActions();

private slots:
	void displayMessage( const QString& title, const QString& message, QgsMessageBar::MessageLevel level );
	
	//! 返回活动图层的指针
	QgsMapLayer *activeLayer();

	//! 新建项目
	void fileNew();
	//! 退出程序
	void fileExit();

	//! 创建一个新的空矢量图层
	void newVectorLayer();
	//! 添加一个矢量图层到地图
	void addVectorLayer();
	//! 栅格图层添加到地图（将使用对话框提示用户输入文件名）
	void addRasterLayer();
	//! 分隔文本层添加到地图
	void addDelimitedTextLayer();
	//! 通过添加URI定义的矢量图层，图层名称，数据源URI
	void addSelectedVectorLayer( const QString& uri, const QString& layerName, const QString& provider );

	/** \这需要文件名列表，而不是提示用户的对话框，私有addLayer方法的简要重载版本
     @param enc 层编码类型
     @param dataSourceType OGR数据源的类型
     @returns 如果添加图层成功返回true
    */
    bool addVectorLayers( const QStringList &theLayerQStringList, const QString &enc, const QString &dataSourceType );

	/**
    * 一个矢量图层添加到画布上，返回指向它的指针
    */
    QgsVectorLayer *addVectorLayer( const QString& vectorLayerPath, const QString& baseName, const QString& providerKey );

	/** 重载版本，需要文件名列表，而不是与一个对话框，提示用户列表私有addRasterLayer（）方法。
     @returns 如果添加图层成功返回true
    */
    bool addRasterLayers( const QStringList &theLayerQStringList, bool guiWarning = true );

    /** 对于给定的文件打开一个栅格图层
     @returns 如果无法打开rasterFile栅格图层,假
     @note
     这基本上是上述的简化版本
    */
    //QgsRasterLayer *addRasterLayer( const QString &rasterFile, const QString &baseName, bool guiWarning = true );

	//! 开启或关闭取决于当前地图图层类型的行动。从图例调用的时候，当前图例项已经改变
	void activateDeactivateLayerRelatedActions( QgsMapLayer *layer );

	void zoomOut();
	//! Set map tool to Zoom in
	void zoomIn();
	//! Set map tool to pan
	void pan();
	//! Pan map to selected features
	void panToSelected();
	//! zoom to extent of layer
	void zoomToLayerExtent();

	//! 打开当前选定图层的属性对话框
	void layerProperties();

	//! activates the rectangle selection tool
	void selectFeatures();
	//! activates the polygon selection tool
	void selectByPolygon();

	//! deselect features from all layers
	void deselectAll();
	//! select all features
	void selectAll();
	//! invert the selection
	void invertSelection();

	//! Measure distance
	void measure();
	//! Measure area
	void measureArea();

	//! Identify feature(s) on the currently selected layer
	void identify();

	//! Store the position for map tool tip
	void saveLastMousePosition( const QgsPoint & );
	//! start "busy" progress bar
	void canvasRefreshStarted();
	//! stop "busy" progress bar
	void canvasRefreshFinished();

	//! 显示当前地图的比例尺(slot)
	void showScale( double theScale );
	//! 处理用户输入的比例尺(slot)
	void userScale();
	//! 处理用户输入的旋转(slot)
	void userRotation();
	//! 设置项目属性，包括地图单位(slot)
	void projectProperties();
	//! 打开项目属性对话框,并显示在投影状态(slot)
	void projectPropertiesProjections();

	//! 设置图层可视性比例
	void setLayerScaleVisibility();
	//! 延伸拉伸活动的光栅层，基于当前范围的最小和最大。仅适用于栅格图层*/
    void legendLayerStretchUsingCurrentExtent();
	//! 调用自定义投影对话框
	void customProjection();
	//! 分配图层的参照坐标系到项目
	void setProjectCRSFromLayer();
	//! 设置图层的参照坐标系
	void setLayerCRS();
	//! 设置当前图例组合的参考坐标系
	void legendGroupSetCRS();
	//! 保存当前矢量图层
	void saveAsFile();
	//! 从地图和图例删除层
	void removeLayer();
	//! 在图例中复制图层副本
	void duplicateLayers( const QList<QgsMapLayer *>& lyrList = QList<QgsMapLayer *>() );
	// 从基类(gui)重新实现方法
	void hideAllLayers();
	// 从基类(gui)重新实现方法
	void showAllLayers();
	// 从基类(gui)重新实现方法
	void hideSelectedLayers();
	// 从基类(gui)重新实现方法
	void showSelectedLayers();
	//! 图层选取改变
	void legendLayerSelectionChanged( void );
	/** Alerts user when labeling font for layer has not been found on system */
	// 标记为层字体时警报用户还没有被发现的对系统
	void labelingFontNotFound( QgsVectorLayer *vlayer, const QString& fontfamily );

	//! 切换当前的选中图层是否添加到鹰眼图中
	void isInOverview();
	//! 添加所有图层加载到鹰眼图 - 覆盖QGIS应用平台方法
	void addAllToOverview();
	//! 移除所有图层加载到鹰眼图 - 覆盖QGIS应用平台方法
	void removeAllFromOverview();

	//! 放大至栅格图层的实际尺寸
	void zoomActualSize();
	/** 缩放使光栅层的像素刚好占据一个屏幕像素。
	仅适用于栅格图层*/
    void legendLayerZoomNative();

	/* 层将被删除 - changed from removingLayer to removingLayers in 1.8. */
    void removingLayers( const QStringList& );

	//! 从活动图层到复制样式到剪贴板
    /**
       \param sourceLayer  The layer where the style will be taken from
                                        (图例中默认的活动图层)
     */
    void copyStyle( QgsMapLayer *sourceLayer = nullptr );
    //! 在剪贴板中粘贴样式到活动图层
    /**
       \param destinationLayer  The layer that the clipboard will be pasted to
                                (图例中默认的活动图层)
     */
    void pasteStyle( QgsMapLayer *destinationLayer = nullptr );
	//! 应用相同的样式到选择的图层或当前图例组合
	void applyStyleToGroup();

	//! 从settings设置应用程序样式表
	void setAppStyleSheet( const QString& stylesheet );

	void layersWereAdded( const QList<QgsMapLayer*>& );

	void selectionChanged( QgsMapLayer *layer );
	void extentChanged();
	void showRotation();
	void updateMouseCoordinatePrecision();
	void showProgress( int theProgress, int theTotalSteps );
	void showStatusMessage( const QString& theMessage );
	void hasCrsTransformEnabled( bool theFlag );
	void destinationCrsChanged();

	//! 改变状态栏中消息按钮的图标
	void toggleLogMessageIcon( bool hasLogMessage );

	//! MapCanvas按键事件，所以我们可以检查，如果选择的要素集合必须被删除
	void mapCanvas_keyPressed( QKeyEvent *e );

	//! options dialog slot
	void options();

	//! 自定义
	void openPosFile();
	bool posTransform();
	void posLinkPhoto();
	void posSketchMap();
	void posOneButton();
	void posExport();
	void posSettings();

	void ppMatchPosName();

signals:
	/** 当图层使用另存为这个信号被发射
    @note added in version 2.7
    */
    void layerSavedAs( QgsMapLayer* l, const QString& path );
private:
	//! 项目菜单
	QAction *mActionNewProject;
	QAction *mActionProjectProperties;
	QAction *mActionSaveMapAsImage;
	QAction *mActionExit;				//done

	//! 视图菜单
	QAction *mActionPan;				//done
	QAction *mActionPanToSelected;		//done
	QAction *mActionZoomIn;				//done
	QAction *mActionZoomOut;			//done
	QAction *mActionSelectFeatures;		//done
	QAction *mActionSelectPolygon;		//done
	QAction *mActionDeselectAll;		//done
	QAction *mActionSelectAll;			//done
	QAction *mActionInvertSelection;	//done
	QAction *mActionIdentify;
	//QAction *mActionFeatureAction;
	QAction *mActionMeasure;			//done
	QAction *mActionMeasureArea;		//done
	QAction *mActionZoomFullExtent;
	QAction *mActionZoomToLayer;
	QAction *mActionZoomToSelected;
	QAction *mActionZoomLast;
	QAction *mActionZoomNext;
	QAction *mActionZoomActualSize;
	QAction *mActionMapTips;
	QAction *mActionDraw;
	QAction *mActionStatisticalSummary;

	//! 图层菜单
	QAction *mActionNewVectorLayer;
	QAction *mActionAddOgrLayer;			//done
	QAction *mActionAddRasterLayer;			//done
	QAction *mActionAddDelimitedText;
	QAction *mActionOpenTable;
	//QAction *mActionOpenFieldCalc;
	QAction *mActionLayerSaveAs;
	QAction *mActionRemoveLayer;
	QAction *mActionSetLayerCRS;
	QAction *mActionSetProjectCRSFromLayer;
	QAction *mActionLayerProperties;
	QAction *mActionLayerSubsetString;
	QAction *mActionAddToOverview;
	QAction *mActionAddAllToOverview;
	QAction *mActionRemoveAllFromOverview;
	QAction *mActionShowAllLayers;
	QAction *mActionHideAllLayers;
	QAction *mActionShowSelectedLayers;
	QAction *mActionHideSelectedLayers;
	QAction *mActionToggleEditing;
	QAction *mActionFilterLegend;

	//! 栅格工具栏项
	QAction *mActionLocalHistogramStretch;
	QAction *mActionFullHistogramStretch;
	QAction *mActionLocalCumulativeCutStretch;
	QAction *mActionFullCumulativeCutStretch;
	QAction *mActionIncreaseBrightness;
	QAction *mActionDecreaseBrightness;
	QAction *mActionIncreaseContrast;
	QAction *mActionDecreaseContrast;

	//! 标签工具栏项
	QAction *mActionLabeling;
	QAction *mActionShowPinnedLabels;
	QAction *mActionPinLabels;
	QAction *mActionShowHideLabels;
	QAction *mActionMoveLabel;
	QAction *mActionRotateLabel;
	QAction *mActionChangeLabelProperties;

	//! 设置菜单
	QAction *mActionOptions;
	QAction *mActionCustomProjection;
	//QAction *mActionStyleManagerV2;
	QAction *mActionPasteStyle;
	QAction *mActionCopyStyle;

	//! 曝光点动作
	QAction *mOpenPosFile;
	QAction *mPosTransform;
	QAction *mPosSketchMap;
	QAction *mPosOneButton;
	QAction *mPosExport;
	QAction *mPosSettings;

	//! 动态联动
	QAction *mPosLinkPhoto;
	QAction *mMatchPosName;

	//! 数据分析
	QAction *mAnalysisOverlapping;
	QAction *mAnalysisOmega;
	QAction *mAnalysisPhi;
	QAction *mAnalysisKappa;

	QToolBar *mFileToolBar;
	QToolBar *mLayerToolBar;
	QToolBar *mMapNavToolBar;
	QToolBar *mAttributesToolBar;
	QToolBar *mRasterToolBar;
	QToolBar *mLabelToolBar;

	QMenu *mPanelMenu;
	QMenu *mToolbarMenu;
	QMenu *menuSelect;
	QMenu *menuMeasure;

	QDockWidget *mLayerOrderDock;
	QDockWidget *mOverviewDock;
	QDockWidget *mLogDock;

	QTimer *mpMapTipsTimer;
	QCursor *mOverviewMapCursor;
	QProgressBar *mProgressBar;
	QLabel *mScaleLabel;
	QLabel *mRotationLabel;
	QgsMapCanvas *mMapCanvas;	// 地图画布
	QgsLayerTreeView *mLayerTreeView;	// 图层管理面板
	QgsMessageBar* mInfoBar;	// 在地图窗口上显示信息
	QgsStatusBarCoordinatesWidget *mCoordsEdit;
	QgsScaleComboBox *mScaleEdit;
	QgsDoubleSpinBox *mRotationEdit;
	QCheckBox *mRenderSuppressionCBox;
	QToolButton *mOnTheFlyProjectionStatusButton;
	QToolButton *mMessageButton;
	QStackedWidget* mStackedWidget; // 用于mapcanvas和mapComposor的切换
	QgsVectorLayerTools* mVectorLayerTools;
	QgsLayerTreeMapCanvasBridge *mLayerTreeCanvasBridge;
	QgsMessageLogViewer *mLogViewer;
	QDockWidget *mLayerTreeDock;
	QgsCustomLayerOrderWidget *mMapLayerOrder;
	/** QGIS-internal vector feature clipboard */
	QgsClipboard *mInternalClipboard;
	//! Overview map canvas
	QgsMapOverviewCanvas *mOverviewCanvas;
	//! Maptip object
	QgsMapTip *mpMaptip;
	//! 标志，表示地图提示是打开还是关闭
	bool mMapTipsVisible;
	//! 在地图参考坐标系中鼠标最后一次的坐标
	QgsPoint mLastMapPosition;
	//! 标志，表示该项目属性对话框是怎么出现
	bool mShowProjectionTab;

	//! 含有辅助光栅文件格式适合于FileDialog的文件过滤字符串。内置构造函数.
    QString mRasterFileFilter;

	//! map of transaction group: QPair( providerKey, connString ) -> transactionGroup
	QMap< QPair< QString, QString>, QgsTransactionGroup*> mTransactionGroups;

	QgisAppStyleSheet *mStyleSheetBuilder;

	static UavMain *smInstance;

	Ui::UAVplatformClass ui;

	// POS处理类
	uavPosDataProcessing *posdp;
	// PP关联处理类
	uavPPInteractive* ppInter;

	class Tools
	{
	public:

		Tools()
			: mZoomIn( nullptr )
			, mZoomOut( nullptr )
			, mPan( nullptr )
			, mIdentify( nullptr )
			, mFeatureAction( nullptr )
			, mMeasureDist( nullptr )
			, mMeasureArea( nullptr )
			, mMeasureAngle( nullptr )
			, mAddFeature( nullptr )
			, mCircularStringCurvePoint( nullptr )
			, mCircularStringRadius( nullptr )
			, mMoveFeature( nullptr )
			, mOffsetCurve( nullptr )
			, mReshapeFeatures( nullptr )
			, mSplitFeatures( nullptr )
			, mSplitParts( nullptr )
			, mSelect( nullptr )
			, mSelectFeatures( nullptr )
			, mSelectPolygon( nullptr )
			, mSelectFreehand( nullptr )
			, mSelectRadius( nullptr )
			, mVertexAdd( nullptr )
			, mVertexMove( nullptr )
			, mVertexDelete( nullptr )
			, mAddRing( nullptr )
			, mFillRing( nullptr )
			, mAddPart( nullptr )
			, mSimplifyFeature( nullptr )
			, mDeleteRing( nullptr )
			, mDeletePart( nullptr )
			, mNodeTool( nullptr )
			, mRotatePointSymbolsTool( nullptr )
			, mAnnotation( nullptr )
			, mFormAnnotation( nullptr )
			, mHtmlAnnotation( nullptr )
			, mSvgAnnotation( nullptr )
			, mTextAnnotation( nullptr )
			, mPinLabels( nullptr )
			, mShowHideLabels( nullptr )
			, mMoveLabel( nullptr )
			, mRotateFeature( nullptr )
			, mRotateLabel( nullptr )
			, mChangeLabelProperties( nullptr )
		{}

		QgsMapTool *mZoomIn;
		QgsMapTool *mZoomOut;
		QgsMapTool *mPan;
		QgsMapTool *mIdentify;
		QgsMapTool *mFeatureAction;
		QgsMapTool *mMeasureDist;
		QgsMapTool *mMeasureArea;
		QgsMapTool *mMeasureAngle;
		QgsMapTool *mAddFeature;
		QgsMapTool *mCircularStringCurvePoint;
		QgsMapTool *mCircularStringRadius;
		QgsMapTool *mMoveFeature;
		QgsMapTool *mOffsetCurve;
		QgsMapTool *mReshapeFeatures;
		QgsMapTool *mSplitFeatures;
		QgsMapTool *mSplitParts;
		QgsMapTool *mSelect;
		QgsMapTool *mSelectFeatures;
		QgsMapTool *mSelectPolygon;
		QgsMapTool *mSelectFreehand;
		QgsMapTool *mSelectRadius;
		QgsMapTool *mVertexAdd;
		QgsMapTool *mVertexMove;
		QgsMapTool *mVertexDelete;
		QgsMapTool *mAddRing;
		QgsMapTool *mFillRing;
		QgsMapTool *mAddPart;
		QgsMapTool *mSimplifyFeature;
		QgsMapTool *mDeleteRing;
		QgsMapTool *mDeletePart;
		QgsMapTool *mNodeTool;
		QgsMapTool *mRotatePointSymbolsTool;
		QgsMapTool *mAnnotation;
		QgsMapTool *mFormAnnotation;
		QgsMapTool *mHtmlAnnotation;
		QgsMapTool *mSvgAnnotation;
		QgsMapTool *mTextAnnotation;
		QgsMapTool *mPinLabels;
		QgsMapTool *mShowHideLabels;
		QgsMapTool *mMoveLabel;
		QgsMapTool *mRotateFeature;
		QgsMapTool *mRotateLabel;
		QgsMapTool *mChangeLabelProperties;
	} mMapTools;

	QgsMapTool *mNonEditMapTool;
};

#ifdef ANDROID
#define QGIS_ICON_SIZE 32
#else
#define QGIS_ICON_SIZE 24
#endif

#endif // UAVPLATFORM_H
