#include <stdio.h> // Zalaczenie standardowej biblioteki //
#include <math.h> // Zalaczenie biblioteki matematycznej, liczacej pierwiastki, itp. //
#include "zeros.h" // Zalaczenie deklaracji funkcji z pliku zeros.h //

void zeros(float a, float b, float c) // Definicja funkcji zeros //
{

    if (a==0) // Warunek, gdy a jest zerem to nie istnieje funkcja kwadratowa //
    {
        printf("Jesli a=0 to nie ma miejsc zerowych, ani funkcji kwadratowej\n");
        return 0;
    }
    else
    {
        float delta=pow(b,2)-4*a*c; // Wzor na delte //
        if (delta<0) // Warunek, gdy delta jest mniejsza od zera to funkcja nie ma miejsc zerowych //
	{
		printf("Delta ujemna => brak miejsc zerowych\n");
		return 0;
	}
        else if (delta>0) // Warunek, gdy delta jest wieksza od zera to funkcja ma dwa miejsca zerowe //
    {
        float x1=(-b-sqrt(delta))/(2*a);
        float x2=(-b+sqrt(delta))/(2*a);
        printf("Dwa miejsca zerowe: x1: %f, x2: %f\n",x1,x2);
    }

        else if (delta==0) // Warunek, gdy delta jest rowna zero to funkcja ma jedno miejsce zerowe //
    {
        float x0=(-b/(2*a));
        printf("Jedno miejsce zerowe: x0: %f\n",x0);
    }
    }

}
