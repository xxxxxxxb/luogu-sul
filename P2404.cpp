// WA0
#include <iostream>
using namespace std;
int a[9] = {1}, n;
auto p = [](int t)
{
  for (int i = 1; i <= n; i++)
  {
    if (a[i])
      if (i != n)
        cout << a[i] << '+';
      else
        cout << a[i];
  }

  cout << '\n';
  return;
};
void dfs(int x, int c)
{
  for (int i = a[c - 1]; i <= x; i++)
  {
    if (i >= n)
    {
      break;
    }
    a[c] = i;
    dfs(x - i, c + 1);
    a[c] = 0;
  }
}
int main()
{
  std::ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  dfs(n, 1);
  return 0;
}