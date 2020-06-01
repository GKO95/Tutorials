"""
Setup Qt application software with QLabel widget as a main window.
"""

from PySide2.QtWidgets import QApplication, QLabel

if __name__ == '__main__':
    app = QApplication()

    # DECLARE label widget with "Hello World!".
    label = QLabel("Hello World!")

    '''
    IMPORTANT: Widget without any parent widget is a top - level widget, called window.
	'''	

    # PRESENT label widget and its child widgets of application software.
    label.show()

    app.exec_()