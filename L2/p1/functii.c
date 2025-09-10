#include <stdio.h>
#include "functii.h"


void ReadData(struct student *st)
{
    printf("Nr. matricol : \n>> ");
    scanf("%d",&st->nr_matricol);

    printf("Nume :\n>> ");
    scanf("%s",st->nume);

    printf("Gen :\n>> ");
    scanf("%s",&st->gen);

    printf("Nota :\n>> ");
    scanf("%d",&st->nota);

}

void WriteData(struct student *st)
{
    printf("Nr. matricol : /n>> ");
    printf("%d/n",st->nr_matricol);

    printf("Nume :/n>> ");
    printf("%s/n",st->nume);

    printf("Gen :/n>> ");
    printf("%s/n",st->gen);

    printf("Nota :/n>> ");
    printf("%d/n",st->nota);
}
