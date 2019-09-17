#ifndef COUPLE_H
#define COUPLE_H

#include "bavarde.hpp"

class Couple
{
    private:
        Bavarde a;
        Bavarde b;

    public:
        Couple();
        Couple(Bavarde a, Bavarde b);
        ~Couple();
};

#endif