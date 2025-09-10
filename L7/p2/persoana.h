#include "Data.h"
#ifndef _Persoana_h_
#define _Persoana_h_
#pragma warning(disable : 4996)
class Persoana
{
private:
    char *nume, *prenume;
    Data *dataNastere;

protected:
    void afisarePersoana();
    Persoana &operator=(const Persoana &p);
public:
    Persoana();
    Persoana(const char *nume,const char *prenume, Data *dataNastere);
    ~Persoana();
    char *getNume();
    char *getPrenume();
    void setNume(char *);
    void setPrenume(char *);
    Data *getDataNastere();
    void afisare();
    
};
#endif