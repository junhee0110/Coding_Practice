// File name: pp7_15.c
// Author: Lee Junhee
// Chapter: 7
// Problem number: 15

#include <stdio.h>

int main(void)
{
    int num;
    long double fac = 1.0f;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        fac *= i;

    printf("Factorial of %d: %Lg\n", num, fac);

    return 0;
}
// short int: largest n is 7
// int : largest n is 12
// long int : largest n is 20
// long long int : largest n is 20
// float : largest n is 34
// double : largest n is 170
// long double : largest n is 1754