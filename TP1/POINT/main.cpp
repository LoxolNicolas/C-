#include "Point.hpp"
#include <iostream>

int main(int , char**)
{
    std::cout << Point::getCompteur() << std::endl;

    Point* p = new Point(10, 5);

    Point p1(4, 5);

    p->deplacerDe(4, 6);

    p1.setX(2);
    p1.setY(4);

    p1.deplacerVers(4, 5);

    std::cout << p->getCompteur() << std::endl; // Point::getCompteur() est plus claire

    delete p;

    return 0;
}
