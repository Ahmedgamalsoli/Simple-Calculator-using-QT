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
int firstNum,SecondNum,result;

void MainWindow::on_btnAdd_clicked()
{
    /*convert text value in text first number into number then save it into First Number*/
    firstNum =ui->txtFirstNum->text().toInt();
    /*convert text value in text Second number into number then save it into Second Number*/
    SecondNum =ui->txtSecondNum->text().toInt();
    result = firstNum + SecondNum;
    /*convert the text result value of the result and then put it into text result in window*/
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnSub_clicked()
{
    /*convert text value in text first number into number then save it into First Number*/
    firstNum =ui->txtFirstNum->text().toInt();
    /*convert text value in text Second number into number then save it into Second Number*/
    SecondNum =ui->txtSecondNum->text().toInt();
    result = firstNum - SecondNum;
    /*convert the text result value of the result and then put it into text result in window*/
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnMul_clicked()
{
    /*convert text value in text first number into number then save it into First Number*/
    firstNum =ui->txtFirstNum->text().toInt();
    /*convert text value in text Second number into number then save it into Second Number*/
    SecondNum =ui->txtSecondNum->text().toInt();
    result = firstNum / SecondNum;
    /*convert the text result value of the result and then put it into text result in window*/
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnDiv_clicked()
{
    /*convert text value in text first number into number then save it into First Number*/
    firstNum =ui->txtFirstNum->text().toInt();
    /*convert text value in text Second number into number then save it into Second Number*/
    SecondNum =ui->txtSecondNum->text().toInt();
    result = firstNum * SecondNum;
    /*convert the text result value of the result and then put it into text result in window*/
    ui->txtResult->setText(QString::number(result));
}

