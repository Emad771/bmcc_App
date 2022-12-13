#include "mathematics.h"
#include "ui_mathematics.h"
#include "selectmajor.h"

Mathematics::Mathematics(QWidget *parent) : QDialog(parent), ui(new Ui::Mathematics) {

    ui->setupUi(this);
}

Mathematics::~Mathematics() {

    delete ui;
}

void Mathematics::on_pushButton_Return_clicked() {

    hide();
    SelectMajor *select_Major = new SelectMajor;
    select_Major->setWindowTitle("Select Major");
    select_Major->show();
}

