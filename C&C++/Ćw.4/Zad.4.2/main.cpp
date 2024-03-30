#include <iostream>
#include "calculator.cpp"

int main()
{
    using namespace std;

	float x, y, result;
	cout << "Podaj dwie liczby: " << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << endl << "Wybierz dzialanie kalkulatora: " << endl
		<< "0 - dodawanie" << endl
		<< "1 - odejmowanie" << endl
		<< "2 - mnozenie" << endl
		<< "3 - dzielenie" << endl;
	unsigned int operationValue;
	cin >> operationValue;

	Operation operation=static_cast<Operation>(operationValue);
	result=calculate(operation, x, y);

	cout << "Wynik wybranej operacji to: " << result << endl;

	return EXIT_SUCCESS;
}
