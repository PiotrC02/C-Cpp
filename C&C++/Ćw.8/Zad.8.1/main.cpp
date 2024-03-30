#include <iostream>
#include <stdlib.h>

int main()
{
    // zmienne alokowane statycznie

    std::cout << "Zmienne alokowane statycznie (jako stos): \n" << std::endl;

    int zmienna1 = 1;
    int zmienna2 = 2;
    int zmienna3 = 3;
    int zmienna4 = 4;
    int zmienna5 = 5;

    int &refZmienna1 = zmienna1;
    int &refZmienna2 = zmienna2;
    int &refZmienna3 = zmienna3;
    int &refZmienna4 = zmienna4;
    int &refZmienna5 = zmienna5;

    std::cout << "zmienna1 = " << &refZmienna1 << std::endl;
    std::cout << "zmienna2 = " << &refZmienna2 << std::endl;
    std::cout << "zmienna3 = " << &refZmienna3 << std::endl;
    std::cout << "zmienna4 = " << &refZmienna4 << std::endl;
    std::cout << "zmienna5 = " << &refZmienna5 << "\n" << std::endl;

    // zmienne alokowane dynamicznie

    std::cout << "Zmienne alokowane dynamicznie (jako sterta): \n" << std::endl;

    int *ptr6 = new int(6);
    int *ptr7 = new int(7);
    int *ptr8 = new int(8);
    int *ptr9 = new int(9);
    int *ptr10 = new int(10);

    std::cout << "*ptr6 = " << ptr6 << std::endl;
    std::cout << "*ptr7 = " << ptr7 << std::endl;
    std::cout << "*ptr8 = " << ptr8 << std::endl;
    std::cout << "*ptr9 = " << ptr9 << std::endl;
    std::cout << "*ptr10 = " << ptr10 << "\n" << std::endl;

    delete ptr6;
    delete ptr7;
    delete ptr8;
    delete ptr9;
    delete ptr10;

    // odpowiedzi na pytania w zadaniu

    std::cout << "Ulozenie stosu i sterty: stos jest szybszy od sterty. Stos lezy wyzej od sterty, poniewaz ma mniejsze wartosci. \n" << std::endl;
    std::cout << "Nalozenie sie obu segmentow ze sterty oraz stosu jest niemozliwe, bo wartosci w stercie rosna a w stosie maleja. \n" << std::endl;

    return 0;
}
