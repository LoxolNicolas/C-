#ifndef LISTE_H
#define LISTE_H

#include <iostream>
#include "Cercle.hpp"
#include "Rectangle.hpp"

const int TAILLE_TAB = 10;

class Liste
{
    private:
        Cercle* cer[TAILLE_TAB];
        Rectangle* rec[TAILLE_TAB];
        int nb_cercle;
        int nb_rectangle;
        int compteur;
    
    public:
        Liste();
        void AjouterCercle(Cercle& c);
        void AjouterRectangle(Rectangle& h);
        void SupprimerCercle();
        void SupprimerRectangle();
        int getCompteur() const;
        std::string toString() const;
};

#endif