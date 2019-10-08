#include <iostream>
#include "Liste.hpp"

Liste::Liste() : nb_cercle(-1), nb_rectangle(-1), compteur(0)
{

}

void Liste::AjouterCercle(Cercle& c)
{
    if(nb_cercle < TAILLE_TAB - 1)
    {
        nb_cercle++;
        compteur++;
        cer[nb_cercle] = &c;

        c.setOrdre(nb_cercle);
    }

    else
    {
        std::cerr << "TABLEAU DE CERCLE PLEIN" << std::endl;    
    }    
}

void Liste::SupprimerCercle()
{
    if(nb_cercle >= -1)
    {
        cer[nb_cercle] = nullptr;
        nb_cercle--;
        compteur--;
    }
    else
    {
        std::cerr << "TABLEAU DE CERCLE VIDE" << std::endl;
    }    
}

void Liste::AjouterRectangle(Rectangle& h)
{
    if(nb_rectangle < TAILLE_TAB - 1)
    {
        nb_rectangle++;
        compteur++;
        rec[nb_rectangle] = &h;

        h.setOrdre(nb_rectangle);
    }
    else
    {
        std::cerr << "TABLEAU DE RECTANGLE PLEIN" << std::endl;    
    } 
}

void Liste::SupprimerRectangle()
{
    if(nb_rectangle >= -1)
    {
        rec[nb_rectangle] = nullptr;
        nb_rectangle--;
        compteur--;
    }

    else
    {
        std::cerr << "TABLEAU DE CERCLE RECTANGLE" << std::endl;
    }     
}

int Liste::getCompteur() const
{
    return compteur;
}

std::string Liste::toString() const
{

    std::string res = "";

    for(int i = 0; i < nb_rectangle; i++)
    {
        res += (rec[i]->to_String());
    }

    for(int j= 0; j < nb_cercle; j++)
    {
        res += (cer[j]->to_String());
    }
    
    return res;
}
