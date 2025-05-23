// Calculate nCr
// binomial coefficient for n & r

// Combination
// Use combinations when the order of selection is irrelevant.
// Example : Selecting a team of players from a group,
// where the sequence of selection does not change the team.
// nCr = n!/r!(n-r)!

// Permuatation
// nPr = n!/(n-r)!
// Use permutations when the order of selection is important.
// Example : Arranging books on a shelf,where the sequence of books matters.

#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num < 2)
        return 1;
    return num * factorial(num - 1);
}

int combination(int total, int selection)
{
    int comb = factorial(total) / (factorial(selection) * factorial(total - selection));
    return comb;
}

int permutation(int total, int selection)
{
    int perm = factorial(total) / factorial(total - selection);
    return perm;
}

int main()
{
    int n = 8, r = 2;
    int x = combination(n, r);
    cout << x << endl;
    int y = permutation(n, r);
    cout << y << endl;

    return 0;
}