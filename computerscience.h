#ifndef COMPUTERSCIENCE_H
#define COMPUTERSCIENCE_H

#include <QDialog>

namespace Ui {

class ComputerScience;
}

class ComputerScience : public QDialog {
    Q_OBJECT

public:
    explicit ComputerScience(QWidget *parent = nullptr);
    ~ComputerScience();

private slots:
    void on_pushButton_Return_clicked();

private:
    Ui::ComputerScience *ui;
};

#endif // COMPUTERSCIENCE_H
