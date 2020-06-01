"""
Object-oriented programming of QT_05 example.
"""

from PySide2.QtWidgets import QApplication, QMainWindow, QWidget, QLabel, QVBoxLayout

class MainWindow(QMainWindow):
    def __init__(self):
        # INHERIT attributes from superclass QMainWindow.
        super().__init__()

        widget = QWidget()
        layout = QVBoxLayout(widget)

        label1 = QLabel("Hello World!")
        label2 = QLabel("Goodbye World?")

        layout.addWidget(label1)
        layout.addWidget(label2)

        # SET empty widget as the Central Widget of the current object (denoted "self").
        self.setCentralWidget(widget)
        self.show()


if __name__ == '__main__':
    app = QApplication()

    # DECLARE Qt application software's main window via MainWindow.
    window = MainWindow()

    app.exec_()