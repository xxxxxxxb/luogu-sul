#include <cstdio>
#include <cmath>

bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else if (n % 2 == 0 && n != 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n;i++)
    {
        int a;
        scanf("%d" , &a);
        if (isprime(a))
        {
            printf("%d ", a);
        }
    }
    return 0;
}