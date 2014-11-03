#include <stdio.h>
#include <stdlib.h>

double Praw(double A, double B)
{
    double wynik_odejmowania;
    double wynik_dodawania;
    if(A>B)
    {
        wynik_odejmowania=A-B;
        wynik_dodawania=A+B;
        return wynik_odejmowania;
    }
    if(B>A)
    {
        wynik_odejmowania=B-A;
        wynik_dodawania=B+A;
        return wynik_dodawania;
    }
    return 0;
}

int main()
{
    double A;
    double B;
    printf("Podaj dwie liczby rzeczywiste: \n");
    scanf("%lf %lf", &A, &B);
    printf("%lf",Praw(A,B));
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
