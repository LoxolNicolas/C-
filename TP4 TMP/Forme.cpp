#include "Forme.hpp"

int Forme::nbFormes = 0; 

Forme::Forme() : p(0, 0), c(COULEURS::BLEU), id(nbFormes)
{
    nbFormes++;  
}

Forme::Forme(Point p1, COULEURS couleur) : p(p1), c(couleur), id(nbFormes)
{
    nbFormes++;
}

Forme::Forme(int w, int h, Point p1) : w(w), h(h), p(p1)
{
    nbFormes++;
}

void Forme::setX(int x)
{
    p.setX(x);
}

void Forme::setY(int y)
{
    p.setY(y);
}

int Forme::getLargeur()
{
    return w;
}

int Forme::getHauteur()
{
    return h;
}
        
Point& Forme::getPoint()
{
    return p;
}

COULEURS Forme::getCouleur()
{
    return c;
}

void Forme::setCouleur(COULEURS couleur)
{
    c = couleur;
}

int Forme::getId()
{
    return id;
}

int Forme::prochainId()
{
    return Forme::nbFormes;
}