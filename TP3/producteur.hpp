#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur 
{
    private:
        int travail;
    
    public:
        Producteur();
        int getTravail() const;
        bool produire(int quantite, std::string nom);

};

#endif
