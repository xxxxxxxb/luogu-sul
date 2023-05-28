#include <string>
#include <iostream>
#include <vector>
struct bign
{
    std::string n;
    bign operator+(bign b1)
    {
        std::string a = this->n;
        std::string b = b1.n;
        std::string c = "";
        int j = 0;
        for (int i = 0; i < ((a.size() > b.size()) ? a.size() : b.size()); i++)
        {
            int noe;
            if (i < a.size() && i < b.size())
                noe = (int)(a[a.size() - 1 - i] - '0') + (int)(b[b.size() - 1 - i] - '0') + j;
            else if (i > a.size())
                noe = (int)(b[b.size() - i - 1] - '0') + j;
            else
                noe = (int)(a[a.size() - i - 1] - '0') + j;
            j = 0x0;
            while (noe >= 10)
            {
                noe -= 10;
                j++;
            }
            c = (char)(noe + '0') + c;
        }
        if (j)
        {
            c = (char)(j + '0') + c;
        }
        bign c114;
        c114.n = c;
        return c114;
    }
};
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    std::vector<bign> ans;
    bign t;
    t.n = "1";
    ans.push_back(t);
    ans.push_back(t);
    for (int i = 2; i <= n; i++)
    {
        ans.push_back(ans[i - 1] + ans[i - 2]);
    }
    std::cout << ans[n].n;
}