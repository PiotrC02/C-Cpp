#include <stdio.h>
#include <stdbool.h>
#include "median.h"

bool median(const int * tab, unsigned int n, float * buffer)
{
    int temp_tab[n];

    for(int i = 0; i < n; i++)
    {
        temp_tab[i] = tab[i];
    }
    // sortowanie tablicy
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            int x = 0;
            if (temp_tab[j-1] > temp_tab [j])
            {
                x = temp_tab[j-1];
                temp_tab[j-1] = temp_tab[j];
                temp_tab[j] = x;
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", temp_tab[i]); // tablica ze zmieniona kolejnoscia
    }
    // czy rozmiar tablicy jest nieparzysty czy parzysty
    if (n%2 == 1)
    {
        int np = n/2;
        *buffer = temp_tab[np]; // zachowuje wynik

        return true;
    }
    else if (n%2 == 0)
    {
        int index1 = n/2;
        int index2 = index1 - 1;

        float mediana = (temp_tab[index1] + temp_tab[index2])/2;
        *buffer = mediana; // zachowuje wynik

        return true;
    }
    else
    {
        return false;
    }
}
