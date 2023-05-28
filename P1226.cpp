#include <bits/stdc++.h>
using namespace std;

long long a, b, p,b1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> p;
    long long ans = 1, cnt = a;
    b1=b;
    while (b)
    {
        if (b & 1)
        {
            ans *= cnt % p;
            ans %= p;
        }
        cnt *= cnt;
        cnt%=p;
        b >>= 1;
    }
    printf("%lld^%lld mod %lld=%lld",a,b1,p,ans);
    return 0;
}