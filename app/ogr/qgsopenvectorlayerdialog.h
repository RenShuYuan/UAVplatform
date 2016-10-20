/***************************************************************************
                          qgsopenvectorlayerdialog.h
 Dialog to select the type and source for ogr vectors, supports
 file, database, directory and protocol sources.
                             -------------------
    begin                : Mon Jan 2 2009
    copyright            : (C) 2009 by Godofredo Contreras Nava
    email                : frdcn at hotmail.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSOPENVECTORLAYERDIALOG_H
#define QGSOPENVECTORLAYERDIALOG_H

#include <ui_qgsopenvectorlayerdialogbase.h>
#include <QDialog>
#include "qgscontexthelp.h"

/**
 *  Class for a  dialog to select the type and source for ogr vectors, supports
 *  file, database, directory and protocol sources.
 */
class QgsOpenVectorLayerDialog : public QDialog, private Ui::QgsOpenVectorLayerDialogBase
{
    Q_OBJECT

  public:
    QgsOpenVectorLayerDialog( QWidget* parent = nullptr, Qt::WindowFlags fl = nullptr );
    ~QgsOpenVectorLayerDialog();
    //! Opens a dialog to select a file datasource*/
    QStringList openFile();
    //! Opens a dialog to select a directory datasource*/
    QString openDirectory();
    //! Returns a list of selected datasources*/
    QStringList dataSources();
    //! Returns the encoding selected for user*/
    QString encoding();
    //! Returns the connection type
    QString dataSourceType();
  private:
    //! Stores the file vector filters */
    QString mVectorFileFilter;
    //! Stores the selected datasources */
    QStringList mDataSources;
    //! Stores the user selected encoding
    QString mEnc;
    //! Stores the datasource type
    QString mDataSourceType;

  private slots:
    void accept() override;

    void on_buttonSelectSrc_clicked();
    void on_radioSrcFile_toggled( bool checked );
    void on_radioSrcDirectory_toggled( bool checked );
 
    void on_buttonBox_helpRequested() { QgsContextHelp::run( metaObject()->className() ); }
};

#endif // QGSOPENVECTORDIALOG_H
