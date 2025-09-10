#include "functii.h"

Stiva::Stiva()
{
    data = 0;
    dim = 100;
    data = new int[dim];
    vf = -1;
}

Stiva::Stiva(int x)
{
    data = 0;
    dim = x;
    data = new int[dim];
    vf = -1;
}
void Stiva::print()
{
    if (vf == -1)
    {
        fprintf(stderr, "Stiva este goala\n");
        exit(EXIT_FAILURE);
    }

    while (vf > -1)
    {
        cout << data[vf] << " ";
        vf--;
    }
    cout << endl;
}

Stiva::~Stiva()
{
    if (0 != data)
    {
        delete[] data;
        data = 0;
    }
    else
    {
        cout << "Acest obiect a fost deja dealocat!!!\n";
    }
}
void Stiva::push(tip x)
{
    if (vf == (dim - 1))
    {
        fprintf(stderr, "Stiva este plina\n");
        exit(EXIT_FAILURE);
    }

    vf++;
    data[vf] = x;
}

tip Stiva::pop()
{
    if (vf == -1)
    {
        fprintf(stderr, "Stiva este goala\n");
        exit(EXIT_FAILURE);
    }

    return data[vf--];
}

tip Stiva::top()
{
    if (vf == -1)
    {
        fprintf(stderr, "Stiva este goala\n");
        exit(EXIT_FAILURE);
    }

    return data[vf];
}
