// File name: pp2_7.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 7

#include <stdio.h>

int main(void)
{
    int amount, bill_20 = 0, bill_10 = 0, bill_5 = 0, bill_1 = 0;

    printf("Enter a dollar amout: ");
    scanf("%d", &amount);

    bill_20 = amount / 20;
    amount %= 20;
    bill_10 = amount / 10;
    amount %= 10;
    bill_5 = amount / 5;
    bill_1 = amount % 5;

    printf("\n$20 bills: %d\n", bill_20);
    printf("$10 bills: %d\n", bill_10);
    printf("$5 bills: %d\n", bill_5);
    printf("$1 bills: %d\n", bill_1);

    return 0;
}