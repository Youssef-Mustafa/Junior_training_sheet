#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main()
{
  int y, m;
  cin >> y >> m;
  int maxValue = max(y, m);
  int restOfDiceValues = 6 - maxValue + 1;
  int totalOutcomes = 6;
  int divisor = gcd(restOfDiceValues, totalOutcomes);
  cout << (restOfDiceValues / divisor) << "/" << (totalOutcomes / divisor) << endl;
  return 0;
}