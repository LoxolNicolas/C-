#include <iostream>
#include "Fille.hpp"
#include "Mere.hpp"

int main(int , char**)
{
    /*
    Fille f, f1;
    Mere m, m1, m2;

    std::cout << Mere::getAttribut() << std::endl;
    std::cout << Fille::getAttribut() << std::endl;
    */

    //Mere m3;
    //Fille f4("pascale");

    //std::cout << m3.getnom()  << std::endl << f4.getnom() << std::endl;

   // m3.afficher();
   // f4.afficher();

    Mere  *pm = new Mere("mere_dyn");
    Fille *pf = new Fille("fille_dyn");
    Mere  *pp = new Fille("fille vue comme mere");

    pm->afficher(); // affiche Mere
    pf->afficher(); // affiche Fille
    ((Fille*)pp)->afficher(); // affiche Fille

    delete pm;
    delete pf;
    delete pp;

    return 0;
}