#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int L, load = 0, ans = 0;
    cin >> L;
    for (int i = 2;; i++)
    {
        bool isp = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isp = 0;
                break;
            }
        }
        if (!isp)
            continue;
        if (load + i > L)
            break;
        cout << i << '\n';
        ans++;
        load += i;
    }
    cout << ans;
    return 0;
}