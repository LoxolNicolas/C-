#include "Cercle.hpp"
#include <iostream>

#include <sstream>

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

Cercle::Cercle(int x, int y, int w, int h) : Forme(Point(x, y), w, h)
{

}

Cercle::Cercle(int x, int y, int rayon) : Forme(Point(x, y), rayon/2, rayon/2)
{

}

Cercle::~Cercle()
{

}

int Cercle::getRayon() const
{
	return _w;
}

void Cercle::setRayon(int rayon)
{
	_w = rayon;
	_h = rayon;
}

std::string Cercle::toString() const
{
    return "Cercle " + patch::to_string(_p.getX()) + " " +  patch::to_string(_p.getY()) + " " + patch::to_string(_w) + " " + patch::to_string(_h) + "\n";
}

Forme* Cercle::copie() const
{
    return new Cercle(_p.getX(), _p.getY(), this->getLargeur(), this->getHauteur());
}