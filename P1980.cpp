#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    long long cnt = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        int t = i;
        while (t)
        {
            if (t % 10 == x)
            {
                cnt++;
            }
            t /= 10;
        }
    }
    cout << cnt;
    return 0;
}