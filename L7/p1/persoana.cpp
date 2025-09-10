#include <iostream>
#include <string.h>
#include "Data.h"
#include "Persoana.h"
using namespace std;
Persoana::Persoana(const char *nume,const char *prenume, Data *dataNastere)
{
    this->nume = new char[strlen(nume) + 1];
    this->prenume = new char[strlen(prenume) + 1];
    strcpy(this->nume, nume);
    strcpy(this->prenume, prenume);
    this->dataNastere =new Data(*dataNastere);
   
}
Persoana::~Persoana()
{
    delete[] nume;
    delete[] prenume;
    delete dataNastere;
}

Persoana::Persoana()
{
    Data data(2000, 3, 20);
    char nume[]="Popescu";
    char prenume[]="Vasile";

    this->nume=new char[strlen(nume)+1];
    strcpy(this->nume,"Popescu");
    this->prenume=new char[strlen(prenume)+1];
    strcpy(this->prenume,"Vasile");
    this->dataNastere=new Data(data);
}
char *Persoana::getNume() //const 
{
    return nume;
}

char *Persoana::getPrenume() //const 
{
    return prenume;
}

void Persoana::setNume(char *nume)
{   
    this->nume=new char[strlen(nume)+1];
    strcpy(this->nume,nume);
}

void Persoana::setPrenume(char *prenume)
{
    this->prenume=new char[strlen(prenume)+1];
    strcpy(this->prenume,prenume);
}


Data *Persoana::getDataNastere()
{
    return dataNastere;
}
void Persoana::afisarePersoana()
{
    cout << nume << "\t" << prenume<<"\t" 
    <<dataNastere->getAn() << "."
    <<dataNastere->getLuna() << "."
    << dataNastere->getZi();
}
void Persoana::afisare()
{
    afisarePersoana();
    cout << endl;
}

Persoana &Persoana::operator=(const Persoana &p)
{
    //this->dataNastere=p.dataNastere;
    //Data::operator=(p);
    if(0!= p.nume && 0!=p.prenume)
    {
        this->nume=new char[strlen(p.nume)+1];
        strcpy(this->nume,p.nume);
        this->prenume=new char[strlen(p.prenume)+1];
        strcpy(this->prenume,p.prenume);
    }

    return *this;
}