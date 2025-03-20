#include "window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(QString::fromUtf8("Привет, Qt!"));
    resize(600,400);
}

MainWindow::~MainWindow() {}
