#include <iostream>
#include "Mere.hpp"

int Mere::cptMere = 0;

Mere::Mere()
{
    std::cout << "Construction d'une instance de Mere" << std::endl;

    cptMere++;

    std::cout << cptMere << std::endl;
}

Mere::Mere(std::string s) : nom(s)
{

}

Mere::~Mere()
{
    std::cout << "Destruction d'une instance de Mere" << std::endl;
}

int Mere::getAttribut()
{
    return cptMere;
}

void Mere::setnom(std::string nom) 
{
    this->nom = nom;
}

std::string Mere::getnom()
{
    return nom;
}

void Mere::afficher()
{
    std::cout << "Je suis une Mere" << std::endl;
}