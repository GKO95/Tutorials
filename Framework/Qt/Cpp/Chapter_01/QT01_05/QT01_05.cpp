/*
Object-oriented programming of QT_05 example.
*/

#include <qapplication.h>
#include <qmainwindow.h>
#include <qboxlayout.h>
#include <qwidget.h>
#include <qlabel.h>

int main(int argc, char **argv) {
	QApplication app(argc, argv);
	QMainWindow window;

	// DECLARE empty widget with vertical box layout installed.
	QWidget *widget = new QWidget();
	QBoxLayout *layout = new QBoxLayout(QBoxLayout::TopToBottom, widget);

	/*
	IMPORTANT: To add child widgets first requires layout as a placeholder.
	*/

	// DECLARE label widgets with "Hello World!" and "Goodbye World?".
	QLabel *label1 = new QLabel("Hello World!");
	QLabel *label2 = new QLabel("Goodbye World?");

	// INSERT label widgets to the layout installed on the widget.
	layout->addWidget(label1);
	layout->addWidget(label2);

	// SET empty widget as the Central Widget of the QMainWindow.
	window.setCentralWidget(widget);

	window.show();
	return app.exec();
}