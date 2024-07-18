#include <iostream>
using namespace std;
const int MAX = 100000;
int main()
{
  int n, b, d;
  long long arr[MAX];
  cin >> n >> b >> d;
  int ans = 0;

  int counter = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] <= b)
    {
      counter += arr[i];
      if (counter > d)
      {
        ans++;
        counter = 0;
      }
    }
  }

  cout << ans << endl;

  return 0;
}