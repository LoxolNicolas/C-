#include "Liste.hpp"

#include <iostream>

Liste::Liste() : Tete(nullptr)
{

}

Liste::~Liste()
{
    Cell* act = Tete;

    while(act != nullptr)
    {
        Cell* tmp = act;
        act = act->get_Suivant();
        delete tmp;
    }
}

Cell* Liste::get_adr_Tete() const
{
    return Tete;
}

void Liste::set_adr_Tete(Cell* adr)
{
    Tete = adr;
}

bool Liste::empty() const
{
    return (Tete == nullptr);
}

void Liste::push_back(int v)
{
    Cell* c = new Cell(v);

    if(this->empty())
    {
        this->set_adr_Tete(c->get_adr_cellule());
    }

    else
    {
        Cell* act = Tete;

        while(act->get_Suivant() != nullptr)
        {
            act = act->get_Suivant();
        }

        act->set_Suivant(c->get_adr_cellule());
    }
}

void Liste::push_front(int v)
{
    Cell* c = new Cell(v);

    if(!(this->empty()))
    {
        c->set_Suivant(Tete);
    }

    this->set_adr_Tete(c->get_adr_cellule());
}

void Liste::pop_front()
{
    if(!(this->empty()))
    {
        Cell* tmp = Tete->get_adr_cellule();
        this->set_adr_Tete(Tete->get_Suivant());
        delete tmp;
    }    

    else
    {
        std::cerr << "Liste vide" << std::endl;
    }
}

void Liste::pop_back()
{
    if(!(this->empty()))
    {
        Cell** prec = &Tete;
        Cell* act = Tete;

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

Cell* Liste::front() const
{
    return Tete;
}

Cell* Liste::back() const
{
    Cell* act = Tete;

    while(act->get_Suivant() != nullptr)
    {
        act = act->get_Suivant();
    }

    return act;
}

int Liste::size() const
{
    int taille = 0;

    if(!(this->empty()))
    {
        Cell* act = Tete;
        taille = 1;

        while(act->get_Suivant() != nullptr)
        {
            act = act->get_Suivant();
            taille++;
        }
    }
    
    return taille;
}

std::ostream& operator<<(std::ostream& os, const Liste& l)
{
    if(l.get_adr_Tete() != nullptr)
    {
        Cell* act = l.get_adr_Tete();

        while(act != nullptr)
        {
                os << act->get_Valeur() << std::endl;

                act = act->get_Suivant();
        }
    }

    return os;
}