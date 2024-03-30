#include <iostream>
#include "calculator.cpp"

int main()
{
    float x, xprevious, y, yprevious, result;
    unsigned int operationValue, oprationValuePrevious;
    while(true)
    {

    using namespace std;

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
	cin >> operationValue;
    if(x==xprevious&&y==yprevious&&operationValue==oprationValuePrevious)
        return EXIT_SUCCESS;
	Operation operation=static_cast<Operation>(operationValue);
	result=calculate(operation, x, y);
	cout << "Wynik wybranej operacji to: " << result << endl;
    xprevious=x;
    yprevious=y;
    oprationValuePrevious=operationValue;
    }
}

