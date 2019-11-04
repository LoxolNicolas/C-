#ifndef CERCLE_HPP_INCLUDED
#define CERCLE_HPP_INCLUDED

#include <string>
#include "Forme.hpp"

class Cercle : public Forme
{
    private:
        int ordre;

    public:
        Cercle(int x, int y, int w, int h);
        Cercle(int x, int y, int rayon);
        
        virtual ~Cercle();
        
        int getRayon() const;
        void setRayon(int rayon);

        virtual std::string toString() const override;
};

#endif // CERCLE_HPP_INCLUDED
