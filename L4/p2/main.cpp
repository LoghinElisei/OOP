#include "functii.h"
#include <crtdbg.h>
Stiva s_global;

int main(void)
{
    Stiva s;
    s.push(4);
    s.push(3);
    cout<<s.top()<<endl;
    s.push(9);
    cout<<s.pop()<<endl;
    s.push(2);
    s.print();  //s-a golit stiva

    int *v=0;
    v=new int[10];
    for(int i=0;i<10;i++)
    {
        v[i]=i;
    }
    delete v;

    _CrtDumpMemoryLeaks();
    return 0;
}