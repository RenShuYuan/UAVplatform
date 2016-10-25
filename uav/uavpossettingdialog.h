#ifndef UAVPOSSETTINGDIALOG_H
#define UAVPOSSETTINGDIALOG_H

#include <QDialog>
#include "ui_uavpossettingdialog.h"
#include "qgscoordinatereferencesystem.h"

class QgsProjectionSelectionWidget;

class uavpossettingdialog : public QDialog
{
	Q_OBJECT

public:
	uavpossettingdialog(QWidget *parent = 0);
	~uavpossettingdialog();

private slots:
	void crsChanged( const QgsCoordinateReferenceSystem& crs );
	void on_buttonBox_accepted();

private:
	Ui::uavpossettingdialog ui;
	QgsCoordinateReferenceSystem mDefaultCrs;
	QgsProjectionSelectionWidget *leProjectGlobalCrs;
};

#endif // UAVPOSSETTINGDIALOG_H
