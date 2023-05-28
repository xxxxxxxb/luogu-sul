#include <bits/stdc++.h>
using namespace std;

long long int n,m,q,t,opti,x,c,num = 0;
struct node 
{
    long long c;
    long long t;
}hang[(int)10e5+5],lie[(int)10e5+5];

int main()
{
    cin >> t;
    while(t--)
    {
        memset(hang,0,sizeof(hang));
        memset(lie,0,sizeof(lie));
        cin >> n >> m >> q;
        while(q--)
        {
            cin >> opti >> x >> c;
            x--;
            if(opti == 0)
            {
                hang[x].c = c;
                hang[x].t = ++num;
            }
            else 
            {
                lie[x].c = c;
                lie[x].t = ++num;
            }
        }
        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j < m;j++)
            {
                if(hang[i].t > lie[j].t)
                    cout << hang[i].c << ' ';
                else        
                    cout << lie[j].c << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}