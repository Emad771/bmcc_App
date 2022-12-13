#include "selectmajor.h"
#include "ui_selectmajor.h"
#include "selectprogram.h"

SelectMajor::SelectMajor(QWidget *parent) : QDialog(parent), ui(new Ui::SelectMajor) {

    ui->setupUi(this);
}

SelectMajor::~SelectMajor() {
    delete ui;
}

void SelectMajor::on_pushButton_ComputerScience_clicked() {

    hide();
    computer_Science->setWindowTitle("Computer Science");
    computer_Science->show();
}


void SelectMajor::on_pushButto_Mathematics_clicked()
{
    hide();
    mathematics->setWindowTitle("Mathematics");
    mathematics->show();
}


void SelectMajor::on_pushButton_Return_clicked() {

    hide();
    SelectProgram *select_Program = new SelectProgram;
    select_Program->setWindowTitle("Select Program");
    select_Program->show();
}


void SelectMajor::on_pushButton_EngineeringScience_clicked() {

    hide();
    engineering_Science->setWindowTitle("Engineering Science");
    engineering_Science->show();
}


void SelectMajor::on_pushButton_Science_clicked() {

    hide();
    science->setWindowTitle("Science");
    science->show();
}


void SelectMajor::on_pushButton_GeographicInformationScience_clicked() {

    hide();
    geographic_Information_Science->setWindowTitle("Geographic Information Science");
    geographic_Information_Science->show();
}


void SelectMajor::on_pushButton_DigitalMarketing_clicked() {

    hide();
    digital_Marketing->setWindowTitle("Digital Marketing");
    digital_Marketing->show();
}


void SelectMajor::on_pushButton_Psychology_clicked() {

    hide();
    psychology->setWindowTitle("Psychology");
    psychology->show();
}

