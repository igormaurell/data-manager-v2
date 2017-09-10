#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    system = new System();
}

MainWindow::~MainWindow()
{
    delete system;
    delete ui;
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked){
        system->start();
    }
    else {
        system->stop();
    }
}

void MainWindow::on_pushButton_clicked()
{
    system->sendAIData();
}
