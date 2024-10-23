// Loops
// while
// do while
// for

#include <iostream>
using namespace std;

int main()
{
    int print = 5, count = 0, sum = 0;
    while (count <= print)
    {
        cout << count << endl;
        count++;
    }
    do
    {
        cout << count << endl;
        count++;
    } while (count < 10);
    for (int i = 0; i < 50; i++)
    {
        sum += i;
        if (i == 5)
        {
            cout << sum << " break worked";
            break;
        }
        cout << i << " iteration" << endl;
    }
    return 0;
}