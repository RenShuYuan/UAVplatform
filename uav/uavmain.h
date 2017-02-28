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

	//! ������Ϣ��ʾ����ʾ��ʱ��: Ĭ��Ϊ5��
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

	//! ��ʾͼ������
	void showLayerProperties( QgsMapLayer *ml );

	//! ��ȡ��ʽ�������������Ӧ�ó���ʹ�ӡ
	QgisAppStyleSheet *styleSheetBuilder();

	void setIconSizes( int size );

	/** ���ض�����ʾ����Ϣ���� */
	QgsMessageBar *messageBar();

	/** ����Ϣ��� **/
	void openMessageLog();

	void addDockWidget( Qt::DockWidgetArea area, QDockWidget *dockwidget );

public slots:
	//! ���¹��߰�ť��Ĭ��ѡ��
	void toolButtonActionTriggered( QAction * );

	void loadOGRSublayers( const QString& layertype, const QString& uri, const QStringList& list );
	void loadGDALSublayers( const QString& uri, const QStringList& list );

	//! ���ӵ�ͼ������ע�������ѡ������ӵĵ�ͼͼ��
	void autoSelectAddedLayer( QList<QgsMapLayer*> layers );
	void activeLayerChanged( QgsMapLayer *layer );

	//! ȷ���²�������µ��������ͼ��ǰ��Ŀ
	void updateNewLayerInsertionPoint();

	bool autoTransaction() const;
	void setAutoTransaction( bool state );

	//! ��ʾȫ����Χ
	void zoomFull();
	//! ��ʾ��һ��ͼ
	void zoomToPrevious();
	//! ��ʾ��һ��ͼ
	void zoomToNext();
	//! ���ŵ�ѡ��Ҫ��
	void zoomToSelected();

	/** ���դ����ִ�б���ֱ��ͼ����
	��������ͼ��Χ����ֵ���죩��
	���Է�WMSդ��ͼ�㡣 */
    void localHistogramStretch();
	/** �դ��ͼ����ִ��һ��������ֱ��ͼ����
	�������������ݼ�������ֵ�����죩
	���Է�WMSդ��ͼ�㡣 */
    void fullHistogramStretch();
    /** ʹ�õ�ǰ��Χ,Ĭ�����ƺ͹���ֵ���оֲ��ۼƲü����� */
    void localCumulativeCutStretch();
    /** ʹ��ȫͼ��Χ,Ĭ�����ƺ͹���ֵ���оֲ��ۼƲü����� */
    void fullCumulativeCutStretch();
    /** ��������
     * ���Է�WMSդ��ͼ�㡣 */
    void increaseBrightness();
    /** ��С����
     * ���Է�WMSդ��ͼ�㡣 */
    void decreaseBrightness();
    /** ���ӶԱȶ�
     * ���Է�WMSդ��ͼ�㡣 */
    void increaseContrast();
    /** ��С�Աȶ�
     * ���Է�WMSդ��ͼ�㡣 */
    void decreaseContrast();

	//! ��ʾ��ǰ��ѡ������Ա�
	void attributeTable();

	//! ��־��Ŀ��
	void markDirty();

	/** ��ʹ��դ�������ṩդ��ͼ��. */
	//QgsRasterLayer *addRasterLayer( QString const & uri, QString const & baseName, QString const & providerKey );

	//! Opens the options dialog
	void showOptionsDialog( QWidget *parent = nullptr, const QString& currentPage = QString() );

	//! ˢ�µ�ͼ����
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
	//�����������ϵ״̬��
	void updateCRSStatusBar();
	//void createDecorations();
	
	//! ����QSettings�û���ѡ�����ò�����ͼ
	void setupLayerTreeViewFromSettings();

	//! ���ַ������򿪵ĶԻ�������û�����ѡ���OGR�Ӳ����
    void askUserForOGRSublayers( QgsVectorLayer *layer );

	 /** դ��ͼ����ӵ���ͼ����������ptr��.
     * ������ǿ��ˢ�¡�
     */
    bool addRasterLayer( QgsRasterLayer * theRasterLayer );

    /** ��һ��դ��ͼ�� - ����ͨ�ú��������������в��� */
    QgsRasterLayer* addRasterLayerPrivate( const QString & uri, const QString & baseName,
                                           const QString & providerKey, bool guiWarning,
                                           bool guiUpdate );

	/** ���ַ������򿪶Ի�������û�����ѡ���GDAL�Ӳ����
    */
    void askUserForGDALSublayers( QgsRasterLayer *layer );

	/** �˷�������֤GDAL���Ƿ�����Ӳ�
    */
    bool shouldAskUserForGDALSublayers( QgsRasterLayer *layer );

	/** ֱ��ͼ�����ʺ��ڵ���/��Ƶ����ɫդ��*/
	void histogramStretch( bool visibleAreaOnly = false, QgsRaster::ContrastEnhancementLimits theLimits = QgsRaster::ContrastEnhancementMinMax );

	/** Ӧ�ù�դ���� */
	void adjustBrightnessContrast( int delta, bool updateBrightness = true );

	void saveAsVectorFileGeneral( QgsVectorLayer* vlayer = nullptr, bool symbologyOption = true );

	void upDataPosActions();

