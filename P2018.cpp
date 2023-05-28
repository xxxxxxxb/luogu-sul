#include <set>
#include <cstdio>

int main(){
    int n;
    scanf("%d" , &n);
    std::set<int> ans;
    for(int i = 0;i < n;i++){
        int a;
        scanf("%d" , &a);
        ans.insert(a);
    }
    printf("%d\n" , ans.size());
    while(ans.size()){
        printf("%d " , *ans.begin());
        ans.erase(ans.begin());
    }
    return 0;
}