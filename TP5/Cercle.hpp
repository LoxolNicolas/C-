#ifndef CERCLE_H
#define CERCLE_H

#include <string>
#include "Forme.hpp"

class Cercle : public Forme
{
    private:
        int x;
        int y;
        int ordre;

    public:
        Cercle(int x, int y, int w, int h);
        Cercle(int x, int y, int rayon);

        std::string to_String() const override;     
};

#endif