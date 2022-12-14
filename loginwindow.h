#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "selectprogram.h"

QT_BEGIN_NAMESPACE

namespace Ui {

class LoginWindow;
}

QT_END_NAMESPACE

class LoginWindow : public QMainWindow {

    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::LoginWindow *ui;
    SelectProgram *select_Program = new SelectProgram;
    QSqlDatabase my_db;
};

#endif // LOGINWINDOW_H
