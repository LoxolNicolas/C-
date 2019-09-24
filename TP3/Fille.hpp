#ifndef FILLE_H
#define FILLE_H

#include "Mere.hpp"

class Fille : public Mere
{
    private:
        
    public:
        Fille();
        Fille(std::string s);
        ~Fille();

        int getX();

        void afficher();
};

#endif