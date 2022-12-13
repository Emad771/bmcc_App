#ifndef SELECTMAJOR_H
#define SELECTMAJOR_H

#include <QDialog>
#include "computerscience.h"
#include "mathematics.h"
#include "engineeringscience.h"
#include "science.h"
#include "geographicinformationscience.h"
#include "digitalmarketing.h"
#include "psychology.h"

namespace Ui {

class SelectMajor;
}

class SelectMajor : public QDialog {

    Q_OBJECT

public:
    explicit SelectMajor(QWidget *parent = nullptr);
    ~SelectMajor();

private slots:
    void on_pushButton_ComputerScience_clicked();
    void on_pushButton_Return_clicked();

    void on_pushButto_Mathematics_clicked();

    void on_pushButton_EngineeringScience_clicked();

    void on_pushButton_Science_clicked();

    void on_pushButton_GeographicInformationScience_clicked();

    void on_pushButton_DigitalMarketing_clicked();

    void on_pushButton_Psychology_clicked();

private:
    Ui::SelectMajor *ui;
    ComputerScience *computer_Science = new ComputerScience;
    Mathematics *mathematics = new Mathematics;
    EngineeringScience *engineering_Science = new EngineeringScience;
    Science *science = new Science;
    GeographicInformationScience *geographic_Information_Science = new GeographicInformationScience;
    DigitalMarketing *digital_Marketing = new DigitalMarketing;
    Psychology *psychology = new Psychology;
};

#endif // SELECTMAJOR_H
