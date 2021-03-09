// File name: pp4_2.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 2

#include <stdio.h>

int main(void)
{
    int hundred, ten, one, origin;

    printf("Enter a three-digit number: ");
    scanf("%d", &origin);

    hundred = origin / 100;
    ten = origin % 100 / 10;
    one = origin % 100 % 10;

    printf("The reversal is : %d\n", one * 100 + ten * 10 + hundred);

    return 0;
}