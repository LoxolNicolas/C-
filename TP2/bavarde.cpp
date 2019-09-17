#include <iostream>
#include "bavarde.hpp"

Bavarde::Bavarde(int x) : x(x)
{
    std::cout << "construction de " << this->x << std::endl;
}

Bavarde::~Bavarde()
{
    std::cout << "destruction de " << x << std::endl;    
}

int Bavarde::getX()
{
    return x;    
}

void Bavarde::afficher()
{
    std::cout << x << std::endl;
}


