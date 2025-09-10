#pragma once
#include <iostream>
using namespace std;

template <typename T>
T *sortare(T *v,int n)
{
    T aux;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i] > v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    return v;
}