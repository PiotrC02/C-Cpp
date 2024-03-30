#include <iostream>
#include <stdlib.h>

int main()
{
    int a;

    std::cout << "Podaj wymiar macierzy kwadratowej: \n" << std::endl;

    std::cin >> a;

    // macierz kwadratowa o wymiarze n x n elementow

    if(a == 0 || a > 10)
        exit(EXIT_FAILURE);
    else
        int *const n=&a;
        int b = 0;
        int** macierz = new int* [a];

        for(int x = 0; x < a; ++x)
        {
            macierz[x] = new int [a];
        }

        for(int y = 0; y < a; y++)
        {
            for(int z = 0; z < a; z++)
            {
                macierz[y][z] = b + 1;
                b = b + 1;
            };
        };

        int i = 0;
        for(int y = 0; y < a; y++)
        {
            for(int z = 0; z < a; z++)
            {
                if(i < a)
                {
                    std::cout << macierz[y][z] << " ";
                    i++;
                }
                else
                    std::cout << "\n";
                    i = 0;
            };
            std::cout << "\n";
        };

        for(int y = 0; y < a; y++)
        {
            delete[]macierz[y];
        }

        delete[]macierz;

    return 0;
}
