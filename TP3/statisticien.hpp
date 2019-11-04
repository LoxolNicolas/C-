#ifndef __CPP3_STATISTICIEN_HPP__
#define __CPP3_STATISTICIEN_HPP__

#include <iostream>

class Statisticien 
{
	private:
        bool calcul;
    
    public:
        Statisticien();
        int acquerir(std::string nom);
        bool aCalcule() const;
};

#endif