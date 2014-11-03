#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    if(b>a)
    {
        return b;
    }
    return 0;
}

int main()
{
    int a,b;
    printf("Podaj dwie liczby calkowite: \n");
    scanf("%d %d", &a, &b);
    printf("Liczba wieksza to %d. \n", max(a, b));
    return 0;
}

/*
Napisz funkcje max, ktora przyjmuje dwie liczby calkowite oraz zwraca
wieksza z tych dwoch liczb.

Uzyj jej w funkcji main np. tak

printf("Liczba wieksza to %d \n", max(10, 20));

Zmodyfikuj program tak, aby najpierw pytal o dwie liczby, a nastepnie
wypisywal komunikat, ktora jest wieksza. Uzyj swojej funkcji max.
*/
