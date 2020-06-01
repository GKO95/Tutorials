#pragma once
#include <qmainwindow.h>
#include <qboxlayout.h>
#include <qwidget.h>
#include <qlabel.h>

// INHERIT attributes from superclass QMainWindow.
class MainWindow :
	public QMainWindow
{
public:
	MainWindow();

	QWidget *widget;
	QBoxLayout *layout;

	QLabel *label1;
	QLabel *label2;

	void setupUi(QMainWindow *MainWindow);
};