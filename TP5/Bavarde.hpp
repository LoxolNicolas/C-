#ifndef BAVARDE_H
#define BAVARDE_H

class Bavarde 
{
    private:
        int x;
    
    public:
        Bavarde(int x = 0);
        Bavarde(Bavarde const& b);
        ~Bavarde();

        int getX() const;

        void afficher() const;
};

#endif