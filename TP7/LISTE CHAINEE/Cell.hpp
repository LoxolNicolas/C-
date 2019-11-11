#ifndef CELL_HPP
#define CELL_HPP

class Cell
{
    private:
        int _valeur;
        Cell* _suivant;

    public:
        Cell(int valeur, Cell* suivant = nullptr);

        int get_Valeur() const;
        Cell* get_Suivant() const;
        void set_Valeur(int valeur);
        void set_Suivant(Cell* suivant);
        Cell* get_adr_cellule();
        Cell** get_adr_Suivant();
};

#endif