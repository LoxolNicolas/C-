#ifndef COUPLE_HPP_INCLUDED
#define COUPLE_HPP_INCLUDED

#include "Bavarde.hpp"

class Couple
{
    private:
        Bavarde* _tab;

    public:
        Couple(int taille);
        ~Couple();
};

#endif // COUPLE_HPP_INCLUDED
