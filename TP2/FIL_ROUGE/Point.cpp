#include "Point.hpp"
#include <iostream>

int Point::compteur = 0;

Point::Point()
{
    std::cout << "Appel de Point" << std::endl;

    compteur++;
}

Point::Point(int x, int y) : x(x), y(y)
{
    std::cout << "Appel de Point(x, y)" << std::endl;

    compteur++;
}

int Point::getX()
{
    return x;
}

void Point::setX(int x)
{
    this->x = x;
}

int Point::getY()
{
    return y;
}

void Point::setY(int y)
{
    this->y = y;
}

void Point::deplacerDe(int x, int y)
{
    this->x += x;
    this->y += y;
}

void Point::deplacerVers(int x, int y)
{
    this->setX(x);
    this->setY(y);
}

int Point::getCompteur()
{
    return compteur;
}