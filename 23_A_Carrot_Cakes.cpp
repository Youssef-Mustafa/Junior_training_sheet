#include <iostream>
using namespace std;

int main()
{
  int n, t, k, d;
  cin >> n >> t >> k >> d;
  int ovenTime = 0;
  int baked = 0;
  do
  {
    baked += k;
    ovenTime += t;

    if (baked >= n)
    {
      cout << "NO" << endl;
      break;
    }
    if (ovenTime > d)
    {
      cout << "YES" << endl;
      break;
    }
  } while (baked < n || ovenTime < d);

  return 0;
}