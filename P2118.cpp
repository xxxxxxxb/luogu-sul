//RE0
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int a, b, l;
    cin >> a >> b >> l;
    cout << a / gcd(a, b) << ' ' << b / gcd(a, b);
    return 0;
}