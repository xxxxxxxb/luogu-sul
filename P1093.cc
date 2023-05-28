#include <iostream>
#include <algorithm>
using namespace std;

struct P1093
{
    int id;
    int cn;
    int mt;
    int en;
    int to;
};
bool cmp(P1093 a, P1093 b)
{
    if (a.to != b.to)
        return a.to > b.to;
    else if (a.cn != b.cn)
        return a.cn > b.cn;
    else
        return a.id < b.id;
}
P1093 ans[305];

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans[i].id = i;
        cin >> ans[i].cn >> ans[i].mt >> ans[i].en;
        ans[i].to = ans[i].cn + ans[i].mt + ans[i].en;
    }
    sort(ans + 1, ans + n + 1, cmp);
    for (int i = 1; i <= 5; i++)
    {
        cout << ans[i].id << ' ' << ans[i].to << '\n';
    }
    return 0;
}