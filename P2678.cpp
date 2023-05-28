#include <iostream>
using namespace std;
int L, N, M;
int a[50005];
int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> L >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    a[N] = L;
    auto P = [](int d) -> bool
    {
        int c = 0, last = 0;
        for (int i = 0; i <= N; i++)
        {
            if (a[i] - last < d)
            {
                c++;
            }
            else
            {
                last = a[i];
            }
        }
        return c <= M;
    };
    int l = -1, r = L + 1, mid;
    while (l + 1 != r)
    {
        mid = (l + r) / 2;
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