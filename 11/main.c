#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));

    int k=0;
    int u=0;
    int a=1;
    int i_wygral=0, i_bylblisko=0, i_przegral=0;

    do
    {

    do
    {
        k=rand()%6;
    }while(k==0);

    printf("\nPodaj liczbe z przedzialu 1-5: \n");
    scanf("%d", &u);

    printf("Program wylosowal liczbe: %i\n",k);

    if(k==u)
    {
        printf("Brawo!\n");
        i_wygral++;
    }
    else if(u-1==k || u+1==k)
    {
        printf("Blisko!\n");
        i_bylblisko++;
    }
    else
    {
        printf("Pudlo!\n");
        i_przegral++;
    }

    a++;
    }while(a<6);

    printf("\nGracz %i razy wygral\n",i_wygral);
    printf("Gracz %i razy byl blisko\n",i_bylblisko);
    printf("Gracz %i razy przegral\n",i_przegral);

    return 0;
}

/*
Zmodyfikuj program z Zadania 6 tak, aby gra trwala dokladnie 5 razy.
Dodaj zmienna, ktora bedzie liczyla ile razy kazda z odpowiedzi sie
pojawila. Na koniec niech wyswietli komunikat
"Gracz X razy wygral"
"Gracz Y razy byl blisko"
"Gracz Z razy przegral"

*) (dla chetnych) Gdy jedna z liczb jest rowna 1 to niech zamiast "1 razy"
wypisze "1 raz".
*/
