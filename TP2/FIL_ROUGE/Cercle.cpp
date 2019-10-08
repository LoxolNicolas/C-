#include <iostream>
#include "Cercle.hpp"

Cercle::Cercle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h), ordre(0)
{

}

Cercle::Cercle(int x, int y, int rayon) : x(x), y(y), w(rayon/2), h(rayon/2), ordre(0)
{
    
}

void Cercle::setOrdre(int ordre)
{
    this->ordre = ordre;
}

std::string Cercle::to_String() const
{
    return "Cercle " + std::to_string(x) + " " +  std::to_string(y) + " " + std::to_string(w) + " " +std::to_string(h);
}
