#ifndef CERCLE_H
#define CERCLE_H

#include "string"

class Cercle
{
    private:
        int x;
        int y;
        int w;
        int h;
        int ordre;

    public:
        Cercle(int x, int y, int w, int h);
        Cercle(int x, int y, int rayon);

        void setOrdre(int ordre);

        std::string to_String() const;     
};

#endif