// File name: pp6_7.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 7

#include <stdio.h>

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a tavle of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (square = 1, odd = 3, i = 1; i <= n; ++i, square += odd, odd += 2)
        printf("%10d%10d\n", i, square);

    return 0;
}