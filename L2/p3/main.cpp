#include <iostream>
#include "functii.h"
using namespace std;
int main()
{   

    catalog cat;
    cat=creare_catalog();
    cat.Write();
    
    cout<<"\tStudentii sortati alfabetic\n";
    cat.sortare_alfabetica();
    cat.Write();

    cout<<"\tStudentii sortati in functie de lungime\n";
    cat.sortare_lungime();
    cat.Write();

    dealocare(cat);
    return 0;
}