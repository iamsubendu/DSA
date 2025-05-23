#include <iostream>
using namespace std;

// calculate sum of all digits in a number

// 178
// 178 % 10 = 8
// 178 / 10 = 17

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