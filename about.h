#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include <QFile>
#include <QTextStream>

namespace Ui {

class About;
}

class About : public QDialog {

    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();

private slots:
    void on_pushButton_Return_clicked();

    void on_pushButton_Enter_clicked();

private:
    Ui::About *ui;
    void getTextFile();
};

#endif // ABOUT_H
