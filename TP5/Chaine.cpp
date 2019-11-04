#include "Chaine.hpp"
#include <iostream>
#include <cstring>

Chaine::Chaine() : capacite(0), tab(nullptr)
{
	std::cout << "Constructeur pas defaut" << std::endl;
}

Chaine::Chaine(const char* ch) : capacite(strlen(ch)), tab(nullptr)
{
	tab = new char[capacite + 1]; // + '\0'
	
	if(tab)
	{
		strncpy(tab, ch, capacite);
		tab[capacite] = '\0';

		std::cout << "Constructeur char" << std::endl;
	}
	
	else
	{
		capacite = 0;
		std::cerr << "L'allocation a echoue" << std::endl;  
	}
}

Chaine::Chaine(int cap) : capacite((cap > 0) ? cap : 0), tab(nullptr)
{
	if(capacite > 0)
	{
		tab = new char[capacite + 1];

		for(int i = 0; i < capacite; i++)
		{
			tab[i] = 0;
		}
		
		tab[capacite] = '\0';

		std::cout << "Constructeur taille" << std::endl;
	}
	
	else
	{
		capacite = 0;
		std::cerr << "L'allocation a echoue" << std::endl;  
	}	
}

Chaine::Chaine(const Chaine& ch) : capacite(ch.capacite), tab(nullptr)
{
	if(capacite > 0)
	{
		tab = new char[capacite + 1];
		strncpy(tab, ch.tab, capacite);
		tab[capacite] = '\0';
		
		std::clog << "Constructeur par copie" << std::endl;
	}
	
	else
	{
		capacite = 0;
		std::cerr << "Erreur d'allocation de la chaine dans le constructeur par copie" << std::endl;
	}
}

Chaine::~Chaine()
{
	delete[] tab;
}

const char* Chaine::c_str() const
{
	return tab;
}

int Chaine::getCapacite() const
{
	return capacite;
}

void Chaine::afficher(std::ostream& os) const
{
	if(tab != nullptr)
	{
		os << tab;
	}
}

void Chaine::remplacer(const char* ch)
{
	if(ch != nullptr)
	{
		delete[] tab;

		capacite = strlen(ch);

		tab = new char[capacite + 1];

		strncpy(tab, ch, capacite);

		tab[capacite] = '\0';
	}

	else
	{
		capacite = 0;
		tab = nullptr;
	}
}

char& Chaine::at(int index) const
{
	if((index < 0) || (index >= capacite) || (tab == nullptr))
	{
		std::cerr << "Mauvais index" << std::endl;
		
		std::exit(1); //FAIRE AVEC TRY CATCH
	}
	
	return tab[index];
}

const Chaine& Chaine::operator=(const Chaine& ch)
{
	if(&ch != this) //Eviter ch1 = ch1 
	{
		delete[] tab; //Pas d'appel au destructeur donc delete
		
		capacite = ch.capacite;
		
		if(capacite > 0)
		{
			tab = new char[capacite + 1];
			strncpy(tab, ch.tab, capacite);
			tab[capacite] = '\0';
		}
		
		else
		{
			capacite = -1;
			tab = nullptr;
		}
	}
	
	return *this;
}

char& Chaine::operator[](int index) const
{
	if((index < 0) || (index >= capacite) || (tab == nullptr))
	{
		std::cerr << "Mauvais index" << std::endl;
		
		std::exit(1); //FAIRE AVEC TRY CATCH
	}
	
	return tab[index];
}

const std::ostream& operator<<(std::ostream& os, const Chaine& ch)
{
	if(ch.c_str() != nullptr)
	{
		os << ch.c_str();
	}
	
	return os;
}


Chaine operator+(const Chaine& ch1, const Chaine& ch2)
{
	char* tab_concat = new char[ch1.getCapacite() + ch2.getCapacite() + 1];

	std::cout << "CHAINE 1 : " << ch1.c_str() << std::endl;
	std::cout << "CHAINE 2 : " << ch2.c_str() << std::endl;

	strncpy(tab_concat, ch1.c_str(), ch1.getCapacite());
	strncat(tab_concat, ch2.c_str(), ch2.getCapacite());
	tab_concat[ch1.getCapacite() + ch2.getCapacite()] = '\0';

	Chaine ch(tab_concat);

	delete[] tab_concat;
	
	return ch;
}



