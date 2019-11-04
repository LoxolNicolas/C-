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

	l.Ajouter_Forme(*f1);
	l.Ajouter_Forme(*f2);
	l.Ajouter_Forme(c1);
	l.Ajouter_Forme(r1);

	std::cout << l.toString();

	return 0;
}
