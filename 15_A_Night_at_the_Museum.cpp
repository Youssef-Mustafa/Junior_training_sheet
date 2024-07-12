#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;
  s.insert(s.begin(), 'a');
  int ans = 0;
  for (int i = 0; i < s.length() - 1; i++)
  {
    int val = 0;
    int n = s[i] - s[i + 1];
    if (s[i] > s[i + 1] && (n >= 13 || n <= -13))
    {
      val = 26 - n;
    }
    else if (s[i] < s[i + 1] && (n >= 13 || n <= -13))
    {
      val = 26 + n;
    }
    else
    {
      val = n;
    }

    ans += abs(val);
  }
  cout << ans << endl;
  return 0;
}