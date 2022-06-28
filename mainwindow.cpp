#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AbsPackage.h"
#include "mergepackage.h"

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


void MainWindow::on_pushButton_clicked()
{
    QString::number(ui->comboBox->currentIndex());
}


void MainWindow::on_radioButton_clicked()
{

}
