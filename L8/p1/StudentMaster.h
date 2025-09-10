#pragma once
#include "persoana.h"
#include "student.h"
#include <iostream>
using namespace std;

class StudentMaster:public StudentAC
{
    string m_sNumeDizertatie;

public:
    StudentMaster();
    StudentMaster(string cnp, string nume, string adresa, int anStudiu, int notaP2, string m_sNumeDizertatie);
    ~StudentMaster();
    friend void afisareProfil(const StudentMaster &s);

};