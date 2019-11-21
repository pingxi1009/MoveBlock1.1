#pragma once

#include <QtWidgets/QMainWindow>
#include <QList>
#include "ui_MoveBlock11.h"

class MoveBlock11 : public QMainWindow
{
	Q_OBJECT

public:
	MoveBlock11(QWidget *parent = Q_NULLPTR);

	// ���������ƶ���ֹ����Χ
	void CheckArea(QPoint &stepP);

	// ��ʼ������ʹ�û�ȡ���ڳ���
	void InitWidget();

private:
	Ui::MoveBlock11Class ui;

	QPoint p_orin;
	int m_moveCell;
	bool m_flag;
	bool m_saveflag;
	bool m_itflag;

	// ������һ����һ���б�
	QList<QPoint> m_hisPos;
	QList<QPoint>::iterator m_itrp;

private slots:
	// ����
	void MoveShang(bool flag);
	// ����
	void MoveXia(bool flag);
	// ����
	void MoveZuo(bool flag);
	// ����
	void MoveYou(bool flag);
	// ��һ��
	void UpStep(bool flag);
	// ��һ��
	void NextStep(bool flag);
	
};
