#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long m = pow(2, 31);
    vector<long long> nums = {0, 1, 1};
    for (int i = 3; i <= n; i++)
    {
        nums.push_back((nums[i - 1] + nums[i - 2]) % m);
    }
    long long q = nums[n];
    string ans = "";
    for (int i = 2; i <= nums[n]; ++i)
    {
        if (nums[n] % i == 0)
        {
            while (nums[n] % i == 0)
            {
                nums[n] /= i;
                if (ans != "")
                {
                    ans = ans + '*' + to_string(i);
                }
                else
                {
                    ans = ans + to_string(i);
                }
            }
        }
    }
    cout << q << '=' << ans;
    return 0;
}