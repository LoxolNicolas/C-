#include "Forme.hpp"

int Forme::nbFormes = 0;

Forme::Forme()
{
    nbFormes++;
}

Forme::Forme(int w, int h) : w(w), h(h)
{

}

std::string Forme::to_String() const
{
    return "Forme " + std::to_string(w) + " " +  std::to_string(h);
}