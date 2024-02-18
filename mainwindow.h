#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "car.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Car *C=new Car;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
protected:
    void paintEvent(QPaintEvent*)override;
    //void on_pushButton_2_pressed(QPaintEvent*)override;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_pressed(QPaintEvent*);
};
#endif // MAINWINDOW_H
