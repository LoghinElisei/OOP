#include "angajat.h"

Angajat::Angajat(double salariu):m_dSalariu(salariu)
{

}

double Angajat::getSalariu()
{
    return m_dSalariu;
}

void Angajat::afisare()
{
    cout<<m_dSalariu<<" ";
}
