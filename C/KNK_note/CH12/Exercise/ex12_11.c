#include <stdio.h>

int find_largest(int *, int);

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    putchar('\n');

    printf("Largest element: %d\n", find_largest(arr, 5));

    return 0;
}

int find_largest(int *a, int n)
{
    int max = *a;
    for (int *p = a; p < a + n; p++)
        if (*p > max)
            max = *p;
    return max;
}