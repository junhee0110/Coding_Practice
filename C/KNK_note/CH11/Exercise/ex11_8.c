// File name: ex11_8.c
// Author: Lee Junhee
// Chapter : 11
// Problem : 8

#include <stdio.h>

int *find_largest(int [], int);

int main(void)
{
    int *p, arr[] = {1, 2, 3, 1654, 5, 6}, len = sizeof(arr) / sizeof(arr[0]);

    p = find_largest(arr, len);

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    putchar('\n');

    printf("Largest: %d\n", *p);

    return 0;
}

int *find_largest(int a[], int len)
{
    int max = a[0], index = 0;

    for (int i = 1; i < len; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }

    return &a[index];
}