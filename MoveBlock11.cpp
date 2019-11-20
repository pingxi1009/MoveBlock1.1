#include "MoveBlock11.h"
#include <QDebug>

MoveBlock11::MoveBlock11(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	

	m_flag = true;
	m_saveflag = true;

	connect(ui.pushButton_shang, SIGNAL(clicked(bool)), this, SLOT(MoveShang(bool)));
	connect(ui.pushButton_xia, SIGNAL(clicked(bool)), this, SLOT(MoveXia(bool)));
	connect(ui.pushButton_zuo, SIGNAL(clicked(bool)), this, SLOT(MoveZuo(bool)));
	connect(ui.pushButton_you, SIGNAL(clicked(bool)), this, SLOT(MoveYou(bool)));
	
	connect(ui.pushButton_up, SIGNAL(clicked(bool)), this, SLOT(UpStep(bool)));
	connect(ui.pushButton_next, SIGNAL(clicked(bool)), this, SLOT(NextStep(bool)));
}

void MoveBlock11::InitWidget()
{
	int w = ui.widget->width();
	int h = ui.widget->height();
	//qDebug() << "w = " << w << " " << "h = " << h;
	m_moveCell = (h - 4) / 3;
	p_orin.setX(m_moveCell);
	p_orin.setY(m_moveCell);
}

// 矫正方块移动防止出范围
void MoveBlock11::CheckArea(QPoint &stepP)
{
	// x轴矫正
	if (stepP.x() < 0)
	{
		stepP.setX(0);
	}
	else if (stepP.x() > 2 * m_moveCell)
	{
		stepP.setX(2 * m_moveCell);
	}
	else
	{

	}

	// y轴矫正
	if (stepP.y() < 0)
	{
		stepP.setY(0);
	}else if (stepP.y() > 2 * m_moveCell)
	{
		stepP.setY(2 * m_moveCell);
	}
	else
	{

	}
}

// 上移
void MoveBlock11::MoveShang(bool flag)
{
	if (m_saveflag)
	{
		InitWidget();
		m_saveflag = false;
	}
	
	//qDebug("shang");
	p_orin.setY(p_orin.y() - m_moveCell);
	CheckArea(p_orin);

	// 传到界面上显示
	ui.widget->MoveToArea(p_orin, m_flag);
}
// 下移
void MoveBlock11::MoveXia(bool flag)
{
	if (m_saveflag)
	{
		InitWidget();
		m_saveflag = false;
	}

	//qDebug("xia");
	p_orin.setY(p_orin.y() + m_moveCell);
	CheckArea(p_orin);

	// 传到界面上显示
	ui.widget->MoveToArea(p_orin, m_flag);
}
// 左移
void MoveBlock11::MoveZuo(bool flag)
{
	if (m_saveflag)
	{
		InitWidget();
		m_saveflag = false;
	}

	//qDebug("zuo");
	p_orin.setX(p_orin.x() - m_moveCell);
	CheckArea(p_orin);

	// 传到界面上显示
	ui.widget->MoveToArea(p_orin, m_flag);
}
// 右移
void MoveBlock11::MoveYou(bool flag)
{
	if (m_saveflag)
	{
		InitWidget();
		m_saveflag = false;
	}

	//qDebug("you");
	p_orin.setX(p_orin.x() + m_moveCell);
	CheckArea(p_orin);

	// 传到界面上显示
	ui.widget->MoveToArea(p_orin, m_flag);
}

// 上一步
void MoveBlock11::UpStep(bool flag)
{

}
// 下一步
void MoveBlock11::NextStep(bool flag)
{

}