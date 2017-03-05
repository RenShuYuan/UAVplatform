#include "uav/uavmain.h"
#include <QtGui/QApplication>
#include <QTextCodec>
#include <QSettings>
#include <QDir>
#include <QTranslator>

#include "qgsapplication.h"	
#include "qgseditorwidgetregistry.h"

int main(int argc, char *argv[])
{
	/* ���ó�֧������ */
	QTextCodec *codec=QTextCodec::codecForName("System");
	QTextCodec::setCodecForLocale(codec);
	QTextCodec::setCodecForCStrings(codec);
	QTextCodec::setCodecForTr(codec);

	//! ʹ�� QSettings
	QCoreApplication::setOrganizationName( "YuanLong" );
	QCoreApplication::setApplicationName( "uavplatform" );

	QgsApplication a(argc, argv, true);
	a.setWindowIcon( QIcon( "plane.ico" ) );
	QgsApplication::setDefaultSvgPaths( QStringList( QDir::currentPath()+"/Resources/images/svg" ) );
	QgsApplication::setPrefixPath( QDir::currentPath(), true );
	QgsApplication::init(QDir::currentPath()+"/Resources");
	QgsApplication::initQgis();

	// ʹ�÷����ļ�
	QTranslator qtTranslator; 
	qtTranslator.load("qgis_zh-Hans.qm"); 
	a.installTranslator(&qtTranslator);

	UavMain uav;
	uav.setWindowState(Qt::WindowMaximized);
	uav.setWindowTitle("���˻�����Ӱ��Эͬ�Ż����");
	uav.show();

	QgsEditorWidgetRegistry::initEditors();

	return a.exec();
}
