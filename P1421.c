#include <stdio.h>

int main(){
    int a ,b;
    scanf("%d %d",&a,&b);
    double ans = a + 0.1 * b;
    printf("%d" , (int)(ans/1.9));
    return 0;
}
