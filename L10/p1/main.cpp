#include "functii.h"

int main()
{
    int v[]={7,4,9,2,1};
    int *sortat;

    sortat=sortare <int>(v,5);
    for(int i=0;i<5;i++)
    {
        cout<<sortat[i]<<" ";
    }
    cout<<endl;
    
    float f[]={7,4,2.4,2.7,1};
    float *fsortat;
    fsortat=sortare <float>(f,5);
    for(int i=0;i<5;i++)
    {
        cout<<fsortat[i]<<" ";
    }
    cout<<endl;
}   