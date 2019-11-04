#include "Couple.hpp"

Couple::Couple(int taille) : _tab(new Bavarde[taille])
{

}

Couple::~Couple()
{
    delete[] _tab;
}
