#include <iostream>
#include "functii.h"
using namespace std;

void student::Read()
{
    cout<<"Nr. matricol : /n>> ";
    cin>>nr_matricol;

    cout<<"Nume :/n>> ";
    cin>>nume;

    cout<<"Gen :/n>> ";
    cin>>gen;

    cout<<"Nota :/n>> ";
    cin>>nota;

}

void student::Write()
{
    cout<<"Nr. matricol : ";
    cout<<nr_matricol;
    cout<<endl;
    
    cout<<"Nume : ";
    cout<<nume;
    cout<<endl;

    cout<<"Gen : ";
    cout<<gen;
    cout<<endl;

    cout<<"Nota : ";
    cout<<nota;
    cout<<endl;
}
