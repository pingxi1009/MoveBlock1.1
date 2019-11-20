#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MoveBlock11.h"

class MoveBlock11 : public QMainWindow
{
	Q_OBJECT

public:
	MoveBlock11(QWidget *parent = Q_NULLPTR);

	// 矫正方块移动防止出范围
	void CheckArea(QPoint &stepP);

	void InitWidget();

private:
	Ui::MoveBlock11Class ui;

	QPoint p_orin;
	int m_moveCell;
	bool m_flag;
	bool m_saveflag;

private slots:
	// 上移
	void MoveShang(bool flag);
	// 下移
	void MoveXia(bool flag);
	// 左移
	void MoveZuo(bool flag);
	// 右移
	void MoveYou(bool flag);
	
};
