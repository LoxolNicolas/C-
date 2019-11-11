#include <iostream>

void f()
{
    long* tab;

    try
    {
        tab = new long[1000000000000000000];

        for (int i = 0; i < 1000000000000000000; i++)
        {
            std::cout << i << std::endl;
        }

        delete[] tab;
    }catch(const std::bad_alloc& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(int ,char**)
{
    f();

    return 0;
}
