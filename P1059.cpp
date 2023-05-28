#include <cstdio>
#include <set>

int main(){
    freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    std::set<int> ans; 
    int n;
    scanf("%d" , &n);
    for(int i = 0;i < n;i++){
        int a;
        scanf("%d" , &a);
        ans.insert(a);
    }
    printf("%llu\n", ans.size());
    while(!ans.empty()){
        printf("%d " , *ans.begin());
        ans.erase(ans.begin());
    }
    printf("fddfdfs");
    return 0;
}