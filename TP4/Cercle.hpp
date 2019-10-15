#ifndef CERCLE_H
#define CERCLE_H

#include <string>
#include "Forme.hpp"

class Cercle : public Forme
{
    private:
        int ordre;

    public:
        Cercle();
        Cercle(int x, int y, int w, int h);
        Cercle(int x, int y, int rayon);

        void setRayon(int rayon);
        int getRayon();

        void setOrdre(int ordre);

        std::string to_String() const;     
};

#endif