private slots:
	void displayMessage( const QString& title, const QString& message, QgsMessageBar::MessageLevel level );
	
	//! ���ػͼ���ָ��
	QgsMapLayer *activeLayer();

	//! �½���Ŀ
	void fileNew();
	//! �˳�����
	void fileExit();

	//! ����һ���µĿ�ʸ��ͼ��
	void newVectorLayer();
	//! ���һ��ʸ��ͼ�㵽��ͼ
	void addVectorLayer();
	//! դ��ͼ����ӵ���ͼ����ʹ�öԻ�����ʾ�û������ļ�����
	void addRasterLayer();
	//! �ָ��ı�����ӵ���ͼ
	void addDelimitedTextLayer();
	//! ͨ�����URI�����ʸ��ͼ�㣬ͼ�����ƣ�����ԴURI
	void addSelectedVectorLayer( const QString& uri, const QString& layerName, const QString& provider );

	/** \����Ҫ�ļ����б���������ʾ�û��ĶԻ���˽��addLayer�����ļ�Ҫ���ذ汾
     @param enc ���������
     @param dataSourceType OGR����Դ������
     @returns ������ͼ��ɹ�����true
    */
    bool addVectorLayers( const QStringList &theLayerQStringList, const QString &enc, const QString &dataSourceType );

	/**
    * һ��ʸ��ͼ����ӵ������ϣ�����ָ������ָ��
    */
    QgsVectorLayer *addVectorLayer( const QString& vectorLayerPath, const QString& baseName, const QString& providerKey );

	/** ���ذ汾����Ҫ�ļ����б���������һ���Ի�����ʾ�û��б�˽��addRasterLayer����������
     @returns ������ͼ��ɹ�����true
    */
    bool addRasterLayers( const QStringList &theLayerQStringList, bool guiWarning = true );

    /** ���ڸ������ļ���һ��դ��ͼ��
     @returns ����޷���rasterFileդ��ͼ��,��
     @note
     ��������������ļ򻯰汾
    */
    //QgsRasterLayer *addRasterLayer( const QString &rasterFile, const QString &baseName, bool guiWarning = true );

	//! ������ر�ȡ���ڵ�ǰ��ͼͼ�����͵��ж�����ͼ�����õ�ʱ�򣬵�ǰͼ�����Ѿ��ı�
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

	//! �򿪵�ǰѡ��ͼ������ԶԻ���
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

	//! ��ʾ��ǰ��ͼ�ı�����(slot)
	void showScale( double theScale );
	//! �����û�����ı�����(slot)
	void userScale();
	//! �����û��������ת(slot)
	void userRotation();
	//! ������Ŀ���ԣ�������ͼ��λ(slot)
	void projectProperties();
	//! ����Ŀ���ԶԻ���,����ʾ��ͶӰ״̬(slot)
	void projectPropertiesProjections();

	//! ����ͼ������Ա���
	void setLayerScaleVisibility();
	//! ���������Ĺ�դ�㣬���ڵ�ǰ��Χ����С����󡣽�������դ��ͼ��*/
    void legendLayerStretchUsingCurrentExtent();
	//! �����Զ���ͶӰ�Ի���
	void customProjection();
	//! ����ͼ��Ĳ�������ϵ����Ŀ
	void setProjectCRSFromLayer();
	//! ����ͼ��Ĳ�������ϵ
	void setLayerCRS();
	//! ���õ�ǰͼ����ϵĲο�����ϵ
	void legendGroupSetCRS();
	//! ���浱ǰʸ��ͼ��
	void saveAsFile();
	//! �ӵ�ͼ��ͼ��ɾ����
	void removeLayer();
	//! ��ͼ���и���ͼ�㸱��
	void duplicateLayers( const QList<QgsMapLayer *>& lyrList = QList<QgsMapLayer *>() );
	// �ӻ���(gui)����ʵ�ַ���
	void hideAllLayers();
	// �ӻ���(gui)����ʵ�ַ���
	void showAllLayers();
	// �ӻ���(gui)����ʵ�ַ���
	void hideSelectedLayers();
	// �ӻ���(gui)����ʵ�ַ���
	void showSelectedLayers();
	//! ͼ��ѡȡ�ı�
	void legendLayerSelectionChanged( void );
	/** Alerts user when labeling font for layer has not been found on system */
	// ���Ϊ������ʱ�����û���û�б����ֵĶ�ϵͳ
	void labelingFontNotFound( QgsVectorLayer *vlayer, const QString& fontfamily );

	//! �л���ǰ��ѡ��ͼ���Ƿ���ӵ�ӥ��ͼ��
	void isInOverview();
	//! �������ͼ����ص�ӥ��ͼ - ����QGISӦ��ƽ̨����
	void addAllToOverview();
	//! �Ƴ�����ͼ����ص�ӥ��ͼ - ����QGISӦ��ƽ̨����
	void removeAllFromOverview();

	//! �Ŵ���դ��ͼ���ʵ�ʳߴ�
	void zoomActualSize();
	/** ����ʹ��դ������ظպ�ռ��һ����Ļ���ء�
	��������դ��ͼ��*/
    void legendLayerZoomNative();

	/* �㽫��ɾ�� - changed from removingLayer to removingLayers in 1.8. */
    void removingLayers( const QStringList& );

	//! �ӻͼ�㵽������ʽ��������
    /**
       \param sourceLayer  The layer where the style will be taken from
                                        (ͼ����Ĭ�ϵĻͼ��)
     */
    void copyStyle( QgsMapLayer *sourceLayer = nullptr );
    //! �ڼ�������ճ����ʽ���ͼ��
    /**
       \param destinationLayer  The layer that the clipboard will be pasted to
                                (ͼ����Ĭ�ϵĻͼ��)
     */
    void pasteStyle( QgsMapLayer *destinationLayer = nullptr );
	//! Ӧ����ͬ����ʽ��ѡ���ͼ���ǰͼ�����
	void applyStyleToGroup();

	//! ��settings����Ӧ�ó�����ʽ��
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

	//! �ı�״̬������Ϣ��ť��ͼ��
	void toggleLogMessageIcon( bool hasLogMessage );

	//! MapCanvas�����¼����������ǿ��Լ�飬���ѡ���Ҫ�ؼ��ϱ��뱻ɾ��
	void mapCanvas_keyPressed( QKeyEvent *e );

	//! options dialog slot
	void options();

	//! �Զ���
	void openPosFile();
	bool posTransform();
	void posLinkPhoto();
	void posSketchMap();
	void posOneButton();
	void posExport();
	void posSettings();

	void ppMatchPosName();

