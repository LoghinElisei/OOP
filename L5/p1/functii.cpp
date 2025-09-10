#include "functii.h"

Complex::Complex()
{
    im=0;
    re=0;
}

Complex::Complex(int re,int im)
{
    this->re=re;
    this->im=im;
}

int Complex::egal(Complex c2)
{
    return ( (this->im==c2.im) && (this->re==c2.re) );
}

void Complex::citire()
{
    cout<<"re = ";
    cin>>re;

    cout<<"im = ";
    cin>>im;
}

MultimeComplexe::MultimeComplexe()
{
    dim=100;
    n=-1;
    v=new Complex[dim];
}
MultimeComplexe::MultimeComplexe(int dim)
{
    this->dim=dim;
    n=-1;
    v=new Complex[this->dim];
}


void MultimeComplexe::adauga(Complex c)
{
    if(n >= dim)
    {
        fprintf(stderr,"Spatiu de stocare plin\n");
        exit(EXIT_FAILURE);
    }

    int ok=1;
    for(int i=0;i<=n &&ok;i++)
    {
        if(v[i].egal(c))
        {
            ok=0;
            break;
        }
    }
    if(ok)
    {  
        n++;
        v[n]=c;
    }
}

void MultimeComplexe::extrage(Complex c)
{
    if(n == -1)
    {
        fprintf(stderr,"Multime vida\n");
        exit(EXIT_FAILURE);
    }

    int ok=0;
    for(int i=0;i<=n;i++)
    {
        if(v[i].egal(c))
        {
            for(int j=i;j<n;j++)
            {
                v[j]=v[j+1];
            }

            n--;
            ok=1;
            break;
        }
    }

    if(!ok)
    {
        cout<<"Nu exista Elementul : ";
        c.afisare();
      
    }
}

void Complex::afisare()
{
    cout<<re<<" + "<<im<<"i\n";
}
void MultimeComplexe::afisare()
{
    if(n== -1)
    {
        fprintf(stderr,"Multime vida\n");
        exit(EXIT_FAILURE);
    }

    for(int i=0;i<=n;i++)
    {
        v[i].afisare();
    }
}