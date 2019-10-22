#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(int x, int y, int w, int h) : Forme(w, h), x(x), y(y), ordre(0)
{

}

std::string Rectangle::to_String() const
{
    return "Rectangle " + std::to_string(x) + " " +  std::to_string(y) + " " + std::to_string(w) + " " +std::to_string(h);
}
