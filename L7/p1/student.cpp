#include <iostream>
#include "student.h"
#include "persoana.h"
#include "data.h"
using namespace std;

Student::Student():Persoana()
{
    grupa=1210;
    
}

Student::Student(int grupa,const char *nume,const char *prenume,Data *data):Persoana(nume,prenume,data)
{
    this->grupa=grupa;
}

int Student::getGrupa()
{
    return grupa;
}

void Student::afisare()
{
    cout<<grupa<<"\t";
    Persoana::afisare();
}

Student& Student::operator=(const Student &s)
{
    //var1
    Persoana::operator=(s);
    this->grupa=s.grupa;
    //*((Persoana*)this)=s;
    /*var2*/
    /*if(this == &s)
    {
        return *this;
    }
    */
/*    
    int p=s.getGrupa();
    //char *p=s.getNume();
*/
    //cout<<"***********"<<s.getNume()<<endl;
    

    return *this;
}