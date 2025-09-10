#include "angajat.h"
#include "persoana.h"

Angajat::Angajat() : Persoana()
{
    salar = 0;
}

Angajat::Angajat(double salar, const char *nume,const char *prenume, Data *dataNastere, Data ang) : Persoana(nume, prenume, dataNastere)
{
    this->salar = salar;
    this->dataAngajare = ang;
}

Data Angajat::getDataAngajare()
{
    return dataAngajare;
}

double Angajat::getSalariu()
{
    return salar;
}

int Angajat::getVarstaAngajare()
{
    Data ang, *nastere;
    ang = getDataAngajare();
    nastere = getDataNastere();

    return (ang.getAn() - nastere->getAn());
}

void Angajat::afisarePerioadaMuncita(const Data &dataCurenta)
{
    // verificare dataAngajare < dataCurenta
    int an_a = 0, luna_a = 0, zi_a = 0;
    int an_c = 0, luna_c = 0, zi_c = 0;
    int an_p = 0, luna_p = 0, zi_p = 0;

    an_a = dataAngajare.getAn();
    luna_a = dataAngajare.getLuna();
    zi_a = dataAngajare.getZi();

    an_c = dataCurenta.getAn();
    luna_c = dataCurenta.getLuna();
    zi_c = dataCurenta.getZi();

    if (zi_c < zi_a)
    {
        if (luna_c < luna_a)
        {
            an_p = 1;
            luna_p = 12;
        }

        zi_p = zi_c - zi_a + 30;
        luna_p = luna_c - luna_a + luna_p;
        an_p = an_c - an_a + an_p;
    }
    else if (luna_c < luna_a)
    {
        zi_p = zi_c - zi_a;
        luna_p = luna_c - luna_a + 12;
        an_p = an_c - 1 + an_a; ////an_a--;
    }
    else
    {
        zi_p = zi_c - zi_p;
        luna_p = luna_c - luna_a;
        an_p = an_c - an_a;
    }

    cout << "Perioada muncita: ";
    cout << an_p << "." << luna_p << "." << zi_p << endl;
}

void Angajat::afisare()
{
    afisarePersoana();
    cout << "Data Angajare: " <<
    dataAngajare.getAn()<<"."<<dataAngajare.getLuna()<<"."<<dataAngajare.getZi()<<endl;

    if(salar > 5)
    {
        cout<<"Salar : "<<salar<<"$"<<endl;
    }
    else
    {
        cout<<"Salar : "<<salar<<" bitcoin"<<endl;
    }
}