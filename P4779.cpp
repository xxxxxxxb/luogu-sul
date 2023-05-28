#include <bits/stdc++.h>
using namespace std;
const int N = 114514, INF = 0x3f3f3f3f;
int f[2*N], n, m, cnt = 0, u, v, w, s, t;
int vis[N];
int dist[N];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> ddd;
struct node
{
    int v;
    int w;
    int nxt;
} e[2*N];
double dis(int x1, int y1, int x2, int y2)
{
    return sqrt(1.0 * (x1 - x2) * (x1 - x2) + 1.0 * (y1 - y2) * (y1 - y2));
}
void ins(int u, int v, int w)
{
    e[++cnt] = {v, w, f[u]};
    f[u] = cnt;
}
void ds(int s)
{
    memset(vis, 0, sizeof vis);
    memset(dist, 0x3f, sizeof dist);
    dist[s] = 0;
    ddd.push(make_pair(dist[s], s));
    while (!ddd.empty())
    {
        int u = ddd.top().second;
        ddd.pop();
        if (vis[u] == 0)
            vis[u] = 1;
        else
            continue;
        for (int k = f[u]; k; k = e[k].nxt)
        {
            int v = e[k].v;
            int w = e[k].w;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                ddd.push(make_pair(dist[v], v));
            }
        }
    }
}
int main()
{
    memset(f, 0, sizeof f);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        ins(u, v, w);
    }
    ds(s);
    for (int t = 1; t <= n; t++)
        printf("%d ", dist[t]);
    return 0;
}