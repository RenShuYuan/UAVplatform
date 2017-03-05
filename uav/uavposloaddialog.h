#ifndef UAVPOSDIALOG_H
#define UAVPOSDIALOG_H

#include <QDialog>
#include "ui_uavposloaddialog.h"

class QSettings;
class QStringList;
class QgsDelimitedTextFile;

class uavPosLoadDialog : public QDialog
{
	Q_OBJECT

public:
	uavPosLoadDialog(QWidget *parent = 0);
	~uavPosLoadDialog();

signals:
	void readFieldsList(QString &);

private slots:
	void on_buttonBox_accepted();

	// 选择POS文件
	void on_btnOpenPos_clicked();

	// POS文件路径lineEdit
	void on_lePosFile_textChanged();

	// 更新字段列表
	void updateFieldLists();

private:
	// 选择POS文件
	void getOpenFileName();

	// 从界面获得参数，并返回是否有效
	bool loadDelimitedFileDefinition();

	// 返回选择的分隔符
	QString selectedChars();

	void loadSettings();
	void saveSettings();

private:
	Ui::uavposdialog ui;
	QgsDelimitedTextFile *mFile;
	QSettings *mSettings;

	int mExampleRowCount;
	int mBadRowCount;
};

#endif // UAVPOSDIALOG_H
