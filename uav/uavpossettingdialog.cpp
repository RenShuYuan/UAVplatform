#include <QSettings>
#include <QMessageBox>
#include "uavpossettingdialog.h"
#include "uavcore.h"

#include "qgsprojectionselectionwidget.h"

uavpossettingdialog::uavpossettingdialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QSettings settings;

	// 添加参照坐标系选择小组件
	leProjectGlobalCrs = new QgsProjectionSelectionWidget(this);
	QString myDefaultCrs = settings.value( "/Uav/pos/options/projectDefaultCrs", GEO_EPSG_CRS_AUTHID ).toString();
	mDefaultCrs.createFromOgcWmsCrs( myDefaultCrs );
	leProjectGlobalCrs->setCrs( mDefaultCrs );
	leProjectGlobalCrs->setOptionVisible( QgsProjectionSelectionWidget::DefaultCrs, false );
	ui.gridLayout->addWidget(leProjectGlobalCrs, 0, 1, 1, 2);
	connect( leProjectGlobalCrs, SIGNAL( crsChanged(const QgsCoordinateReferenceSystem&) ), this, SLOT( crsChanged(const QgsCoordinateReferenceSystem&) ) );

	// 参数设置
	QString strText;
	strText = settings.value("/Uav/pos/options/leFocal", "").toString();
	ui.lineEdit_2->setText(strText);
	strText = settings.value("/Uav/pos/options/lePixelSize", "").toString();
	ui.lineEdit_3->setText(strText);
	strText = settings.value("/Uav/pos/options/leHeight", "").toString();
	ui.lineEdit_4->setText(strText);
	strText = settings.value("/Uav/pos/options/leWidth", "").toString();
	ui.lineEdit_5->setText(strText);
	strText = settings.value("/Uav/pos/options/leAverageEle", "0").toString();
	ui.lineEdit_6->setText(strText);

	// 曝光点一键处理 初始化
	bool blchk;
	blchk = settings.value("/Uav/pos/options/chkFormat", true).toBool();
	ui.chkFormat->setChecked(blchk);
	blchk = settings.value("/Uav/pos/options/chkTransform", true).toBool();
	ui.chkTransform->setChecked(blchk);
	blchk = settings.value("/Uav/pos/options/chkSketchMap", true).toBool();
	ui.chkSketchMap->setChecked(blchk);

	// 动态联动 初始化
	blchk = settings.value("/Uav/pos/options/chkLinkPhoto", true).toBool();
	ui.chkLinkPhoto->setChecked(blchk);
	QString strPhotoName = settings.value("/Uav/pos/options/lePhotoFolder", "photo").toString();
	ui.lepPhotoName->setText(strPhotoName);
	ui.label_14->setEnabled(ui.chkLinkPhoto->isChecked());
	ui.lepPhotoName->setEnabled(ui.chkLinkPhoto->isChecked());

	connect(ui.chkLinkPhoto, SIGNAL(toggled (bool) ), ui.label_14, SLOT( setEnabled (bool) ));
	connect(ui.chkLinkPhoto, SIGNAL(toggled (bool) ), ui.lepPhotoName, SLOT( setEnabled (bool) ));
}

uavpossettingdialog::~uavpossettingdialog()
{

}

void uavpossettingdialog::on_buttonBox_accepted()
{
	QSettings settings;
	settings.setValue( "/Uav/pos/options/projectDefaultCrs", mDefaultCrs.authid() );
	settings.setValue( "/Uav/pos/options/leFocal", ui.lineEdit_2->text() );
	settings.setValue( "/Uav/pos/options/lePixelSize", ui.lineEdit_3->text() );
	settings.setValue( "/Uav/pos/options/leHeight", ui.lineEdit_4->text() );
	settings.setValue( "/Uav/pos/options/leWidth", ui.lineEdit_5->text() );
	settings.setValue( "/Uav/pos/options/leAverageEle", ui.lineEdit_6->text() );
	
	settings.setValue("/Uav/pos/options/chkFormat", ui.chkFormat->isChecked());
	settings.setValue("/Uav/pos/options/chkTransform", ui.chkTransform->isChecked());
	settings.setValue("/Uav/pos/options/chkSketchMap", ui.chkSketchMap->isChecked());
	settings.setValue("/Uav/pos/options/chkLinkPhoto", ui.chkLinkPhoto->isChecked());
	settings.setValue("/Uav/pos/options/lePhotoFolder", ui.lepPhotoName->text());
}

void uavpossettingdialog::crsChanged( const QgsCoordinateReferenceSystem& crs )
{
	mDefaultCrs = crs;
}
