#pragma once
#include "persoana.h"
#include "data.h"
#include <iostream>
using namespace std;

class Angajat:public Persoana
{
    Data dataAngajare;
    int salar;

public:
    Angajat();
    Angajat(double, const char *,const char *,Data *nastere,Data angajare);
    Data getDataAngajare();
    double getSalariu();
    int getVarstaAngajare();
    void afisarePerioadaMuncita(const Data &dataCurenta);
    void afisare();
};