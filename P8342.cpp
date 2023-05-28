#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
struct p
{
    string na;
    int f;
};
bool cmp(p a, p b)
{
    if (a.f != b.f)
        return a.f > b.f;
    else
        return a.na < b.na;
}
int main()
{
    int n;
    cin >> n;
    vector<p> a(n), ap(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].na;
        ap[i].na = a[i].na;
        a[i].f = 0;
        for (int j = 0; j < 5; j++)
        {
            int sd;
            cin >> sd;
            a[i].f += sd;
            ap[i].f += sd + 500;
        }
    }
    for (int i = 0; i < n; i++)
    {
        vector<p> an = a;
        an[i].f += 500;
        sort(an.begin(), an.end(), cmp);
        for (int j = 0; j < n; j++)
        {
            if (an[j].na == a[i].na)
            {
                cout << j + 1 << ' ';
            }
        }
        vector<p> an1 = ap;
        an1[i].f -= 500;
        sort(an1.begin(), an1.end(), cmp);
        for (int j = 0; j < n; j++)
        {
            if (an1[j].na == a[i].na)
            {
                cout << j + 1 << endl;
            }
        }
    }
}
