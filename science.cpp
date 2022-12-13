#include "science.h"
#include "ui_science.h"
#include "selectmajor.h"

Science::Science(QWidget *parent) : QDialog(parent), ui(new Ui::Science) {

    ui->setupUi(this);
}

Science::~Science() {

    delete ui;
}

void Science::on_pushButton_Return_clicked() {

    hide();
    SelectMajor *select_Major = new SelectMajor;
    select_Major->setWindowTitle("Select Major");
    select_Major->show();
}

