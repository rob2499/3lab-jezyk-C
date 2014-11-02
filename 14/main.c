#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int LUCAS[20]={2,1};
    a=2;
    printf("%i\n",LUCAS[0]);
    printf("%i\n",LUCAS[1]);
    do
    {
        LUCAS[a]=LUCAS[a-1]+LUCAS[a-2];
        printf("%i\n",LUCAS[a]);
        a++;
    }while(a<20);


    return 0;
}

/*
Zadeklaruj tablice 20 liczb calkowitych o nazwie LUCAS.
Uzupelnij tablice TAB wg ponizszego wzoru (znajdz wpierw wzor):

{2, 1, 3, 4, 7, 11, 18, .... };

Wypisz zawartosc. Jaka jest ostatnia liczba w tablicy?
*/
