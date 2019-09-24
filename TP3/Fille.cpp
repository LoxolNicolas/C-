#include <iostream>
#include "Fille.hpp"

Fille::Fille() : Mere()
{
    std::cout << "Construction d'une instance de Fille" << std::endl;
}

Fille::Fille(std::string s) : Mere(s)
{

}

Fille::~Fille()
{
    std::cout << "Destruction d'une instance de Fille" << std::endl;
}

int Fille::getX()
{
    return x;
}

void Fille::afficher()
{
    std::cout << "Je suis une Fille" << std::endl;
}