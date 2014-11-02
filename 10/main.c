#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wynik=0;
    int a=0;
    int n;
    printf("Podaj liczne N: \n");
    scanf("%i",&n);
    for (a=1;a<=n;a++)
    {
        wynik=wynik+a;
    }
    printf("Wynik sumy z petli for = %i\n",wynik);
    printf("---------------\n");

    /*----------------------------------------------------------------------------*/
    int wynik2=0;
    int b=1;
    int n2;
    printf("Podaj liczne N: \n");
    scanf("%i",&n2);
    do
    {
        wynik2=wynik2+b;
        b++;
    }while(b<=n2);
    printf("Wynik sumy z petli while = %i\n",wynik2);
    printf("---------------\n");

    /*----------------------------------------------------------------------------*/
    int wynik3=0;
    int n3;
    printf("Podaj liczbe N: \n");
    scanf("%i",&n3);
    wynik3=(n3*(n3+1)/2);
    printf("Wynik sumy ze wzoru na sume kolejnych liczb naturalnych = %i\n",wynik3);
    printf("---------------\n");

    /*----------------------------------------------------------------------------*/
    if(wynik==wynik2 && wynik2==wynik3)
    {
        printf("\nWszystko sie zgadza!\n");
    }
    return 0;
}

/*
Napisz program, ktory zapyta uzytkownika o liczbe N. Nastepnie
policzy wartosc sumy 1 + 2 + 3 + ... + N na trzy sposoby:
a) za pomoca petli for
b) za pomoca petli while
c) za pomoca wzoru na sume kolejnych liczb naturalnych

Wyswietl wszystkie trzy wyniki i jesli wszystkie trzy sa takie same
to wypisz "Wszystko sie zgadza!".
*/
