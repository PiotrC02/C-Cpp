#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rsa_utils.h"

int gcd(unsigned int x, unsigned int y) //Funkcja obliczajaca najwiekszy wspolny dzielnik liczb x i y//
{
    while (x!=y)
    {
        if (x>y)
        {
            x-=y;
        }
        else
        {
            y-=x;
        }
    }
    return x;
}


bool isPrime(unsigned int n) //Funkcja sprawdzajaca czy przekazana liczba jest liczba pierwsza//
{
    bool is_prime=true;
    int i;

    if (n==0||n==1)
    {
        return false;
    }

    for (i=2;i<=n/2;++i)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
