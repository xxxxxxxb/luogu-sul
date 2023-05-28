#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
#define int long long
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n, C;
    cin >> n >> C;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    sort(a, a + n);
    for (int A = 0; A <= n - 1; A++)
        if (*lower_bound(a, a + n, a[A] - C) == a[A] - C)
            cnt += upper_bound(a, a + n, a[A] - C) - lower_bound(a, a + n, a[A] - C);
    cout << cnt;
    delete[] a;
    return 0;
}