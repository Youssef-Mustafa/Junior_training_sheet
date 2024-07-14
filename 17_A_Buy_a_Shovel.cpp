#include <iostream>
using namespace std;

int main()
{
  int k, r;
  cin >> k >> r;
  for (int i = 1; i < 1000; i++)
  {
    int res = i * k;
    if (res % 10 == 0 || res % 10 == r)
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}