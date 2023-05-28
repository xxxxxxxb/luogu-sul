#include <cstdio>
#include <algorithm>
int nums[5000005];
int main(){
    int n,k;
    scanf("%d%d" , &n,&k);
    for(int i = 0;i < n;i++){
        int a;
        scanf("%d" , &a);
        nums[i] = a;
    }
    printf("%d" , nums[k]);
}