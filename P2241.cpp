#include <iostream>
using namespace std;

int main()
{
#define int long long
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    long long sq = 0, re = 0;
    cin >> n >> m;
    for (int x = 0; x <= n; x++)
    {
        for (int y = 0; y <= m; y++)
        {
            int now = min(n - x, m - y);
            sq += now;
            re += (n - x) * (m - y) - now;
        }
    }
    cout << sq << ' ' << re;
    return 0;
}