#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine  
{
	private:
		int capacite;
		char* tab;
		
	public:
		Chaine();
		Chaine(const char* ch);
		Chaine(int cap);
		Chaine(const Chaine& ch);
		
		~Chaine();
		
		const char* c_str() const;
		int getCapacite() const;
		
		void afficher(std::ostream& os = std::cout) const;
		void remplacer(const char* ch);
		char& at(int index) const;
		
		const Chaine& operator=(const Chaine& ch);
		char& operator[](int index) const;	
};

const std::ostream& operator<<(std::ostream& os, const Chaine& ch);
Chaine operator+(const Chaine& ch1, const Chaine& ch2);

#endif
