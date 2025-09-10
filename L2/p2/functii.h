#ifndef DOC_H
#define DOC_H

struct student{
    int nr_matricol;
    char nume[100];
    char gen[50];
    float nota;
    void Read(void);
    void Write(void);
};

#endif