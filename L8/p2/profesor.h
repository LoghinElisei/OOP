#pragma once
#include <iostream>
#include "persoana.h"
#include "angajat.h"
using namespace std;

class Profesor:public Persoana,public Angajat
{
    int m_iGradDidactic;

public:
    Profesor(string nume,int varsta,double salariu,int gradDidactic);
    void afisare();
} ;