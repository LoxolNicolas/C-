#include "ProducteurAleatoire.hpp"
#include <cstdlib>
#include <iostream>
#include <fstream>

bool ProducteurAleatoire::produire(int quantite, std::string nom) 
{
    bool b = false;

    std::ofstream fichier(nom.c_str());

    if(!fichier.fail())
    {
        b = true;
        
        fichier << quantite << std::endl;

        for(int i = 0; i < quantite; i++)
        {
            int random = rand() % 100;

            fichier << random << std::endl;
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
