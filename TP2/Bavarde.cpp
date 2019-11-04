#include <iostream>
#include "Bavarde.hpp"

Bavarde::Bavarde() : _x(0)
{
    std::cout << "Construction de " << _x << std::endl;
}

Bavarde::Bavarde(int x = 0) : _x(x)
{
    std::cout << "Construction de " << _x << std::endl;
}

Bavarde::Bavarde(const Bavarde& b) : _x(b._x)
{
    std::cout << "Constructeur par recopie " << _x << std::endl;
}

Bavarde::~Bavarde()
{
    std::cout << "Destruction de " << _x << std::endl;
}

int Bavarde::get_X()
{
    return _x;
}

void Bavarde::afficher()
{
    std::cout << "Affichage de " << _x << std::endl;
}
