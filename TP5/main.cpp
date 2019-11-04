// fichier cpp pour l'utilisation officielle de la classe Chaine
// pas pour les tests
#include <iostream>
#include "Chaine.hpp"

void afficherParValeur(Chaine ch)
{
	ch.afficher();
}

void afficherParReference(Chaine& ch)
{
	ch.afficher();
}

int main(int, char**) 
{
	//Chaine s1;
   	//Chaine s2(6);
   	Chaine s3("essai");
   	//Chaine s4(s3);
	//Chaine s5("bizarre");
	//Chaine s6 = s3 + s5;
	
	//s2 = s3;

	s3.remplacer("oups");

	//s3[2] = 'v';

	//s3.afficher();

	//std::cout << "Affichage 2 : " << s3.c_str() << std::endl;
	//std::cout << "Affichage bis : " << s6.c_str() << std::endl;
	//std::cout << "Affichage 3 : " << s3[0] << std::endl;

	//std::cout << s3 << std::endl; //HELP
	
	return 0;
}
