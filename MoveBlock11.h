#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MoveBlock11.h"

class MoveBlock11 : public QMainWindow
{
	Q_OBJECT

public:
	MoveBlock11(QWidget *parent = Q_NULLPTR);

	// ���������ƶ���ֹ����Χ
	void CheckArea(QPoint &stepP);

	void InitWidget();

private:
	Ui::MoveBlock11Class ui;

	QPoint p_orin;
	int m_moveCell;
	bool m_flag;
	bool m_saveflag;

private slots:
	// ����
	void MoveShang(bool flag);
	// ����
	void MoveXia(bool flag);
	// ����
	void MoveZuo(bool flag);
	// ����
	void MoveYou(bool flag);
	
};
