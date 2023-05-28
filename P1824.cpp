#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
int n, c, *a;
auto P = [](int d) -> bool
{
    long long k = 0, l = -10e9;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - l >= d)
        {
            l = a[i];
            k++;
        }
    }
    return k >= c; // 注意这里是c,因为牛棚和牛不相等
};
#undef int
int main()
{
#define int long long
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> c;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = -1, r = 10e9, mid;
    while (l + 1 != r)
    {
        mid = (l + r) >> 1;
        // cout << mid << '\n';
        if (P(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l;
    return 0;
}