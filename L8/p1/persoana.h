#pragma once
#include <string>
#include <iostream>
using namespace std;

class PersoanaAC
{
protected:
    string m_sCnp;
    string m_sNume;
    string m_sAdresa;

public:
    PersoanaAC();
    PersoanaAC(string cnp, string nume, string adresa);
    ~PersoanaAC();
    friend void afisareProfil(const PersoanaAC &p);
    // void schimbareAdresa(string adresaNoua);
};
