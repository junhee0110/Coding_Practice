#include <stdio.h>

int sum_array(const int *, int);

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    putchar('\n');

    printf("Sum: %d\n", sum_array(arr, 5));

    return 0;
}

int sum_array(const int *a, int n)
{
    int sum = 0;
    for (int *p = a; p < a + 5; p++)
        sum += *p;

    return sum;
}