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

    public:
        Cercle(int x, int y, int w, int h);
        Cercle(int x, int y, int rayon);

        std::string to_String() const;     
};

#endif