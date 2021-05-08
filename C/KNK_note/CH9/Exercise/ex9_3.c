// File name: ex9_3.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 3

#include <stdio.h>

int gcd(int, int);

int main(void)
{
    printf("%d, %d => %d\n", 10, 25, gcd(10, 25));

    return 0;
}

int gcd(int m, int n)
{
    int remainder;

    while(n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}