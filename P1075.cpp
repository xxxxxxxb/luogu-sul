//
// Created by smy on 2022/12/9.
//
#include <iostream>
#include <cstdio>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("%d", (n / i) > i ? (n / i) : i);
        }
    }
    return 0;
}