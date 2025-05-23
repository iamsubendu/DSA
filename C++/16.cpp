#include <iostream>
using namespace std;

// add one to a string

// 178
// 179

int getSumOfNumber(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;
        num = num / 10;
        sum += lastDig;
    }
    return sum;
}

int main()
{
    int x = 178;
    x = getSumOfNumber(x);
    cout << x;

    return 0;
}