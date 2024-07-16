#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  int j = 0;
  for (int i = 0; i < t.length(); i++)
  {
    char a = s[i];
    char b = t[j];
    if (s[j] == t[i])
    {
      j++;
    }
  }

  cout << j + 1 << endl;

  return 0;
}