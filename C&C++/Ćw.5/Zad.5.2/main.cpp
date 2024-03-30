#include <iostream>
#include "fib.cpp"

using namespace std;

int main()
{
    for(int i=1; i<15; i++)
    {
        cout << "Element ciagu fibonacciego nr: " << i << ": " << fibonacci(i) << endl;
    }

    cout << fibonacci(8) << endl; //pokazanie 8 elementu ciagu fibonacciego
    cout << fib(10) << endl; //pokazanie 10 elementu ciagu fibonacciego

    return 0;
}
