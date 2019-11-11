#include <iostream>

#include "vecteur_dyn_generique.hpp"

int main(int, char**)
{
    Vecteur_Gen<int> v1;
    Vecteur_Gen<double> v2;

    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i + 1);
        v2.push_back(i + 1.1);
    }

    v2.pop_front();
    
    v1.affiche();

    v2.affiche();
    

    return 0;
}
