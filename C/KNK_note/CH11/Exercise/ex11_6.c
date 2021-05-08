// File name: ex11_6.c
// Author: Lee Junhee
// Chapter : 11
// Problem : 6

#include <stdio.h>

void find_two_largest(int [], int, int *, int *);

int main(void)
{
    int arr[] = {-2, -1, 0, 1, 2, 3}, large_1, large_2,
        len = (int) sizeof(arr)/ sizeof(arr[0]);

    find_two_largest(arr, len, &large_1, &large_2);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("largest: %d, second largest: %d\n", large_1, large_2);

    return 0;
}

void find_two_largest(int a[], int len, int *largest, int *second_largest)
{
    if (a[0] > a[1]) *largest = a[0], *second_largest = a[1];
    else *largest = a[1], *second_largest = a[0];

    for (int i = 0; i < len; i++)
    {
        if (a[i] > *largest)
            *second_largest = *largest, *largest = a[i];
        else if (a[i] > *second_largest)
            *second_largest = a[i];
    }
}