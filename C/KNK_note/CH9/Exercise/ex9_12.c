// File name: ex9_12.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 12

#include <stdio.h>
#define N 2

double inner_product(double [], double [],  int);

int main(void)
{
    double a[N] = {1.0, 2.0};
    double b[N] = {-2.0, 5.0};

    for (int i = 0; i < N; i++)
        printf("%lg ", a[i]);
    putchar('\n');

    for (int i = 0; i < N; i++)
        printf("%lg ", b[i]);
    putchar('\n');

    printf("inner product: %lg\n", inner_product(a, b, N));

    return 0;
}

double inner_product(double a[], double b[], int len)
{
    double result = 0.0;

    for (int i = 0; i < len; i++)
        result += (a[i] * b[i]);

    return result;
}