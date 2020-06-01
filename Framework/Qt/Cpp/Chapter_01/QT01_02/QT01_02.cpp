/*
Setup Qt application software main window.
*/

#include <qapplication.h>
#include <qmainwindow.h>

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	// DECLARE Qt application software's main window.
	QMainWindow window;

	/*
	INSTALL QLayout to place QWidgets!
	*/

	// PRESENT MainWindow and its child widgets of application software.
	window.show();

	return app.exec();
}