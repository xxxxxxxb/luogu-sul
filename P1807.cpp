#include <bits/stdc++.h>
using namespace std;

int n,m,u,v,w,cnt = 0;
struct Egde 
{
    int v;
    int w;
    int nxt;
} e[(int)5e4+5];
int f[1505];
void ins(int u,int v,int w)
{
    e[++cnt] = {v,w,f[u]};
    f[u] = cnt;
}
long long vis[1505];
queue<int> q;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(f,0,sizeof f);
    memset(vis,-1,sizeof vis);
    cin >> n >> m;
    for(int i = 1;i <= m;i++)
    {
        cin >> u >> v >> w;
        ins(u,v,w);
    }
    q.push(1);
    vis[1] = 0;
    while(!q.empty())
    {
        int u = q.front();
        long long int w = vis[u];
        q.pop();
        for(int i = f[u];i;i=e[i].nxt)
        {
            if(w + e[i].w > vis[e[i].v])
            {
                vis[e[i].v] = w + e[i].w;
                q.push(e[i].v);
            }
        }
    }
    cout << vis[n];
    return 0;
}