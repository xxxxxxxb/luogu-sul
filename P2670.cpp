#include <iostream>
using namespace std;

int dx[] = {-1, -1, -1,
            0, 0, 0,
            1, 1, 1};

int dy[] = {-1, 0, 1,
            -1, 0, 1,
            -1, 0, 1};

char nums[1000][1005];

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> nums[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int cnt = 0;
            if (nums[i][j] == '*')
            {
                cout << '*';
                continue;
            }
            for (int k = 0; k <= 8; ++k)
            {
                if (nums[i + dx[k]][j + dy[k]] == '*')
                    cnt++;
            }
            cout << cnt;
        }
        cout << '\n';
    }
    return 0;
}