#include "engineeringscience.h"
#include "ui_engineeringscience.h"
#include "selectmajor.h"

EngineeringScience::EngineeringScience(QWidget *parent) : QDialog(parent), ui(new Ui::EngineeringScience) {

    ui->setupUi(this);
}

EngineeringScience::~EngineeringScience() {

    delete ui;
}

void EngineeringScience::on_pushButton_Return_clicked() {

    hide();
    SelectMajor *select_Major = new SelectMajor;
    select_Major->setWindowTitle("Select Major");
    select_Major->show();
}

