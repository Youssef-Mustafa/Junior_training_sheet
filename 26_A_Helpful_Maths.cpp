#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> split(string str)
{
  vector<int> result;

  for (char ch : str)
  {
    if (ch != '+')
    {
      result.push_back(ch);
    }
  }
  sort(result.begin(), result.end());
  return result;
}

int main()
{
  string s;
  cin >> s;
  vector<int> n = split(s);

  for (int i = 0; i < n.size(); i++)
  {
    char z = n[i];
    if (i != n.size() - 1)
    {
      cout << z << '+';
    }
    else
    {
      cout << z;
    }
  }

  return 0;
}