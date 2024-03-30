#include <iostream>
#include <random>
#include "sort.cpp"

int main()
{
    constexpr unsigned int sizeArray = 1000;
    std::random_device rd;

    std::mt19937 e2(rd());
    std::uniform_real_distribution<> dist(0, 25);

    double array1[sizeArray];
    double array2[sizeArray];
    double array3[sizeArray];
    for (int i = 0; i < sizeArray; i++)
    {
        array1[i] = dist(e2);
        array2[i] = dist(e2);
        array3[i] = dist(e2);
    }

    sorting::bubbleSort(array1, sizeArray, [](double lhs, double rhs) { return lhs > rhs; });
    sorting::quickSort(array2, 0, sizeArray, [](double lhs, double rhs) { return lhs > rhs; });
    sorting::mergeSort(array3, 0, sizeArray, [](double lhs, double rhs) { return lhs > rhs; });

    return 0;
}
