#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'a';
    float b = 2.30001;
    double c = 2.34;
    int d = 38938000;
    long e= 292938834;
    /*---------------------------------------*/
    printf("Wiele wywolan printf: \n");
    printf("Zmienna char a = %c\n",a);
    printf("Zmienna float b = %.5f\n",b);
    printf("Zmienna double c = %.2f\n",c);
    printf("Zmienna int d = %i\n",d);
    printf("Zmienna long e = %li\n",e);
    /*---------------------------------------*/
    printf("\nJedno wywolanie printf: \n");
    printf("Zmienna char a = %c\nZmienna float b = %.5f\nZmienna double c = %.2f\nZmienna int d = %i\nZmienna long e = %li\n",a,b,c,d,e);
    return 0;
}

/*
Napisz program, ktory deklaruje zmienne typu: char, float, double, int, long.
Przypisz im jakies wartosci oraz wypisz je na ekranie w oddzielnych liniach za pomoca
a) wielu wywolan printfa
b) jednego wywolania printf

Przy kazdej zmiennej wypisz rowniez jej nazwe, np

"Zmienna float f = 2.4123"
*/
