#include "../inc/mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // QApplication specializes QGuiApplication with some functionality needed for QWidget-based applications.
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // The exec() family of functions in C++ (inherited from C) is used to replace the current running process with a new process.
    return a.exec();
}
