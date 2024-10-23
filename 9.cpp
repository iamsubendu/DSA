// Check if number is prime or not
// Prime - 1,n - 2,3,5,7,9
// Non-prime - 4,6,8

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;
    cout << "Give a no to check if its prime or not" << endl;
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    isPrime ? cout << "The number given is prime" : cout << "The number given is not prime";
    return 0;
}