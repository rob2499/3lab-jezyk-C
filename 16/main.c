#include <stdio.h>
#include <stdlib.h>

int Liczba(int liczba)
{
    if (liczba >= 0)
    {
        return printf("\nPodana liczba jest dodatnia.\n");
    }
    else
    {
        return printf("\nPodana liczba jest ujemna.\n");
    }
}

int main()
{
    int liczba=0;
    printf("Podaj liczbe calkowita: ");
    scanf("%i",&liczba);
    Liczba(liczba);
    return 0;
}

/*
Napisz funkcje Liczba, ktora robi dokladnie to co w Zadaniu 4.
-----------
Zad.4
Napisz program, ktory pyta uzytkownika o liczbe calkowita, a nastepnie
wypisuje komunikat "Podana liczba jest dodatnia" lub "Podana liczba jest
ujemna" w zaleznosci od podanej liczby.


*/
