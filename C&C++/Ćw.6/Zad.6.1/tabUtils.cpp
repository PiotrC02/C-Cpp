#include <iostream>
#include "tabUtils.h"

using namespace std;

// int *array to inaczej int array[]
// definicje

void printTab(int *array, unsigned int liczbaElementow)
{
    int i;
    for (i=0;i<liczbaElementow;i++)
    {
        cout << " " << array[i];
    }
}

void reverseTab(int *array, unsigned int liczbaElementow)
{
    int j;
    int i=liczbaElementow;
    for (i=0,j=liczbaElementow-1;i<liczbaElementow/2;i++,j--)
        {
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}
