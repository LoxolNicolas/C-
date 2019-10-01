#include <iostream>
#include <fstream>

int main(int, char**)
{
    std::string nom = "1.txt";
    
    std::ofstream fichier(nom.c_str());

    int quantite = 7;

    if(!fichier.fail())
    {
        fichier << quantite << std::endl;

        for(int i = 0; i < quantite; i++)
        {
            fichier << i+1 << std::endl;
        }

        fichier.close();
    }

    return 0;
}