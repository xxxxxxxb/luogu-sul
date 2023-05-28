#include <cstdio>
#include <cstring>
int cnts[1005];
int main()
{
    memset(cnts, 0, sizeof(cnts));
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        int a;
        scanf("%d", &a);
        cnts[a]++;
    }
    for (int j = 1; j <= n; j++)
    {
        for (int k = 0; k < cnts[j]; k++)
        {
            printf("%d ", j);
        }
    }
}