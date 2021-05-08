// File name: pp4_3.c
// Author: Lee Junhee
// Chapter: 4
// Problem number: 3

#include <stdio.h>

int main(void)
{
    int hundred, ten, one;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &hundred, &ten, &one);

    printf("The reversal is : %d\n", one * 100 + ten * 10 + hundred);

    return 0;
}