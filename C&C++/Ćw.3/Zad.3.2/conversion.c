#include <stdio.h> // Zalaczenie standardowej biblioteki //
#include <math.h> // Zalaczenie biblioteki matematycznej, liczacej potegi, itp. //
#include "conversion.h" // Zalaczenie deklaracji funkcji z pliku conversion.h //

void decimalToBinary(unsigned int number) // Funkcja zamieniajaca liczbe na system binarny //
{
    int wynik=0; // Zmienna wyniku //
    int potega=0; // Zmienna potegi //
	while(number) // Petla while //
	{
        wynik=(number%2)*pow(10,potega)+wynik;
		number=number/2;
        potega++;
	}
    printf("%i", wynik); // Pokazanie liczby na konsoli //
}
