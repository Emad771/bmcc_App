#ifndef MATHEMATICS_H
#define MATHEMATICS_H

#include <QDialog>

namespace Ui {

class Mathematics;
}

class Mathematics : public QDialog {
    Q_OBJECT

public:
    explicit Mathematics(QWidget *parent = nullptr);
    ~Mathematics();

private slots:
    void on_pushButton_Return_clicked();

private:
    Ui::Mathematics *ui;
};

#endif // MATHEMATICS_H
