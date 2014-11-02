#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do
    {
        printf("Podaj liczbe calkowita N: \n");
        scanf("%i",&n);
    }
    while(n!=0);
    printf("W koncu zero!");
    return 0;
}

/*
Napisz program, ktory pyta uzytkownika o liczbe calkowita N.
Jesli N jest rozne od 0 to niech zapyta ponownie i ponownie.
Gdy podana zostanie liczba 0 to niech zakonczy dzialanie programu
z komunikatem "W koncu zero!".
*/
