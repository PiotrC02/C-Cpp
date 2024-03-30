#include <stdio.h>
#include <ctype.h>
#include "convertCase.h"

void convertCase(char text[])
{
    int i=0;
    while(text[i])
    {
        if(isalpha(text[i]))
        {
            if(islower(text[i]))
            {
                printf("Na wieksza litere ('%c') = '%c';\n",text[i],toupper(text[i]));
            }
            else
            {
                printf("Na mniejsza litere ('%c') = '%c';\n",text[i],tolower(text[i]));
            }
        }
        else
        printf("('%c') nie jest litera alfabetu!\n",text[i]);
    i++;
  }
}
