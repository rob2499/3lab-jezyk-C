#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    printf("Podaj liczbe w przedziale od 1 do 7: \n");
    scanf("%i",&liczba);
    switch(liczba)
    {
        case 1 : printf("Poniedzialek\n");break;
        case 2 : printf("Wtorek\n");break;
        case 3 : printf("Sroda\n");break;
        case 4 : printf("Czwartek\n");break;
        case 5 : printf("Piatek\n");break;
        case 6 : printf("Sobota\n");break;
        case 7 : printf("Niedziela\n");break;
    }
    return 0;
}

/*
Napisz program, ktory pyta o liczbe w przeciale 1-7, a nastepnie
wyswietla nazwe dnia tygodnia Pn, Wt, Sr, Cz, Pt, Sb lub Nd.
*/
