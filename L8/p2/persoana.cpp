#include "persoana.h"


Persoana::Persoana(string nume,int varsta)
                    :m_sNume(nume),m_iVarsta(varsta)
{

}

int Persoana::getVarsta()
{
    return m_iVarsta;
}

void Persoana::afisare()
{
    cout<<m_sNume<<" "<<m_iVarsta<<" ";
}