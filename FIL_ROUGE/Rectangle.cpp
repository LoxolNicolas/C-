#include "Rectangle.hpp"
#include <iostream>

#include <sstream>

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

Rectangle::Rectangle(int x, int y, int w, int h) : Forme(Point(x, y), w, h)
{

}

Rectangle::~Rectangle()
{
	
}

std::string Rectangle::toString() const
{
    return "Rectangle " + patch::to_string(_p.getX()) + " " +  patch::to_string(_p.getY()) + " " + patch::to_string(_w) + " " + patch::to_string(_h) + "\n";
}
