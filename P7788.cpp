#include <iostream>
#include <vector>
#include <stdlib.h>
#define ull unsigned long long
using namespace std;

long long f(unsigned long long n)
{
    vector<unsigned long long> sth;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            n /= i;
            sth.push_back(i);
        }
    }
    ull sum = 0;
    for(auto i : sth)
    {
        sum += i;
    }
    long long int s = abs((long long)(n-sum));
    return s;
}

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int a, b, sum;
    cin >> a >> b;
    cout << f(a) + f(b);
    return 0;
}