#include <iostream>
#include <set>
using namespace std;


int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int i = 0;i < T;i++)
    {
        int nums[5 * 1000 + 10];
        int n;
        cin >> n;
        for(int i = 0;i < n;i++)
        {
            int a;
            cin >> a;
            nums[i] = a;
        }
        cout << '\n';
    }
    return 0;
}