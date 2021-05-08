// File name: pp6_11.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 11

#include <stdio.h>

int main(void)
{
    int n;
    float fac, e = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int x = 1; x <= n; x++)
    {
        fac = 1.0f;
        for (int y = 1; y <= x; y++)
            fac *= y;

        e += (1.0f / fac);
    }

    printf("e = %f\n", e);

    return 0;
}