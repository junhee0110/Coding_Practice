// File name: pp2_6.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 6

#include <stdio.h>

int main(void)
{
    float x;

    printf("Enter x: ");
    scanf("%f", &x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %f\n", (((((3*x+2)*x-5)*x)-1)*x+7)*x-6);
    //It is Horner's rule

    return 0;
}