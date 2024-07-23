#include <iostream>
#include <math.h>
using namespace std;
string first_solution(unsigned int n) // time limit exceed
{
  while (cin >> n && n != 0)
  {
    int counter = 0;
    for (int i = 1; i <= n; i++)
    {
      if (n % i == 0)
      {
        counter++;
      }
    }

    if (counter % 2 == 0 && n != 0)
    {
      cout << "no" << endl;
    }
    else
    {
      cout << "yes" << endl;
    }
  }
}

string second_solution(unsigned int n)
{
  while (cin >> n && n != 0)
  {
    unsigned int sq = (int)sqrt(n);
    cout << ((sq * sq == n) ? "yes\n" : "no\n");
  }
}
int main()
{
  unsigned int n;
  second_solution(n);
  return 0;
}