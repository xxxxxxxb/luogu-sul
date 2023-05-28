#include <bits/stdc++.h>
using namespace std;
int t, n;
long long a[(int)1e5 + 5], k, sum = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        sum = 0;
        memset(a, 0, sizeof a);
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum ^= a[i];
        }
        if ((n & 1) == 1)
        {
            for(int i = 0;i < n;i++)cout << (a[i] ^ sum) << ' ';
            cout <<'\n';
        }
        else
        {
            if(k&1)
            {
                for(int i = 0;i < n;i++)cout << (a[i] ^ sum) << ' ';
                cout <<'\n';
            }
            else 
            {
                for(int i = 0;i < n;i++)cout << a[i] << ' ';
                cout << '\n';
            }
        }
    }
    return 0;
}