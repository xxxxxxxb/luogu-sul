#include <iostream>
#include <cstring>
using namespace std;
int b[10];
void gotob(int sth)
{
    b[sth % 10] = 1;
    b[sth / 10 % 10] = 1;
    b[sth / 100 % 10] = 1;
}
int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    long long A, B, C, x, y, z, cnt = 0;
    cin >> A >> B >> C;
    if (A == 0 || B == 0 || C == 0)
        goto end;
    for (x = 123; x <= 987; x++)
    {
        if (x * B % A != 0 || x * C % A != 0)
            continue;
        y = x * B / A, z = x * C / A;
        if (y > 999 || z > 999)
            continue;
        memset(b, 0, sizeof b);
        gotob(x);
        gotob(y);
        gotob(z);
        int d = 1;
        for (int i = 1; i <= 9; i++)
        {
            if (b[i] == 0)
                d = 0;
        }
        if (d == 1)
        {
            cnt++;
            cout << x << ' ' << y << ' ' << z << '\n';
        }
    }
    if (cnt == 0)
    end:
        cout << "No!!!";
    return 0;
}