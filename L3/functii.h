#pragma once
#include <iostream>
#include <stdlib.h> 
#include <string.h>
using namespace std;
struct Student
{
private: 
    char *nume;
    int nota;

public:
    int getNota(void);                    
    void setNota(int v); 
    char *getNume(void); 
    void setNume(char unNume[]); 
    void elibMem(void);  
    void citire(void);  
    void afisare(void); 
};
typedef int (*PFnComparare)(Student a, Student b);
struct Grupa
{
    int nrStud;
    Student *tabStudenti;      // alocat dinamic in cadrul functiei de citire. eliberat de catre functia de
    char *numeGrupa; // denumirea grupei: 1208B, 1207A etc.
    void citire(void);         // DECLARATIA metodei de citire => PROTOTIPUL functiei
    void afisare(void);        // DECLARATIA metodei de afisare => PROTOTIPUL functiei
    PFnComparare comparator;   // pointer catre o functie de comparatie, definita global
    void bSort(void); 
    void elibMem(void); 
};
struct Catalog
{
    int nrGrupe;
    Grupa *tabGrupe;
    void setComparator(PFnComparare comparator); 
    void citire(void);                      
    void afisare(void); 
    void sortare(void);       
    void elibMemorie(void);
};

int comparNumeAlfabetic(Student a, Student b);
int comparNoteDescrescator(Student a, Student b);
int comparNumeDupaLungimeCrescator(Student a, Student b);