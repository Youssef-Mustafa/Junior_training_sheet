#include <iostream>
using namespace std;

const int N = 2010;
int height, nOffFriends, x, answer;
int main()
{
  cin >> nOffFriends >> height;
  answer = 0;
  for (int i = 1; i <= nOffFriends; i++)
  {
    cin >> x;
    if (x > height)
      answer++;
    answer++;
  }
  cout << answer;

  return 0;
}