#include <cstdio>
using namespace std;

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("%02d", ++cnt);
        }
        printf("\n");
    }
    return 0;
}