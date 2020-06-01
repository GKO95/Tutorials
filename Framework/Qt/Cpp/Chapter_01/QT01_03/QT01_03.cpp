/*
Setup Qt application software with QLabel widget as a main window.
*/

#include <qapplication.h>
#include <qlabel.h>

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	// DECLARE label widget with "Hello World!".
	QLabel label("Hello World!");

	/*
	IMPORTANT: Widget without any parent widget is a top - level widget, called window.
	*/

	// PRESENT label widget and its child widgets of application software.
	label.show();

	return app.exec();
}