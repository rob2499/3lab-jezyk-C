#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int a=1;
    int b=5;
    int j=0;
    j=1+(int) (10.0*rand()/(RAND MAX+1.0));
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
