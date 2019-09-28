#include <iostream>
#include "A.hpp"
#include "B.hpp"

int main(int , char**)
{
    A a(1);
    B b(1);

    b.send(&a, 5);
    a.send(&b, 3);

    std::cout << a.i << "/" << b.j << std::endl;    

    return 0;
}
