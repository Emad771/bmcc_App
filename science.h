#ifndef SCIENCE_H
#define SCIENCE_H

#include <QDialog>

namespace Ui {
class Science;
}

class Science : public QDialog {
    Q_OBJECT

public:
    explicit Science(QWidget *parent = nullptr);
    ~Science();

private slots:
    void on_pushButton_Return_clicked();

private:
    Ui::Science *ui;
};

#endif // SCIENCE_H
