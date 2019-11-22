#include "MoveBlock11.h"
#include <QDebug>

MoveBlock11::MoveBlock11(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	m_flag = true;
	m_saveflag = true;
	m_itflag = true;

	ui.pushButton_next->setDisabled(true);
	ui.pushButton_up->setDisabled(true);
	m_hisPos.clear();

	connect(ui.pushButton_shang, SIGNAL(clicked(bool)), this, SLOT(MoveShang(bool)));
	connect(ui.pushButton_xia, SIGNAL(clicked(bool)), this, SLOT(MoveXia(bool)));
	connect(ui.pushButton_zuo, SIGNAL(clicked(bool)), this, SLOT(MoveZuo(bool)));
	connect(ui.pushButton_you, SIGNAL(clicked(bool)), this, SLOT(MoveYou(bool)));
	
	connect(ui.pushButton_up, SIGNAL(clicked(bool)), this, SLOT(UpStep(bool)));
	connect(ui.pushButton_next, SIGNAL(clicked(bool)), this, SLOT(NextStep(bool)));
}

// ��ʼ������ʹ�û�ȡ���ڳ���
void MoveBlock11::InitWidget()
{
	int w = ui.widget->width();
	int h = ui.widget->height();
	//qDebug() << "w = " << w << " " << "h = " << h;
	m_moveCell = (h - 4) / 3;
	p_orin.setX(m_moveCell);
	p_orin.setY(m_moveCell);

	////����
	//QList<int> temp_i;
	//temp_i.append(1);
	//qDebug() << *temp_i.begin() << " " << *temp_i.end();

	// ��ʼ����һ����
	m_hisPos.append(p_orin);
	m_itrp = m_hisPos.end();
	qDebug() << "��ʼ��" <<(*m_itrp).x() << (*m_itrp).y();
}

// ���������ƶ���ֹ����Χ
void MoveBlock11::CheckArea(QPoint &stepP)
{
	// x�����
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

	// y�����
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

// ����
void MoveBlock11::MoveShang(bool flag)
{
	if (m_itrp == m_hisPos.end())
	{
		ui.pushButton_next->setDisabled(true);
	}

	ui.pushButton_up->setDisabled(false);
	if (m_saveflag)
	{
		InitWidget();
		m_saveflag = false;
	}

	if (m_itrp != m_hisPos.end())
	{
		m_hisPos.erase(m_itrp, m_hisPos.end());
	}
	
	//qDebug("shang");
	p_orin.setY(p_orin.y() - m_moveCell);
	CheckArea(p_orin);

	m_hisPos.append(p_orin);
	m_itrp = m_hisPos.end();

	// ������������ʾ
	ui.widget->MoveToArea(p_orin, m_flag);
}
// ����
void MoveBlock11::MoveXia(bool flag)
{
	if (m_itrp == m_hisPos.end())
	{
		ui.pushButton_next->setDisabled(true);
	}

	ui.pushButton_up->setDisabled(false);
	if (m_saveflag)
	{
		InitWidget();
		m_saveflag = false;
	}

	if (m_itrp != m_hisPos.end())
	{
		m_hisPos.erase(m_itrp, m_hisPos.end());
	}

	//qDebug("xia");
	p_orin.setY(p_orin.y() + m_moveCell);
	CheckArea(p_orin);
	
	m_hisPos.append(p_orin);
	m_itrp = m_hisPos.end();

	// ������������ʾ
	ui.widget->MoveToArea(p_orin, m_flag);
}
// ����
void MoveBlock11::MoveZuo(bool flag)
{
	if (m_itrp == m_hisPos.end())
	{
		ui.pushButton_next->setDisabled(true);
	}

	ui.pushButton_up->setDisabled(false);
	if (m_saveflag)
	{
		InitWidget();
		m_saveflag = false;
	}

	if (m_itrp != m_hisPos.end())
	{
		m_hisPos.erase(m_itrp, m_hisPos.end());
	}

	//qDebug("zuo");
	p_orin.setX(p_orin.x() - m_moveCell);
	CheckArea(p_orin);
	
	m_hisPos.append(p_orin);
	m_itrp = m_hisPos.end();

	// ������������ʾ
	ui.widget->MoveToArea(p_orin, m_flag);
}
// ����
void MoveBlock11::MoveYou(bool flag)
{
	if (m_itrp == m_hisPos.end())
	{
		ui.pushButton_next->setDisabled(true);
	}

	ui.pushButton_up->setDisabled(false);
	if (m_saveflag)
	{
		InitWidget();
		m_saveflag = false;
	}

	if (m_itrp != m_hisPos.end())
	{
		m_hisPos.erase(m_itrp, m_hisPos.end());
	}

	//qDebug("you");
	p_orin.setX(p_orin.x() + m_moveCell);
	CheckArea(p_orin);
	
	m_hisPos.append(p_orin);
	m_itrp = m_hisPos.end();

	// ������������ʾ
	ui.widget->MoveToArea(p_orin, m_flag);
}

// ��һ��
void MoveBlock11::UpStep(bool flag)
{
	//QList<QPoint>::iterator itp = m_hisPos.end();
	//--m_itrp;
	qDebug() << (*m_itrp).x() << (*m_itrp).y();
	if (m_itflag)
	{
		m_itrp = m_itrp - 2;
		m_itflag = false;
	}
	else
	{
		m_itrp = m_itrp - 1;
	}

	if (m_itrp == m_hisPos.begin())
	{
		ui.pushButton_up->setDisabled(true);
	}

	ui.widget->MoveToArea(*m_itrp, m_flag);
	ui.pushButton_next->setDisabled(false);
	QPoint temp_p(*m_itrp);
	qDebug() << temp_p.x() << temp_p.y();
}
// ��һ��
void MoveBlock11::NextStep(bool flag)
{
	m_itrp = m_itrp + 1;
	
	ui.widget->MoveToArea(*m_itrp, m_flag);

	QList<QPoint>::iterator itrp_Temp;
	itrp_Temp = m_itrp + 1;
	if (itrp_Temp == m_hisPos.end())
	{
		ui.pushButton_next->setDisabled(true);
		ui.pushButton_up->setDisabled(false);
	}
}