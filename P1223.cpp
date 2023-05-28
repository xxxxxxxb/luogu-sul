#include <bits/stdc++.h>
using namespace std;

int n;
struct p 
{
    int i;
    int t;
} s[1005];
bool cmp(p a,p b)
{
    if(a.t == b.t)
    {
        return a.i < b.i;
    }
    return a.t < b.t;
}
int main()
{
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> s[i].t;
        s[i].i = i + 1;
    }
    sort(s,s+n,cmp);
    double sum = 0;
    for(int i = 0;i < n;i++)
    {
        cout << s[i].i << ' ';
        sum += s[i].t * (n - i - 1);
    }
    printf("\n%.2lf",sum / n);
    return 0;
}