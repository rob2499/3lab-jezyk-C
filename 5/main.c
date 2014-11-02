#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B = 0;
    printf("Podaj dwie liczby calkowite.\n");
    printf("\nLiczba A: ");
    scanf("%i",&A);
    printf("\nLiczba B: ");
    scanf("%i",&B);
    /*-------------------*/
    if (A >= 0 && B >= 0)
    {
        printf("\nA i B obie sa dodatnie\n");
    }
    if (A < 0 && B < 0)
    {
        printf("\nA i B obie sa ujemne\n");
    }
    if ((A < 0 && B >=0) || (A >=0 && B<0))
    {
        printf("\nA i B maja rozne znaki\n");
    }
    return 0;
}

/*
Napisz program, ktory pyta uzytkownika o dwie liczby calkowite A i B,
a nastepnie wypisuje jeden z ponizszych komunikatow:
- A i B sa obie dodatnie
- A i B sa obie ujemne
- A i B maja rozne znaki
*/
