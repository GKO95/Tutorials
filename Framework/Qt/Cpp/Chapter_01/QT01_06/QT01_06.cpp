/*
Setup Qt application software using empty widget containing child widgets.
*/

#include <qapplication.h>
#include "MainWindow.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	// DECLARE Qt application software's main window via MainWindow.
	MainWindow window;

	return app.exec();
}