#include <stdio.h>
#include <stdlib.h>
#include "functii.h"

int main()
{
    int n;
    struct student *v;
    printf("Nr. de studenti \n>> ");
    scanf("%d",&n);
    
    
    v=(struct student *)malloc(n*sizeof(struct student));
    if(0 == v)
    {
        fprintf(stderr,"Memorie insuficienta\n");
        exit(EXIT_FAILURE);
    }
    
    for(int i=0;i<n;i++)
    {
        v[i].read=ReadData;
        v[i].write=WriteData;
    }

    for(int i=0;i<n;i++)
    {
        v[i].read(&v[i]);
        
    }

    for(int i=0;i<n;i++)
    {
        v[i].write(&v[i]);
    }
    
}