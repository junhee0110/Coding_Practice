#include <stdio.h>

int *find_middle(int *, int);

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    putchar('\n');

    printf("miidle element is %d\n", *find_middle(arr, 5));

    return 0;
}

int *find_middle(int *a, int n)
{
    return a + n / 2;
}