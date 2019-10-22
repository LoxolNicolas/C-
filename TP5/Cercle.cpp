#include <iostream>
#include "Cercle.hpp"

Cercle::Cercle(int x, int y, int w, int h) : Forme(w, h), x(x), y(y), ordre(0)
{

}

Cercle::Cercle(int x, int y, int rayon) : Forme(rayon/2, rayon/2), x(x), y(y), ordre(0)
{
    
}

std::string Cercle::to_String() const
{
    return "Cercle " + std::to_string(x) + " " +  std::to_string(y) + " " + std::to_string(w) + " " +std::to_string(h);
}
