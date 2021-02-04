// File name: pp2_8.c
// Author: Lee Junhee
// Chapter: 2
// Problem number: 8

#include <stdio.h>

int main(void)
{
    float amount, interest, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("\n");

    //convert the interest rate to a percentage and divide it by 12
    interest = 1.0f + ((interest / 100.0f) / 12.0f);

    amount *= interest;
    amount -= payment;
    printf("Balance remaining after first payment: $%.2f\n", amount);

    amount *= interest;
    amount -= payment;
    printf("Balance remaining after second payment: $%.2f\n", amount);

    amount *= interest;
    amount -= payment;
    printf("Balance remaining after third payment: $%.2f\n", amount);
    
    return 0;
}