#ifndef GEOGRAPHICINFORMATIONSCIENCE_H
#define GEOGRAPHICINFORMATIONSCIENCE_H

#include <QDialog>

namespace Ui {
class GeographicInformationScience;
}

class GeographicInformationScience : public QDialog
{
    Q_OBJECT

public:
    explicit GeographicInformationScience(QWidget *parent = nullptr);
    ~GeographicInformationScience();

private slots:
    void on_pushButton_Return_clicked();

private:
    Ui::GeographicInformationScience *ui;
};

#endif // GEOGRAPHICINFORMATIONSCIENCE_H
