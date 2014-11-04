#include <stdio.h>
#include <stdlib.h>

double Praw(double A, double B,double* w_o, double* w_d)
{
    if(A>B)
    {
        *w_o=A-B;
        *w_d=A+B;
    }
    if(B>A)
    {
        *w_o=B-A;
        *w_d=B+A;
    }
    return 0;
}

int main()
{
    double A, B, w_o, w_d;
    printf("Podaj dwie liczby rzeczywiste: \n");
    scanf("%lf %lf", &A, &B);
    Praw(A,B,&w_o,&w_d);
    printf("Wynikiem odejmowania jest: %lf\nWynikiem dodawania jest: %lf",w_o,w_d);
    return 0;
}

/*
Napisz funkcje o nazwie Praw, ktora zwraca typ double oraz ma dwa
argumenty typu double A i B. A nastepnie zwraca wartosci

W - M
-----
W + M

gdzie W to wieksza wartosc z A i B, natomiast M to mniejsza z tych dwoch
wartosci.
*/
