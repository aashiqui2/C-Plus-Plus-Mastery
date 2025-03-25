#include <iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  // int a, b;
  // cin >> a >> b;
  // cout << a + b;

  int a;
  char c;
  cin >> a >> c;
  cout << a + c;
  return 0;
}