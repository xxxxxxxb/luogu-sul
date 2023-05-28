#include <cstdio>
int main()
{
    int k, n = 1;
    scanf("%d", &k);
    for (double sn = 0.0; sn <= k; ++n)
    {
        sn += 1 / (1.0 * n);
    }
    printf("%d", n - 1);
    return 0;
}
