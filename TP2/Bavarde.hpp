#ifndef BAVARDE_HPP_INCLUDED
#define BAVARDE_HPP_INCLUDED

class Bavarde
{
    private:
        int _x;

    public:
        Bavarde();
        Bavarde(int x);
        Bavarde(const Bavarde& b);
        ~Bavarde();

        int get_X();

        void afficher();

};

#endif // BAVARDE_HPP_INCLUDED
