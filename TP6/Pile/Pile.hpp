#ifndef PILE_HPP
#define PILE_HPP

class Pile
{
    private:
        int* tab;
        int _taille;
        int _capacite;
    
    public:
        Pile(int capacite = 10);
        ~Pile();

        int size() const;
        int getCapacite() const;
        bool empty() const;
        void push(int element);
        void pop();
        int top() const;
        void afficher() const;
};

#endif