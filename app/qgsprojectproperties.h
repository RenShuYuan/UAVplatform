/***************************************************************************
                             qgsprojectproperties.h
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


#include "qgsoptionsdialogbase.h"
#include "ui_qgsprojectpropertiesbase.h"
#include "qgis.h"
#include "qgisgui.h"
#include "qgscontexthelp.h"

class QgsMapCanvas;
class QgsLayerTreeGroup;

/** Dialog to set project level properties

  @note actual state is stored in QgsProject singleton instance

 */
class APP_EXPORT QgsProjectProperties : public QgsOptionsDialogBase, private Ui::QgsProjectPropertiesBase
{
    Q_OBJECT

  public:
    //! 构造函数
    QgsProjectProperties( QgsMapCanvas* mapCanvas, QWidget *parent = nullptr, Qt::WindowFlags fl = QgisGui::ModalDialogFlags );

    //! 析构函数
    ~QgsProjectProperties();

    /** 获取当前选定的地图单位
     */
    QGis::UnitType mapUnits() const;

    /*!
     * 设置地图单位
     */
    void setMapUnits( QGis::UnitType );

    /*!
       每个项目都有一个标题
     */
    QString title() const;
    void title( QString const & title );

    /** 表示该投影开关接通 */
    bool isProjected();

  public slots:
    /*!
     * 应用按钮(slot)
     */
    void apply();

    /*!
     * 对话框显示投影选项卡打开时(slot)
     */
    void showProjectionsTab();

    /** 让用户的比例添加到组合框的规模，而不是那些全球项目使用比例列表 */
    void on_pbnAddScale_clicked();

    /** 让用户在规模组合框，而不是那些全球项目使用比例列表中删除规模 */
    void on_pbnRemoveScale_clicked();

    /** 让用户从文件中加载比例 */
    void on_pbnImportScales_clicked();

    /** 让用户将比例导出到文件 */
    void on_pbnExportScales_clicked();

    /** A scale in the list of project scales changed 在项目尺度的列表的比例尺变化*/
    void scaleItemChanged( QListWidgetItem* changedScaleItem );

    /*!
     * Slot to show the context help for this dialog
     */
    void on_buttonBox_helpRequested() { QgsContextHelp::run( metaObject()->className() ); }

    void on_cbxProjectionEnabled_toggled( bool onFlyEnabled );

    /*!
      * 如果用户更改了CSS，设置相应的地图单位
      */
    void srIdUpdated();

    /* 根据所选择的新的索引更新的ComboBox另外设置新选定椭球。*/
    void updateEllipsoidUI( int newIndex );

    //! 设置正确的椭球测量（设置）
    void projectionSelectorInitialized();

  signals:
    //! 用来通知鼠标显示精度可能已经改变
    void displayPrecisionChanged();

    //! 用于通知侦听项目比例列表可能已经改变
    void scalesChanged( const QStringList &scales = QStringList() );

    //! 让画布知道刷新
    void refresh();

  private:

    //! 坐标显示格式
    enum CoordinateFormat
    {
      DecimalDegrees, /*!< 十进制度 */
      DegreesMinutes, /*!< 度, 分 */
      DegreesMinutesSeconds, /*!< 度，分，秒*/
      MapUnits, /*! 显示地图坐标单位 */
    };

    QgsMapCanvas* mMapCanvas;

    /*!
     * 保存非基本对话状态
     */
    void saveState();

    /*!
     * 功能恢复非基本对话状态
     */
    void restoreState();

    long mProjectSrsId;
    long mLayerSrsId;

    // 列表中的所有椭球体，也没有和自定义
    struct EllipsoidDefs
    {
      QString acronym;
      QString description;
      double semiMajor;
      double semiMinor;
    };
    QList<EllipsoidDefs> mEllipsoidList;
    int mEllipsoidIndex;

	//! 从SQLITE3 db中填充椭球体列表
    void populateEllipsoidList();

    //! 创建一个新的比例尺项，并将其添加到比例列表
    QListWidgetItem* addScaleToScaleList( const QString &newScale );

	//! 添加一个比例尺项到比例尺列表
    void addScaleToScaleList( QListWidgetItem* newItem );

    static const char * GEO_NONE_DESC;

    void updateGuiForMapUnits( QGis::UnitType units );
};
