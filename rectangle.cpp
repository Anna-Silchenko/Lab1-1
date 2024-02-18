#include "rectangle.h"
#include <QPainter>

void Rectangle::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    draw(&painter);
}

void Rectangle::draw(QPainter *painter)
{
    painter->drawRect(x, 150, 200, 50);
}

void Rectangle::ride()
{
    x+=5*m;
    if(x>600||x<10)
    {
        m*=-1;
        x+=10*m;
    }
    if(x==200)
        s--;
}

bool Rectangle::dr(int sch)
{
    if(s<=0&&!be)
        s=sch, be=1;
    if(s==0&&be)
        be=0;
    return s==0;
}
