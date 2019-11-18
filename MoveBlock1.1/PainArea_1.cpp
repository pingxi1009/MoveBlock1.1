#include "PainArea_1.h"
#include <QPainter>


PainArea_1::PainArea_1(QWidget *parent):QWidget(parent)
{
	//update();
}


PainArea_1::~PainArea_1()
{
}

void PainArea_1::MoveToArea(int x, int y)
{

}

// 大长方形转到小正方形中的坐标
QPoint PainArea_1::BigToLittle(QPoint p)
{
	int w = width(), h = height();
	int px = p.x() - w / 2 - h / 2 + 2;
	int py = p.y() - 2;
	return QPoint(px, py);
}
// 小正方形转到大长方形中的坐标
QPoint PainArea_1::LittleToBig(QPoint p)
{
	int w = width(), h = height();
	int px = p.x() + w / 2 - h / 2 - 2;
	int py = p.y() + 2;
	return QPoint(px, py);
}


void PainArea_1::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	//painter.setRenderHint(QPainter::Antialiasing);

	// 背景透明
	int w = width(), h = height();

	// 设置背景正方形
	painter.setBrush(QColor(0x00, 0x00, 0x00, 0xAA));
	painter.drawRect(w/2-h/2+2, 2, h-4, h-4);

	// 设置分割线
	painter.setPen(QColor(0xFF, 0xFF, 0xFF));
	painter.drawLine(LittleToBig(QPoint((h - 4) / 3, 0)), LittleToBig(QPoint((h-4)/3, h-4)));
	painter.drawLine(LittleToBig(QPoint(2*(h - 4) / 3, 0)), LittleToBig(QPoint(2*(h - 4) / 3, h - 4)));
	painter.drawLine(LittleToBig(QPoint(0, (h - 4) / 3)), LittleToBig(QPoint(h - 4, (h - 4) / 3)));
	painter.drawLine(LittleToBig(QPoint(0, 2 * (h - 4) / 3)), LittleToBig(QPoint(h - 4, 2 * (h - 4) / 3)));

	// 画出方块初始位置
	painter.setBrush(QColor(0x22, 0x22, 0xFF));
	painter.drawRect(LittleToBig(QPoint((h - 4) / 3, (h - 4) / 3)).x(), LittleToBig(QPoint((h - 4) / 3, (h - 4) / 3)).y(), (h - 4)/3, (h - 4) / 3);




}

