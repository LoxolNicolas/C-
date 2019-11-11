#ifndef LISTE_HPP
#define LISTE_HPP

#include <iostream>
#include "Cell.hpp"

class Liste
{
    private:
        Cell* Tete;

    public:
        Liste();
        ~Liste();

        Cell* get_adr_Tete() const;
        void set_adr_Tete(Cell* adr);

        bool empty() const;
        void push_back(int v);
        void push_front(int v);
        void pop_front();
        void pop_back();
        Cell* front() const;
        Cell* back() const;

        int size() const;
};

std::ostream& operator<<(std::ostream& os, const Liste& l);

#endif