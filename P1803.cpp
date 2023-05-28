#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;
struct race
{
    int l;
    int r;
} s[1000005];
bool cmp(race a, race b)
{
    return (a.r) < (b.r);
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &s[i].l, &s[i].r);
    }
    sort(s, s + n, cmp);
    race lst = {0, 0};
    for (int i = 0; i < n; i++)
    {
        if (s[i].l >= lst.r || s[i].r <= lst.l)
        {
            cnt++;
            lst = s[i];
        }
    }
    printf("%d", cnt);
    return 0;
}