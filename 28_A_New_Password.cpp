#include <iostream>
using namespace std;

int main()
{
  int size, dist;
  cin >> size >> dist;

  for (int i = 0; i < size; i++)
    cout << (char)('a' + (i % dist));
  return 0;
}