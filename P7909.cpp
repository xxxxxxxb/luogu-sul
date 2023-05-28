#include <cstdio>
using namespace std;

int main()
{
    long long n, r, l;
    scanf("%lld%lld%lld", &n, &l, &r);
    if (r - l >= n - 1)
    {
    pr:
        printf("%lld", n - 1);
        goto re;
    }
    else
    {
        if (r % n < l % n)
        {
            goto pr;
        }
        else
        {
            printf("%lld", r % n);
        }
    }
re:
    return 0;
}