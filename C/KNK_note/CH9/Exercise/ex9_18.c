// File name: ex9_18.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 18

#include <stdio.h>

int gcd(int, int);

int main(void)
{
    printf("%d, %d => %d\n", 10, 25, gcd(10, 25));
    printf("%d, %d => %d\n", 3, 27, gcd(3, 27));
    printf("%d, %d => %d\n", 18, 54, gcd(18, 54));

    return 0;
}

int gcd(int m, int n)
{
    return n != 0 ? gcd(n, m % n): m;
}