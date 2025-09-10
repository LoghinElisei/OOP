#include "functii.h"

int Student::getNota()
{
    return nota;
}

void Student::setNota(int v)
{
    nota=v;
}
char* Student::getNume(void)
{
    return nume;
}
void Student::setNume(char unNume[])
{
    int l=strlen(unNume);
    nume=new char[l];
    strcpy(nume,unNume);
}

void Student::citire(void)
{
    int nota;
    char s[100];

    cout<<"Nume :\n>> ";
    cin>>s;
    setNume(s);

    cout<<"Nota:\n>> ";
    cin>>nota;
    setNota(nota);
}

void Student::afisare(void)
{
    //cout<<"Nume: ";
    cout<<"\t"<<getNume();
    cout<<"\t";

    //cout<<"Nota: ";
    cout<<getNota();
    cout<<endl;
}



void Grupa::citire(void)
{
    char nume[100];
    
    
    cout<<"Nume grupa:\n>> ";
    cin>>nume;
    numeGrupa=new char[strlen(nume)];
    strcpy(numeGrupa,nume);

    cout<<"Nr studenti:\n>> ";
    cin>>nrStud;

    //(Student *)malloc(nrStud*sizeof(Student));
    tabStudenti=new Student [nrStud];

    for(int i=0;i<nrStud;i++)
    {
        cout<<"- Student "<<i+1<<" -\n";
        tabStudenti[i].citire();
    }
}

void Grupa::afisare(void)
{
    cout<<"Nr de studenti : "<<nrStud<<endl;
    cout<<"Nume grupa : "<<numeGrupa<<endl;

    cout<<"\tNume\tNota"<<endl;
    for(int i=0;i<nrStud;i++)
    {
        //cout<<"-Student "<<i+1<<" -\n";
        tabStudenti[i].afisare();
    }
    
}

void swap2(Student &s1,Student &s2)
{
    Student aux;
    aux=s1;
    s1=s2;
    s2=aux;
}
void Grupa::bSort(void)
{
    
    for(int i=0;i<nrStud-1;i++)
    {
        for(int j=i+1;j<nrStud;j++)
        {
            if (comparator(tabStudenti[i],tabStudenti[j]) == 1)
            {
                swap2(tabStudenti[i],tabStudenti[j]);
            }
        }
    }
}

void Catalog::setComparator(PFnComparare comparator)
{
    int i; 
    for (i = 0; i < nrGrupe; i++)
        tabGrupe[i].comparator = comparator;
   
}

void Catalog::citire(void)
{
    int i;
    cout<<"Nr. grupe= ";
    cin>>nrGrupe;

    tabGrupe=new Grupa [nrGrupe];

    for(i=0;i<nrGrupe;i++)
    {
        cout<<"- Grupa "<<i+1<<"-\n";
        tabGrupe[i].citire();
    }
    
}
void Catalog::afisare(void)
{
    int i;
    for(i=0;i<nrGrupe;i++)
    {
        tabGrupe[i].afisare();
    }
}
void Catalog::sortare(void)
{
    int i;
    for(i=0;i<nrGrupe;i++)
    {
        tabGrupe[i].bSort();
    }
}
int comparNumeDupaLungimeCrescator(Student a, Student b)
{
    char *a1;
    char *b1;
    a1=a.getNume();
    b1=b.getNume();
    int rez = strlen(a1) - strlen(b1);
    if (rez > 0)
        rez = 1;
    else if (rez < 0)
        rez = -1;
   
    return rez;
}
int comparNoteDescrescator(Student a, Student b)
{
    int n1,n2;
    n1=a.getNota();
    n2=b.getNota();
    
    if(n1 < n2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}
int comparNumeAlfabetic(Student a, Student b)
{
    char *a1;
    char *b1;
    a1=a.getNume();
    b1=b.getNume();

    return strcmp(a1,b1);
    
}


void Student::elibMem(void)
{
    delete []nume;
    nume=0;
}
void Grupa::elibMem(void)
{
    int s; 
    if (numeGrupa)
    {
        cout << "eliberarea memoriei pentru grupa " << numeGrupa << endl;
        free(numeGrupa);
        numeGrupa = NULL;
    }
    for (s = 0; s < nrStud; s++)  
        tabStudenti[s].elibMem(); 
        free(tabStudenti);
    tabStudenti = NULL;

    
}

void Catalog::elibMemorie(void)f
{
    int i;
    for(i=0;i<nrGrupe;i++)
    {
        tabGrupe[i].elibMem();
    }

    delete []tabGrupe;
    tabGrupe=NULL;
}
