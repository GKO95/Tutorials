"""
Setup Qt application software using empty widget containing child widgets.
"""

from PySide2.QtWidgets import QApplication, QMainWindow, QWidget, QLabel, QVBoxLayout

if __name__ == '__main__':
    app = QApplication()
    window = QMainWindow()

    # DECLARE empty widget with vertical box layout installed.
    widget = QWidget()
    layout = QVBoxLayout(widget)

    '''
    IMPORTANT: To add child widgets first requires layout as a placeholder.
    '''

    # DECLARE label widgets with "Hello World!" and "Goodbye World?"
    label1 = QLabel("Hello World!")
    label2 = QLabel("Goodbye World?")

    # INSERT label widgets to the layout installed on the widget.
    layout.addWidget(label1)
    layout.addWidget(label2)

    # SET empty widget as the Central Widget of the QMainWindow.
    window.setCentralWidget(widget)

    window.show()
    app.exec_()