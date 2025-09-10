#include <iostream>
#include "functii.h"
using namespace std;


int main()
{
    int n;
    student *v;
    cout<<"Nr. de studenti : ";
    cin>>n;

    v=new student[n];
    
    cout<<"Citire:/n";
    for(int i=0;i<n;i++)
    {   
        cout<<"Studentul nr. "<<i<<endl;
        v[i].Read();
    }

    cout<<"\tAfisari/n";
    for(int i=0;i<n;i++)
    {
        cout<<"Studentul "<<i<<endl;
        v[i].Write();
    }

    return 0;
}