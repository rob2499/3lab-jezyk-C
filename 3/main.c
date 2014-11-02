#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 1.62;
    float b = 3.14;
    float c = 2.72;
    double d = 0;
    /*------------------*/
    d=((c*(a + b)*(a + b)) - (a*a*a) + b-c);
    printf("Wartosc d = %.7f",d);
    return 0;
}

/*
a) Napisz program, ktory deklaruje zmienne:
a = 1.62;
b = 3.14;
c = 2.72;

b) Nastepneie obliczy wyrazenie
d = c*(a + b)^2 - a^3 + b-c

c) Na koniec wypisze d na ekranie z dokladnoscia do 7 miejsc po przecinku
wg wzoru
"Wartosc d = ... "
*/
