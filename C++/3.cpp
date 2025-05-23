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