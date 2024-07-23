#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return n * factorial(n - 1);
}

int main()
{
  cout << 1 + floor(log10(factorial(0))) << endl;
  cout << 1 + floor(log10(factorial(1))) << endl;
  cout << 1 + floor(log10(factorial(2))) << endl;
  cout << 1 + floor(log10(factorial(3))) << endl;
  cout << 1 + floor(log10(factorial(4))) << endl;
  cout << 1 + floor(log10(factorial(5))) << endl;
  cout << 1 + floor(log10(factorial(6))) << endl;
  cout << 1 + floor(log10(factorial(7))) << endl;
  cout << 1 + floor(log10(factorial(8))) << endl;
  cout << 1 + floor(log10(factorial(9))) << endl;

  return 0;
}