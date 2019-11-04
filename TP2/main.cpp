#include <iostream>
#include "Bavarde.hpp"
#include "Famille.hpp"
#include "Couple.hpp"

//Bavarde globale(2);

void fonction(Bavarde b)
{
    std::cout << "code de la fonction" << std::endl;
}

int main(int, char **)
{
    /*
    Bavarde b;
    Bavarde * p = new Bavarde(3);
    fonction(b);


    std::cout << Bavarde(15).get_X() << std::endl;

    const int TAILLE = 20;
    Bavarde tab1[TAILLE];
    Bavarde* tab2 = new Bavarde[TAILLE];

    for (int i =0; i < TAILLE; ++i)
    {
        tab1[i].afficher();
        tab2[i].afficher();
    }


    delete p;

    delete[] tab2;


    Famille f1;

    Famille f2(Bavarde(5), Bavarde(6));

    */

    Couple c(5);


    return 0;
}
