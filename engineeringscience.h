#ifndef ENGINEERINGSCIENCE_H
#define ENGINEERINGSCIENCE_H

#include <QDialog>

namespace Ui {

class EngineeringScience;
}

class EngineeringScience : public QDialog {
    Q_OBJECT

public:
    explicit EngineeringScience(QWidget *parent = nullptr);
    ~EngineeringScience();

private slots:
    void on_pushButton_Return_clicked();

private:
    Ui::EngineeringScience *ui;
};

#endif // ENGINEERINGSCIENCE_H
