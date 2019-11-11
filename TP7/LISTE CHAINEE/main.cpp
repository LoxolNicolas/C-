#include <iostream>
#include "Liste.hpp"
#include "Cell.hpp"
#include "Iterateur.hpp"

int main(int ,char**)
{
    /*
    Liste l;
    
    for (int i = 0; i < 10; i++)
    {
        l.push_back(i+1);
    }

    l.pop_back();
    
    std::cout << l;
    */

    Cell c1(5);
    Cell c2(10);
    Cell c3(15);

    c1.set_Suivant(&c2);
    c2.set_Suivant(&c3);

    Iterateur it1(&c1);

    it1.getAdrPointe()->set_Suivant(&c2);

    std::cout << "Adresse Pointe " << it1.getAdrPointe() << std::endl; 
    std::cout << "Adresse Pointe " << it1.getValeurPointe() << std::endl; 
    
    //it1++;

    std::cout << "Adresse Pointe " << it1.getAdrPointe() << std::endl; 
    std::cout << "Adresse Pointe " << it1.getValeurPointe() << std::endl;

    return 0;
}
