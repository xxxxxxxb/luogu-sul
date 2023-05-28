#include <iostream>
#include <cmath>
#define pi 3.141593
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    switch (T)
    {
    case 1:
        puts("I love Luogu!");
        break;
    case 2:
        puts("6 4");
        break;
    case 3:
        puts("3\n12\n2");
        break;
    case 4:
        printf("%.6lf", 500.0 / 3.0);
        break;
    case 5:
        puts("15");
    case 6:
        cout << sqrt(117) << endl;
        break;
    case 7:
        puts("110\n90\n0");
    case 8:
        cout << (int)(pi * 10.0) << endl
             << (int)(pi * 25.0) << endl
             << (int)(4.0 / 3.0 * pi * 125.0) << endl;
        break;
    case 9:
        puts("22");
    case 10:

    }
    
    return 0;
}