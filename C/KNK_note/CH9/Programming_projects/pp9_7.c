// File name: pp9_7.c
// Author: Lee Junhee
// Chapter : 9
// Problem : 7

#include <stdio.h>

int power(int, int);

int main(void)
{
    int x, n;
    printf("Enter expression (x^n): ");
    scanf("%d^%d", &x, &n);
    
    printf("%d^%d = %d\n", x, n, power(x, n));

    return 0;
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else
        return power(x, n - 1) * x;
}