#pragma once
#include <iostream>
using namespace std;
typedef int tip;
class Stiva
{
    int vf;
    int *data;
    int dim;

public:
    Stiva(int x);
    Stiva();
    void push(tip);
    tip pop();
    tip top();
    void print();

    ~Stiva();
};