#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__

class Point 
{
    private:
        int x;
        int y;

    public:
        Point();
        Point(int x, int y);
        Point(const Point& p1);

        int getX() const;
        int getY() const;
        void setX(int x);
        void setY(int y);
};

extern Point ORIGINE;


// declaration d'un point ORIGINE
// il ne faudra pas oublier de l'instancier quelque part
// extern Point ORIGINE;

#endif