#ifndef VECTEUR_DYN_HPP
#define VECTEUR_DYN_HPP

#include <iostream>

class Vecteur
{
    private:
        int capacite;
        int taille_act;
        double* tab;

    public:
        Vecteur(int cap = 10);
        ~Vecteur();

        int getCapacity() const;
        int getSize() const;
        double* getTab() const;
        void setCapacity(int cap);
        void setSize(int taille);
        void setTab(double* adr_tab);

        bool estVide() const;
        bool estPlein() const;

        void push_back(double element);
        void pop_back();
        void push_front(double element);
        void pop_front();

        void affiche() const;

        double& operator[](int index);

};

std::ostream& operator<<(std::ostream &os, const Vecteur& v); 
Vecteur operator+(const Vecteur& v1, const Vecteur& v2);

void copie_tab(double* tab1, double* tab2, int taille);


#endif