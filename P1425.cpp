#include <cstdio>

int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int ans1 = a * 60 + b;
    int ans2 = c * 60 + d;
    int ans = ans2 - ans1;
    int ansh,ansm;
    while(ans >= 60)
    {
        ans -= 60;
        ansh++;
    }
    ansm = ans;
    printf("%d %d",ansh,ansm);
}