#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int uCrimeCount = 0;
  int policeHired = 0;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] < 0 && policeHired == 0)
    {
      uCrimeCount++;
    }
    else if (arr[i] < 0 && policeHired > 0)
    {
      policeHired--;
    }
    else
    {
      policeHired += arr[i];
    }
  }
  cout << uCrimeCount << endl;

  return 0;
}