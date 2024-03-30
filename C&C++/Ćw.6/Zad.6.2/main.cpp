#include <stdio.h>
#include <ctype.h>
#include "convertCase.cpp"

int main()
{
    // zamiana liter male na duze i na odwrot
    char text[10]={};
    scanf("%s",text);
    convertCase(text);

    // zamiana na ASCII
    int suma=0;
    char ascii[20];
    int i=0;

    printf("\n");
    printf("Wprowadz znaki: ");
    scanf("%s", ascii);
    while(ascii[i]!='\0')
    {
        printf("\n%c w ASCII to: %d", ascii[i],ascii[i]);
        suma=suma+ascii[i];
        i++;
    }

    return 0;
}
