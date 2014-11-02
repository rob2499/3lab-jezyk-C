#include <stdio.h>
#include <stdlib.h>

int Star(int N)
{
    if (N==0)
    {
        return 0;
    }
    else
    {
        printf("*");
        Star(N-1);
    }
    return 0;
}

int main()
{
    Star(4);
    return 0;
}

/*
Napisz funkcje Star, ktora ma jeden argument N, a nastepnie
wyswietla N gwiazdek np. dla N = 4 "****"
*/
