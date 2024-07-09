#include <iostream>
using namespace std;

int main()
{
  int n;
  int sureProblems = 0;
  int p, v, t;
  cin >> n;

  while (n)
  {
    cin >> p >> v >> t;

    if ((p + v + t) > 1)
      sureProblems++;

    n--;
  }

  cout << sureProblems;
  return 0;
}