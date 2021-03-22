// File name: pp4_6.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 6

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6;
    int first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &j1, &i2, &j2, &i3, &j3,
            &i4, &j4, &i5, &j5, &i6, &j6);

    first_sum = j1 + j2 + j3 + j4 + j5 + j6;
    second_sum = i1 + i2 + i3 + i4 + i5 + i6;

    total = 3 * first_sum + second_sum;
    
    printf("Check digit: %d\n", 9 - ((total-1) % 10));
}