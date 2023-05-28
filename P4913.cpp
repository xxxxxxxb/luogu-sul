#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int l;
    int r;
}tree[1000005];

int dfs(int x)
{
    if(x == 0) return 0;
    else return max(dfs(tree[x].l) , dfs(tree[x].r)) + 1;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        cin >> tree[i].l >> tree[i].r;
    }
    cout << dfs(1);
    return 0;
}