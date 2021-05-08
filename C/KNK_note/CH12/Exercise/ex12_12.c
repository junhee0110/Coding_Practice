#include <stdio.h>

void find_two_largest(const int *, int, int *, int *);

int main(void)
{
    int max1, max2;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    putchar('\n');

    find_two_largest(arr, 5, &max1, &max2);

    printf("Largest element: %d\nSecond Largest element: %d\n", max1, max2);

    return 0;
}

void find_two_largest(const int *a, int n, int *max1, int *max2)
{
    if (*a > *(a + 1)){*max1 = *a; *max2 = *(a + 1);}
    else {*max1 = *(a + 1); *max2 = *a;}

    for (int *p = a; p < a + n; p++)
    {
        if (*p > *max1)
        {
            *max2 = *max1;
            *max1 = *p;
        }
        else if (*p > *max2)
            *max2 = *p;
    }
}