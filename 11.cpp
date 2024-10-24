// triangle pattern

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    // Reverse triangle pattern
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // Floyd's triangle pattern
    int count = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    // Inverted triangle pattern
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    int count2 = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count2 << " ";
        }
        count2++;
        cout << endl;
    }
    int count3 = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count2 << " ";
        }
        count2++;
        cout << endl;
    }
    // pyramid pattern
    int space = 4;
    for (int i = 1; i <= 5; i++)
    {
        // spaces
        for (int j = space; j >= 1; j--)
        {
            cout << " ";
        }
        // left part of pyramid
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        // right part of pyramid
        if (i > 1)
        {
            for (int l = i - 1; l >= 1; l--)
            {
                cout << l;
            }
        }
        space--;
        cout << endl;
    }
    // Hollow diamond pattern
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int l = 0; l < n - 1; l++)
    {
        for (int m = 0; m < l + 1; m++)
        {
            cout << " ";
        }
        cout << "*";
        if (l != n - 2)
        {
            // when i=0 > *=5
            // 2*3-1
            // 2[5-2-0]-1
            // when i=1 > *=3
            // 2*2-1
            // 2[5-2-1]-1
            for (int k = 0; k < 2 * (n - 2 - l) - 1; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}