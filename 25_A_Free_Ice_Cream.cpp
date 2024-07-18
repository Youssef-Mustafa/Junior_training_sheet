#include <iostream>
using namespace std;

int main()
{
  int n;
  long long x;
  cin >> n >> x;
  int distressChild = 0;
  for (int i = 0; i < n; i++)
  {
    char c;
    int q;
    cin >> c >> q;
    if (c == '+')
    {
      x += q;
    }
    else
    {
      if (x < q)
        distressChild++;
      else
        x = x - q;
    }
  }

  cout << x << " " << distressChild << endl;

  return 0;
}