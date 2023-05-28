#include <bits/stdc++.h>
using namespace std;

int n,f[1005]; 
int s(int x)
{
    if(f[x] != -1)
    {
        return f[x];
    }
    int ans = 1;
    for(int i = 1;i <= x / 2;i++)
    {   
        ans += s(i);
    }
    f[x] = ans;
    return ans;
}

int main()
{
    memset(f,-1,sizeof(f));
    f[1] = 1;
    scanf("%d" , &n);
    printf("%d" , s(n));
    return 0;
}