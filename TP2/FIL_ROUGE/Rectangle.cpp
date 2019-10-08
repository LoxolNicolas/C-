#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(int x, int y, int w, int h) : x(x), y(y), w(w), h(h), ordre(0)
{

}

void Rectangle::setOrdre(int ordre)
{
    this->ordre = ordre;
}

std::string Rectangle::to_String() const
{
    return "Rectangle " + std::to_string(x) + " " +  std::to_string(y) + " " + std::to_string(w) + " " +std::to_string(h);
}
