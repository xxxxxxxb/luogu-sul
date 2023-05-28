#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long a,b,c;
    cin >> a >> b;
    c = pow(a,b);
    if(c > 1000000000)
    {
        cout << -1;
    }
    else{
        cout << c;
    }
    return 0;
}