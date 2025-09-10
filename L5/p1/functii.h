#pragma once
#include <iostream>
using namespace std;

class Complex
{
    int re, im;

public:
    Complex();
    Complex(int re, int im);
    int egal(Complex c2);
    void citire();
    void afisare();
};

class MultimeComplexe
{
    Complex *v;
    int dim;
    int n;

public:
    MultimeComplexe();
    MultimeComplexe(int);
    void adauga(Complex);
    void extrage(Complex);
    void afisare();
};
