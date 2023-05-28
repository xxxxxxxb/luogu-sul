#include <iostream>
using namespace std;

int a[205], b[205];
int va[5][5] = {{0, 0, 1, 1, 0}, {1, 0, 0, 1, 0}, {0, 1, 0, 0, 1}, {0, 0, 1, 0, 1}, {1, 1, 0, 0, 0}};
int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int n, na, nb;
    cin >> n >> na >> nb;
    for (int i = 0; i < na; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < nb; i++)
    {
        cin >> b[i];
    }
    int ca = 0, cb = 0;
    for (int i = 0; i < n; i++)
    {
        ca += va[a[i % na]][b[i % nb]];
        cb += va[b[i % nb]][a[i % na]];
    }
    cout << ca << ' ' << cb;
    return 0;
}