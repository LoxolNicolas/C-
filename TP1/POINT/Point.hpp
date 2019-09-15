#ifndef POINT_HPP
#define POINT_HPP

class Point
{
    private:
        int x;
        int y;
        
        static int compteur;

    public:
        Point();
        Point(int x, int y);

        int getX();
        void setX(int x);
        int getY();
        void setY(int y);

        void deplacerDe(int x, int y);
        void deplacerVers(int x, int y);

        static int getCompteur();
};

#endif