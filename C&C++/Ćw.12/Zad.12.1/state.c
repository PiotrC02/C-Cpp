#include "state.h"

void echo(char character)
{
    printf("%c\n", character);
}

void write(char character)
{
    FILE* fPtr = fopen ("output.txt", "a");
    fputc(character, fPtr);
    fclose(fPtr);
}
