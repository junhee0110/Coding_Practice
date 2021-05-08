// File name: pp6_5.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 5

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The reversal is: ");
    do
    {
        printf("%d", num % 10);
        num /= 10;
    } while (num);

    printf("\n");

    return 0;
}