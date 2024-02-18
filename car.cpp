#include "car.h"
#include <QPainter>

void Car::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    drawCar(&painter);
}

void Car::drawCar(QPainter *painter)
{
    draw(painter);
    painter->drawEllipse(x+180, 175, 20, 20);
    painter->drawEllipse(x, 200, 50, 50);
    painter->drawEllipse(x+150, 200, 50, 50);
}

void Car::drawLight(QPainter *painter)
{
    draw(painter);
    //QPen pen;
    //scene->addEllipse(x+180, 175, 20, 20, pen, QBrush(Qt::yellow));
    QColor yellow(Qt::yellow);
    Qt::BrushStyle style = Qt::SolidPattern;
    QBrush brush(yellow, style);
    painter->setBrush(brush);
    painter->drawEllipse(x+180, 175, 20, 20);
}
