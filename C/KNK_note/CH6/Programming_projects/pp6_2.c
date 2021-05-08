// File name: pp6_2.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 2

#include <stdio.h>

int main(void)
{
    int m, n, remainder, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while(n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor : %d\n", m);

    return 0;
}