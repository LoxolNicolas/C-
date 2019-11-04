#include "producteur.hpp"
#include <fstream>

Producteur::Producteur() : travail(0)
{

}

int Producteur::getTravail() const
{
    return travail;
}

bool Producteur::produire(int quantite, std::string nom) 
{
    bool a_ecrit = false;

    std::ofstream fichier(nom.c_str());

    travail++;

    if(!fichier.fail())
    {
        a_ecrit = true;

        fichier << quantite << std::endl;

        for(int i = 0; i < quantite; i++)
        {
            fichier << i + 1 << std::endl;
        }

        fichier.close();
    }

    return a_ecrit;
}
