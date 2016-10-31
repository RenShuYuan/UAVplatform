#include <QIcon>
#include <QFile>
#include <QDir>
#include <QDirIterator>
#include <QProgressDialog>
#include <QApplication>
#include <QDebug>

#include "uavcore.h"

uavCore::uavCore(void)
{
}


uavCore::~uavCore(void)
{
}

QIcon uavCore::getThemeIcon( const QString &theName )
{
	QString defaultThemePath = "Resources/images/themes/default/" + theName;

	if ( QFile::exists( defaultThemePath ) )
	{
		//could still return an empty icon if it
		//doesnt exist in the default theme either!
		return QIcon( defaultThemePath );
	}
	else
	{
		return QIcon();
	}
}

QString uavCore::getFolder( const QString &folder, const QString &name )
{
	QDir dir(folder);

	//ÅÐ¶ÏÂ·¾¶ÊÇ·ñ´æÔÚ
	if (!dir.exists())
	{
		return "";
	}

	QDirIterator dirIterator(folder, 
		QDir::Dirs | QDir::NoSymLinks | QDir::NoDotAndDotDot, 
		QDirIterator::Subdirectories);

	while (dirIterator.hasNext())
	{
		dirIterator.next();
		QFileInfo file_info = dirIterator.fileInfo();
		qDebug() << file_info.fileName() << "::" << file_info.baseName();
		if (file_info.baseName() == name)
		{
			return file_info.filePath();
		}
	}

	return "";
}

QStringList uavCore::searchFiles( const QString &path, QStringList &filters )
{
	QStringList list;

	QDir dir(path);
	if (!dir.exists())
	{
		return list;
	}

	QDirIterator dir_iterator(path, filters, QDir::Files | QDir::NoSymLinks, QDirIterator::Subdirectories);
	while (dir_iterator.hasNext())
	{
		dir_iterator.next();
		QFileInfo file_info = dir_iterator.fileInfo();
		list.append(file_info.filePath());
	}
	return list;
}
