#include <cstdio>

int ans[40][40];

int main()
{
    int n;
    scanf("%d", &n);
    int x, y;
    for (int i = 1; i <= n * n; ++i)
    {
        if (i == 1)
        {
            ans[0][n / 2] = i;
            x = 0;
            y = n / 2;
        }
        else if (x == 0 && y != n - 1)
        {
            ans[n - 1][y + 1] = i;
            x = n - 1;
            y = y + 1;
        }
        else if (y == n - 1 && x != 0)
        {
            ans[x - 1][0] = i;
            x = x - 1;
            y = 0;
        }
        else if (x == 0 && y == n - 1)
        {
            ans[x + 1][y] = i;
            x = x + 1;
        }
        else if (x != 0 && y != n - 1 && !ans[x - 1][y + 1])
        {
            ans[x - 1][y + 1] = i;
            x = x - 1;
            y = y + 1;
        }
        else
        {
            ans[x + 1][y] = i;
            x = x + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}