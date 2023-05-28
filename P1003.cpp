#include <iostream>
#include <cmath>
using namespace std;

struct P1003
{
    int i;
    int a;
    int b;
    int g;
    int k;
};
P1003 a[10005];

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].a >> a[i].b >> a[i].g >> a[i].k;
    }
    int x,y;
    cin >> x >> y;
    int ans = -1;
    for(int i = 0;i < n;i++)
    {
        if(x >= a[i].a && x <= a[i].a + a[i].g && y >= a[i].b && y <= a[i].b + a[i].k)
            ans = i + 1;
    }
    cout << ans;
    return 0;
}