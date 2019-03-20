#include "calculator.h"
#include "ui_calculator.h"


Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_CE_clicked()
{
    ui->display->setText("");

}

void Calculator::on_number_clicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    int digitValue = clickedButton->text().toInt();

    if (ui->display->text() == "0" && digitValue == 0.0)
        return;
    ui->display->setText(ui->display->text() + QString::number(digitValue));

}

void Calculator::on_equals_clicked()
{
    QLabel* w = findChild<QLabel*>("display");
    w->setText("works");
}

void Calculator::on_div_clicked()
{
    ui->display->setText("/");

}

void Calculator::on_mul_clicked()
{
    ui->display->setText("*");
}

void Calculator::on_sub_clicked()
{
    ui->display->setText("-");

}

void Calculator::on_add_clicked()
{
    ui->display->setText("+");
}

void Calculator::on_dot_clicked()
{
    ui->display->setText(".");

}

void Calculator::on_del_clicked()
{
    QString s= ui->display->text();
    s.truncate(s.size()-1);
    ui->display->setText(s);

}

void Calculator::on_C_clicked()
{
    ui->display->setText("");
}

