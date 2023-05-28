//RE0
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n, m;
    cin >> T >> n >> m;
    vector<string> tins, touts;
    for (int i = 0; i < T; i++)
    {
        string now, noei, noeo;
        cin >> now;
        noei = "freopen(\"" + now + ".in\",\"r\",stdin";
        noeo = "freopen(\"" + now + ".out\",\"w\",stdout";
        tins.push_back(noei);
        touts.push_back(noeo);
    }
    for (int i = 0; i < n; i++)
    {
        string now1, now2;
        bool zh = 1, zu = 0,le = 0;
        getline(cin, now1);
        for (int j = 0; j < m; j++)
        {
            cin >> now1 >> now2;
            if(now1 == tins[i] && now2 == touts[i])
            {
                ;
            }
            else if(now1 == "//" + tins[i] || now2 == "//" + touts[i])
            {
                zu = 1;
                zh = 0;
                break;
            }
            else
            {
                le = 1;
                zh = 0;
                zu = 0;
            }
        }
        if(zh)
        {
            cout << "PION2202 RP++.\n";
        }
        else if(zu)
        {
            cout << "Wrong file operation takes you to your ancestors along with your 3 years' efforts on OI.\n";
        }
        else if(le)
        {
            cout << "Good luck and have fun.\n";
        }
    }
    return 0;
}