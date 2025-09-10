#include "persoana.h"
using namespace std;

PersoanaAC::PersoanaAC()
{
    cout << "constr. fara arg. PersoanaAC" << endl;
    m_sCnp = string(13, '0');
    m_sNume = "0";
    m_sAdresa = "0";
}
PersoanaAC::PersoanaAC(string cnp, string nume, string adresa)
{
    cout << "constr. cu arg. PersoanaAC" << endl;
    m_sCnp = cnp;
    m_sNume = nume;
    m_sAdresa = adresa;
}

PersoanaAC::~PersoanaAC()
{
    cout << "destructor PersoanaAC" << endl;
}

void afisareProfil(const PersoanaAC &p)
{
    cout << p.m_sCnp << " " << p.m_sNume << " " << p.m_sAdresa<<" ";
}

