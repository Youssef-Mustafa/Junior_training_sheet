#include <iostream>
using namespace std;

int main()
{
  int w_l, w_b, years = 0;
  cin >> w_l >> w_b;
  while (w_l <= w_b)
  {
    w_l = w_l * 3;
    w_b = w_b * 2;
    years++;
  }
  cout << years << endl;

  return 0;
}