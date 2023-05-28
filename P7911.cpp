#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, Q;
    scanf("%d%d", &n, &Q);
    vector<int> a;
    a.push_back(0);
    for (int i = 0; i < n; i++)
    {
        int asd;
        scanf("%d", &asd);
        a.push_back(asd);
    }
    for (int i = 0; i < Q; i++)
    {
        int op = 0;
        cin >> op;
        if (op == 1)
        {
            int x, v;
            cin >> x >> v;
            a[x] = v;
        }
        if (op == 2)
        {
            int x;
            cin >> x;
            vector<int> as = a;
            for (int i = 1; i <= n; i++)
            {
                for (int j = i; j >= 2; j--)
                {
                    if (as[j] < as[j - 1])
                    {
                        int t = as[j - 1];
                        as[j - 1] = as[j];
                        as[j] = t;
                        if (j == x)
                        {
                            x = j - 1;
                        }
                        else if (j - 1 == x)
                        {
                            x = j;
                        }
                    }
                }
            }
            cout << x << '\n';
        }
    }
    return 0;
}