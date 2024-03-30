#include <iostream>

using namespace std;

int Fibonacci(int n)
{
    if (n <= 1)

    return n;

    return Fibonacci(n - 1) + Fibonacci(n - 2);
}


int main(int argc, char ** argv)
{
    testing :: InitGoogleTest (&argc, argv);

    int res = RUN_ALL_TESTS();

    cout << "Press enter to exit" << endl;

    getchar()

    return res;
}

TEST(FibonacciTest, For0Return0)
{
    ASSERT_EQ(0, Fibonacci(0));
}

TEST(FibonacciTest, For1Return1)
{
    ASSERT_EQ(1, Fibonacci(1));
}

TEST(FibonacciTest, For2Return1)
{
    ASSERT_EQ(1, Fibonacci(2));
}

TEST(FibonacciTest, For3Return2)
{
    ASSERT_EQ(2, Fibonacci(3));
}

TEST(FibonacciTest, For4Return3)
{
    ASSERT_EQ(3, Fibonacci(4));
}

TEST(FibonacciTest, For10Return55)
{
    ASSERT_EQ(55, Fibonacci(10));
}

TEST(FibonacciTest, For20Return6765)
{
    ASSERT_EQ(6765, Fibonacci(20));
}
