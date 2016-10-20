#ifndef UAVPOSSETTINGDIALOG_H
#define UAVPOSSETTINGDIALOG_H

#include <QDialog>
#include "ui_uavpossettingdialog.h"

class uavpossettingdialog : public QDialog
{
	Q_OBJECT

public:
	uavpossettingdialog(QWidget *parent = 0);
	~uavpossettingdialog();

public slots:
	// 设置参考坐标系
	void setCrs();

private slots:
	void on_buttonBox_accepted();

private:
	Ui::uavpossettingdialog ui;
};

#endif // UAVPOSSETTINGDIALOG_H
