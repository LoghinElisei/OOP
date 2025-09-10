#include "Data.h"
#include "Persoana.h"
#include "student.h"
#include <iostream>
using namespace std;

void sortare(Student v[5])
{
    Student aux;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (v[i].getGrupa() > v[j].getGrupa())
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}
int main()
{
    Data data1(2000, 3, 20);
    Data data2(2010, 4, 18);
    Data data3(1992,1,28);
    Data data4(2004,23,8);
    Data data5(2007,6,12);
    /*Persoana radu("Radu", "Stefan", &data);
    radu.afisare();
    return 0;
*/

    Student v[5] = {
        Student(),
        Student(1210, "Filip", "Andrei", &data1),
        Student(1321, "Stefan", "Ionescu", &data2),
        Student(1110, "Alex", "Vasile", &data3),
        Student(3107, "Eduard", "Pintilie", &data4),
        };

    cout << "Grupa\tNume\tPrenume\tDataNastere\n";
    for (int i = 0; i < 5; i++)
    {
        v[i].afisare();
    }

    cout << "***** Sortare ********\n";
    sortare(v);
    for (int i = 0; i < 5; i++)
    {
        v[i].afisare();
    }
    return 0;
}
