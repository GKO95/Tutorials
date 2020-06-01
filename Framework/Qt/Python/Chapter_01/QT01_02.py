"""
Setup Qt application software main window.
"""

from PySide2.QtWidgets import QApplication, QMainWindow

if __name__ == '__main__':
    app = QApplication()

    # DECLARE Qt application software's main window.
    window = QMainWindow()

    '''
    INSTALL QLayout to place QWidgets!
    '''

    # PRESENT MainWindow and its child widgets of application software.
    window.show()

    app.exec_()