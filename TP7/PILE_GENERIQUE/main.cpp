#include <iostream>
#include "Pile_Gen.hpp"

int main(int, char**)
{
    Pile_Gen<std::string> p1; 

    p1.push("salut");
    p1.push("les");
    p1.push("amis");
    p1.pop();
    p1.push("amigos");

    p1.afficher();
    
    return 0;
}
