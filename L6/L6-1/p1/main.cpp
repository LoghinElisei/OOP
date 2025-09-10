#include "functii.h"

int main()
{
    int re,im;
    cout<<"re= ";
    cin>>re;
    cout<<"im= ";
    cin>>im;
    Complex a(re,im);
    cout<<"re= ";
    cin>>re;
    cout<<"im= ";
    cin>>im;
    Complex b(re,im);
    Complex c;

    c=a.operator+(b);
    cout<<"a + b = ";
    c.afisare(); //+
    
    c=a.operator-(b);
    cout<<"a - b = ";
    c.afisare();

    c=a.operator*(b);
    cout<<"c * b = ";
    c.afisare();

    if(a.operator==(b))
    {
        cout<<"a == b\n";
    }
    else
    {
        cout<<"a != b\n";
    }

    cout<<"Modulul a = ";
    //cout<<a.operator~();

    return 0;
}