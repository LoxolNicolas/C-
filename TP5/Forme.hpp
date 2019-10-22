#ifndef FORME_H
#define FORME_H

#include <iostream>

class Forme
{
    protected:
        int w;
        int h;

        static int nbFormes;

    public:
        Forme();
        Forme(int w, int h);
        virtual std::string to_String() const;

};

#endif
