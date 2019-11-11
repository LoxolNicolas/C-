#include "Iterateur.hpp"
#include <iostream>

Iterateur::Iterateur() : Ptr_Sur_Cellule(nullptr)
{

}

Iterateur::Iterateur(Cell* ptr) : Ptr_Sur_Cellule(ptr)
{

}

Cell* Iterateur::getAdrPointe() const
{
    return Ptr_Sur_Cellule;
}

int Iterateur::getValeurPointe() const
{
    return Ptr_Sur_Cellule->get_Valeur();
}

void Iterateur::setAdrPointe(Cell* cell)
{
    Ptr_Sur_Cellule = cell;
}

//PAS BON DEVRAIT ETRE EGAL A LA TETE 
Iterateur Iterateur::begin()
{
    Iterateur it(Ptr_Sur_Cellule);

    return it; 
}

Iterateur Iterateur::end()
{
    Iterateur it(nullptr);

    return it;    
}

int Iterateur::operator*()
{
    return getValeurPointe();
}

Iterateur Iterateur::operator++(int i)
{
    Iterateur it(nullptr);

    std::cout << "Avant : " << Ptr_Sur_Cellule << std::endl;

    it.setAdrPointe(Ptr_Sur_Cellule->get_Suivant()); //CHANGE PAS D'ADRESSE

    std::cout << "Apres : " << Ptr_Sur_Cellule << std::endl; 

    return it;
}

bool operator==(const Iterateur& it1, const Iterateur& it2)
{
    return (it1.getAdrPointe() == it2.getAdrPointe());
}

bool operator!=(const Iterateur& it1, const Iterateur& it2)
{
    return !(it1 == it2);
}