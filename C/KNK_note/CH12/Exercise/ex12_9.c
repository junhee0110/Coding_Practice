#include <stdio.h>

double inner_product(const double *, const double *, int);

int main(void)
{
    double  a[5] = {1.0, 2.0, 3.0, 4.0, 5.0},
            b[5] = {2.0, 1.0, 5.0, 6.0, 4.0};

    for (int i = 0; i < 5; i++)
        printf("%lg ", a[i]);
    putchar('\n');
    for (int i = 0; i < 5; i++)
        printf("%lg ", b[i]);
    putchar('\n');

    printf("inner product: %lg\n", inner_product(a, b, 5));

    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    double result = 0.0;

    for (double *p = a, *q = b; p < (a + n) && q < (b + n); p++, q++)
        result += (*p * *q);
    
    return result;
}