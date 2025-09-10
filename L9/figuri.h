#ifndef _figuri_
#define _figuri_
#pragma warning(disable : 4996)

class Figura
{
public:
    virtual ~Figura() {}
    virtual float arie() = 0;
    virtual void afisare() = 0;
    virtual float perimetru()=0;
};

class Dreptunghi : public Figura
{
private:
    int x1, y1, x2, y2;

public:
    Dreptunghi(int x1, int y1, int x2, int y2);
    float arie();
    void afisare();
    float perimetru();
};

class Cerc : public Figura
{
private:
    int x, y, r;

public:
    Cerc(int x, int y, int r);
    float arie();
    void afisare();
    float perimetru();
};

class Triunghi: public Figura
{
private:
    int x1,y1,x2,y2,x3,y3;

public:
    Triunghi(int,int,int,int,int,int);
    float arie();
    void afisare();
    float perimetru();
};


Figura *figCuArieMax(Figura **figuri, int n);
Figura *figCuPerimetruMax(Figura **figuri,int n);
void sortareDupaArie(Figura **,int n);

#endif