// File name: pp6_3.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 3

#include <stdio.h>

int main(void)
{
    int denominator, numerator, m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numerator, &denominator);

    m = numerator; 
    n = denominator;

    while(n!=0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);

    return 0;
}