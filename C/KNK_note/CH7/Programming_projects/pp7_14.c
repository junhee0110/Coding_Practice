// File name: pp7_14.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 14

#include <stdio.h>
#include <math.h>

int main(void)
{
    double num, y = 1.0, old_y = 1.0;

    printf("Enter a positive number: ");
    scanf("%lf", &num);

    do
    {
        old_y = y;
        y = (y + num / y) / 2;
    } while (fabs(y - old_y) > 0.00001);

    printf("Square root: %lg\n", y);

    return 0;
}