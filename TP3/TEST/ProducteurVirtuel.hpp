#ifndef PRODUCTEUR_VIRT_HPP
#define PRODUCTEUR_VIRT_HPP

class ProducteurVirtuel
{
    private:
        int travail;

    public:
        virtual bool produire(int quantite, std::string nom) = 0;
        int getTravail();

};

#endif