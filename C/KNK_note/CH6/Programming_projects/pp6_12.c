// File name: pp6_12.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 12

#include <stdio.h>

int main(void)
{
    float fac, e = 1, eps, term;

    printf("Enter a epsilon: ");
    scanf("%f", &eps);

    for (int x = 1; ; x++)
    {
        fac = 1.0f;
        for (int y = 1; y <= x; y++)
            fac *= y;

        term = (1.0f / fac);

        if (term < eps)
            break;

        e += term;
    }

    printf("e = %f\n", e);

    return 0;
}