#pragma once

#include <QtWidgets/QMainWindow>
#include <QList>
#include "ui_MoveBlock11.h"

class MoveBlock11 : public QMainWindow
{
	Q_OBJECT

public:
	MoveBlock11(QWidget *parent = Q_NULLPTR);

	// 矫正方块移动防止出范围
	void CheckArea(QPoint &stepP);

	// 初始化窗口使得获取窗口长宽
	void InitWidget();

private:
	Ui::MoveBlock11Class ui;

	QPoint p_orin;
	int m_moveCell;
	bool m_flag;
	bool m_saveflag;
	bool m_itflag;

	// 设置上一步下一步列表
	QList<QPoint> m_hisPos;
	QList<QPoint>::iterator m_itrp;

private slots:
	// 上移
	void MoveShang(bool flag);
	// 下移
	void MoveXia(bool flag);
	// 左移
	void MoveZuo(bool flag);
	// 右移
	void MoveYou(bool flag);
	// 上一步
	void UpStep(bool flag);
	// 下一步
	void NextStep(bool flag);
	
};
