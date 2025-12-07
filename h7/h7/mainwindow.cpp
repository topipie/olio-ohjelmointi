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

void MainWindow::on_btnCount_clicked()
{
    counter++;
    QString s = QString::number(counter);

    ui->txtResult->setText(s);

    //en tiedä pitikö näin tehdä, mutta tein niinkö ohjeessa sanottiin
    if(counter == 1){
        ui->labelInfo->setText("Painiketta Count painettu " + s + " kertaa");
    }
    //eli vasta kahden klikkauksen jälkeen muutetaan teksi Count -> Counter
    else{
        ui->labelInfo->setText("Painiketta Counter painettu " + s + " kertaa");
    }

}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    QString s = QString::number(counter);

    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta Count painettu 0 kertaa");
}


