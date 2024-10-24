// factorial
#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num < 2)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int data = factorial(3);
    cout << data;
}