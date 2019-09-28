<<<<<<< HEAD
#include <iostream>
#include "Couple.hpp"

Couple::Couple(Bavarde b1, Bavarde b2) : b1(b1), b2(b2)
{
    std::cout << "Construction couple" << std::endl;
}
=======
#include "Couple.hpp"

Couple::Couple()
{
   
}

Couple::Couple(Bavarde a, Bavarde b) : a(a), b(b)
{

}

Couple::~Couple()
{

}
>>>>>>> 3871c4d11e7dca7699a62ff53d42b184b6158d03
