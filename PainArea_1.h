#pragma once
#include <QWidget>
class PainArea_1 : public QWidget
{
public:
	PainArea_1(QWidget *parent);
	~PainArea_1();

	// �ƶ�����
	void MoveToArea(QPoint p, bool flag);

	// �󳤷���ת��С�������е�����
	QPoint BigToLittle(QPoint p);
	// С������ת���󳤷����е�����
	QPoint LittleToBig(QPoint p);
private:
	void paintEvent(QPaintEvent * event);
	QPoint m_point;
	bool m_flag;
};

