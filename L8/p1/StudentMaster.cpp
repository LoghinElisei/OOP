#include "StudentMaster.h"
#include "student.h"
#include "persoana.h"

StudentMaster::StudentMaster():m_sNumeDizertatie(0)
{
    
} 

StudentMaster::StudentMaster(string cnp, string nume, 
            string adresa, int anStudiu, int notaP2, 
            string NumeDizertatie): StudentAC(cnp,nume,adresa,anStudiu,notaP2),
                                      m_sNumeDizertatie(NumeDizertatie)
{
    cout<<"constr. cu arg. StudentMaster\n";
}

StudentMaster::~StudentMaster()
{
    cout<<"destructor StudentMaster\n";
}

void afisareProfil(const StudentMaster &s)
{
    afisareProfil(static_cast<const PersoanaAC &>(s));
    afisareProfil(static_cast<const StudentAC &>(s));

    cout<<s.m_sNumeDizertatie<<endl;

}