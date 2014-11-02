#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szescian;
    for (szescian=1;szescian<=10;szescian++)
    {
        printf("%i\n",szescian*szescian*szescian);
    }
    /*------------------------*/
    int szescian2=1;

    printf("\n");
    do
    {
        printf("%i\n",szescian2*szescian2*szescian2);
        szescian2++;
    }while(szescian2<=10);
    return 0;
}

/*
Napisz program, ktory wyswietli 10 kolejnych szescianow liczb:
1, 2, 3, ..., 10. Czyli 1, 8, 27, ...., 1000.
Uzyj wersji z petla for oraz drugiej z petla while.
*/
