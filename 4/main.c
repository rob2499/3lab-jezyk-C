#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba=0;
    printf("Podaj liczbe calkowita: ");
    scanf("%i",&liczba);
    if (liczba >= 0)
    {
        printf("\nPodana liczba jest dodatnia.\n");
    }
    else
    {
        printf("\nPodana liczba jest ujemna.\n");
    }
    return 0;
}

/*
Napisz program, ktory pyta uzytkownika o liczbe calkowita, a nastepnie
wypisuje komunikat "Podana liczba jest dodatnia" lub "Podana liczba jest
ujemna" w zaleznosci od podanej liczby.
*/
