#ifndef DOC_H
#define DOC_h

struct catalog{
    int nr;
    char **nume;
    void sortare_alfabetica(void);
    void sortare_lungime(void);
    void Read(void);
    void Write(void);
};

catalog creare_catalog();
void dealocare(catalog &cat);


#endif