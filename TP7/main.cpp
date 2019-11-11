#include <iostream>

template <typename T>
const T& max(const T& a, const T& b)
{
    return ((a > b) ? a : b);
}

int main(int, char**)
{
    std::cout << max(5, 8) << std::endl;

    std::cout << max(3, (int)'A') << std::endl;

    std::cout << max('r', 'z') << std::endl;
    
    return 0;
}

