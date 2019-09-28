#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h)
{

}

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int type) : x(x1), y(y1), w(x2), h(y2), type(type) 
{

}
/*
std::string Rectangle::Rectangle() const
{
    return std::cout << "RECTANGLE " << x << " " << y << " " << w << " " << h << std::endl; 
}
*/