#include "B.hpp"
#include "A.hpp"

B::B(int x) : j(x)
{
    
}

void B::send(A* a, int x)
{
    a->exec(x);
}

void B::exec(int x)
{
    j += x;
}
