#include "functii.h"



int main(void)
{
    MultimeComplexe m;
    Complex c1(2,3) , c2(3,4), c3(2,-1);
    m.adauga(c1);
    m.adauga(c2);
    m.afisare();
    m.extrage(c1);
    m.extrage(c3);
    m.afisare();
    m.adauga(c3);
    m.adauga(c3);
    m.afisare();

    int rez=1;
    int re,im;
    int option=1;
   
    while(rez)
    {
        cout<<"re= ";
        cin>>re;

        cout<<"im= ";
        cin>>im;
        Complex a(re,im);
        cout<<"1-adaugare 2-extragere 0-iesire\n";
        cin>>option;
        switch(option)
        {
            case 1:
                    m.adauga(a);
                    m.afisare();
                    break;
            case 2:
                    m.extrage(a);
                    m.afisare();
                    break;
            case 0:
                    rez=0;
                    break;
        }
    }
    
    return 0;
}