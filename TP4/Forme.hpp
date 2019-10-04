#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"

// enum COULEURS { BLANC, NOIR}; ENUM DU LANGAGE C
enum class COULEURS {BLANC, NOIR};

//FORME HERITE DE POINT !!
class Forme 
{
    private:
        Point p;
        COULEURS c;
        int x;
        int y;
        int id;
        static int nbFormes;

    public:
        Forme();
        Forme(Point p, COULEURS c);
        //Point& getPoint();
        COULEURS getCouleur();


};

#endif