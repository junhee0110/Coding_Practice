// File name: pp11_3.c
// Author: Lee Junhee
// Chapter : 11
// Problem : 3

#include <stdio.h>

void reduce(int, int, int *, int *);

int main(void)
{
    int denominator, numerator, m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numerator, &denominator);

    reduce(numerator, denominator, &numerator, &denominator);

    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}

void reduce(int num, int denom, int *reduced_num, int *reduced_denom)
{
    int remainder, m = num, n = denom;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_num = num / m;
    *reduced_denom = denom / m;
}