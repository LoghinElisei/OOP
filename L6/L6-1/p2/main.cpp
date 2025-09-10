#include "functii.h"

int main(void)
{
    Multime m(2);
    
    m.adauga(4);
    m.adauga(3);
    m.afisare();
    m.extrage(4);
    m.extrage(4);
    m.afisare();
    m.adauga(9);
    m.adauga(2);
    m.adauga(2);
    m.afisare();
    
    
  
    return EXIT_SUCCESS;
}