#include <iostream>
#include "Cercle.hpp"

Cercle::Cercle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h)
{

}

Cercle::Cercle(int x, int y, int rayon) : x(x), y(y), w(rayon/2), h(rayon/2)
{
    
}

std::string Cercle::to_String() const
{
    return "Cercle " + std::to_string(x);
}
