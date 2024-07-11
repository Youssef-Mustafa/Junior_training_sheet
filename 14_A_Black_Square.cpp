#include <iostream>
#include <string>
using namespace std;

int main()
{
  string number;
  int arr[4];
  for (int i = 0; i < 4; i++)
  {
    cin >> arr[i];
  }
  int a1 = arr[0];
  int a2 = arr[1];
  int a3 = arr[2];
  int a4 = arr[3];

  cin >> number;

  int counter = 0;
  for (int i = 0; i < number.length(); i++)
  {
    if (number[i] == '1')
      counter += a1;
    else if (number[i] == '2')
      counter += a2;
    else if (number[i] == '3')
      counter += a3;
    else if (number[i] == '4')
      counter += a4;
  }

  cout << counter << endl;

  return 0;
}