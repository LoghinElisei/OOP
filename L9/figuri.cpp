#include <iostream>
#include <math.h>
#include "figuri.h"
using namespace std;
Dreptunghi::Dreptunghi(int x1, int y1, int x2, int y2)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}

float Dreptunghi::arie()
{
    return (float)(x2 - x1) * (y2 - y1);
}

void Dreptunghi::afisare()
{
    cout << "Dreptunghi cu coordonatele ("
         << x1 << "," << y1
         << ")-(" << x2 << "," << y2 << "), aria " << arie() 
         <<" si perimetrul "<<perimetru()<< endl;
}

Cerc::Cerc(int x, int y, int r)
{
    this->x = x;
    this->y = y;
    this->r = r;
}
float Cerc::arie()
{
    const float PI = 3.14F;
    return PI * r * r;
}
void Cerc::afisare()
{
    cout << "Cerc cu coordonatele ("
         << x << "," << y
         << "), raza " << r << " aria "
         << arie() <<"si perimetru "<<perimetru()<< endl;
}

void Triunghi::afisare()
{
    cout<<"Triunghi cu coordonatele ("
        <<x1<<","<<y1<<"),("
        <<x2<<","<<y2<<"),("
        <<x3<<","<<y2<<"), aria "<<arie()
        <<" si perimetru "<<perimetru()<<endl;
}

Triunghi::Triunghi(int x1, int y1, int x2, int y2, int x3, int y3)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->x3 = x3;
    this->y3 = y3;
}

float Triunghi::arie()
{
    float arie = 0;
    float p = 0;
    float a, b, c;

    a = sqrt(pow(x2 - x1, 2) + (y2 - y1, 2));
    b = sqrt(pow(x3 - x1, 2) + (y3 - y1, 2));
    c = sqrt(pow(x3 - x2, 2) + (y3 - y2, 2));

    p = (a + b + c) / 2;
    arie = sqrt(p * (p - a) * (p - b) * (p - c));

    return arie;
}

Figura *figCuArieMax(Figura **figuri, int n)
{
    float max = 0;
    Figura *figMax = NULL;
    for (int i = 0; i < n; i++)
    {
        float arie = figuri[i]->arie();
        if (arie > max)
        {
            max = arie;
            figMax = figuri[i];
        }
    }
    return figMax;
}

float Dreptunghi::perimetru()
{
    float L,l;

    L=x2-x1;
    l=y2-y1;

    return (float)(2*l + 2*L);
}
float Cerc::perimetru()
{
    const float PI=3.14F;

    return 2*PI*r;
}
float Triunghi::perimetru()
{
    float a, b, c;
    a = sqrt(pow(x2 - x1, 2) + (y2 - y1, 2));
    b = sqrt(pow(x3 - x1, 2) + (y3 - y1, 2));
    c = sqrt(pow(x3 - x2, 2) + (y3 - y2, 2));

    return a+b+c;
}

Figura *figCuPerimetruMax(Figura **figuri,int n)
{
    float max = 0;
    Figura *figMax = NULL;
    for (int i = 0; i < n; i++)
    {
        float perimetru = figuri[i]->perimetru();
        if (perimetru > max)
        {
            max = perimetru;
            figMax = figuri[i];
        }
    }
    return figMax;
}

void sortareDupaArie(Figura **figuri,int n)
{
    Figura *aux=NULL;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(figuri[i]->arie() > figuri[j]->arie())
            {
                aux=figuri[i];
                figuri[i]=figuri[j];
                figuri[j]=aux;
            }
        }
    }
}