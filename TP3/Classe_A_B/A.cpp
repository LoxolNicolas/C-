#include "A.hpp"
#include "B.hpp"

A::A(int x) : i(x)
{

}

void A::send(B* b, int x)
{
    b->exec(x);
}

void A::exec(int x)
{
    i += x;
}
