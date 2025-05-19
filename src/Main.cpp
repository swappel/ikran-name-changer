#include <QApplication>
#include <QMainWindow>
#include "windows/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow window;
    window.setWindowTitle("Ikran Name Changer");
    window.show();
    return app.exec();
}
