// File name: pp7_1.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 1

#include <stdio.h>

int main(void)
{
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++)
        printf("%10ld%10ld\n", i, i * i);

    return 0;
}

// short int fails at 182, 2 bytes
// int fails at 46341, 4 bytes
// long int fails at 3037000500, 8 bytes