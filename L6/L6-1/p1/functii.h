#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Complex{
    int re,im;
public:
    Complex();
    Complex(int , int );
    void afisare();
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    int operator==(Complex);
    float operator~();
};