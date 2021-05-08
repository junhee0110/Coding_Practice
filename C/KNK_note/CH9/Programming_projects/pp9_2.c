// File name: pp9_2.c
// Author: Lee Junhee
// Chapter : 9
// Problem : 2

#include <stdio.h>

double tax_due(double);

int main(void)
{
    double income;

    printf("Enter your income : ");
    scanf("%lf", &income);

    printf("Tax is $%lg\n", tax_due(income));

    return 0;
}

double tax_due(double income)
{
    if (income < 750.0)
        return income * 0.01;
    else if (income <= 2250.0)
        return income * 0.02 + 7.50;
    else if (income <= 3750.0)
        return income * 0.03 + 37.50;
    else if (income <= 5250.0)
        return income * 0.04 + 82.50;
    else if (income <= 7000.0)
        return income * 0.05 + 142.50;
    else
        return income * 0.06 + 230.00;
}