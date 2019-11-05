#include <iostream>
#include "vecteur_dyn.hpp"

int main(int, char**)
{
    Vecteur v1;
    Vecteur v2;

    for(int i = 0; i < 3; i++)
    {
        v1.push_back(i);
        v2.push_back(3 - i);
    }

    v1.affiche();

    std::cout << std::endl;
    
    v2.affiche();

    Vecteur v3 = v1 + v2;

    //std::cout << "Index : " << v1[4] << std::endl;

    //std::cout << v3.getCapacity() << std::endl;
    //std::cout << v3.getSize() << std::endl;
    
    v3.affiche();



    return 0;
}
