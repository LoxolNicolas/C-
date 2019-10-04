#ifndef LISTE_H
#define LISTE_H

#include <iostream>
#include "Cercle.hpp"
#include "Rectangle.hpp"

const int TAILLE_TAB = 10;

class Liste
{
    private:
        Cercle* c;
        Rectangle* r;
        int nb_cercle;
        int nb_rectangle;
        int compteur;
        int ordre;
    
    public:
        Liste();
        int getCompteur() const;
        std::string toString() const;
};

#endif