#include "psychology.h"
#include "ui_psychology.h"
#include "selectmajor.h"

Psychology::Psychology(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Psychology)
{
    ui->setupUi(this);
}

Psychology::~Psychology() {
    delete ui;
}

void Psychology::on_pushButton_Return_clicked() {

    hide();
    SelectMajor *select_Major = new SelectMajor;
    select_Major->setWindowTitle("Select Major");
    select_Major->show();
}

