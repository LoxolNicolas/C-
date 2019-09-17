#include "iostream"
#include "bavarde.hpp"
#include "Couple.hpp"

Bavarde globale(2);

void fonction(Bavarde b) 
{
  std::cout << "code de la fonction";
}

int main(int, char **) 
{
    /*Bavarde b;
    Bavarde* p = new Bavarde(3);

    fonction(b);

    std::cout << Bavarde(0).getX() << std::endl;

    const int TAILLE = 20;

    Bavarde   tab1[TAILLE];
    Bavarde * tab2 = new Bavarde[TAILLE];

    for (int i =0; i < TAILLE; ++i)
    {
        tab1[i].afficher();
        tab2[i].afficher();
    }

    delete[] tab2;

    delete p;
    */

    Couple* p1 = new Couple(Bavarde(5), Bavarde(4));

    delete p1;

    return 0;
}