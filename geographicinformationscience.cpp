#include "geographicinformationscience.h"
#include "ui_geographicinformationscience.h"
#include "selectmajor.h"

GeographicInformationScience::GeographicInformationScience(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeographicInformationScience)
{
    ui->setupUi(this);
}

GeographicInformationScience::~GeographicInformationScience()
{
    delete ui;
}

void GeographicInformationScience::on_pushButton_Return_clicked() {

    hide();
    SelectMajor *select_Major = new SelectMajor;
    select_Major->setWindowTitle("Select Major");
    select_Major->show();
}

