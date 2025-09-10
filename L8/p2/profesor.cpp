#include "profesor.h"

Profesor::Profesor(string nume,int varsta,
                double salariu,int gradDidactic):
                Persoana(nume,varsta)
                ,Angajat(salariu)
                ,m_iGradDidactic(gradDidactic)
{

}

void Profesor::afisare()
{
    Persoana::afisare();
    Angajat::afisare();
    cout<<m_iGradDidactic<<endl;
}
