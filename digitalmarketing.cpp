#include "digitalmarketing.h"
#include "ui_digitalmarketing.h"
#include "selectmajor.h"

DigitalMarketing::DigitalMarketing(QWidget *parent) : QDialog(parent), ui(new Ui::DigitalMarketing) {

    ui->setupUi(this);
}

DigitalMarketing::~DigitalMarketing() {

    delete ui;
}

void DigitalMarketing::on_pushButton_Return_clicked() {

    hide();
    SelectMajor *select_Major = new SelectMajor;
    select_Major->setWindowTitle("Select Major");
    select_Major->show();
}

