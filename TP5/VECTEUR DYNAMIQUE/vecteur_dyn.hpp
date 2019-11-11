#ifndef VECTEUR_DYN_HPP
#define VECTEUR_DYN_HPP

#include <iostream>
#include <exception>

class Vecteur
{
    public:
        class ErreurAlloc : public std::exception
        {
            public:
                ErreurAlloc() noexcept
                {

                }

                virtual ~ErreurAlloc() noexcept
                {

                }

                virtual std::string what(int taille) const noexcept
                {
                    return "Erreur Allocation : " + std::to_string(taille) + "\n"; 
                }
        };

        class ErreurBorne : public std::exception
        {
            public:
                ErreurBorne() noexcept
                {

                }

                virtual ~ErreurBorne() noexcept
                {

                }

                virtual std::string what(int indice) const noexcept
                {
                    return "Erreur Borne : " + std::to_string(indice) + "\n"; 
                }
        };

        class ErreurBorneInf : public std::exception
        {
            public:
                ErreurBorneInf() noexcept
                {

                }

                virtual ~ErreurBorneInf() noexcept
                {

                }

                virtual std::string what(int indice) const noexcept
                {
                    return "Erreur Borne inf: " + std::to_string(indice) + "\n"; 
                }
        };

        class ErreurPointeur : public std::exception
        {
            public:
                ErreurPointeur() noexcept
                {

                }

                virtual ~ErreurPointeur() noexcept
                {

                }

                virtual const char* what() const noexcept override
                {
                    return "Erreur Pointeur : nullptr \n"; 
                }
        };

        class ErreurCapacite : public std::exception
        {
            public:
                ErreurCapacite() noexcept
                {

                }

                virtual ~ErreurCapacite() noexcept
                {

                }

                virtual std::string what(int capacite) const noexcept
                {
                    return "Erreur Capacite : " + std::to_string(capacite) + "\n"; 
                }
        };

    private:
        int capacite;
        int taille_act;
        double* tab;

    public:
        Vecteur(int cap = 10);
        ~Vecteur() noexcept;

        int getCapacity() const noexcept;
        int getSize() const noexcept;
        double* getTab() const noexcept;
        void setCapacity(int cap);
        void setSize(int taille);
        void setTab(double* adr_tab);

        bool estVide() const noexcept;
        bool estPlein() const noexcept;

        void push_back(double element);
        void pop_back();
        void push_front(double element);
        void pop_front();

        void affiche() const noexcept;

        double& operator[](int index);

};

std::ostream& operator<<(std::ostream &os, const Vecteur& v); 
Vecteur operator+(const Vecteur& v1, const Vecteur& v2);

void copie_tab(double* tab1, double* tab2, int taille);


#endif