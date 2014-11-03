#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));

    int k=0;
    int u=0;

    do
    {
        k=rand()%6;
    }while(k==0);

    printf("Podaj liczbe z przedzialu 1-5: \n");
    scanf("%d", &u);

    printf("Program wylosowal liczbe: %i\n",k);
    if(k==u)
    {
        printf("Brawo!");
    }
    else if(u-1==k || u+1==k)
    {
        printf("Blisko!");
    }
    else
    {
        printf("Pudlo!");
    }
    return 0;
}

/*
Napisz program, ktory losuje liczbe K z przedzialu 1-5, a nastepnie
pyta uzytkownika o jego liczbe U z tego samego przedzialu.
Niech program wyswietli jeden z ponizszych komunikatow:

- "Brawo!", jesli K jest rowne U
- "Blisko!", jesli liczba U jest o jeden mniejsza lub o jeden wieksza niz liczba K
- "Pudlo!", w przeciwnym razie.


    j=1+(int) (10.0*rand()/(RAND MAX+1.0));
*/
