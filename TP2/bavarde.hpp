#ifndef BAVARDE_H
#define BAVARDE_H

class Bavarde 
{
    private:
        int x;
    
    public:
        Bavarde(int x = 0);
        ~Bavarde();

        int getX();
        void afficher();
};

#endif