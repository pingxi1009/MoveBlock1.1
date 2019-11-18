#include "MoveBlock11.h"

MoveBlock11::MoveBlock11(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// 传到界面上显示
	ui.widget->MoveToArea(1, 1);
}
