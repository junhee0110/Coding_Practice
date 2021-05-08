// File name: ex9_10.c
// Author: Lee Junhee
// Chapter: 9
// Problem: 10

#include <stdio.h>
#define N 9

int largest_element(int [], int);
double average_of_all(int [], int);
int number_of_positive(int [], int);

int main(void)
{
    int a[N] = {-4, -3, -2, -1, 0, 1, 2, 3, 4};

    for (int x = 0; x < N; x++)
        printf("%d ", a[x]);

    printf("\n");

    printf("Largest element : %d\n", largest_element(a, N));
    printf("Average of all: %lg\n", average_of_all(a, N));
    printf("Number of positive: %d\n", number_of_positive(a, N));

    return 0;
}

int largest_element(int a[], int len)
{
    int max = a[0];
    
    for (int x = 1; x < len; x++)
        max = max < a[x] ? a[x] : max;

    return max;
}

double average_of_all(int a[], int len)
{
    int sum = 0;
    for (int x = 0; x < len; x++)
        sum += a[x];

    return (double) sum / len;
}

int number_of_positive(int a[], int len)
{
    int result = 0;

    for (int x = 0; x < len; x++)
        result += a[x] > 0 ? 1 : 0;

    return result;
}