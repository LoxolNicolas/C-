#ifndef Cell_GEN_HPP
#define Cell_GEN_HPP

#include <iostream>

template<typename T>
class Cell_Gen
{
    private:
        T _valeur;
        Cell_Gen* _suivant;

    public:
        Cell_Gen(T valeur, Cell_Gen* suivant = nullptr);

        T get_Valeur() const;
        Cell_Gen* get_Suivant() const;
        void set_Valeur(T valeur);
        void set_Suivant(Cell_Gen* suivant);
        Cell_Gen* get_adr_Cellule();
        Cell_Gen** get_adr_Suivant();
};

template<typename T>
Cell_Gen<T>::Cell_Gen(T valeur, Cell_Gen* suivant) : _valeur(valeur), _suivant(suivant)
{

}

template<typename T>
T Cell_Gen<T>::get_Valeur() const
{
    return _valeur;
}

template<typename T>
Cell_Gen<T>* Cell_Gen<T>::get_Suivant() const
{
    return _suivant;
}

template<typename T>
void Cell_Gen<T>::set_Valeur(T valeur)
{
    _valeur = valeur;
}

template<typename T>
void Cell_Gen<T>::set_Suivant(Cell_Gen* suivant)
{
    _suivant = suivant;
}

template<typename T>
Cell_Gen<T>* Cell_Gen<T>::get_adr_Cellule()
{
    return this;
}

template<typename T>
Cell_Gen<T>** Cell_Gen<T>::get_adr_Suivant()
{
    return &_suivant;
}

#endif