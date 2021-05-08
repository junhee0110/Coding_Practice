// File name: pp4_1.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 1

#include <stdio.h>

int main(void)
{
    int ten, one, origin;

    printf("Enter a two-digit number: ");
    scanf("%d", &origin);

    ten = origin / 10;
    one = origin % 10;

    printf("The reversal is : %d\n", one * 10 + ten);

    return 0;
}