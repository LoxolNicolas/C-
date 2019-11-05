#include "statisticien.hpp"
#include <iostream>
#include <fstream>

Statisticien::Statisticien() : calcul(false)
{

}

int Statisticien::acquerir(std::string nom) 
{
    std::ifstream fichier;
    
    int nb;
    int somme = 0;

    fichier.open(nom.c_str());

    if(!fichier.fail())
    {
        calcul = true;

        fichier >> nb;

        while(!fichier.eof())
        {
            int lecture;

            fichier >> lecture;

            std::cout << lecture << std::endl;

            somme += lecture;
        }

        fichier.close();
    }

    return somme;
}

bool Statisticien::aCalcule() const
{
    return calcul;
}
