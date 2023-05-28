#include <bits/stdc++.h>
using namespace std;

struct edge
{
    int v, w, nxt;
} e[(int)6e4 + 5];
int f[(int)2e4 + 5], sum[(int)2e4 + 5], dist[(int)2e4 + 5], inq[(int)2e4 + 5], u, v, w, cnt, m, n, t;
queue<int> q, qq;
void ins(int u, int v, int w)
{
    e[++cnt] = {v, w, f[u]};
    f[u] = cnt;
}
bool SPFA(int s, int t)
{
    memset(dist, 0x3f, sizeof dist);
    memset(inq, 0, sizeof inq);
    memset(sum, 0, sizeof sum);
    q = qq;
    dist[s] = 0;
    q.push(s);
    inq[s] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        inq[u] = 0;
        for (int i = f[u]; i; i = e[i].nxt)
        {
            int v = e[i].v, w = e[i].w;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                if (inq[v] == 0)
                {
                    q.push(v);
                    inq[v] = 1;
                    sum[v]++;
                    if (sum[v] > n)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        memset(e, 0, sizeof e);
        memset(f, 0, sizeof f);
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v >> w;
            if (w >= 0)
            {
                ins(u, v, w);
                ins(v, u, w);
            }
            else
            {
                ins(u, v, w);
            }
        }
        if (SPFA(1, n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}