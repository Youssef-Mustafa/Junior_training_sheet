#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

  string x;
  cin >> x;
  int size = x.size();
  sort(x.begin(), x.end());
  int ans = 0;
  int counter = 0;

  for (int i = 0; i <= size; i++)
  {
    if (x[i] == x[i + 1])
    {
      counter++;
    }
  }
  ans = size - counter;
  if (ans % 2 == 0)
    cout << "CHAT WITH HER!" << endl;
  else
    cout << "IGNORE HIM!" << endl;

  return 0;
}
