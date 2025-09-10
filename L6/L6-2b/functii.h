#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

class Multime
{
private:
    int *date; // vector de nr
    int dim;  //constant
    int n;

public:
    Multime();
    Multime(int x);
    ~Multime();
    void adauga(int);
    void extrage(int);
    void afisare();
    void operator+=(int);
    void operator-=(int);
    Multime &operator=(const Multime&);
    Multime &operator+=(const Multime &p);
    Multime (const Multime &);
    Multime operator+(const Multime&);

};


