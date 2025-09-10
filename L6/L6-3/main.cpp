#include "functii.h"

int main()
{
    String a("alabala");
    String b("ba");
    String c;

    c=b;

    cout<<a.cauta(c)<<endl;

    cout<<"b == c ? : ";
    b.afisare();
    c.afisare();
    cout<< (b == c)<<endl<<endl;
    
    cout<<a.compara(b)<<endl;
    
    a.~String();

    return 0;
}