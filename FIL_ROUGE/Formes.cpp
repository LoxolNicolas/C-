#include "Forme.hpp"

int Forme::nbFormes = 0;

Forme::Forme() : _p(), _w(0), _h(0), _c(COULEURS::BLEU), id(Forme::nbFormes)
{
	nbFormes++;
}

Forme::Forme(Point p, COULEURS c) : _p(p), _c(c)
{
	nbFormes++;
}

Forme::Forme(Point p, int w, int h) : _p(p), _w(w), _h(h) 
{
	nbFormes++;
}

Forme::~Forme()
{
	nbFormes--;
}
      
COULEURS Forme::getCouleur() const
{
	return _c;
}

void Forme::setCouleur(COULEURS c)
{
	_c = c;
}

void Forme::setX(int x)
{
	_p.setX(x);
}

void Forme::setY(int y)
{
	_p.setY(y);
}

int Forme::getHauteur() const
{
	return _h;
}

int Forme::getLargeur() const
{
	return _w;
}
       
Point& Forme::getPoint()
{
	return _p;
}

int Forme::getId() const
{
	return id;
}

int Forme::prochainId()
{
	return Forme::nbFormes;
}
