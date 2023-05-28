#include <bits/stdc++.h>
using namespace std;

int i,k[205],vis[205],a,b,n;
long long ans;
queue<int> q;
int main()
{
    memset(vis,-1,sizeof vis);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> a >> b;
    for(int i = 1;i <= n;i++)
        cin >> k[i];
    q.push(a);
    vis[a] = 0;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        int up = now + k[now],down = now - k[now];
        if(down >= 1 && down <=n && (vis[now] + 1 < vis[down] || vis[down] == -1))q.push(down),vis[down] = vis[now] + 1;
        if(up >= 1 && up <=n && (vis[now] + 1 < vis[up] || vis[up] == -1))q.push(up),vis[up] = vis[now] + 1;
    }
    cout << vis[b];
    return 0;
}