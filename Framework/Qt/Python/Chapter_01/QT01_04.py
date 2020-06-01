"""
Setup Qt application software containing widgets in a main window.
"""

from PySide2.QtWidgets import QApplication, QMainWindow, QLabel

if __name__ == '__main__':
    app = QApplication()
    window = QMainWindow()

    # DECLARE label widget with "Hello World!"
    label = QLabel("Hello World!")

    '''
    IMPORTANT: Widgets are displayed through the CentralWidget in Windows.
    '''

    # SET label widget as the Central Widget of the MainWindow.
    window.setCentralWidget(label)

    window.show()
    app.exec_()