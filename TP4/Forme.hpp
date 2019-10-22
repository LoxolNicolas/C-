#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"

// enum COULEURS { BLANC, NOIR}; ENUM DU LANGAGE C
enum class COULEURS {BLANC, NOIR, BLEU, ROUGE, JAUNE, VERT};

//FORME HERITE DE POINT !!

class Forme 
{
    protected:
        Point p;
        COULEURS c;
        int w;
        int h;
        int id;
        static int nbFormes;

    public:
        Forme();
        Forme(Point p1, COULEURS couleur);
        Forme(int w, int h, Point p1);

        int getLargeur();
        int getHauteur();

        void setX(int x);
        void setY(int y);
        
        Point& getPoint();
        COULEURS getCouleur();
        void setCouleur(COULEURS couleur);

        int getId();
        static int prochainId();

};

#endif