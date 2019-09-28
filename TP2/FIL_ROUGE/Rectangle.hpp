#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "string"

class Rectangle
{
    private:
        int x;
        int y;
        int w;
        int h;

    public:
        Rectangle(int x, int y, int w, int h);
        Rectangle(int x1, int y1, int x2, int y2, int type);

        //std::string to_String() const;     
};

#endif