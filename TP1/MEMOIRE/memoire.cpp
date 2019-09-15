#include <iostream>

int main(int, char**) 
{
   int * p = new int;

   *p = 3;

   std::cout << *p << std::endl;

   delete p;

   //----------------------------------------

   const int taille = 500;

   int * p1 = new int[taille];

   for(auto i = 0; i< taille; ++i ) p1[i] = i;
   for(auto i = 0; i< taille; ++i ) std::cout << p1[i] << std::endl;

   delete[] p1;

   return 0;
}