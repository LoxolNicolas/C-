#include <iostream>
#include "Point.hpp"

Point ORIGINE;

Point::Point() : x(0), y(0)
{
    
}

Point::Point(int x, int y) : x(x), y(y)
{

}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}

void Point::setX(int x)
{
    this->x = x;
}
    
void Point::setY(int y)
{
    this->y = y;
}

//  NE PAS OUBLIER de définir ORIGINE