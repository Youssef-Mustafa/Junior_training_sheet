#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string x;
  cin >> x;
  int counte = 0;
  int l = 0, u = 0;
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] > 90)
      l++;
    else
      u++;
  }

  if (l > u || l == u)
    transform(x.begin(), x.end(), x.begin(), ::tolower);
  else
    transform(x.begin(), x.end(), x.begin(), ::toupper);

  cout << x << endl;

  return 0;
}