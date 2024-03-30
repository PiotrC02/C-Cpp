#include <stdio.h>
#include "math_utils.c"

int main()
{
    int x, y;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("gcd(%d, %d) = %d\n", x, y, gcd (x, y));
    printf("lcm(%d, %d) = %d\n", x, y, lcm (x, y));

    return 0;
}
