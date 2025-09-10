#pragma once
#include <iostream>
using namespace std;

class Angajat
{
    double m_dSalariu;

public:
    Angajat(double salariu);
    double getSalariu();
    void afisare();
};