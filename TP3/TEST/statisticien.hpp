#ifndef __CPP3_STATISTICIEN_HPP__
#define __CPP3_STATISTICIEN_HPP__

#include <iostream>

class Statisticien 
{
    private:
        bool calcul;
        int somme;
        float moyenne;

    public:
        void acquerir(std::string nom);
        bool aCalcule();
};

#endif