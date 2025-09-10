#include <iostream>
#include <string.h>
#include "functii.h"
using namespace std;


catalog creare_catalog()
{
    int n;
    catalog cat;
    cat.Read();
    
    return cat;
}

void catalog::Read()
{
    char s[100];
    cout<<"Nr. de studenti \n>> ";
    cin>>nr;

    nume=new char *[nr];
    if(0 == nume)
    {
        fprintf(stderr,"Memorie insuficienta");
        exit(EXIT_FAILURE);
    }
    for(int i=0;i<nr;i++)
    {
        cout<<"Nume :\n>> ";
        cin>>s;

        nume[i]=new char[strlen(s)];
        if(0 == nume)
        {
            fprintf(stderr,"Memorie insuficienta");
            exit(EXIT_FAILURE);
        }
        strcpy(nume[i],s);
    }
}

void catalog::Write(void)
{
    cout<<"\tNumele studentilor :\n";
    for(int i=0;i<nr;i++)
    {
        cout<<nume[i]<<endl;
    }
}
void catalog::sortare_alfabetica(void)
{
    char *p;
    for(int i=0;i<nr-1;i++)
    {
        for(int j=i+1;j<nr;j++)
        {
            if(strcmp(nume[i],nume[j]) == 1)
            {
                p=nume[i];
                nume[i]=nume[j];
                nume[j]=p;
            }
        }
    }
}

void catalog::sortare_lungime(void)
{
   char *p;
    for(int i=0;i<nr-1;i++)
    {
        for(int j=i+1;j<nr;j++)
        {
            if(strlen(nume[i]) > strlen(nume[j]) )
            {
                p=nume[i];
                nume[i]=nume[j];
                nume[j]=p;
            }
        }
    }
}

void dealocare(catalog &cat)
{
    
    for(int i=0;i<cat.nr;i++)
    {
        delete[] cat.nume[i];
    }

    delete[] cat.nume;
}


