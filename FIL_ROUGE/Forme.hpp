#ifndef FORME_HPP_INCLUDED
#define FORME_HPP_INCLUDED

#include "Point.hpp"
#include <string>

enum class COULEURS {NOIR, BLANC, BLEU, JAUNE, ROUGE, VERT};

class Forme
{
    protected:
        Point _p;
        int _w;
        int _h;
        COULEURS _c;
        int id;

        static int nbFormes;
        
    public:
    	   Forme();
    	   Forme(Point p, COULEURS c);
    	   Forme(Point p, int w, int h);
    	   
    	   virtual ~Forme();
    	   
        COULEURS getCouleur() const;
        void setCouleur(COULEURS c);
        void setX(int x);
        void setY(int y);
        int getHauteur() const;
        int getLargeur() const; 
        
        Point& getPoint();
        
        int getId() const;
        static int prochainId();
        
        virtual std::string toString() const = 0;     
};

#endif // FORME_HPP_INCLUDED
