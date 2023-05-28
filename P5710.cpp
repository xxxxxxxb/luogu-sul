#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int x;
    cin >> x;
    bool b1 = (x % 2 == 0), b2 = (x > 4 && x <= 12);
    cout << (b1 && b2) << ' '
         << (b1 || b2) << ' '
         << (b1 ^ b2) << ' '
         << !(b1 || b2);
    return 0;
}