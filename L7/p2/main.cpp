#include "Data.h"
#include "persoana.h"
#include "angajat.h"
#include <iostream>
using namespace std;

int main()
{
    Data data1(2000, 3, 20);
    Data data2(2024, 1, 2);
    Data data3(1992,1,28);
    Data data4(2004,23,8);
    Data data5(2004,5,15);
   
    Data curenta(2025,1,23);
    Angajat a[4]={
        Angajat(1000,"Mihalcut","Marian",&data1,data2),
        Angajat(2000,"Silviu","Mihaila",&data3,data2),
        Angajat(7000,"Pintilie","Eduard",&data4,data2),
        Angajat(2,"Loghin","Elisei",&data5,data2)
    };

    for(int i=0;i<4;i++)
    {
        cout<<"\tAngajat "<<i+1<<endl;
        a[i].afisare();
        cout<<"Varsta angajare: "<<a[i].getVarstaAngajare()<<endl;
        a[i].afisarePerioadaMuncita(curenta);
        cout<<endl;
    }
    return 0;
}
