#include <stdio.h>
#include <stdlib.h>

int Szescian(int szescian, int szescian2)
{
    for (szescian=szescian;szescian<=10;szescian++)
    {
        printf("%i\n",szescian*szescian*szescian);
    }
    /*------------------------*/

    printf("\n");
    do
    {
        printf("%i\n",szescian2*szescian2*szescian2);
        szescian2++;
    }while(szescian2<=10);
    return 0;
}

int main()
{
    Szescian(1,1);
    return 0;
}

/*
Napisz funkcje o nazwie Szescian, ktora robi to co w Zadaniu 9.

---------
Zad 9.
Napisz program, ktory wyswietli 10 kolejnych szescianow liczb:
1, 2, 3, ..., 10. Czyli 1, 8, 27, ...., 1000.
Uzyj wersji z petla for oraz drugiej z petla while.
*/
