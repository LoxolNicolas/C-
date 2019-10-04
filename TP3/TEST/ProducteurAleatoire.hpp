#ifndef PRODUCTEUR_ALEA_HPP
#define PRODUCTEUR_ALEA_HPP

#include <iostream>

class ProducteurAleatoire
{
    private:
        int travail;

    public:
        bool produire(int quantite, std::string nom);
        int getTravail();    

};

#endif