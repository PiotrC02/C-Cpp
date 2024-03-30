#include <stdio.h>
#include <stdlib.h>
#include "median.c"

int main()
{
    unsigned int n;
    int x;

    printf("Prosze podac wielkosc tablicy n, nastepnie bedzie policzona mediana: ");
    scanf("%d", &n);
    printf("\n");

    int tab[n];

    // wypelnienie tablicy wartosciami podanymi przez uzytkownika

    for(int i = 0; i < n; i++)
    {
        printf("Prosze podac %d liczbe do tabeli: x = ", i+1);
        scanf("%d", &x);

        tab[i] = x;
    }
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // wywolujemy funkcje median

    float buffer;

    bool wynik = median(tab, n, &buffer);

    printf("\n");

    if (wynik == true)
    {
        printf("Wartosc mediany wynosi: %f", buffer);
    }
    else
    {
        printf("Przepraszamy nie dziala :/");
    }

    return 0;
}
