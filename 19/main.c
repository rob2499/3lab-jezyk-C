#include <stdio.h>
#include <stdlib.h>

int Piramida(int K)
{
    if(K==0)
    {
        return 0;
    }
    else
    {
        printf("*\n");
        Piramida(K-1);
    }
    return 0;
}

int main()
{
    Piramida(6);
    return 0;
}

/*
Napisz funkcje Piramida, ktora ma 1 argument K oraz wyswietla w kolejnych
liniach gwiazdki wg ponizszego wzoru. Niech K bedzie maksymalna liczba
gwiazdek w wierszu (ponizej przyklad dla K = 6) Uzyj funkcji Star z
poprzedniego zadania.


*
**
***
****
*****
******
*****
****
***
**
*

Nastepnie napisz kompletny program, ktory pyta uzytkownika o liczbe
gwiazdek, a nastepnie wywoluje funkcje Piramida od tej liczby.
Dodaj funkcje sleep (usleep), ktora spowolni wyswietlanie kolejnych
gwiazdek.
*/
