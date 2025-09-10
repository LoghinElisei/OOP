#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Multime
{
    T *v;
    int n;

public:
    Multime()
    {
        v = nullptr;
        n = 0;
    }
    Multime(T *vector, int n)
    {
        if (vector)
        {
            this->n = n;
            v = new T[n];

            for (int i = 0; i < n; i++)
            {
                v[i] = vector[i];
            }
        }
    }
    Multime(const Multime &m)
    {
        if (m.v)
        {
            this->n = m.n;
            v = new T[n];
            for (int i = 0; i < n; i++)
            {
                v[i] = m.v[i];
            }
        }
        else
        {
            cout<<"Pointer NULL in constructor de copiere\n";
            v = nullptr;
            n = 0;
        }
    }
    ~Multime()
    {
        if (v)
        {
            delete[] v;
        }
    }

    void afisare()
    {
        if (v)
        {
            for (int i = 0; i < n; i++)
            {
                std::cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Pointer vid \n";
        }
    }

    T operator!()
    {
        T max = -999;
        
        if (v)
        {
            max = v[0];

            for (int i = 1; i < n; i++)
            {
                if (v[i] > max)
                {
                    max = v[i];
                }
            }
        }
        return max;
    }

    Multime operator+(const Multime &m)
    {
        Multime a(*this);
        for (int i = 0; i < n; i++)
        {
            
            a.v[i] += m.v[i];
        }

        return a;
    }
};


template <typename D>
D *Aduna(D *a, D *b, int n)
{
    D *sum ;
    sum = new D[n];
   
    for(int i=0;i<n;i++)
    {
        sum[i]=a[i] + b[i];
    }
    

    return sum;
}