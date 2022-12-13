#include "computerscience.h"
#include "ui_computerscience.h"
#include "selectmajor.h"

ComputerScience::ComputerScience(QWidget *parent) : QDialog(parent), ui(new Ui::ComputerScience) {
    ui->setupUi(this);
}

ComputerScience::~ComputerScience() {

    delete ui;
}

void ComputerScience::on_pushButton_Return_clicked() {

    hide();
    SelectMajor *select_Major = new SelectMajor;
    select_Major->setWindowTitle("Major Selection");
    select_Major->show();
}

