#include "Cell.hpp"

#include <iostream>

Cell::Cell(int valeur, Cell* suivant) : _valeur(valeur), _suivant(suivant)
{

}

int Cell::get_Valeur() const
{
    return _valeur;
}

Cell* Cell::get_Suivant() const
{
    return _suivant;
}

void Cell::set_Valeur(int valeur)
{
    _valeur = valeur;
}

void Cell::set_Suivant(Cell* suivant)
{
    _suivant = suivant;
}

Cell* Cell::get_adr_cellule()
{
    return this;
}

Cell** Cell::get_adr_Suivant()
{
    return &_suivant;
}