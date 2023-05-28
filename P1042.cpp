#include <iostream>
#include <cmath>
using namespace std;
int a[25 * 2501 + 10];
int f[2] = {11, 21};

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    while (1)
    {
        char ch;
        cin >> ch;
        if (ch == 'E')
        {
            break;
        }
        if (ch == 'W')
        {
            a[n] = 1;
            n++;
        }
        else
        {
            a[n] = 0;
            n++;
        }
    }
    for (auto i : f)
    {
        int cntw = 0, cntl = 0;
        for (int j = 0; j < n; j++)
        {
            cntw += a[j];
            cntl += 1 - a[j];
            if ((max(cntw, cntl) >= i) && abs(cntw - cntl) >= 2)
            {
                cout << cntw << ':' << cntl << '\n';
                cntw = cntl = 0;
            }
        }
        cout << cntw << ':' << cntl << '\n' << '\n';
    }
    return 0;
}