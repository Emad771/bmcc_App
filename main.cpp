#include "loginwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    LoginWindow w;
    w.show();
    w.setWindowTitle("Login Window");
    return a.exec();
}
