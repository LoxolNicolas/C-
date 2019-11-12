#include <algorithm>
#include <stack>
#include <vector>
#include <iostream>
#include <iterator>

int main(int, char **) 
{
    std::stack<int> is;
    std::stack<double, std::vector<double>> ds;

    for (int i = 0; i < 100; ++i)
    {
        is.push(i);
    }

    while (!is.empty()) 
    {
        std::cout << is.top() << std::endl;
        ds.push((double)is.top()*is.top());
        is.pop();
    }

    return 0;
}
