#pragma once
#include <iostream>
#include <string>
#include "persoana.h"
using namespace std;

class StudentAC : public PersoanaAC
{
    int m_ianStudiu;
    int m_inotaP2;

public:
    StudentAC();
    StudentAC(string cnp, string nume, string adresa, int anStudiu, int notaP2);
    ~StudentAC();
    friend void afisareProfil(const StudentAC &s);
    void schimbareAdresa(string );
    void inscriereAnStudiu(int anStudiuNou);
    StudentAC* comparare_nota(StudentAC &s);
    
};