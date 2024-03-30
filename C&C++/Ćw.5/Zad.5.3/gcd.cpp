#include "gcd.h"
#include <chrono>

int iterGcd(int x, int y) // NWD iteracyjnie
{
    while(x!=y)
        if(x>y)
            x=x-y;
        else
            y=y-x;
    return x;
}

int recurGcd (int x, int y) // NWD rekurencyjnie
{
    if(y!=0)
        return recurGcd(y, x%y);
    return x;
}
