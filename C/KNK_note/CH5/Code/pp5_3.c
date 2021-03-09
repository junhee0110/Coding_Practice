// File name: pp5_3.c
// Author: Lee Junhee
// Chapter: 5
// Problem number: 3

#include <stdio.h>

int main(void)
{
    float commission, rival, price, value;
    int  shares;

    printf("Enter the number of shares : ");
    scanf("%d", &shares);
    printf("Enter the price per share : ");
    scanf("%f" &price);

    value = shares * price;

    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.006f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commision = 255.00f + 0.0009f * value;

    commission = commission < 39.00f ? 39.00f : commission;

    rival = shares < 2000 ? 33 + 0.03 * shares : 33 + 0.02 * shares;

    printf("Commission of origimal broker: $%.2f\n", commission);
    printf("Commission of rival broker: $%.2f\n", rival);

    return 0;
}