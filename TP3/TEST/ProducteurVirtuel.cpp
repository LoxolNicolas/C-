#include "ProducteurAleatoire.hpp"
#include <iostream>

bool ProducteurVirtuel::produire(int quantite, std::string nom) 
{
    bool b = false;

    std::ofstream fichier(nom.c_str());

    if(!fichier.fail())
    {
        b = true;
        
        fichier << quantite << std::endl;

        for(int i = 0; i < quantite; i++)
        {
            fichier << i << std::endl;
        }

        travail++;

        fichier.close();
    }

    return b;
}

int ProducteurAleatoire::getTravail()
{
    return travail;
}
