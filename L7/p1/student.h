#pragma once 
#include "persoana.h"
#include "string.h"
class Student:public Persoana
{
private:
    int grupa;
    
public:
    Student();//:Persoana();
    Student(int grupa,const char *nume,const char *prenume,Data *dataNastere);//:Persoana(nume,prenume,dataNastere);
    int getGrupa();
    void afisare();
    Student &operator=(const Student &s);
};