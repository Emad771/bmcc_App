#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::LoginWindow) {

    ui->setupUi(this);

    my_db = QSqlDatabase::addDatabase("QSQLITE");
    my_db.setDatabaseName("/Users/emad/Downloads/user_Information.db");

    if (!my_db.open()) {
        ui->label_DatabaseConnection->setText("Connection failure.");
    } else {
        ui->label_DatabaseConnection->setText("Connection esablished.");
    }
}

LoginWindow::~LoginWindow() {

    delete ui;
}


void LoginWindow::on_pushButton_Login_clicked() {

    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

    /*if (username == '1' && password == '1') {
        hide();
        select_Program->setWindowTitle("Select Program");
        select_Program->show();
    }*/

    if (!my_db.isOpen()) {
        qDebug() << "Failed to open the database.";
        return;
    }

    QSqlQuery query;

    if (query.exec("SELECT * FROM Users WHERE user_Email = '"+username+"' AND user_Password = '"+password+"'")) {
        int count = 0;
        while (query.next()) {
            count++;
        }

        // Try, throw, catch instead of if statements.

        if (count == 1) {
            hide();
            SelectProgram *select_Program = new SelectProgram;
            select_Program->setWindowTitle("Select Program");
            select_Program->show();
        }

        if (count == 0) {
            ui->label_DatabaseConnection->setText("Incorrect Login.");
        }
    }

}

