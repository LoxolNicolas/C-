#ifndef LISTE_HPP_INCLUDED
#define LISTE_HPP_INCLUDED

#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Forme.hpp"

#include <string>

const int TAILLE_TAB = 5;

class Liste : public Forme
{
    private:
        Forme* tab_f[TAILLE_TAB];
        int nb_forme;
        int compteur;

    public:
        Liste();

        void Ajouter_Forme(Forme& f);
        void Supprimer_Forme();

        int getCompteur() const;
        std::string toString() const;

        virtual Forme* copie() const override;
};

#endif // LISTE_HPP_INCLUDED
