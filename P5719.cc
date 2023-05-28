#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int suma = 0, sumb = 0, n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            suma += i;
        }
        else
        {
            sumb += i;
        }
    }
    cout << fixed << setprecision(1) << (double)suma / (n / k) << ' ' << (double)sumb / (n - n / k);
    return 0;
}