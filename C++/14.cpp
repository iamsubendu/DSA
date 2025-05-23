#include <iostream>
using namespace std;

int change(int num)
{
    return num * 2;
}

int main()
{
    int x = 5;
    x = change(x);
    cout << x;

    return 0;
}