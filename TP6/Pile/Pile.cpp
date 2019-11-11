#include "Pile.hpp"
#include <iostream>
#include <stdexcept>

Pile::Pile(int capacite) : tab(nullptr), _taille(0), _capacite(capacite)
{
    if(capacite <= 0)
    {
        std::invalid_argument e("Capacite inferieur ou egal a 0");
        throw e;
    }

    tab = new int[capacite];

    for (int i = 0; i < _capacite; i++)
    {
        tab[i] = 0;
    }
}

Pile::~Pile()
{
    delete[] tab;
}

int Pile::size() const
{
    return _taille;
}

int Pile::getCapacite() const
{
    return _capacite;
}

bool Pile::empty() const
{
    return (_taille == 0);
}

void Pile::push(int element)
{
    if(_taille < _capacite)
    {
        tab[_taille] = element;
        _taille++;
    } 
}

void Pile::pop()
{
    if(_taille <= 0)
    {
        std::invalid_argument e("Pile Vide");
        throw e;
    }

    _taille--;
    tab[_taille] = 0;
}

int Pile::top() const
{
    return tab[_taille - 1];
}

void Pile::afficher() const
{
    for(int i = 0; i < _capacite; i++)
    {
        std::cout << tab[i] << std::endl;
    }
}