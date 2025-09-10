#include "multime.h"

int main()
{
    int v[]={1,2,3,4,5};
    int d[]={1,1,1,1,1};
    Multime<int> m(v,5);
    m.afisare();

    Multime s(m);
    s.afisare();

    int x = s.operator!();
    
    //x=!s;
    cout<<x<<endl;

    Multime <int> mm(d,5);
    Multime md = mm+m;
    
    md.afisare();

    double a[]={1,2,3};
    double b[]={1,2,3};
    double *sum = Aduna(a,b,3);

    cout<<sum[0]<<" "<<sum[1]<<" "<<sum[2]<<endl;

    return 0;

}