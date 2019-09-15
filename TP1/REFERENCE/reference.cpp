#include <iostream>

void fonction1(int a) 
{
    std::cout << &a << std::endl;
}

void fonction2(int& a) 
{
    std::cout << &a << std::endl;
}

void echange_pointeur(int* a, int*b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void echange_reference(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int, char **) 
{
    int age = 41;

    std::cout << &age << std::endl;
    fonction1(age);
    fonction2(age);

    int  a = 3;
    int  b = a;
    int& c = a;

    std::cout << a << " " << b << " " << c << std::endl;
    b = 4;
    std::cout << a << " " << b << " " << c << std::endl;
    c = 5;
    std::cout << a << " " << b << " " << c << std::endl;
    a = 6;
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}