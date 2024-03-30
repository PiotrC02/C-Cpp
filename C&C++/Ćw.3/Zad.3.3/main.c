#include <stdio.h>
#include <math.h>
#include <time.h>
#include "rsa_utils.c"

int main() //Generator liczb pseudolosowych, losuje wedlug warunkow zadania//
{
    srand(time(NULL));
    unsigned int p,q,e;
    do
    {
        p=rand();
    }
    while(!isPrime(p));
    do
    {
        q=rand();
    }
    while(!isPrime(q));
    do
    {
        e=rand();
    }
    while(gcd(e,p-1)!=1&&gcd(e,q-1)!=1);
    printf("gcd(e,p-1)=%i\n",gcd(e,p-1));
    printf("gcd(e,q-1)=%i\n",gcd(e,q-1));

        printf("p=%i\n",p);
        printf("q=%i\n",q);
        printf("e=%i\n",e);
}
