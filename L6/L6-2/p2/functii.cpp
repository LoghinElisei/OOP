#include "functii.h"

Multime::Multime()
{
    dim = 100;
    date = 0;
    date = new int[dim];
    n = -1;
}

Multime::Multime(int x)
{
    dim = x;
    date = 0;
    date = new int[dim];
    n = -1;
}

Multime::~Multime()
{
    if (0 != date)
    {
        delete[] date;
        date = 0;
    }
    else
    {
        cout << "S-a apelat deja destructorul\n";
    }
}
bool cautare(int *v, int x, int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        if (v[i] == x)
        {
            return true;
        }
    }

    return false;
}
void Multime::adauga(int x)
{
   
    if (n == (dim - 2))
    {
        fprintf(stderr, "Vectorul este plin\n");
        exit(EXIT_FAILURE);
    }

    if (cautare(date, x, n) == 1)
    {
        cout << "Elementul exista deja in multime \n";
    }
    else
    {
        n++;
        date[n] = x;
    }
}

void Multime::extrage(int x)
{
    if (n == -1)
    {
        fprintf(stderr, "Vectorul este gol\n");
        exit(EXIT_FAILURE);
    }

    if (cautare(date, x, n) == 0)
    {
        cout << "Elementul nu exista in multime\n";
    }
    else
    {
        int i = 0, j = 0;
        for (i = 0; i <= n; i++)
        {
            if (date[i] == x)
            {
                break;
            }
        }
        // i = pozitia unde e elementul
        for (j = i; j < n; j++)
        {
            date[j] = date[j + 1];
        }
        n--;
    }
}

void Multime::afisare()
{
    int i;
    for (i = 0; i <= n; i++)
    {
        cout << date[i] << " ";
    }
    cout << endl;
}

void Multime::operator+=(int x)
{
    if (n == (dim - 2))
    {
        fprintf(stderr, "Vectorul este plin\n");
        exit(EXIT_FAILURE);
    }

    if (cautare(date, x, n) == 1)
    {
        cout << "Elementul exista deja in multime \n";
    }
    else
    {
        n++;
        date[n] = x;
    }
}
void Multime::operator-=(int x)
{
    if (n == (dim - 2))
    {
        fprintf(stderr, "Vectorul este plin\n");
        exit(EXIT_FAILURE);
    }

    if (cautare(date, x, n) == 1)
    {
        cout << "Elementul exista deja in multime \n";
    }
    else
    {
        n++;
        date[n] = x;
    }
}

Multime &Multime::operator=(const Multime &a)
{
    if(date !=0)
    {
        delete []date;
    }
    if(0 != a.date)
    {
        this->date=new int[a.dim];
    }
    else
    {
        this->date=nullptr;
    }
    this->n=a.n;
    this->dim=a.dim;
    for(int i=0;i<n;i++)
    {
        this->date[i]=a.date[i];
    }

    return *this;
}

Multime ::Multime(const Multime &a)  //constr copiere
{
    if(0 != a.date)
    {
        this->date=new int[a.dim];
    }
    else
    {
        this->date=nullptr;
    }
    this->n=a.n;
    this->dim=a.dim;
    for(int i=0;i<n;i++)
    {
        this->date[i]=a.date[i];
    }
}

Multime &Multime::operator+=(const Multime &a)
{
    for(int i=0;i<a.n;i++)
    {
        this->adauga(a.date[i]);
    }

    return *this;
}

Multime &Multime::operator+(const Multime &b)
{
    Multime a;
    int i;

    for(i=0;i<n;i++)
    {
        a.adauga(this->date[i]);
    }
    
    for(i=0;i<n;i++)
    {
        a.adauga(b.date[i]);
    }
       
    return a;
}

