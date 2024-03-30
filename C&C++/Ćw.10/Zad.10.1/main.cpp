#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

bool median(const int * tab, unsigned int n, float * buffer)
{
    // utworzenie tablicy tymczasowej
    int temporary_tab[n];
    memcpy(temporary_tab, tab, n*sizeof(int));
    // sortowanie tablicy
    sort(temporary_tab, temporary_tab + n);
    // warunek, kiedy parzyste lub nieparzyste liczby w tablicy => potrzebne do obliczenia mediany
    if (n%2 == 0)
    *buffer = ((float)temporary_tab[n/2]+(float)temporary_tab[n/2]-1)/2;
    else
    *buffer = temporary_tab[(n-1)/2];

    return true;
}

int main()
{
    // podanie liczb do tablicy
    int tab[] = {7,3,4,6,2,1}; // 1 2 3 4 6 7 // (3+4)/2 = 3.5
    // obliczenie mediany
    float x;
    bool res = median(tab, sizeof(tab)/sizeof(tab[0]), &x);
    printf("Wartosc mediany wynosi: %f", x);

    return 0;
}
