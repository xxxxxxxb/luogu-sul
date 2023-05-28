#include <iostream>
using namespace std;

int a[5000005];
int ans, k;

void fund(int a[], int l, int r)
{
    if (l == r)
    {
        ans = a[l];
        return;
    }
    int f = a[(l + r) / 2], tmp, i = l, j = r;
    do
    {
        while (a[i] < f)
            i++;
        while (a[j] > f)
            j--;
        if (i <= j)
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    if (i <= k)
        fund(a, i, r);
    else if(j >= k)
        fund(a, l, j);
    else
        fund(a,j+1,i-1);
}

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    fund(a, 0, n - 1);
    cout << ans;
    return 0;
}