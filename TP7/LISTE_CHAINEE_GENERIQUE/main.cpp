#include <iostream>
#include "Liste_Gen.hpp"
#include "Cell_Gen.hpp"

int main(int ,char**)
{
    Liste<char> l;
    
    for (char lettre = 'A'; lettre <= 'Z'; lettre++)
    {
        l.push_back(lettre);
    }

    Liste<std::string> l1;

    l1.push_back("Salut");
    l1.push_back("Les");
    l1.push_back("Amis");
    
    std::cout << l1;

    return 0;
}
