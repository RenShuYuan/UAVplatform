#ifndef UAVDATAANALYSIS_H
#define UAVDATAANALYSIS_H

#include <QObject>

class uavDataAnalysis : public QObject
{
	Q_OBJECT

public:
	uavDataAnalysis(QObject *parent);
	~uavDataAnalysis();

	// �ص��ȷ���
	void overlapAnalysis();
	// ��Ƿ���
	void inclinationAnalysis();
	// ���Ƿ���
	void rotationAngleAnalysis();
	// ��Ը߲����
	void heightDifferenceAnalysis();
private:
	
};

#endif // UAVDATAANALYSIS_H
