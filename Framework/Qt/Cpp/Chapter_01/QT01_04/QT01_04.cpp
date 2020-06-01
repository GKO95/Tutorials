/*
Setup Qt application software containing widgets in a main window.
*/

#include <qapplication.h>
#include <qmainwindow.h>
#include <qlabel.h>

int main(int argc, char **argv) {
	QApplication app(argc, argv);
	QMainWindow window;

	// DECLARE label widget with "Hello World!"; pointer to a QLabel in heap memory.
	QLabel *label = new QLabel("Hello World!");

	/*
	IMPORTANT: Widgets are displayed through the CentralWidget in Windows.
	*/

	// SET label widget as the Central Widget of the MainWindow; accepts pointer as argument.
	window.setCentralWidget(label);

	window.show();
	return app.exec();
}