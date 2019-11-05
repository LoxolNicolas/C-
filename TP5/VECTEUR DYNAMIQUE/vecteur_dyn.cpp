#include "vecteur_dyn.hpp"
#include <iostream>

Vecteur::Vecteur(int cap) : capacite(cap), taille_act(0), tab(new double[capacite])
{
    for (int i = 0; i < capacite; i++)
    {
        tab[i] = 0;
    }
}

Vecteur::~Vecteur()
{
    delete[] tab;
}

int Vecteur::getCapacity() const
{
    return capacite;
}

int Vecteur::getSize() const
{
    return taille_act;
}

double* Vecteur::getTab() const
{
    return tab;
}

void Vecteur::setCapacity(int cap)
{
    capacite = cap;
}

void Vecteur::setSize(int taille)
{
    taille_act = taille;
}

void Vecteur::setTab(double* adr_tab)
{
    delete[] tab;
    tab = adr_tab;
}

bool Vecteur::estVide() const
{
    return (taille_act == 0);
}

bool Vecteur::estPlein() const
{
    return (taille_act == capacite);
}

void Vecteur::push_back(double element)
{
    if(this->estPlein())
    {
        double tab_temp[capacite];

        copie_tab(tab, tab_temp, taille_act);

        capacite = capacite * 2;

        delete[] tab;

        tab = new double[capacite];

        copie_tab(tab_temp, tab, taille_act);
    }

    tab[taille_act] = element;
    
    taille_act++;
}

void Vecteur::pop_back()
{
    if(!(this->estVide()))
    {
        tab[taille_act] = 0;
        taille_act--;
    }

    else
    {
        std::cerr << "Tableau vide" << std::endl;
    }
    
}

void Vecteur::push_front(double element)
{
    if(this->estPlein())
    {
        double tab_temp[capacite];

        copie_tab(tab, tab_temp, taille_act);

        capacite = capacite * 2;

        delete[] tab;

        tab = new double[capacite];

        copie_tab(tab_temp, tab, taille_act);
    }

    for(int i = taille_act; i > 0; i--)
    {
        tab[i] = tab[i - 1];
    }

    tab[0] = element;

    taille_act++;
    
}

void Vecteur::pop_front()
{
    if(!(this->estVide()))
    {
        tab[0] = 0;

        for(int i = 0; i < taille_act; i++)
        {
            tab[i] = tab[i + 1];
        }

        taille_act--;   
    }

    else
    {
        std::cerr << "Tableau vide" << std::endl;
    }  
}

void Vecteur::affiche() const
{
    for(int i = 0; i < taille_act; i++)
    {
        std::cout << tab[i] << std::endl;
    }   
}

double& Vecteur::operator[](int index)
{
    if(index < 0 || index >= taille_act)
    {
        std::cerr << "Mauvais index" << std::endl;
        std::exit(1);
    }

    return tab[index];
}

std::ostream& operator<<(std::ostream &os, const Vecteur& v)
{
    if(v.getTab() != nullptr)
    {
        for(int i = 0; i < v.getSize(); i++)
        {
            os << *(v.getTab() + i) << std::endl;         
        }
    }

    return os;
}

Vecteur operator+(const Vecteur& v1, const Vecteur& v2)
{
    Vecteur v;

    v.setCapacity(v1.getCapacity() + v2.getCapacity());
    v.setSize(v1.getSize() + v2.getSize());

    double* tab_double = new double[v1.getCapacity() + v2.getCapacity()];

    for(int i = 0; i < v1.getSize(); i++)
    {
        tab_double[i] = *(v1.getTab() + i);
    }

    for(int i = v1.getSize(); i < v.getSize(); i++)
    {
        tab_double[i] = *(v2.getTab() + (i - 3));
    }
    
    v.setTab(tab_double);

    return v;
}

void copie_tab(double* tab1, double* tab2, int taille)
{
    for(int i = 0; i < taille; i++)
    {
        tab2[i] = tab1[i];
    }
}