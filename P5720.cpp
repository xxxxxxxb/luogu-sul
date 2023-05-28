#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int a, cnt = 1;
    cin >> a;
    while (a > 1)
    {
        cnt++;
        a /= 2;
    }
    cout << cnt;
    return 0;
}