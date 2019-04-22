#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_CE_clicked();
    void on_number_clicked();

    void on_equals_clicked();

    void on_div_clicked();

    void on_mul_clicked();

    void on_sub_clicked();

    void on_add_clicked();

    void on_dot_clicked();

    void on_del_clicked();

    void on_C_clicked();

private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
