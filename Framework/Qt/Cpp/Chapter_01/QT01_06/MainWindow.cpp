#include "MainWindow.h"

MainWindow::MainWindow() {
	setupUi(this);
}

void MainWindow::setupUi(QMainWindow *MainWindow) {
	widget = new QWidget();
	layout = new QBoxLayout(QBoxLayout::TopToBottom, widget);

	label1 = new QLabel("Hello World!");
	label2 = new QLabel("Goodbye World?");

	layout->addWidget(label1);
	layout->addWidget(label2);

	// SET empty widget as the Central Widget of the current object(denoted "this").
	MainWindow->setCentralWidget(widget);

	MainWindow->show();
}