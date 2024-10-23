// variable name should start from _ or a-z or A-Z
// variables are termed as Identifiers in C++

// single digit = 1 bit
// 8 bits = 1 byte

// Data types -
// int(4 bytes) -> 8*4 -> 32bits -> we can store upto 32 integers
// char(1 byte),float(4 bytes)
// bool(1 byte),double(8 bytes)

// if we don't use any type, by default it will be double

#include <iostream>
using namespace std;

int main()
{
  int age = 25;
  char name = 'R';
  // double quote is not allowed when defining char
  // also it
  float PI = 3.14F;
  // if we dont write F, complier will assume it as double
  bool isSafe = true;
  cout << age << endl;
  cout << name << endl;
  cout << PI << endl;
  cout << isSafe << endl;
  cout << sizeof(age);
  return 0;
}