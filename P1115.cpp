#include <cstdio>
#include <cmath>
#include <algorithm>
int main()
{
    int n;
    int *a = new int[n];
    scanf("%d" , &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    int *ans = new int[n + 1];
    ans[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ans[i] = std::max(a[i - 1], ans[i - 1]);
    }
    int maxn = -9999999;
    for (int i = 1; i < n; i++)
    {
        if (ans[i] > maxn)
        {
            maxn = ans[i];
        }
    }
    printf("%d", maxn);
}
