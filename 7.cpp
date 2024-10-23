// Conditional Statements
// if-else

// Ternary Statement
// meaning three
// condition ? statement1: statement2;

#include <iostream>
using namespace std;

// int main()
// {
//     char ch;
//     cout << "Enter character to check lowercase or uppercase: ";
//     cin >> ch;
//     if (ch >= 'a' && ch <= 'z')
//     {
//         cout << "Lowercase";
//     }
//     else
//     {
//         cout << "Upeercase";
//     }
//     return 0;
// }

// using ASCII characters
// A-Z => 65-90
// a-z => 97-122
int main()
{
    char ch;
    cout << "Enter character to check lowercase or uppercase: ";
    cin >> ch;
    // as character will be saved in memory as number only
    // thus we can compare it
    if (ch >= 97 && ch <= 122)
    // implicit type conversion will be done to its
    // ASCII value and then its compared
    {
        cout << "Lowercase";
    }
    else
    {
        cout << "Upeercase";
    }
    return 0;
}