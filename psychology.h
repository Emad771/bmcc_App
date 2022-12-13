#ifndef PSYCHOLOGY_H
#define PSYCHOLOGY_H

#include <QDialog>

namespace Ui {
class Psychology;
}

class Psychology : public QDialog
{
    Q_OBJECT

public:
    explicit Psychology(QWidget *parent = nullptr);
    ~Psychology();

private slots:
    void on_pushButton_Return_clicked();

private:
    Ui::Psychology *ui;
};

#endif // PSYCHOLOGY_H
