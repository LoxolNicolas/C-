#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "string"

class Rectangle
{
    private:
        int x;
        int y;
        int w; //Largueur
        int h; //Hauteur
        int ordre;

    public:
        Rectangle(int x, int y, int w, int h);

        void setOrdre(int ordre);

        std::string to_String() const;  

};

#endif