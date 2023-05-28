#include <bits/stdc++.h>
using namespace std;
int n,mid;
priority_queue<int, vector<int>, less<int>> da;
priority_queue<int, vector<int>, greater<int>> xiao;
int main()
{
    cin >> n;
    cin >> mid;
    cout << mid <<'\n';
    for(int i = 2;i <= n;i++)
    {
        int a;
        cin >> a;
        if(a > mid) xiao.push(a);
        else da.push(a);
        if(i % 2 == 1)
        {
            if(da.size() > xiao.size())
            {
                xiao.push(mid);
                mid = da.top();
                da.pop();
            }
            else if(da.size() < xiao.size())
            {
                da.push(mid);
                mid = xiao.top();
                xiao.pop();
            }
            cout << mid << '\n';
        }
    }
    return 0;
}