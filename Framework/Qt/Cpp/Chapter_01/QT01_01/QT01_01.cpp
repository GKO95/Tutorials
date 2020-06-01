/*
Setup Qt application software.
*/

#include <qapplication.h>

int main(int argc, char **argv) {

	// INITIALIZE Qt application software.
	QApplication app(argc, argv);

	/*
	DECLARE QMainWindow here!
	*/

	// EXECUTE Qt application software.
	return app.exec();
}