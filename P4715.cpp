#include <bits/stdc++.h>
using namespace std;

struct p
{
    int id;
    int z;
    bool operator>(const p &b) const
    {
        return z > b.z;
    }
};
p tree[1024];

int main()
{
    int n;
    cin >> n;
    for (int i = pow(2, n), in = 1; i < pow(2, n + 1); i++, in++)
    {
        cin >> tree[i].z;
        tree[i].id = in;
    }
    for (int i = pow(2, n) - 1; i > 0; i--)
    {
        tree[i] = (tree[i * 2] > tree[i * 2 + 1]) ? tree[i * 2] : tree[i * 2 + 1];
    }
    cout << ((tree[2].z > tree[3].z) ? tree[3].id : tree[2].id);
    return 0;
}