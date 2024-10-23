// Operators
// 1. Arithmetic : +,-,/,*
// 2. Relational : <,>,<=,>=,!=,==
// 3. Logical : OR(|| pipe operator),AND(&& ampersend),NOT(!)

// Unary(Special) Operators
// we need single operand to perform this operation
// 1. Increment(++)
// a++(post increment) -> will do the task first and update later
// ++a(pre increment) => will update first then will do the task
// 2. Decrement(--)

// Binary operators
// we need 2 operands to perform this operation

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 5;

    cout << "sum = " << a + b << "\n";
    cout << "isEqual = " << (a == b) << endl;
    cout << ++a << endl;
    cout << a++ << endl;
    cout << a << endl;
    return 0;
}
