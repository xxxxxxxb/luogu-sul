#include <iostream>
#include <string>
using namespace std;
int chs[26] = {0};

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("stdin.in", "r", stdin);
    freopen("stdout.out", "w", stdout);
    string str;
    cin >> str;
    for (auto i : str)
    {
        chs[(int)(i - 'a')]++;
    }
    int maxn = 0, minn = 101;
    for (auto i : chs)
    {
        if (i > maxn)
        {
            maxn = i;
        }
        if (i < minn && i)
        {
            minn = i;
        }
    }
    int ans = maxn - minn;
    if (ans == 0 || ans == 1)
    {
        cout << "No Answer" << '\n'
             << 0;
        return 0;
    }
    for (int i = 2; i * i <= ans; i++)
    {
        if (ans % i == 0)
        {
            cout << "No Answer" << '\n'
                 << 0;
            return 0;
        }
    }
    cout << "Lucky Word" << '\n'
         << ans;
    return 0;
}