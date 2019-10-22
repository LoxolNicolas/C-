#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "Forme.hpp"

class Rectangle : public Forme
{
    private:
        int x;
        int y;
        int ordre;

    public:
        Rectangle(int x, int y, int w, int h);

        std::string to_String() const override;  

};

#endif