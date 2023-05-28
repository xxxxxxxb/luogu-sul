#include <iostream>
using namespace std;


int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    long long cnt = 0;
    int day = 1;
    int i = 1;
    int iday = 0;
    while(day <= k)
    {
        day++;
        cnt += i;
        if(++iday == i)
        {
            iday = 0;
            i++;
        }
    }
    cout << cnt;
    return 0;
}