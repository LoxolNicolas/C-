#include <iostream>
#include <fstream>

int main(int, char**)
{
    std::string nom = "1.txt";

    std::ifstream fichier(nom.c_str());

    int i = 0, max;
    
    fichier >> max;

    while(!fichier.eof() && i < max)
    {
        double lecture;

        fichier >> lecture;

        ++i;

        std::cout << lecture << " ";
    }

    fichier.close();

    return 0;
}