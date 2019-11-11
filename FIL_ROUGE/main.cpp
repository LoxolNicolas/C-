#include <iostream>
#include "Forme.hpp"
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Liste.hpp"

int main(int, char**)
{
	
	Liste l;

	Forme* f1 = new Rectangle(4, 4, 2, 1);
	Forme* f2 = new Cercle(8, 7, 10);
	Cercle c1(10, 9, 20);
	Rectangle r1(5, 4, 9, 4);
	
	Forme* f3 = new Rectangle(2, 4, 6, 3); 
	Forme* f4 = new Cercle(2, 2, 5, 7);

	Forme* f5 = f3->copie();
	Forme* f6 = f4->copie();

	l.Ajouter_Forme(*f1);
	l.Ajouter_Forme(*f2);
	l.Ajouter_Forme(c1);
	l.Ajouter_Forme(r1);

	std::cout << l.toString();

	Forme* l1 = new Liste();

	((Liste*)l1)->Ajouter_Forme(*f1);
	((Liste*)l1)->Ajouter_Forme(*f2);
	((Liste*)l1)->Ajouter_Forme(c1);
	((Liste*)l1)->Ajouter_Forme(r1);

	Forme* l2 = l1->copie();

	std::cout << l1->toString() << std::endl;
	std::cout << l2->toString() << std::endl;
	
	return 0;
}
