#include "math_utils.h"

int gcd(int x, int y)
{
    int gcd;
    for(int i = 1; i <= x && i <= y; ++i)
    {
        if(x % i == 0 && y % i == 0)
            gcd = i;
    }
    return gcd;
}

int lcm(int x, int y)
{
    return (x * y) / gcd(x, y);
}
