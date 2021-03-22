// File name: pp2_4.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 4

#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", amount * 1.05f);

    return 0;
}