#ifndef DOC_H
#define DOC_H

struct student{
    int nr_matricol;
    char nume[100];
    char gen[50];
    float nota;
    void (*read)(struct student *st);
    void (*write)(struct student *st);
};

void ReadData(struct student *st);
void WriteData(struct student *st);

#endif