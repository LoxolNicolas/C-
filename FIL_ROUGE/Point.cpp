#include "Point.hpp"

Point ORIGINE;

Point::Point() : _x(0), _y(0)
{

}

Point::Point(int x, int y) : _x(x), _y(y)
{

}

Point::Point(const Point& p1) : _x(p1._x), _y(p1._y)
{

} 

int Point::getX() const
{
    return _x;
}

int Point::getY() const
{
    return _y;
}

void Point::setX(int x)
{
    _x = x;
}

void Point::setY(int y)
{
    _y = y;
}
