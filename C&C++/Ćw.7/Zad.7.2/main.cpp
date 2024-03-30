#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    std::string filename;
    std::ifstream file;

    char litera;
    char a;
    int ilosc {0};

    std::cout << "Wpisz nazwe pliku: " << std::endl;
    std::cin >> filename;
    std::cout << "Wpisz ilosc liter do sprawdzenia: " << std::endl;
    std::cin >> litera;

    file.open(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Nie mozna otworzyc pliku!" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    while (file >> a)
    {
        if (a == litera)
        {
            ++ilosc;
        }
    }

    file.close();
    std::cout << "Plik o nazwie: " << filename << " ma " << ilosc << " liter " << litera;

    return 0;
}
