#ifndef CORE_H
#define CORE_H

#include <QObject>
#include <QString>

class QIcon;
class QWidget;
class QStringList;

class uavCore : public QObject
{
	Q_OBJECT
public:
	uavCore(void);
	~uavCore(void);

	//! ����Ĭ��·���µ�ͼ��
	static QIcon getThemeIcon( const QString &theName );

	//! �ڵ�ǰĿ¼�£������Ӽ�������ָ���ļ��У��Ҵ��򷵻�·�������򷵻ؿ�
	static QString getFolder( const QString &folderPath, const QString &name );

	/** �����ļ�
	* @param path		������·�������ļ���
	* @param filters	�������б�
	* @param parent		�����Ϊ������ý��ȿ�
	* @param title		���ȿ�����ʾ���ַ���
	* @return			�������������ļ��б�
	*/
	static QStringList searchFiles( const QString &path, QStringList &filters, QWidget *parent = 0, const QString &title = QString::null );
};

#endif