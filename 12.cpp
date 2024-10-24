#include <iostream>
using namespace std;

void printHello()
{
    cout << "Hello \n";
}

double sum(double a, double b)
{
    double s = a + b;
    return s;
}

// In C++, functions should be defined outside of other functions or
// declared before they are used.int main()
int main()
{
    printHello();
    double data = sum(6.5466, 7.54646);
    cout << data;

    return 0;
}