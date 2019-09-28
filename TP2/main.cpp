<<<<<<< HEAD
#include <iostream>
#include <cstdlib>
#include "Bavarde.hpp"
#include "Couple.hpp"
#include "Famille.hpp"

//Bavarde globale(2);

/*void fonction(Bavarde b) 
{
    std::cout << "code de la fonction" << std::endl;
}
*/
=======
#include "iostream"
#include "bavarde.hpp"
#include "Couple.hpp"

Bavarde globale(2);

void fonction(Bavarde b) 
{
  std::cout << "code de la fonction";
}
>>>>>>> 3871c4d11e7dca7699a62ff53d42b184b6158d03

int main(int, char **) 
{
    /*Bavarde b;
<<<<<<< HEAD
    Bavarde * p = new Bavarde(3);
    
=======
    Bavarde* p = new Bavarde(3);

>>>>>>> 3871c4d11e7dca7699a62ff53d42b184b6158d03
    fonction(b);

    std::cout << Bavarde(0).getX() << std::endl;

<<<<<<< HEAD
    p->afficher();

    delete p;
    */

    /*const int TAILLE = 20;
    Bavarde   tab1[TAILLE];
    Bavarde* tab2 = new Bavarde[TAILLE];

    for(int i =0; i < TAILLE; ++i)
=======
    const int TAILLE = 20;

    Bavarde   tab1[TAILLE];
    Bavarde * tab2 = new Bavarde[TAILLE];

    for (int i =0; i < TAILLE; ++i)
>>>>>>> 3871c4d11e7dca7699a62ff53d42b184b6158d03
    {
        tab1[i].afficher();
        tab2[i].afficher();
    }

    delete[] tab2;
<<<<<<< HEAD
    */

    
    //Bavarde b1(1);
    //Bavarde b2(2);

    //Couple p2(b1, b2);
    

    //Couple p3(Bavarde(3), Bavarde(4));

    //Couple* p1 = new Couple(Bavarde(5), Bavarde(6));
    
    //delete p1;

    //Famille* f = new Famille(5); //Attention Pointeur sur un tableau de 5 elements

    //delete f; //On free donc l'adresse de ce pointeur et non pas le tableau

    Bavarde* b8 = (Bavarde*)malloc(sizeof(Bavarde)); //Pas d'appel au constructeur

    std::cout << b8->getX() << std::endl;

    free(b8);
=======

    delete p;
    */

    Couple* p1 = new Couple(Bavarde(5), Bavarde(4));

    delete p1;
>>>>>>> 3871c4d11e7dca7699a62ff53d42b184b6158d03

    return 0;
}