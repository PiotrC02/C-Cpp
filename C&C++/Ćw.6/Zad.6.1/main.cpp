#include <iostream>
#include "tabUtils.cpp"

using namespace std;

int main()
{
    int dlugosc=10;
    int array[dlugosc];

    // losowanie liczby dla kazdego pojedynczego elementu w tablicy
    for(int i=0; i<dlugosc; i++)
    {
        array[i]=rand()%100;
    }

    // ile zajmuje bajtów caly array w pamieci
    cout << "Funkcja sizeof dla calej tablicy: ";
    cout << sizeof(array) << "\n" << endl;

    // ile zajmuje bajtów przypisany do niego "pierwszy" element w pamieci
    cout << "Funkcja sizeof dla elementu 0 wynosi: ";
    cout << sizeof(array[0]) << "\n" << endl;

    // podzielenie siezeof calej tablicy oraz elementu 0 => wpisana wartosc w int dlugosc
    cout << "Podzielenie siezeof calej tablicy oraz elementu 0: ";
    unsigned int liczbaElementow=sizeof(array)/sizeof(array[0]);

    // liczba elementow w tablicy
    cout << liczbaElementow << "\n" << endl;

    cout << "Pierwotna tablica: " << endl;
    printTab(array, liczbaElementow);
    cout << " " << endl;
    reverseTab(array, liczbaElementow);
    cout << "\n" << "Tablica odwrotna: " << endl;
    printTab(array, liczbaElementow);
    cout << "\n" << endl;

    return 0;
}
