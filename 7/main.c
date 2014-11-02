#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 1.62;
    float b = 3.14;
    float c = 2.72;
    double d = 0;
    /*------------------*/
    printf("Podaj wartosc A: \n");
    scanf("%f",&a);
    printf("Podaj wartosc B: \n");
    scanf("%f",&b);
    printf("Podaj wartosc C: \n");
    scanf("%f",&c);
    /*------------------*/
    d=((c*(a + b)*(a + b)) - (a*a*a) + b-c);
    printf("Wartosc d = %.7f",d);
    return 0;
}

/*
Zmodyfikuj program z Zadania 3 tak, aby uzytkownik podawal wartosci
tych trzech parametrow oraz obliczal podane wyrazenie d.
*/
