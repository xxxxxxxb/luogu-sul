#include <iostream>
#include <string>

struct bign{
    std::string n;
    bign operator +(bign a11){
        std::string a = a11.n;
        std::string b = this -> n;
        bign c114;
        std::string & c = c114.n;
        int j = 0;
        for(int i = 0;i < (a.size() > b.size() ? a.size() : b.size());i++){
            int c1;
            if(i < a.size() && i < b.size())
                c1 = (int)((int)a[a.size() - 1 - i] - '0') + (int)((int)b[b.size() - 1 - i] - '0') + j; 
            else if(i >= a.size())
                c1 = (int)((int)b[b.size() - 1 - i] - '0') + j; 
            else
                c1 = (int)((int)a[a.size() - 1 - i] - '0') + j; 
            j = 0;
            while(c1 >= 10){
                c1 -= 10;
                j++;
            }
            c = (char)(c1 + '0') + c;
        }
        if(j > 0){
            c = (char)(j + '0') + c;
        }
        return c114;
    }
    bign operator *(bign a1){
        std::string a = a1.n;
        std::string b = this->n;
        if(a == "0" || b == "0"){
            bign c;
            c.n = "0";
            return c;
        }
        std::string  thes = a,theb = b;
        if(a.size() != b.size()){
            thes = (a.size() < b.size() ? a : b);
            theb = (a.size() > b.size() ? a : b);
        }
        int jing = 0;
        bign realans;
        for(int i = thes.size() - 1;i >= 0;i--){
            std::string ansnow = "";
            for(int j = theb.size() - 1;j >= 0;j--){
                int ans = (int)(thes[i] - '0') * (int)(theb[j] - '0') + jing;
                jing = 0;
                while(ans >= 10){
                    ans -= 10;
                    jing++;
                }
                ansnow = (char)(ans + '0') + ansnow;
            }
            if(jing){
                ansnow = (char)(jing + '0') + ansnow;
                jing = 0;
            }
            for(int k = 0;k < thes.size() - 1 - i;k++){
                ansnow = ansnow + '0';
            }
            bign now;
            now.n = ansnow;
            realans = realans + now;
        }
        return realans;
    }
};
int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int a;
    std::cin >> a;
    bign ans;
    for(int i = 1;i <=a ;i++){
        bign ansnow;
        ansnow.n = "1";
        for(int j = 1;j <= i;j++){
            bign now;
            int j1 = j;
            while(j1){
                now.n = (char)((j1 % 10) + '0') + now.n;
                j1 /= 10;
            }
            ansnow = ansnow * now;
        }
        
        ans = ans + ansnow;
    }
    //std::cout << ansnow.n;
    std::cout << ans.n;
    /*
   bign a,b;
   std::cin >> a.n >> b.n;
   std::cout << (a*b).n;
   */
}