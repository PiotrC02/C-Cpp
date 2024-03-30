#include <iostream> // Biblioteka do komend typu: cout, hex, endl //
#include <iomanip> // Biblioteka do komendy np.: setiosflags //

int main() // Glowny program //
{
    using namespace std;

    // Deklaracja zmiennej //
    int number;

    // Reprezentacja liczby szesnastkowej //
    cout << hex;
    cout << setiosflags(ios::showbase|ios::uppercase);

    // Wyswietlenie tekstu //
    cout << "Podaj liczbe, ktora chcesz wyswietlic w postaci reprezentacji szenastkowej: ";

    // Zapisanie liczby w pamieci //
    cin >> number;

    // Wypisanie liczby w konsoli //
    cout << "Podana liczba w reprezentacji szesnastkowej: " << number << endl;

    // Ustawienie szerokosci pola //
    cout << dec << setfill('0') << setw(10) << number << endl;

    // Deklaracja zmiennej //
    float liczba;

    // Liczba zmiennoprzecinkowa //
    cout << "Podaj liczbe zmiennoprzecinkowa: ";

    // Zapisanie liczby w pamiêci //
    cin >> liczba;

    // Wypisanie liczby zmiennoprzecinkowej w zaokragleniu //
    cout << "Podana liczba zmiennoprzecinkowa po zaokragleniu: " << setprecision(3) << liczba << endl;

    return 0; // Koniec programu => zwrocenie wartosci 0 //
}
