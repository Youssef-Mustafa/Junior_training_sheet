#include <iostream>
using namespace std;

int main()
{
  int d = 0;
  int s = 0;
  int n;
  int arr[1000];
  int count = 1;
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int begin = 0, end = n - 1 - begin;

  for (int i = 0; i < n; i++)
  {
    int max = 0;
    if (arr[begin] > arr[end])
    {
      max = arr[begin];
      begin++;
    }
    else
    {
      max = arr[end];
      end--;
    }
    if (count % 2 == 0)
      d += max;
    else
      s += max;
    count++;
  }

  cout << s << " " << d << endl;

  return 0;
}
