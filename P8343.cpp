#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a,a);
}
int main()
{
    int x, y;
    cin >> x >> y;
    long long c = 1ll * x * y;
    long long cnt = 0;
    for (long long i = x; i * i <= c; i++)
    {
        if (c % i == 0 && gcd(i,c/i) == x)
        {
            if(i != c/i)
            {
                cnt += 2;
            }
            else
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}