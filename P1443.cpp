#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
int n, m, x, y, ans[405][405];
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
struct node
{
    int mx, my;
};
int main()
{
    memset(ans, -1, sizeof(ans));
    scanf("%d%d%d%d", &n, &m, &x, &y);
    queue<node> Q;
    node tmp = {x, y};
    ans[x][y] = 0;
    Q.push(tmp);
    while (!Q.empty())
    {
        node old = Q.front();
        Q.pop();
        for (int i = 0; i < 8; i++)
        {
            int nx = old.mx + dx[i];
            int ny = old.my + dy[i];
            int nans = ans[old.mx][old.my] + 1;
            if (nx < 1 || ny < 1 || nx > n || ny > m)
                continue;
            if (ans[nx][ny] == -1)
            {
                ans[nx][ny] = nans;
                Q.push({nx, ny});
            }
            else if (ans[nx][ny] > nans)
            {
                ans[nx][ny] = nans;
                Q.push({nx, ny});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%-5d", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}