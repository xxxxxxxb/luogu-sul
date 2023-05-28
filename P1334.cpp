#include <bits/stdc++.h>
using namespace std;

int n;
long long sum = 0, k = 0;
priority_queue<int, vector<int>, greater<int> > pq;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int now;
        cin >> now;
        k += now;
        pq.push(now);
    }
    for (int i = 1; i < n; i++)
    {
        int c, d;
        c = pq.top();
        pq.pop();
        d = pq.top();
        pq.pop();
        sum += c + d;
        pq.push(c+d);//转化最小果子
    }
    cout << sum;
    return 0;
}
//刷牙