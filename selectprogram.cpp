#include "selectprogram.h"
#include "ui_selectprogram.h"

SelectProgram::SelectProgram(QWidget *parent) : QDialog(parent), ui(new Ui::SelectProgram) {

    ui->setupUi(this);
}

SelectProgram::~SelectProgram() {

    delete ui;
}

void SelectProgram::on_pushButton_MajorSelection_clicked() {

    hide();
    select_Major->setWindowTitle("Major Selection");
    select_Major->show();
}


void SelectProgram::on_pushButton_About_clicked() {
    hide();
    about->setWindowTitle("About Page");
    about->show();
}

