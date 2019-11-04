#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED

#include <string>
#include "Forme.hpp"

class Rectangle : public Forme
{
    private:
        int ordre;

    public:
        Rectangle(int x, int y, int w, int h);
        virtual ~Rectangle();

        virtual std::string toString() const override;
};

#endif // RECTANGLE_HPP_INCLUDED
