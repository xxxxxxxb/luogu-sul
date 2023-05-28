#include <bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("sto","w",stdout);
    int i;
    cin >> i;
    char op;
    string sdf;
    getline(cin,sdf);
    while(i--)
    {
        string a;
        getline(cin,a);
        //cout << a;
        a.pop_back();
        if(a[0] == 'a' || a[0] == 'b' || a[0] == 'c')
            op = a[0];
        int k = 1,a1=0,b=0,i;
        for(i = a.size() - 1;i >= 0;i--)
        {
            if(i == a.size() - 1 && a[i] == ' ')continue;
            if(a[i] != ' ')
            {
                a1+=(a[i]-'0')*k;
                k *= 10;
            }
            else
            {
                break;
            }
        }
        k = 1;
        for(i--;i >= 0;i--)
        {
            if(a[i] != ' ')
            {
                b+=(a[i]-'0')*k;
                k *= 10;
            }
            else
            {
                break;
            }
        }
        if(op == 'a')op = '+';
        if(op == 'b')op = '-';
        if(op == 'c')op = '*';
        int q = a1+b,q2=a1-b,len1 = 0,len2 = 0,len3 = 0;
        long long q3 = a1*b;
        while(q)
        {
            len1++;
            q/=10;
        }
        while(q2)
        {
            len2++;
            q2/=10;
        }
        while(q3)
        {
            len3++;
            q3/=10;
        }
        if(a[0] == 'a' || a[0] == 'b' || a[0] == 'c')
        {
            if(op == 'a')
                printf("%d%c%d=%d\n%lld\n",b,op,a1,a1+b,a.size()-2+1+len1);
            else if(op == 'b')
                printf("%d%c%d=%d\n%lld\n",b,op,a1,a1-b,a.size()-2+1+len2);
            else
                printf("%d%c%d=%lld\n%lld\n",b,op,a1,a1*b,a.size()-2+1+len3);
        }
        else
        {
            if(op == 'a')
                printf("%d%c%d=%d\n%lld\n",b,op,a1,a1+b,a.size()+1+len1);
            else if(op == 'b')
                printf("%d%c%d=%d\n%lld\n",b,op,a1,a1-b,a.size()+1+len2);
            else
                printf("%d%c%d=%lld\n%lld\n",b,op,a1,a1*b,a.size()+1+len3);
        }
    }
    return 0;
}