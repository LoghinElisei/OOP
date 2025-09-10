#include "functii.h"
#include <crtdbg.h>
int main(void)
{
    

    int operatie;
    PFnComparare unPointerLaOFunctieDeComparare;
    Catalog catalogulAnului2;
    catalogulAnului2.citire();
    catalogulAnului2.afisare();
    do
    {
        do
        {
            cout << "Ce doriti sa efectuati?" << endl;
            cout << "0.Iesire din program;" << endl;
            cout << "1 - sortare alfabetica a numelor;" << endl;
            cout << "2 - sortare descrescatoare dupa nota;" << endl;
            cout << "3 - sortare dupa lungimea numelui - crescator." << endl;
            cin >> operatie;
        } while ((operatie < 0) || (operatie > 3));
        switch (operatie)
        {
        case 1:
            cout << "1 - sortare alfabetica a numelor;" << endl;
            unPointerLaOFunctieDeComparare = comparNumeAlfabetic;
            catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
            break;
        case 2:
            cout << "2 - sortare descrescatoare dupa nota;" << endl;
            unPointerLaOFunctieDeComparare = comparNoteDescrescator;
            catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
            break;
        case 3:
            cout << "3 - sortare dupa lungimea numelui - crescator." << endl;
            unPointerLaOFunctieDeComparare = comparNumeDupaLungimeCrescator;
            catalogulAnului2.setComparator(unPointerLaOFunctieDeComparare);
            break;
        default:
            cout << "Sfarsitul executiei programului." << endl;
        }

    catalogulAnului2.sortare();
    catalogulAnului2.afisare();    
    } while (operatie);

    catalogulAnului2.elibMemorie();
    _CrtDumpMemoryLeaks();
    
    return EXIT_SUCCESS;
}