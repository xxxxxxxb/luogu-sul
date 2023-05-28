#include <bits/stdc++.h>
using namespace std;

int n, t, tnow = 0;
double ans = 0;
struct d
{
    int m;
    int v;
    double rv;
} s[105];
bool cmp(d a, d b)
{
    return a.rv > b.rv;
}
int main()
{
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].m >> s[i].v;
        s[i].rv = 1.0 * s[i].v / s[i].m;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if (tnow + s[i].m <= t)
        {
            tnow += s[i].m;
            ans += s[i].v;
            if (tnow == t)
            {
                break;
            }
            continue;
        }
        ans += 1.0 * (t - tnow) * s[i].rv;
        break;
    }
    printf("%.2lf",ans);
    return 0;
}