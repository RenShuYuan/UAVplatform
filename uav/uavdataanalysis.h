#ifndef UAVDATAANALYSIS_H
#define UAVDATAANALYSIS_H

#include <QObject>

class uavDataAnalysis : public QObject
{
	Q_OBJECT

public:
	uavDataAnalysis(QObject *parent);
	~uavDataAnalysis();

	// 重叠度分析
	void overlapAnalysis();
	// 倾角分析
	void inclinationAnalysis();
	// 旋角分析
	void rotationAngleAnalysis();
	// 相对高差分析
	void heightDifferenceAnalysis();
private:
	
};

#endif // UAVDATAANALYSIS_H
