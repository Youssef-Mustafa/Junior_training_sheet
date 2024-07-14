#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int arr[n][2];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> arr[i][j];
    }
  }

  int counter = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      int var1 = arr[i][0];
      int var2 = arr[j][1];
      if (i != j && (arr[i][0] == arr[j][1]))
      {
        counter++;
      }
    }
  }
  cout << counter << endl;
  return 0;
}