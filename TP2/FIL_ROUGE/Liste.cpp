#include <iostream>
#include "Liste.hpp"

Liste::Liste() : c(new Cercle[TAILLE_TAB]) , r(new Rectangle[TAILLE_TAB])
{

}

int Liste::getCompteur() const
{
    return compteur;
}

std::string Liste::toString() const
{
    
}
