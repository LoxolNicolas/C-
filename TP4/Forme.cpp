#include "Forme.hpp"

Forme::Forme() : Point(), COULEURS::c = COULEURS::BLEU
{

}

Forme::Forme(Point p, COULEURS C) : p(p), c(c) 
{

}

COULEURS::Forme()
{
    return c;
}
