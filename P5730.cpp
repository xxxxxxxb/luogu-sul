#include <cstdio>
char ans[305][5];
int cah[105];
/*
XXX . ..X . XXX . XXX . X.X . XXX . XXX . XXX . XXX . XXX
X.X . ..X . ..X . ..X . X.X . X.. . X.. . ..X . X.X . X.X
X.X . ..X . XXX . XXX . XXX . XXX . XXX . ..X . XXX . XXX
X.X . ..X . X.. . ..X . ..X . ..X . X.X . ..X . X.X . ..X
XXX . ..X . XXX . XXX . ..X . XXX . XXX . ..X . XXX . XXX
*/
int main(){
    int n;
    scanf("%d" , n);
    for(int i = 0;i < n;i++){
        cah[i] = getchar();
    }
    for(int i = 0;i < n;i++){
        {
            if(cah[i] == 0 || cah[i] == 2 || cah[i] == 3 || cah[i] == 5 || cah[i] == 6 || cah[i] == 7 || cah[i] == 8 || cah[i] == 9){
                ans[0][i * 4] = 'X';
                ans[0][i * 4 + 1] = 'X';
                ans[0][i * 4 + 2] = 'X';
                ans[0][i * 4 + 3] = '.';
            }
            else if(cah[i] == 1){
                ans[0][i * 4] = '.';
                ans[0][i * 4 + 1] = '.';
                ans[0][i * 4 + 2] = 'X';
                ans[0][i * 4 + 3] = '.';
            }
            else if(cah[i] == 4){
                ans[0][i * 4] = 'X';
                ans[0][i * 4 + 1] = '.';
                ans[0][i * 4 + 2] = 'X';
                ans[0][i * 4 + 3] = '.';
            }
        }
        {
            
        }
    }
}