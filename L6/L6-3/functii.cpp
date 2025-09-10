#include "functii.h"

String::String()
{
    nume = new char[10];
    nume[0] = '\0';
}

String::String(const char *s)
{
    if (0 != s)
    {
        nume = new char[strlen(s) + 1];
        strcpy(nume, s);
    }
    else
    {
        nume = nullptr;
    }
}

String::~String()
{
    if (0 != nume)
    {
        delete[] nume;
        nume = nullptr;
    }
    else
    {
        cout<<"Destructorul a fost deja apelat";
    }
}

String::String(const String &s)
{
    if (0 != s.nume)
    {
        nume = new char[strlen(s.nume) + 1];
        strcpy(nume, s.nume);
    }
    else
    {
        cout << "Pointer null la CONSTRUCTORUL DE COPIERE";
        nume = nullptr;
    }
}

String String::operator+(const String &s)
{
    String a(*this);
    unsigned short len = 1;

    if ((0 != s.nume) && (0 != a.nume))
    {
        strcat(a.nume, s.nume);
    }
    else
    {
        cout << "Sirul 2 este NULL";
    }

    return a;
}

String &String::operator=(const String &s)
{
    if (0 != s.nume)
    {
        this->nume = new char[strlen(s.nume) + 1];
        strcpy(this->nume, s.nume);
    }

    return *this;
}

bool String::operator==(const String &str)
{
    if (strcmp(nume, str.nume) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int String::cauta(const String &str)
{
    if ((0 != nume) && (0 != str.nume))
    {
        char *p,*q;
        unsigned short int x=0;
        p=strstr(nume,str.nume);
        if(0 == p)
        {
            return -1;
        }

        q=nume;
        while(q !=p)
        {
            q++;
            x++;
        }
        return x;
    }
    else
    {
        cout<<"Unul/ambele siruri pentru Cautare sunt vide";
        return -1;
    }
}

void String::afisare()
{
    cout<<nume<<endl;
}

int String::compara(const String &str)
{
    if((0!= nume ) && (0 != str.nume))
    {
        return ( strcmp(nume , str.nume));
    }
    else
    {
        cout<<"Unul/ambii pointeri de la Comparare sunt vizi";
        return -2;
    }
}