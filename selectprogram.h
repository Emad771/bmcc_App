#ifndef SELECTPROGRAM_H
#define SELECTPROGRAM_H

#include <QDialog>
#include "selectmajor.h"
#include "about.h"

namespace Ui {

class SelectProgram;
}

class SelectProgram : public QDialog {

    Q_OBJECT

public:
    explicit SelectProgram(QWidget *parent = nullptr);
    ~SelectProgram();

private slots:
    void on_pushButton_MajorSelection_clicked();

    void on_pushButton_About_clicked();

private:
    Ui::SelectProgram *ui;
    SelectMajor *select_Major = new SelectMajor;
    About *about = new About;
};

#endif // SELECTPROGRAM_H
