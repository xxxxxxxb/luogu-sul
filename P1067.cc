#include <iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        int a = 0;
        cin >> a;
        if (a == 0)
            continue;
        if (i == n)
        {
            if (i == 0)
            {
                cout << a;
                continue;
            }
            if (i == 1)
            {
                if(a == 1){
                    cout << 'x';
                    continue;
                }
                if(a == -1){
                    cout << "-x";
                    continue;
                }
                if (a > 0)
                {
                    cout << a << 'x';
                }
                else
                {
                    cout << a << 'x';
                }
            }
            else
            {
                if(a == 1)
                {
                    cout << "x^" << i;
                    continue;
                }
                if(a == -1)
                {
                    cout << "-x^" << i;
                    continue;
                }
                cout << a << "x^" << i;
            }
        }
        else if (!(i == 0 || i == 1))
        {
            if (a == 1)
            {
                cout << "+x^" << i;
            }
            else
            {
                if (a == -1)
                {
                    cout << "-x^" << i;
                }
                else
                {
                    if (a > 0)
                        cout << '+' << a << "x^" << i;
                    else
                        cout << a << "x^" << i;
                }
            }
        }
        else if (i == 0)
        {
            if (a > 0)
                cout << '+' << a;
            else
                cout << a;
        }
        else if (i == 1)
        {
            if(a == 1)
            {
                cout << "+x";
                continue;
            }
            if(a == -1)
            {
                cout << "-x";
                continue;
            }
            if (a > 0)
            {
                cout << '+' << a << 'x';
            }
            else
            {
                cout << a << 'x';
            }
        }
    }
    return 0;
}