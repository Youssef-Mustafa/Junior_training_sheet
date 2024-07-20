#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> p;
  vector<int> m;
  vector<int> pE;

  int n;
  cin >> n;
  int t;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    if (t == 1)
    {
      p.push_back(i + 1);
    }
    if (t == 2)
    {
      m.push_back(i + 1);
    }
    if (t == 3)
    {
      pE.push_back(i + 1);
    }
  }

  int maxTeams = min({p.size(), m.size(), pE.size()});

  cout << maxTeams << endl;
  for (int i = 0; i < maxTeams; i++)
  {
    cout << p[i] << " " << m[i] << " " << pE[i] << endl;
  }

  return 0;
}