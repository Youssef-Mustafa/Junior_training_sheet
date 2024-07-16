#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
  int arr[4];
  for (int i = 0; i < 4; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + 4);
  int counter = 0;
  for (int i = 0; i < 4; i++)
  {
    if (arr[i] == arr[i + 1])
    {
      counter++;
    }
  }

  cout << counter << endl;

  return 0;
}