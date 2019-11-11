#include "Liste.hpp"

#include <iostream>
#include <cstdlib>

Liste::Liste() : nb_forme(-1), compteur(0)
{
    for(int i = 0; i < TAILLE_TAB; i++)
    {
        tab_f[i] = nullptr;
    }
}

void Liste::Ajouter_Forme(Forme& f)
{
    if(nb_forme < TAILLE_TAB -1)
    {
        nb_forme++;
        compteur++;
        tab_f[nb_forme] = &f;
    }

    else
    {
        std::cerr << "Tableau de forme plein" << std::endl;
    }
}

void Liste::Supprimer_Forme()
{
    if(nb_forme >= 1)
    {
        delete tab_f[nb_forme];
        tab_f[nb_forme] = nullptr;
        nb_forme--;
        compteur--;
    }

    else
    {
        std::cerr << "Tableau de forme vide" << std::endl;
    }
}

int Liste::getCompteur() const
{
    return compteur;
}

std::string Liste::toString() const
{
    std::string res = "";

    for(int i = 0; i <= nb_forme; i++)
    {
        res = res + (tab_f[i]->toString());
    }

    return res;
}

Forme* Liste::copie() const
{
    Liste* l = new Liste();

    for(int i = 0; i <= nb_forme; i++)
    {
        l->Ajouter_Forme(*(tab_f[i]));
    }
    
    return l;
}
