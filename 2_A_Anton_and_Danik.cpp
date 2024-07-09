#include <iostream>
using namespace std;
int n, anton, danik;
int main()
{
  anton = 0, danik = 0;
  cin >> n;

  char x;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (x == 'A')
    {
      anton++;
    }
    else
    {
      danik++;
    }
  }
  if (danik > anton)
  {
    cout << "Danik" << endl;
  }
  else if (anton > danik)
  {
    cout << "Anton" << endl;
  }
  else
  {
    cout << "Friendship" << endl;
  }

  return 0;
}