#include <iostream>
#include <chrono>
#include "gcd.cpp"

int main()
{
    using namespace std;

	int x;
	int y;

	cout << "Podaj dwie liczby, aby znalezc ich najwiekszy dzielnik:" << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	cout << "Wybierz za pomoca jakiej funkcji chesz znalezc najwiekszy dzielnik:\n1.Iteracyjnie\n2.Rekurencyjnie\n3.Za pomoca obu\n";

	int z;
	cin >> z;

	switch(z)
	{
		case 1:
			cout << "Rozwiazanie iteracyjne: ";
			cout << iterGcd(x,y) << endl;
			break;

		case 2:
			cout << "Rozwiazanie rekurencyjne: " << recurGcd(x,y) << endl;
			break;

		case 3:
			cout << "Rozwiazanie iteracyjne: " << iterGcd(x,y) << endl;
			cout << "Rozwiazanie rekurencyjne: " << recurGcd(x,y) << endl;
			break;

		default :
			cout << "Nie wybrano rozwiazania!" << endl;
			break;
	}
		cout << "Porownanie czasu wykonywania funkcji w ms: " << endl;

		auto begin = chrono::high_resolution_clock::now();
		iterGcd(x,y);
		auto end = chrono::high_resolution_clock::now();
		auto duration = chrono::duration_cast<chrono::milliseconds>(end-begin).count();

		cout << "Czas wykonywania funkcji iteracyjnej: " << duration << " ms" << endl;

		auto begin1 = chrono::high_resolution_clock::now();
		recurGcd(x,y);
		auto end1 = chrono::high_resolution_clock::now();
		auto duration1 = chrono::duration_cast<chrono::milliseconds>(end1-begin1).count();
		cout << "Czas wykonywania funkcji rekurencyjnej: " << duration1 << " ms" << endl;

	return 0;
}
