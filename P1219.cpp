#include <iostream>
using namespace std;
int anss[14], n, ans = 0;
int r[140], cul[14], xn[140];
void dfs(int x)
{
    if (x > n)
    {
        ans++;
        if (ans <= 3)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << anss[i] << ' ';
            }
            cout << '\n';
        }
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (r[x + i] == 0 && cul[i] == 0 && xn[x - i + 15] == 0)
        {
            anss[x] = i;
            r[x + i] = 1;
            cul[i] = 1;
            xn[x - i + 15] = 1;
            dfs(x + 1);
            r[x + i] = 0;
            cul[i] = 0;
            xn[x - i + 15] = 0;
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    dfs(1);
    cout << ans;
    return 0;
}