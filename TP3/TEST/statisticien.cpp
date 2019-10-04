#include "statisticien.hpp"
#include <fstream>

void Statisticien::acquerir(std::string nom) 
{
    std::ifstream fichier(nom.c_str());

    int i = 0;

    somme = 0;

    calcul = false;

    if(!fichier.fail())
    {
        calcul = true;

        while(!fichier.eof())
        {
            double lecture;

            fichier >> lecture;

            somme += lecture;

            i++;
        }
    }

    moyenne = (double)somme / i;

    fichier.close();
}

bool Statisticien::aCalcule()
{
    return calcul;
}
