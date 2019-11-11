#include "Pile.hpp"
#include <stdexcept>
#include <iostream>

int main(int, char**)
{
    try
    {
        Pile p1(-9);
        Pile p2(-7);
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
	throw;
    }
    
    return 0;
}
