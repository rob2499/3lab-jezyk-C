#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int TAB[20];
    for (a=0;a<20;a++)
    {
        TAB[a]=a+1;
        printf("%i\n",TAB[a]);
    }

    /*-------------------------*/
    printf("\n");
    /*-------------------------*/
    int b=0;
    int c=20;
    int TABB[20];
    do
    {
        TABB[b]=c;
        printf("%i\n",TABB[b]);
        b++;
        c--;
    }while(b<20);

    /*-------------------------*/
    printf("\n");
    /*-------------------------*/
    int d=0;
    int e=1;
    int TABC[20];
    do
    {
        TABC[d]=e*2;
        printf("%i\n",TABC[d]);
        d++;
        e++;
    }while(d<20);

    /*-------------------------*/
    printf("\n");
    /*-------------------------*/
    int f=0;
    int g=1;
    int TABD[20];
    do
    {
        TABD[f]=g*g;
        printf("%i\n",TABD[f]);
        f++;
        g++;
    }while(f<20);

    /*-------------------------*/
    printf("\n");
    /*-------------------------*/
    int h=1;
    int i=1;
    int TABE[20]={1};
    printf("%i\n",TABE[0]);
    do
    {
        TABE[h]=i*2;
        printf("%i\n",TABE[h]);
        i=i*2;
        h++;
    }while(h<20);

    return 0;
}

/*
Zadeklaruj tablice 20 liczb calkowitych o nazwie TAB.
Uzupelnij tablice TAB wg ponizszego wzoru:

a) {1, 2, 3,....,20};

b) {20, 19, 18, ...., 1};

c) {2, 4, 6, 8, ...., 40};

d) {1, 4, 9, 16, ..., 400};

e) {1, 2, 4, 8, 16, ..., 1048576};

f) { tablica 20 liczb pseudolosowych z przedzialu [1 - 20] };

wypisz za kazdym razem zawartosc tablicy.
*/
