#include <stdio.h>

void store_zeros(int *, int);

int main(void)
{
    int arr[5];

    store_zeros(arr, 5);
    
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    putchar('\n');

    return 0;
}

void store_zeros(int *a, int n)
{
    for (int *p; p < a + n; p++)
        *p = 0;
}

