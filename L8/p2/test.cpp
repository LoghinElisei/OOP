#include "profesor.h"

int main()
{
    string s0("Cristian**********");
    string s1(10,42);
    string s2("PetruStefan",5,100);
    string s3(s0.begin(),s0.begin()+8);
    string s4(s2+s3);

    Profesor p1(s1,23,100.08,1);
    Profesor p2(s2,45,200,2);
    Profesor p3(s3,100,400,3);
    Profesor p4(s4,100,100,1);

    p1.afisare();
    p2.afisare();
    p3.afisare();
    p4.afisare();
    
    return 0;
}