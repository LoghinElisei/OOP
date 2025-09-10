#include "functii.h"

int main(void)
{
    /*Multime m(2);
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
    */

    Multime m;
    Multime a;
    Multime b;
    Multime d;
    m.adauga(2);

    m += 4;
    m.operator+=(4);
    m.afisare();

    m -= 5;
    m.operator-=(4);
    m.afisare();

    a=m;
    a.adauga(10);
    a.afisare();

    m+=99;
    m.afisare();

    cout<<"\tb=m+a\n";
    b= m+a;
    //b.operator=(a.operator+(m));
    b.afisare();
    
    d+=b;
    d.afisare();
    
    /*Multime M1(50);
    Multime M2=M1;
    M2.afisare();
    */
    /*
    !!!!
    Multime M1(50);
    Multime M2=M1;     // compilatorul optimizeaza , 

    se apeleaza constructorul de copiere , nu se apeleaza constructorul si dupa copierea , 
    => M2(M1);
    */     


    return EXIT_SUCCESS;
}