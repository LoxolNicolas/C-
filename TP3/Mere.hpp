#ifndef MERE_H
#define MERE_H

#include<string>
#include<iostream>

class Mere
{
    protected:
        int x;
        std::string nom;
        static int cptMere;
        
    public:
        Mere();
        Mere(std::string s);
        ~Mere();
        
       static int getAttribut();
       void setnom(std::string nom);
       std::string getnom();

       void afficher();
};

#endif