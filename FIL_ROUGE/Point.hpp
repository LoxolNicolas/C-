#ifndef POINT_HPP_INCLUDED
#define POINT_HPP_INCLUDED

class Point
{
    private:
        int _x;
        int _y;

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

#endif // POINT_HPP_INCLUDED
