#pragma once
#include <QWidget>
class PainArea_1 : public QWidget
{
public:
	PainArea_1(QWidget *parent);
	~PainArea_1();

	// 移动函数
	void MoveToArea(QPoint p, bool flag);

	// 大长方形转到小正方形中的坐标
	QPoint BigToLittle(QPoint p);
	// 小正方形转到大长方形中的坐标
	QPoint LittleToBig(QPoint p);
private:
	void paintEvent(QPaintEvent * event);
	QPoint m_point;
	bool m_flag;
};