signals:
	/** ��ͼ��ʹ�����Ϊ����źű�����
    @note added in version 2.7
    */
    void layerSavedAs( QgsMapLayer* l, const QString& path );
private:
	//! ��Ŀ�˵�
	QAction *mActionNewProject;
	QAction *mActionProjectProperties;
	QAction *mActionSaveMapAsImage;
	QAction *mActionExit;				//done

	//! ��ͼ�˵�
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

	//! ͼ��˵�
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

	//! դ�񹤾�����
	QAction *mActionLocalHistogramStretch;
	QAction *mActionFullHistogramStretch;
	QAction *mActionLocalCumulativeCutStretch;
	QAction *mActionFullCumulativeCutStretch;
	QAction *mActionIncreaseBrightness;
	QAction *mActionDecreaseBrightness;
	QAction *mActionIncreaseContrast;
	QAction *mActionDecreaseContrast;

	//! ��ǩ��������
	QAction *mActionLabeling;
	QAction *mActionShowPinnedLabels;
	QAction *mActionPinLabels;
	QAction *mActionShowHideLabels;
	QAction *mActionMoveLabel;
	QAction *mActionRotateLabel;
	QAction *mActionChangeLabelProperties;

	//! ���ò˵�
	QAction *mActionOptions;
	QAction *mActionCustomProjection;
	//QAction *mActionStyleManagerV2;
	QAction *mActionPasteStyle;
	QAction *mActionCopyStyle;

	//! �ع�㶯��
	QAction *mOpenPosFile;
	QAction *mPosTransform;
	QAction *mPosSketchMap;
	QAction *mPosOneButton;
	QAction *mPosExport;
	QAction *mPosSettings;

	//! ��̬����
	QAction *mPosLinkPhoto;
	QAction *mMatchPosName;

	//! ���ݷ���
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
	QgsMapCanvas *mMapCanvas;	// ��ͼ����
	QgsLayerTreeView *mLayerTreeView;	// ͼ��������
	QgsMessageBar* mInfoBar;	// �ڵ�ͼ��������ʾ��Ϣ
	QgsStatusBarCoordinatesWidget *mCoordsEdit;
	QgsScaleComboBox *mScaleEdit;
	QgsDoubleSpinBox *mRotationEdit;
	QCheckBox *mRenderSuppressionCBox;
	QToolButton *mOnTheFlyProjectionStatusButton;
	QToolButton *mMessageButton;
	QStackedWidget* mStackedWidget; // ����mapcanvas��mapComposor���л�
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
	//! ��־����ʾ��ͼ��ʾ�Ǵ򿪻��ǹر�
	bool mMapTipsVisible;
	//! �ڵ�ͼ�ο�����ϵ��������һ�ε�����
	QgsPoint mLastMapPosition;
	//! ��־����ʾ����Ŀ���ԶԻ�������ô����
	bool mShowProjectionTab;

	//! ���и�����դ�ļ���ʽ�ʺ���FileDialog���ļ������ַ��������ù��캯��.
    QString mRasterFileFilter;

	//! map of transaction group: QPair( providerKey, connString ) -> transactionGroup
	QMap< QPair< QString, QString>, QgsTransactionGroup*> mTransactionGroups;

	QgisAppStyleSheet *mStyleSheetBuilder;

	static UavMain *smInstance;

	Ui::UAVplatformClass ui;

	// POS������
	uavPosDataProcessing *posdp;
	// PP����������
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
