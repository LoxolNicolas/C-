#include <iostream>
#include <string>

//using namespace std; 
using std::cout;

int main(int, char **) 
{
    std::string prenom; 
    int age;

    cout << "Quel est votre prénom ?" << std::endl;
    std::cin >> prenom;
    cout << "Quel est votre age ?" << std::endl;
    std::cin >> age ;
    cout << "Bonjour "<< prenom << std::endl;

    return 0;
}
