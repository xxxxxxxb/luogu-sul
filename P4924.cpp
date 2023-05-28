#include <iostream>
#include <cstring>
using namespace std;

int a[505][505];
int b[505][505];


int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int t = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = ++t;
    for (int i = 0; i < m; i++)
    {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        if (z == 0)
        {
            for (int i = x - r; i <= x + r; i++)
            {
                for (int j = y - r; j <= y + r; j++)
                {
                    b[x - y + j][x + y - i] = a[i][j];
                }
            }
        }
        else
        {
            for (int i = x - r; i <= x + r; i++)
            {
                for (int j = y - r; j <= y + r; j++)
                {
                    b[x + y - j][y - x + i] = a[i][j];
                }
            }
        }
        for (int i = x - r; i <= x + r; i++)
        {
            for (int j = y - r; j <= y + r; j++)
            {
                a[i][j] = b[i][j];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}