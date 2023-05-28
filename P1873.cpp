#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
auto func = [](int h, int M, int *a, int n) -> bool
{
    int i = 0, tol = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            tol += a[i] - h;
        }
    }
    return tol >= M;
};
int find(int *a, int M, int N)
{
    int l = -1, r = 10e9;
    int mid;
    while (l + 1 != r)
    {
        mid = (l + r) >> 1;
        //cout << mid << '\n';
        if (func(mid, M, a, N))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}
#undef int
int main()
{
#define int long long
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    int *a = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    cout << find(a, M, N);
    return 0;
}