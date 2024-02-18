#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "car.h"
#include <QPainter>

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

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    C->drawCar(&painter);
}

void MainWindow::on_pushButton_clicked()
{
    C->ride();
    while(!C->dr(2))
    {
        repaint();
        C->ride();
        for(int i=0; i<(int)1e7; ++i);
    }
}

void MainWindow::on_pushButton_2_pressed(QPaintEvent *)
{
    QPainter painter(this);
    C->drawLight(&painter);
}

