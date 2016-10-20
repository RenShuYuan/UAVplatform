/***************************************************************************
                          qgsopenvectorlayerdialog.cpp
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
#include <QSettings>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QTextCodec>

#include "qgslogger.h"
#include "qgsopenvectorlayerdialog.h"
#include "qgsvectordataprovider.h"

#include <ogr_api.h>
#include "qgisgui.h"
#include "qgsproviderregistry.h"
#include "qgsogrhelperfunctions.h"
#include "qgscontexthelp.h"

QgsOpenVectorLayerDialog::QgsOpenVectorLayerDialog( QWidget* parent, Qt::WindowFlags fl )
    : QDialog( parent, fl )
{
  setupUi( this );

  radioSrcFile->setChecked( true );
  mDataSourceType = "file";

  //set encoding
  cmbEncodings->addItems( QgsVectorDataProvider::availableEncodings() );

  QSettings settings;
  QString enc = settings.value( "/UI/encoding", "System" ).toString();

  restoreGeometry( settings.value( "/Windows/OpenVectorLayer/geometry" ).toByteArray() );

  // The specified decoding is added if not existing alread, and then set current.
  // This should select it.
  int encindex = cmbEncodings->findText( enc );
  if ( encindex < 0 )
  {
    cmbEncodings->insertItem( 0, enc );
    encindex = 0;
  }
  cmbEncodings->setCurrentIndex( encindex );

  //add directory drivers
  QStringList dirDrivers = QgsProviderRegistry::instance()->directoryDrivers().split( ';' );
  for ( int i = 0; i < dirDrivers.count(); i++ )
  {
    QString dirDriver = dirDrivers.at( i );
    if (( !dirDriver.isEmpty() ) && ( !dirDriver.isNull() ) )
      cmbDirectoryTypes->addItem( dirDriver.split( ',' ).at( 0 ) );
  }

}

QgsOpenVectorLayerDialog::~QgsOpenVectorLayerDialog()
{
  QSettings settings;
  settings.setValue( "/Windows/OpenVectorLayer/geometry", saveGeometry() );
}

QStringList QgsOpenVectorLayerDialog::openFile()
{
  QStringList selectedFiles;
  QgsDebugMsg( "Vector file filters: " + mVectorFileFilter );
  QString enc = encoding();
  QString title = tr( "Open an OGR Supported Vector Layer" );
  QgisGui::openFilesRememberingFilter( "lastVectorFileFilter", mVectorFileFilter, selectedFiles, enc, title );

  return selectedFiles;
}

QString QgsOpenVectorLayerDialog::openDirectory()
{
  QSettings settings;

  bool haveLastUsedDir = settings.contains( "/UI/LastUsedDirectory" );
  QString lastUsedDir = settings.value( "/UI/LastUsedDirectory", QDir::homePath() ).toString();
  if ( !haveLastUsedDir )
    lastUsedDir = "";

  QString path = QFileDialog::getExistingDirectory( this,
                 tr( "Open Directory" ), lastUsedDir,
                 QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks );

  settings.setValue( "/UI/LastUsedDirectory", path );
  //process path if it is grass
  if ( cmbDirectoryTypes->currentText() == "Grass Vector" )
  {
#ifdef Q_OS_WIN
    //replace backslashes with forward slashes
    path.replace( '\\', '/' );
#endif
    path = path + "/head";
  }
  return path;
}

QStringList QgsOpenVectorLayerDialog::dataSources()
{
  return mDataSources;
}

QString QgsOpenVectorLayerDialog::encoding()
{
  return cmbEncodings->currentText();
}

QString QgsOpenVectorLayerDialog::dataSourceType()
{
  return mDataSourceType;
}

void QgsOpenVectorLayerDialog::accept()
{
	QSettings settings;
	QgsDebugMsg( "dialog button accepted" );

	mDataSources.clear();

	if ( radioSrcFile->isChecked() )
	{
		if ( inputSrcDataset->text().isEmpty() )
		{
			QMessageBox::information( this,
				tr( "Add vector layer" ),
				tr( "No layers selected." ) );
			return;
		}

		mDataSources << inputSrcDataset->text().split( ';' );
	}
	else if ( radioSrcDirectory->isChecked() )
	{
		if ( inputSrcDataset->text().isEmpty() )
		{
			QMessageBox::information( this,
				tr( "Add vector layer" ),
				tr( "No directory selected." ) );
			return;
		}

		mDataSources << inputSrcDataset->text();
	}

	// Save the used encoding
	settings.setValue( "/UI/encoding", encoding() );

	QDialog::accept();
}

void QgsOpenVectorLayerDialog::on_buttonSelectSrc_clicked()
{
  if ( radioSrcFile->isChecked() )
  {
    QStringList selected = openFile();
    if ( !selected.isEmpty() )
    {
      inputSrcDataset->setText( selected.join( ";" ) );
      buttonBox->button( QDialogButtonBox::Open )->setFocus();
    }
  }
  else if ( radioSrcDirectory->isChecked() )
  {
    inputSrcDataset->setText( openDirectory() );
  }
}

void QgsOpenVectorLayerDialog::on_radioSrcFile_toggled( bool checked )
{
  if ( checked )
  {
    labelDirectoryType->hide();
    cmbDirectoryTypes->hide();
    fileGroupBox->show();
    layout()->setSizeConstraint( QLayout::SetFixedSize );
    mDataSourceType = "file";
  }
}

void QgsOpenVectorLayerDialog::on_radioSrcDirectory_toggled( bool checked )
{
  if ( checked )
  {
    labelDirectoryType->show();
    cmbDirectoryTypes->show();
    fileGroupBox->show();
    layout()->setSizeConstraint( QLayout::SetFixedSize );
    mDataSourceType = "directory";
  }
}

//********************end auto connected slots *****************/