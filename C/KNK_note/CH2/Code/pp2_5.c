// File name: pp2_5.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 5

#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %f\n", 3*x*x*x*x*x + 2*x*x*x*x -5*x*x*x - x*x + 7*x - 6);

    return 0;
}