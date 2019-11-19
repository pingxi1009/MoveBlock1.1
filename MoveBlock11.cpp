#include "MoveBlock11.h"

MoveBlock11::MoveBlock11(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	int w = ui.widget->width();
	int h = ui.widget->height();
	moveCell = (h - 4) / 3;
	p_orin.setX(moveCell);
	p_orin.setY(moveCell);

	connect(ui.pushButton_shang, SIGNAL(clicked(bool)), this, SLOT(MoveShang(bool)));
	connect(ui.pushButton_xia, SIGNAL(clicked(bool)), this, SLOT(MoveXia(bool)));
	connect(ui.pushButton_zuo, SIGNAL(clicked(bool)), this, SLOT(MoveZuo(bool)));
	connect(ui.pushButton_you, SIGNAL(clicked(bool)), this, SLOT(MoveYou(bool)));

	
}

// 矫正方块移动防止出范围
void MoveBlock11::CheckArea(QPoint &stepP)
{
	// x轴矫正
	if (stepP.x() < 0)
	{
		stepP.setX(0);
	}
	else if (stepP.x() > 3 * moveCell)
	{
		stepP.setX(3 * moveCell);
	}
	else
	{

	}

	// y轴矫正
	if (stepP.y() < 0)
	{
		stepP.setY(0);
	}else if (stepP.y() > 3 * moveCell)
	{
		stepP.setY(3 * moveCell);
	}
	else
	{

	}
}

// 上移
void MoveBlock11::MoveShang(bool flag)
{
	//qDebug("shang");
	p_orin.setY(p_orin.y() - moveCell);
	CheckArea(p_orin);

	// 传到界面上显示
	ui.widget->MoveToArea(p_orin);
}
// 下移
void MoveBlock11::MoveXia(bool flag)
{
	//qDebug("xia");
	p_orin.setY(p_orin.y() + moveCell);
	CheckArea(p_orin);

	// 传到界面上显示
	ui.widget->MoveToArea(p_orin);
}
// 左移
void MoveBlock11::MoveZuo(bool flag)
{
	//qDebug("zuo");
	p_orin.setX(p_orin.x() - moveCell);
	CheckArea(p_orin);

	// 传到界面上显示
	ui.widget->MoveToArea(p_orin);
}
// 右移
void MoveBlock11::MoveYou(bool flag)
{
	//qDebug("you");
	p_orin.setX(p_orin.x() + moveCell);
	CheckArea(p_orin);

	// 传到界面上显示
	ui.widget->MoveToArea(p_orin);
}