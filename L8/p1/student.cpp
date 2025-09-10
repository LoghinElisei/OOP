#include "student.h"
#include "persoana.h"
#include <iostream>
using namespace std;


StudentAC::StudentAC()
{
    cout << "constr. fara arg. StudentAC" << endl;
    m_ianStudiu = 0;
    m_inotaP2 = 0;
}
StudentAC::StudentAC(string cnp, string nume, string adresa,
                     int anStudiu, int notaP2) : PersoanaAC(cnp, nume, adresa), m_ianStudiu(anStudiu),
                                                 m_inotaP2(notaP2)
{
    cout << "constr. cu arg. StudentAC" << endl;
}
StudentAC::~StudentAC()
{
    cout << "destructor StudentAC" << endl;
}

void afisareProfil(const StudentAC &s)
{
    //PersoanaAC p(s);
    //afisareProfil(*(PersoanaAC(StudentAC)));
    afisareProfil(static_cast<const PersoanaAC &>(s));
    
    //cout << s.m_sCnp << " " << s.m_sNume << " " << s.m_sAdresa<<" ";
    cout<<s.m_ianStudiu<<" "<<s.m_inotaP2<<" ";

}

void StudentAC::schimbareAdresa(string s)
{
    m_sAdresa=s;
}

void StudentAC::inscriereAnStudiu(int anStudiuNou)
{
    m_ianStudiu=anStudiuNou;
}

/*
const StudentAC* StudentAC::comparare_nota(const StudentAC &s)
{
    if(m_inotaP2 >= s.m_inotaP2)
    {
        return this;
    }
    else
    {
        return &s;
    }
}

*/

StudentAC* StudentAC::comparare_nota(StudentAC &s)
{
    if(m_inotaP2 >= s.m_inotaP2)
    {
        return this;
    }
    else
    {
        return &s;
    }
}