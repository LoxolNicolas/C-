#ifndef ITERATEUR_HPP
#define ITERATEUR_HPP

#include "Cell.hpp"
#include "Liste.hpp"

class Iterateur
{
    private:
        Cell* Ptr_Sur_Cellule;

    public:
        Iterateur();
        Iterateur(Cell* ptr);

        int getValeurPointe() const;
        Cell* getAdrPointe() const;
        void setAdrPointe(Cell* cell);

        Iterateur begin();
        Iterateur end();

        int operator*();
        Iterateur operator++(int i);
};

bool operator==(const Iterateur& it1, const Iterateur& it2);
bool operator!=(const Iterateur& it1, const Iterateur& it2);

#endif