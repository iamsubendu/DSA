// Patterns

#include <iostream>
using namespace std;

// outer loop - n no of rows
// inner loop - n no of columns

int main()
{
    // square pattern
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 4; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= 4; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    int count = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}