#pragma once
#include <iostream>
using namespace std;

class Persoana
{
    string m_sNume;
    int m_iVarsta;

public:
    Persoana(string nume,int varsta);
    int getVarsta();
    void afisare();
};