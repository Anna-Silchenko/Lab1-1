#ifndef CAR_H
#define CAR_H
#include "rectangle.h"

class Car:public Rectangle
{
public:
    void paintEvent(QPaintEvent *);
    void drawCar(QPainter *painter);
    void drawLight(QPainter *painter);
};

#endif // CAR_H
