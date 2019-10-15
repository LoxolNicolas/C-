#include <iostream>
#include "Cercle.hpp"

Cercle::Cercle() : Forme()
{

}

Cercle::Cercle(int x, int y, int w, int h) : Forme(w, h, Point(x, y)) , ordre(0)
{
    
}

Cercle::Cercle(int x, int y, int rayon) : Forme(rayon*2, rayon*2, Point(x, y)), ordre(0)
{
    
}

void Cercle::setRayon(int rayon)
{
    w = rayon;
}

int Cercle::getRayon()
{
    return w/2;
}

void Cercle::setOrdre(int ordre)
{
    this->ordre = ordre;
}

std::string Cercle::to_String() const
{
    return "Cercle " + std::to_string(p.getX()) + " " +  std::to_string(p.getY()) + " " + std::to_string(w) + " " +std::to_string(h);
}

