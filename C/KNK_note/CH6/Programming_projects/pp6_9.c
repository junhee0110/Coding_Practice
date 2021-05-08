// File name: pp6_9.c
// Author: Lee Junhee
// Chapter: 6
// Problem number: 9

#include <stdio.h>

int main(void)
{
    float amount, interest, payment;
    int number;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter the number of payments: ");
    scanf("%d", &number);
    printf("\n");

    //convert the interest rate to a percentage and divide it by 12
    interest = 1.0f + ((interest / 100.0f) / 12.0f);

    for (int x = 0; x < number; x++)
    {
        amount *= interest;
        amount -= payment;
        printf("Balance remaining after payment %d: $%.2f\n", x+1, amount);
    }
    
    return 0;
}