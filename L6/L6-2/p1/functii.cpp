#include "functii.h"

Complex::Complex()
{
    re=im=0;
}

Complex::Complex(int re, int im)
{
    this->re=re;
    this->im=im;
}

void Complex::afisare()
{
    cout<<"("<<re<<","<<im<<")"<<endl;;
}

Complex Complex::operator+(Complex a)
{
    Complex rez;
    rez.re=this->re + a.re;
    rez.im=this->im + a.im;
    return rez;
}

Complex Complex::operator-(Complex a)
{
    Complex rez;
    rez.re=this->re - a.re;
    rez.im=this->im - a.im;
    return rez;
}
Complex Complex::operator*(Complex a)
{
    Complex rez;
    rez.re=this->re * a.re;
    rez.im=this->im * a.im;
    return rez;
}

int Complex::operator==(Complex a)
{
    return ( (this->im==a.im) && (this->re==a.re));
}

float Complex::operator~()
{
    float rez;
    rez=sqrt(re*re + im*im);
    return rez;
}





