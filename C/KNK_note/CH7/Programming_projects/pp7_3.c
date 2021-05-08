// File name: pp7_3.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 3

#include <stdio.h>

int main(void)
{
    double n, sum = 0.0;

    printf("This program sums a series of floating nummbers. \n");
    printf("Enter integers (0 to terminate): ");
    scanf("%lf", &n);
    while (n != 0.0)
    {
        sum += n;
        scanf("%lf",&n);
    }

    printf("The sum is: %lg\n", sum);

    return 0;
    
}