#include "MoveBlock11.h"

MoveBlock11::MoveBlock11(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// ������������ʾ
	ui.widget->MoveToArea(1, 1);
}
