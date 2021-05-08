// File name: pp9_6.c
// Author: Lee Junhee
// Chapter : 9
// Problem : 6

#include <stdio.h>

double f(double);

int main(void)
{
    double x;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("f(%lg) = %lg\n", x, f(x));

    return 0;
}

double f(double x)
{
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}