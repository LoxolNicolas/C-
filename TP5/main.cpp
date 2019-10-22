#include <iostream>
#include "Forme.hpp"
#include "Cercle.hpp"
#include "Rectangle.hpp"

/*
#include "Bavarde.hpp"

void test1(Bavarde b) 
{
    std::cout << "appel de fonction avec parametre objet et copie" << std::endl;
}

Bavarde test2a() 
{
    std::cout << "appel de fonction avec retour";
    return Bavarde(); 
} 

Bavarde test2b() 
{
    Bavarde b; 
    std::cout << "appel de fonction avec retour";
    return b;
}

void test3(Bavarde& b) 
{
    std::cout << "appel de fonction avec référence ";
}

void test4(Bavarde *b) 
{
    std::cout << "appel de fonction avec un pointeur sur un objet";
}
*/

void afficher1(Forme f) 
{
    std::cout << f.to_String() << std::endl;
}

void afficher2(Forme& f) 
{
    std::cout << f.to_String() << std::endl;
}

void afficher3(Forme* f) 
{
    std::cout << f->to_String() << std::endl;
}


int main(int ,char**)
{
    /*
    Bavarde a;

    test1(a);
    test2a();
    test2b();
    test3(a);
    test4(&a);
    */

    Cercle cercle(4, 4, 2);

    afficher1(cercle);
    afficher2(cercle);
    afficher3(&cercle);

    return 0;
}
