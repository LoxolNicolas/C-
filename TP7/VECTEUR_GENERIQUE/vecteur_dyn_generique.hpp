#ifndef VECTEUR_DYN_GENERIQUE_HPP
#define VECTEUR_DYN_GENERIQUE_HPP

#include <iostream>

template<typename T>
class Vecteur_Gen
{
    private:
        int capacite;
        int taille_act;
        T* tab;

    public:
        Vecteur_Gen(int cap = 10);
        ~Vecteur_Gen();

        int getCapacity() const;
        int getSize() const;
        T* getTab() const;
        void setCapacity(int cap);
        void setSize(int taille);
        void setTab(T* adr_tab);

        bool estVide() const;
        bool estPlein() const;

        void push_back(T element);
        void pop_back();
        void push_front(T element);
        void pop_front();

        void affiche() const;

        T& operator[](int index);

};

template<typename T>
std::ostream& operator<<(std::ostream &os, const Vecteur_Gen<T>& v); 

template<typename T>
Vecteur_Gen<T> operator+(const Vecteur_Gen<T>& v1, const Vecteur_Gen<T>& v2);

template<typename T>
void copie_tab(T* tab1, T* tab2, int taille);

template<typename T>
Vecteur_Gen<T>::Vecteur_Gen(int cap) : capacite(cap), taille_act(0), tab(new T[capacite])
{

}

template<typename T>
Vecteur_Gen<T>::~Vecteur_Gen() 
{
    delete[] tab;
}

template<typename T>
int Vecteur_Gen<T>::getCapacity() const 
{
    return capacite;
}

template<typename T>
int Vecteur_Gen<T>::getSize() const 
{
    return taille_act;
}

template<typename T>
T* Vecteur_Gen<T>::getTab() const 
{
    return tab;
}

template<typename T>
void Vecteur_Gen<T>::setCapacity(int cap)
{
    capacite = cap;
}

template<typename T>
void Vecteur_Gen<T>::setSize(int taille)
{
    taille_act = taille;
}

template<typename T>
void Vecteur_Gen<T>::setTab(T* adr_tab)
{
    delete[] tab;
    tab = adr_tab;
}

template<typename T>
bool Vecteur_Gen<T>::estVide() const 
{
    return (taille_act == 0);
}

template<typename T>
bool Vecteur_Gen<T>::estPlein() const 
{
    return (taille_act == capacite);
}

template<typename T>
void Vecteur_Gen<T>::push_back(T element)
{
    if(this->estPlein())
    {
        T tab_temp[capacite];

        copie_tab(tab, tab_temp, taille_act);

        capacite = capacite * 2;

        delete[] tab;

        tab = new T[capacite];

        copie_tab(tab_temp, tab, taille_act);
    }

    tab[taille_act] = element;
    
    taille_act++;
}

template<typename T>
void Vecteur_Gen<T>::pop_back()
{
    if(!(this->estVide()))
    {
        taille_act--;
    }

    else
    {
        std::cerr << "Tableau vide" << std::endl;
    }
    
}

template<typename T>
void Vecteur_Gen<T>::push_front(T element)
{
    if(this->estPlein())
    {
        T tab_temp[capacite];

        copie_tab(tab, tab_temp, taille_act);

        capacite = capacite * 2;

        delete[] tab;

        tab = new T[capacite];

        copie_tab(tab_temp, tab, taille_act);
    }

    for(int i = taille_act; i > 0; i--)
    {
        tab[i] = tab[i - 1];
    }

    tab[0] = element;

    taille_act++;
    
}

template<typename T>
void Vecteur_Gen<T>::pop_front()
{
    if(!(this->estVide()))
    {
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

template<typename T>
void Vecteur_Gen<T>::affiche() const
{
    for(int i = 0; i < taille_act; i++)
    {
        std::cout << tab[i] << std::endl;
    }   
}

template<typename T>
T& Vecteur_Gen<T>::operator[](int index)
{
    if(index < 0 || index >= taille_act)
    {
        std::cerr << "Index out of range" << std::endl;
        exit(1);
    }

    return tab[index];
}

template<typename T>
std::ostream& operator<<(std::ostream &os, const Vecteur_Gen<T>& v)
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

template<typename T>
Vecteur_Gen<T> operator+(const Vecteur_Gen<T>& v1, const Vecteur_Gen<T>& v2)
{
    Vecteur_Gen<T> v;

    v.setCapacity(v1.getCapacity() + v2.getCapacity());
    v.setSize(v1.getSize() + v2.getSize());

    T* tab_double = new T[v1.getCapacity() + v2.getCapacity()];

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

template<typename T>
void copie_tab(T* tab1, T* tab2, int taille)
{
    for(int i = 0; i < taille; i++)
    {
        tab2[i] = tab1[i];
    }
}

#endif