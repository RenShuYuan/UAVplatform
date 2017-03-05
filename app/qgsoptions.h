/***************************************************************************
                          qgsoptions.h
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
#ifndef QGSOPTIONS_H
#define QGSOPTIONS_H

#include "qgsoptionsdialogbase.h"
#include "ui_qgsoptionsbase.h"
#include "qgisgui.h"
#include "app/qgisappstylesheet.h"
#include "qgsautheditorwidgets.h"
#include "qgscontexthelp.h"

#include <qgscoordinatereferencesystem.h>

#include <QList>

class QgsExpressionContext;

/**
 * \class QgsOptions
 * \brief Set user options and preferences
 */
class APP_EXPORT QgsOptions : public QgsOptionsDialogBase, private Ui::QgsOptionsBase
{
    Q_OBJECT
  public:
    /**
     * Constructor
     * @param parent Parent widget (usually a QgisApp)
     * @param name name for the widget
     * @param modal true for modal dialog
     */
    QgsOptions( QWidget *parent = nullptr, Qt::WindowFlags fl = QgisGui::ModalDialogFlags );
    //! Destructor
    ~QgsOptions();

    /** Sets the page with the specified widget name as the current page
     * @note added in QGIS 2.1
     */
    void setCurrentPage( const QString& pageWidgetName );

  public slots:
    void on_pbnProjectDefaultSetCurrent_clicked();
    //! Slot called when user chooses to change the project wide projection.
    void on_leProjectGlobalCrs_crsChanged( const QgsCoordinateReferenceSystem& crs );
	void crsChanged( const QgsCoordinateReferenceSystem& crs );
    //! Slot called when user chooses to change the default 'on the fly' projection.
    void on_leLayerGlobalCrs_crsChanged( const QgsCoordinateReferenceSystem& crs );
    void on_lstGdalDrivers_itemDoubleClicked( QTreeWidgetItem * item, int column );
    void on_pbnEditCreateOptions_pressed();
    void on_pbnEditPyramidsOptions_pressed();
    void editGdalDriver( const QString& driverName );
    void saveOptions();
    /*!
    * Slot to reset any temporarily applied options on dialog close/cancel */
    void rejectOptions();
    //! Slot to change the theme this is handled when the user

    void iconSizeChanged( const QString &iconSize );

    void uiThemeChanged( const QString &theme );

    /**
     * Return the desired state of newly added layers. If a layer
     * is to be drawn when added to the map, this function returns
     * true.
     */
    bool newVisible();

    /** Slot to select the default font point size for app */
    void on_spinFontSize_valueChanged( int fontSize );

    /** Slot to set font family for app to Qt default */
    void on_mFontFamilyRadioQt_released();

    /** Slot to set font family for app to custom choice */
    void on_mFontFamilyRadioCustom_released();

    /** Slot to select custom font family choice for app */
    void on_mFontFamilyComboBox_currentFontChanged( const QFont& font );

    /** Slot to set whether to use custom group boxes */
    void on_mCustomGroupBoxChkBx_clicked( bool chkd );

    /** Slot to flag restoring/delete window state settings upon restart*/
    void on_mRestoreDefaultWindowStateBtn_clicked();

    /* Let the user add a path to the list of search paths
     * used for finding composer template files. */
    void on_mBtnAddTemplatePath_clicked();

    /* Let the user remove a path from the list of search paths
     * used for finding composer template files. */
    void on_mBtnRemoveTemplatePath_clicked();

    /* Let the user remove a path from the hidden path list
     * for the browser */
    void on_mBtnRemoveHiddenPath_clicked();


    void on_buttonBox_helpRequested() { QgsContextHelp::run( metaObject()->className() ); }

    /** Let the user add a scale to the list of scales
     * used in scale combobox
     */
    void on_pbnAddScale_clicked();

    /** Let the user remove a scale from the list of scales
     * used in scale combobox
     */
    void on_pbnRemoveScale_clicked();

    /** Let the user restore default scales
     * used in scale combobox  */
    void on_pbnDefaultScaleValues_clicked();

    /** Let the user load scales from file */
    void on_pbnImportScales_clicked();

    /** Let the user load scales from file */
    void on_pbnExportScales_clicked();

    /** Auto slot executed when the active page in the option section widget is changed */
    void on_mOptionsStackedWidget_currentChanged( int theIndx );

    /** A scale in the list of predefined scales changed */
    void scaleItemChanged( QListWidgetItem* changedScaleItem );

    /* Load the list of drivers available in GDAL */
    void loadGdalDriverList();

    /* Save the list of which gdal drivers should be used. */
    void saveGdalDriverList();

    void on_mRemoveDefaultTransformButton_clicked();
    void on_mAddDefaultTransformButton_clicked();

    void on_mButtonAddColor_clicked();
    void on_mButtonImportColors_clicked();
    void on_mButtonExportColors_clicked();

  private:
    QSettings *mSettings;
    void initContrastEnhancement( QComboBox *cbox, const QString& name, const QString& defaultVal );
    void saveContrastEnhancement( QComboBox *cbox, const QString& name );
    QgsCoordinateReferenceSystem mDefaultCrs;
    QgsCoordinateReferenceSystem mLayerDefaultCrs;
	QgsProjectionSelectionWidget* leUavLayerGlobalCrs;
    bool mLoadedGdalDriverList;

    void saveDefaultDatumTransformations();

    QListWidgetItem* addScaleToScaleList( const QString &newScale );
    void addScaleToScaleList( QListWidgetItem* newItem );

  protected:
    QgisAppStyleSheet* mStyleSheetBuilder;
    QMap<QString, QVariant> mStyleSheetNewOpts;
    QMap<QString, QVariant> mStyleSheetOldOpts;

    static const int PaletteColorRole = Qt::UserRole + 1;
    static const int PaletteLabelRole = Qt::UserRole + 2;

};

#endif // #ifndef QGSOPTIONS_H
