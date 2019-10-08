#include <iostream>

#include "Rectangle.hpp"
#include "Cercle.hpp"

int main(int , char**)
{
    Rectangle r(5, 4, 3, 2);
    Cercle c(5, 5, 5, 5);
    
    std::cout << c.to_String() << std::endl;
    
    return 0;
}
