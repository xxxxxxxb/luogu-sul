#include <bits/stdc++.h>
using namespace std;

int m, n;
int am[1000005], an[1000005];

int main()
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        cin >> am[i];
    for (int i = 0; i < n; i++)
        cin >> an[i];
    sort(am,am+m);
    long long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = -1, r = m, mid;
        while (l + 1 != r)
        {
            mid = (l + r) >> 1;
            if(am[mid] <= an[i])
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        if(an[i] <= am[0])
        {
            ans += am[0] - an[i];
        }
        else
        {
            ans += min(abs(am[l] - an[i]),abs(am[r] - an[i]));
        }
    }
    cout << ans;
    return 0;
}