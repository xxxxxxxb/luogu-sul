#include <bits/stdc++.h>
using namespace std;

int n,s;
int a,b;
int cnt = 0;
struct apple
{
    int x;
    int y;
} as[5005];
bool cmp(apple a,apple b)
{
    return a.y < b.y;
}

int main()
{
    cin >> n >> s;
    cin >> a >> b;
    for(int i = 0;i < n;i++)
    {
        cin >> as[i].x >> as[i].y;
    }
    sort(as,as+n,cmp);
    for(int i = 0;i < n;i++)
    {
        if(s == 0)
        {
            break;
        }
        if(as[i].x <=  a + b && as[i].y <= s)
        {
            cnt++;
            s -= as[i].y;
        }
    }
    cout << cnt;
    return 0;
}