#include "fib.h"

int fibonacci(unsigned int n) // implementacja rekurencyjna, przy pomocy debuggera dgb znalazlem blad, zamienic trzeba n<=2 na n<2
{
	if (n < 2)
		return n;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}

int fib(unsigned int k) // implementacja iteracyjna
{
    int a=0, b=1, c=1;
    for (int i=0; i<k; i++)
    {
        c = a;
        a = a+b;
        b = c;
    }

    return a;
}
