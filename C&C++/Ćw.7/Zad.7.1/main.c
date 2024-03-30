#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data[20];
    FILE * fPtr = fopen("input.txt", "w+");

    if (fPtr == NULL)
    {
        printf("Blad, nie mozna otworzyc pliku\n");
        exit(EXIT_FAILURE);
    }

    int ch;
    int i;
    for (i=0; (i<20) && ((ch=getchar()) != 'Q') && (ch != 'q'); ++i)
    {
        data[i] = ch;
    }

    fputs(data, fPtr);
    printf("%s", data);
    return 0;
}
