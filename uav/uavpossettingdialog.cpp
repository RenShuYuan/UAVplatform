#include <QSettings>
#include <QMessageBox>
#include "uavpossettingdialog.h"
#include "uav/uavcore.h"

uavpossettingdialog::uavpossettingdialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QSettings settings;

	ui.toolButton->setAutoRaise( true );
	ui.toolButton->setIcon(QIcon(":/Resources/images/themes/default/mIconProjectionEnabled.png"));

	// 调用坐标系设置
	connect( ui.toolButton, SIGNAL( clicked() ), this, SLOT( setCrs() ) );

	// 参数设置 初始化


	// 曝光点一键处理 初始化
	bool blchk;
	blchk = settings.value("/Uav/pos/chkFormat", true).toBool();
	ui.chkFormat->setChecked(blchk);
	blchk = settings.value("/Uav/pos/chkTransform", true).toBool();
	ui.chkTransform->setChecked(blchk);
	blchk = settings.value("/Uav/pos/chkSketchMap", true).toBool();
	ui.chkSketchMap->setChecked(blchk);

	// 动态联动 初始化
	blchk = settings.value("/Uav/pos/chkLinkPhoto", true).toBool();
	ui.chkLinkPhoto->setChecked(blchk);
	QString strPhotoName = settings.value("/Uav/pos/lePhotoFolder", "photo").toString();
	ui.lepPhotoName->setText(strPhotoName);
	ui.label_14->setEnabled(ui.chkLinkPhoto->isChecked());
	ui.lepPhotoName->setEnabled(ui.chkLinkPhoto->isChecked());

	connect(ui.chkLinkPhoto, SIGNAL(toggled (bool) ), ui.label_14, SLOT( setEnabled (bool) ));
	connect(ui.chkLinkPhoto, SIGNAL(toggled (bool) ), ui.lepPhotoName, SLOT( setEnabled (bool) ));
}

uavpossettingdialog::~uavpossettingdialog()
{

}

void uavpossettingdialog::setCrs()
{

}

void uavpossettingdialog::on_buttonBox_accepted()
{
	QSettings settings;
	settings.setValue("/Uav/pos/chkFormat", ui.chkFormat->isChecked());
	settings.setValue("/Uav/pos/chkTransform", ui.chkTransform->isChecked());
	settings.setValue("/Uav/pos/chkSketchMap", ui.chkSketchMap->isChecked());
	settings.setValue("/Uav/pos/chkLinkPhoto", ui.chkLinkPhoto->isChecked());
	settings.setValue("/Uav/pos/lePhotoFolder", ui.lepPhotoName->text());
}
