//
// Created by smy on 2022/12/9.
//
#include <cstdio>

int main(){
    int a[10];
    for(int i = 0;i < 10;i++){
        scanf("%d" , &a[i]);
    }
    int h;
    scanf("%d" , &h);
    int cnt = 0;
    for(auto item : a){
        if(item <= h + 30)
            cnt++;
    }
    printf("%d" , cnt);
    return 0;
}