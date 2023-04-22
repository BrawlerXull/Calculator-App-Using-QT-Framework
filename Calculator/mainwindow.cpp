#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int num1,num2,result;
void MainWindow::on_btnAdd_clicked()
{
    num1 = ui->txtFirst->text().toInt();
    num2 = ui->txtSecond->text().toInt();
    result = num1+num2;
    ui->txtThird->setText(QString::number(result));

}


void MainWindow::on_btnSub_clicked()
{

    num1 = ui->txtFirst->text().toInt();
    num2 = ui->txtSecond->text().toInt();
    result = num1-num2;
    ui->txtThird->setText(QString::number(result));
}


void MainWindow::on_btnDiv_clicked()
{

    num1 = ui->txtFirst->text().toInt();
    num2 = ui->txtSecond->text().toInt();
    result = num1/num2;
    ui->txtThird->setText(QString::number(result));
}


void MainWindow::on_btnMult_clicked()
{

    num1 = ui->txtFirst->text().toInt();
    num2 = ui->txtSecond->text().toInt();
    result = num1*num2;
    ui->txtThird->setText(QString::number(result));
}

