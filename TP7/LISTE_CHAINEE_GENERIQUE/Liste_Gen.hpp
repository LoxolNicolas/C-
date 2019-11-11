#ifndef LISTE_GEN_HPP
#define LISTE_GEN_HPP

#include <iostream>
#include "Cell_Gen.hpp"

template<typename T>
class Liste
{
    private:
        Cell_Gen<T>* Tete;

    public:
        Liste();
        ~Liste();

        Cell_Gen<T>* get_adr_Tete() const;
        void set_adr_Tete(Cell_Gen<T>* adr);

        bool empty() const;
        void push_back(T v);
        void push_front(T v);
        void pop_front();
        void pop_back();
        Cell_Gen<T>* front() const;
        Cell_Gen<T>* back() const;

        int size() const;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Liste<T>& l);

template<typename T>
Liste<T>::Liste() : Tete(nullptr)
{

}

template<typename T>
Liste<T>::~Liste()
{
    Cell_Gen<T>* act = Tete;

    while(act != nullptr)
    {
        Cell_Gen<T>* tmp = act;
        act = act->get_Suivant();
        delete tmp;
    }
}

template<typename T>
Cell_Gen<T>* Liste<T>::get_adr_Tete() const
{
    return Tete;
}

template<typename T>
void Liste<T>::set_adr_Tete(Cell_Gen<T>* adr)
{
    Tete = adr;
}

template<typename T>
bool Liste<T>::empty() const
{
    return (Tete == nullptr);
}

template<typename T>
void Liste<T>::push_back(T v)
{
    Cell_Gen<T>* c = new Cell_Gen<T>(v);

    if(this->empty())
    {
        this->set_adr_Tete(c->get_adr_Cellule());
    }

    else
    {
        Cell_Gen<T>* act = Tete;

        while(act->get_Suivant() != nullptr)
        {
            act = act->get_Suivant();
        }

        act->set_Suivant(c->get_adr_Cellule());
    }
}

template<typename T>
void Liste<T>::push_front(T v)
{
    Cell_Gen<T>* c = new Cell_Gen<T>(v);

    if(!(this->empty()))
    {
        c->set_Suivant(Tete);
    }

    this->set_adr_Tete(c->get_adr_Cell_Genule());
}

template<typename T>
void Liste<T>::pop_front()
{
    if(!(this->empty()))
    {
        Cell_Gen<T>* tmp = Tete->get_adr_Cell_Genule();
        this->set_adr_Tete(Tete->get_Suivant());
        delete tmp;
    }    

    else
    {
        std::cerr << "Liste vide" << std::endl;
    }
}

template<typename T>
void Liste<T>::pop_back()
{
    if(!(this->empty()))
    {
        Cell_Gen<T>** prec = &Tete;
        Cell_Gen<T>* act = Tete;

        while(act->get_Suivant() != nullptr)
        {
            prec = act->get_adr_Suivant();
            act = act->get_Suivant();
        }

        *prec = nullptr;

        delete act;
    }    

    else
    {
        std::cerr << "Liste vide" << std::endl;
    }
}

template<typename T>
Cell_Gen<T>* Liste<T>::front() const
{
    return Tete;
}

template<typename T>
Cell_Gen<T>* Liste<T>::back() const
{
    Cell_Gen<T>* act = Tete;

    while(act->get_Suivant() != nullptr)
    {
        act = act->get_Suivant();
    }

    return act;
}

template<typename T>
int Liste<T>::size() const
{
    int taille = 0;

    if(!(this->empty()))
    {
        Cell_Gen<T>* act = Tete;
        taille = 1;

        while(act->get_Suivant() != nullptr)
        {
            act = act->get_Suivant();
            taille++;
        }
    }
    
    return taille;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Liste<T>& l)
{
    if(l.get_adr_Tete() != nullptr)
    {
        Cell_Gen<T>* act = l.get_adr_Tete();

        while(act != nullptr)
        {
                os << act->get_Valeur() << std::endl;

                act = act->get_Suivant();
        }
    }

    return os;
}

#endif