#include <iostream>
using namespace std;

int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
int a[25][25];
long long ans[25][25];

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    a[x][y] = 1;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if ((x + dx[i]) >= 0 && (x + dx[i]) <= n && (y + dy[i]) >= 0 && (y + dy[i]) <= m)
                a[x + dx[i]][y + dy[i]] = 1;
    ans[0][0] = 1;
    for (int i = 0; i <= m; i++)
    {
        if (a[0][i])
            break;
        ans[0][i] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        if (a[i][0])
            break;
        ans[i][0] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!a[i][j])
            {
                ans[i][j] = ans[i][j - 1] + ans[i - 1][j];
            }
        }
    }
    cout << ans[n][m];
    return 0;
}