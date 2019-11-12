#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>

int main (int, char **) 
{
    std::vector<std::string> v;
    std::string input;

    while (std::cin >> input)
    {
        v.push_back (input);
    }

    std::sort(v.begin(), v.end());

    //std::copy (v.begin(), v.end(), std::ostream_iterator<int> (std::cout, "\n"));

    /*
    int n = v.size();

    for(int i  = 0; i < n; i++)
    {
        std::cout << v[i] << std::endl;
    }
    */
   
    for(auto& e : v)
    {
        std::cout << e << std::endl;
    }
    
    return 0;
}