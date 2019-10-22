#include <iostream>
#include "Bavarde.hpp"

Bavarde::Bavarde(int x) : x(x)
{
    std::cout << "Construction de " << x << std::endl;
}

Bavarde::~Bavarde()
{
    std::cout << "Destruction de " << x << std::endl;
}

Bavarde::Bavarde(Bavarde const& b) : x(b.x)
{
    std::cout << "Constructeur par recopie de " << x << std::endl;
}


int Bavarde::getX() const
{
    return x;
}

void Bavarde::afficher() const
{
    std::cout << "Affichage de Bavarde " << x << std::endl;
}