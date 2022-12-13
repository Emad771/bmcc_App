#ifndef DIGITALMARKETING_H
#define DIGITALMARKETING_H

#include <QDialog>

namespace Ui {
class DigitalMarketing;
}

class DigitalMarketing : public QDialog
{
    Q_OBJECT

public:
    explicit DigitalMarketing(QWidget *parent = nullptr);
    ~DigitalMarketing();

private slots:
    void on_pushButton_Return_clicked();

private:
    Ui::DigitalMarketing *ui;
};

#endif // DIGITALMARKETING_H
